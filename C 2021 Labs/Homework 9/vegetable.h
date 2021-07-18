/* vegetable.h
 * abstract data type - vegetable
 */

/* protect vegetable.h from being read more than once */
 #if !defined (VEGETABLE_H_INCL)
 #define VEGETABLE_H_INCL

/* size for a vegetable name */
#define VEGETABLE_STRSIZ 20

/* vegetable structure type */
typedef struct vegetable {
    char name[VEGETABLE_STRSIZ];    /* vegetable name */
    float price;                    /* vegetable price per pound */
    int next;                       /* integer index of the next vegetable in alphabetical order */
} vegetable_t;                      /* type of the vegetable object */

/*
  purpose:           print_vegetable prints a vegetable object neatly
  input parameter:   vegetable_t vg - vegetable object to print
  output parameter:  none
  precondition:      vg must contain name and price values
  postcondition:     vg name and price fields are printed
*/
extern void print_vegetable (vegetable_t vg);

/*
  purpose:           scan_vegetable inputs a vegetable object
  input parameter:   none
  output parameter:  vegetable_t *vg - vegetable object pointer to hold input
  precondition:      vg must contain the memory address of a vegetable object
  postcondition:     *vg's name and price fields are input
                     the number of inputs read by scanf is returned
*/
extern int scan_vegetable (vegetable_t *vg);

/*
  purpose:           build_vegetable_chain builds a chain of vegetable objects in an array
  input parameter:   int size          - number of vegetable objects in veg
  output parameter:  vegetable_t veg[] - array of vegetable objects
                     int *head         - pointer to integer index to hold the first vegetable object in the chain
  precondition:      veg must contain vegetable objects
                     size must contain the number of vegetable objects in veg
  postcondition:     *head contain the index of the first vegetable object in the chain
                     the next fields in veg contain the index of the next vegetable object in the chain
*/
extern void build_vegetable_chain (int *head, vegetable_t veg[], int size);

/*
  purpose:           print_vegetable_chain prints a chain of vegetable objects in an array
  input parameter:   int head          - index in veg of first vegetable object in the chain
                     vegetable_t veg[] - array of vegetable objects
  output parameter:  None
  precondition:      veg must contain a vegetable chain
                     head must contain -1 for an empty chain or the index of the first vegetable object in the chain
  postcondition:     "Empty Chain" is printed if head contains -1 and the vegetable chain otherwise
*/
extern void print_vegetable_chain (int head,vegetable_t veg[]);

#endif
