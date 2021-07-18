// 1. If a linked list contains three nodes with values "him”, "her”, and "its”, and
// hp is a pointer to the list head, what is the effect of the following statements?
//Assume the data component of node type pro_node_t is pronoun, the link
//component is nextp, and np and mp are pointer variables.

//np = hp->nextp;
//strcpy(np->pronoun, "she");

//The nextp adresse is copided to np, after that the value "she" is copied to the 2nd node.





// 2. When an element is deleted from a linked list, it is automatically returned to the heap. True or
//false? If false, please explain.

// False, beacuase the elements stay in the stack, where they were before.






//3. Often computers allow you to type characters ahead of the program’s use of them. Should a
//stack or a queue be used to store these characters?

// Most likey not, becuase it is not as efficient as an array.
