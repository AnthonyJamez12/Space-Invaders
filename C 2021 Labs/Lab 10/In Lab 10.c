// Acknowledge your collaborators or source of solutions, if any. Submission by the end of the LAB is
// required. Please type your answers, handwritten submission will not be accepted. Do all of the
// following.


// 1. If X, Y, and Z are inserted into a stack and a queue, what will be the order of removal for
//	the stack? For the queue?

///////  For a stack the order of removal will be x first, y second, and then z last. While if the stack is using the pop method the order will be opposite. While for a queue the order of being inserted it will be 
///////  x first, y second, and then z last. While if the queue is removing the elements then the order will be x first, y second, and then z last.





// 2. Name the functions according to their descriptions.
//	Function Description


//	A function that allocates storage space for a single data object that is
//	referenced through a pointer.

/////// Malloc




//	A function that allocates storage space for an array of objects.

/////// Calloc





//	A function that returns the storage space of the heap.

/////// Free







//3. Assume the following data type definition and declaration:

//	typedef struct node_s {
//	int num;
//	struct node_s *restp;
//	} node_t;
//  . . .
//  node_t *headp, *cur_nodep;


//Write a for loop header that causes cur_nodep to point in succession to each node of the linked
//list whose initial pointer is stored in headp. The loop should exit when cur_nodep reaches the
//end of the list.

cur_nodep =  headp;

for(;cur_nodep != NULL; cur_nodep -> restp){

}
