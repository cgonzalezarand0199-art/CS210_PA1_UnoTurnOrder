1. Why does concat only need to work between two lists of the same representation? What would
   you have to do differently, or what would go wrong, if you tried to make it work between a
   LinkedList and an ArrayList?
- I would say it's because in doing so both list sharing they are able to access each other's privates directly. If I tried to make it work between ArrayList and LinkedList I will need to make the private function public.

2. Walk through reverse() on your linked list: name the three pointers you need alive at once,
   and explain why losing track of any one of them mid-loop corrupts the list.
- previous, current, nextNode were my three pointers. Losing track any of them especially nextNode before shifting current -> next_ you might lose track of the reference to the list. And if you lost track of previous you lose the references to the node that current will need to point backwards. As for current I believe it will lose positions so make it harder  for the nodes to advance forwards

3. addAnywhere and deleteAnywhere both need a bounds check. What’s the valid range for
   position in each, and what does your implementation do if a caller passes a position outside
   it?
- addAnywhere valid range are "0 <= position <= size_" and deleteAnywhere "0 <= position < size_".  If they pass a position outside my code prints a message telling them that they are out of bounds/ rage depending if they are used array or linked  and exits because of return.

4. In LinkedList::concat, why did you need to walk to the end of the list first, when addFront
   and deleteFront never needed to? What would change about concat’s performance if
   LinkedList still tracked a tail pointer, and what would you have to keep updated elsewhere
   if you added one back?
- Because in my LinkList the frist node is the only thing that's keep track of in which I believe addFront and deleteFront which works with the first node. If LinkedList was tracked by a tail pointer concat could still run but in doing so you'll need to update tail every time you add,delete, reverse and when it becomes empty.

5. Pick either addAnywhere or deleteAnywhere in ArrayList and explain, in your own words, what
   has to shift and in which direction, and why shifting in the wrong direction would overwrite
   data you still need.
-In addAnyWhere all items must shift right by one because if we went and shifted in the wrong direction data would be overwritten before it was saved. 

6. Point to the exact line in your main.cpp where a Reverse card actually changes the direction of
   play, and explain what would visibly break in the game if that call were missing.
-It my code it was line 42, because just by removing it the table list would never change if the Player played the reverse card. Which would make the game continue as if nothing changed in the same direction
