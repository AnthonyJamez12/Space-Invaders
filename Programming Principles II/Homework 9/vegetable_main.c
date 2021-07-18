#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "vegetable.h"

int main (void) {
  /* One Vegetable */
  vegetable_t v;
  int res;
  printf("Enter the vegetable name you are buying and price per pound: ");
  res = scan_vegetable(&v);
  if (res == 2) {
    print_vegetable(v);
  }

  /* Vegetable Array */
  printf("\nEnter 3 vegetables one at a time\n");
  vegetable_t veg[3];
  int i;
  for (i = 0; i < 3; i++) {
    printf("Enter vegetable %d name and price per pound: ",i);
    scan_vegetable(&veg[i]);
  }
  printf("\nThe 3 vegetables entered are:\n");
  for (i = 0; i < 3; i++)
    print_vegetable(veg[i]);

  /* Build Vegetable Chain Alphabetically by Name */
  printf ("\ncreate a vegetable chain\n");
  int head;
  build_vegetable_chain (&head, veg, 3);
  printf ("\nThe vegetable chain:\n");
  print_vegetable_chain (head,veg);
 
}






 /* print a vegetable */
 void print_vegetable (vegetable_t vg)
 {
     printf("Vegetable Name: %s, %.2f per pound\n",vg.name,vg.price);
 }

/* input a vegetable and return the number of inputs by scanf */
 int scan_vegetable (vegetable_t *vg)
 {
     int result;
     result = scanf ("%s %f",vg->name,&vg->price);
     return (result);
 }

 void build_vegetable_chain (int *head, vegetable_t veg[], int size)
 {
    int i,j,prev;
    *head = -1;               /* initialize the chain to an empty chain */
    printf("\nBuild - The raw vegetable data before building, head = %d:\n",*head);
    for (j = 0; j < size; j++)
      printf("j = %2d name = %10s price = %4.2f next = %2d\n",j,veg[j].name,veg[j].price,veg[j].next);
    for (i = 0; i < size; i++)    /* put the vegetables one at a time into the chain */
    {
      printf("\nInserting vegetable %d: %s\n",i,veg[i].name);
      /* Find where to insert the vegetable by traversing the current
         chain.  prev will be set to point to the vegetable that will
		 come before the vegetable being inserted (-1 if at the
         beginning of the chain). */
      for (prev=-1,j=*head; j != -1 && strcmp(veg[j].name,veg[i].name) < 0; prev = j, j = veg[j].next);
      /* insert the vegetable name into the chain */
      printf ("After searching prev is set to %d, head is %d\n",prev,*head);
      if (prev == -1) {   /* insert at the beginning */
        veg[i].next = *head;
        *head = i;
      }
      else {              /* insert within or at the end of the list */
        veg[i].next = veg[prev].next;
        veg[prev].next = i;
      }
      printf("\nThe raw vegetable data after inserting %s, head = %d:\n",veg[i].name,*head);
      for (j = 0; j < size; j++)
        printf("j = %2d name = %10s price = %4.2f next = %2d\n",j,veg[j].name,veg[j].price,veg[j].next);
    }
 }

/* Traverse the vegetable chain to print the vegetables in
   alphabetical order.  Start with head and then traverse
   the chain using the vegetable_t next variable. */
 void print_vegetable_chain (int head,vegetable_t veg[])
 {
   int i;
   if (head == -1)               /* check for an empty chain */
     printf ("Empty Chain\n");
   else                          /* print the chain by traversing the next fields */
   {
     for (i = head; i != -1; i = veg[i].next)
       print_vegetable(veg[i]);
   }
 }
