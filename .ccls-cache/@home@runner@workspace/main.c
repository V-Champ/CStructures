#include <stdio.h>
#include <stdlib.h>
/*how to add function as part of structures*/
struct LED1
{

};
struct LED
{
 int dia;
 int length;
 float radius;
 int *ptr;
char a;
int* fptr;
};
void display(struct LED);
void pdisplay(struct LED *);
int main(void) {
  printf("size of structure =%ld",sizeof(struct LED));
  printf("\nsize of structure LED1 =%ld",sizeof(struct LED1));
  struct LED led1;/*classes have member functions and scope:*/
  struct LED led2;
  led1.dia =10;/*struct have public, no abstraction*/
  led1.length =67;  
  //led1.ptr = &led1.dia;
  led1.ptr = (int *)malloc(10);
  if(led1.ptr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }
  *led1.ptr=56;
  
  led2.dia =100;
  led2.length =670;
  //led2.ptr = &led2.dia;
  led2.ptr = (int *)malloc(4);
  if(led2.ptr == NULL) {
    printf("Memory allocation failed!\n");
    free(led1.ptr);
    return 1;
  }
  *led2.ptr=66;
  struct LED *pled3=&led2;
  display(led1);
  display(led2);
  pdisplay(pled3);
  
  // Uncomment the lines below to see segmentation errors:
  // int *bad_ptr = NULL;
  // printf("This will cause segfault: %d\n", *bad_ptr);
  
  // Free the allocated memory to prevent memory leaks
  free(led1.ptr);
  free(led2.ptr);
  
  return 0;
}
void display(struct LED l){
  printf("\nled.dia =%d\n",l.dia);
  printf("\nled.length =%d\n",l.length);
  printf("ptr =%d\n",*(l.ptr));
}
void pdisplay(struct LED *l){
  printf("--------\nled.dia =%d",l->dia);
  printf("\nled.length =%d\n",l->length);
  printf("ptr =%d\n",*(l->ptr));
}