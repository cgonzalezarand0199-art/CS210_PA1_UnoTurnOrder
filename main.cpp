#include <iostream>
#include "List.h"
#include "Player.h"

int main() {
    // ---- Part 1: required test harness, do not modify ----
    std::cout << "== List<int>: addAnywhere / deleteAnywhere / reverse ==" << std::endl;
    std::unique_ptr<List<int>> nums = makeList<int>();
    nums->addFront(new int(10));
    nums->addFront(new int(20));
    nums->addFront(new int(30));
    nums->print();
    nums->addAnyWhere(1, new int(99));
    nums-> print();
    nums->deleteAnyWhere(2);
    nums->print();
    nums->reverse();
    nums->print();

    std::cout << std::endl << "== List<int>: concat ==" << std::endl;
    std::unique_ptr<List<int>> more = makeList<int>();
    more->addFront(new int(2));
    more->addFront(new int(1));
    more->print();
    nums->concat(more.get());
    nums->print();
    more->print();
    // ---- Part 2: your Uno scene goes below ----
    std::unique_ptr<List<Player>> Table1 = makeList<Player>();
    Table1->addFront(new Player(3,"Chris"));
    Table1->addFront(new Player(2,"Alexis"));
    Table1->addFront(new Player(1,"Cristian"));
    std::cout <<"Current Table: " << std::endl;
    Table1->print();

    std::cout <<"New player joins the Table" << std::endl;
    Table1->addAnyWhere(2,new Player(4,"Alex"));
    std::cout <<"Updated Table: " << std::endl;
    Table1->print();

    std::cout <<"Someone plays a reverse card: " << std::endl;
    Table1->reverse();
    Table1->print();

    std::cout <<"Someone runs out of cards: " << std::endl;
    Table1->deleteAnyWhere(1);
    Table1->print();
    std::cout <<"Second Table merges with table 1: " << std::endl;
    std::unique_ptr<List<Player>> Table2 = makeList<Player>();
    Table2->addFront(new Player(6,"Omar"));
    Table2->addFront(new Player(5,"Alexa"));

    std::cout <<"Before merge: " << std::endl;
    std::cout <<"Table 1: " << std::endl;
    Table1->print();
    std::cout <<"Table 2: " << std::endl;
    Table2->print();

    Table1->concat(Table2.get());
    std::cout <<"After merge: " << std::endl;
    Table1->print();
    Table2->print();

    return 0;
}