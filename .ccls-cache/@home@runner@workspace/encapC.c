// #include "stdio.h"
// // encapuslation ;binding functions and data together
// //a function can return a structure if multiple values are of different types(wrapper function)
// //function pointer used commonly in callback functions
// //a functions as an argument is another function is possible by function pointer
// typedef struct {

//   int x;
//   int y;
// } point;
// void initPoint(point *, int, int);
// void movePoint(point *, int, int);
// void printPoint(point );
// int main(void) {

//   point p;
//   initPoint(&p, 10, 0);
//   printPoint(p);
//   movePoint(&p, -70, -10);
//   printPoint(p);
//   //printf("Hello World\n");
//   return 0;
// }
// // function to initialize the point
// void initPoint(point *p, int x, int y) {
//   p->x = x;
//   p->y = y;
// }
// /// function to move the point
// void movePoint(point *p, int dx, int dy) {
//   p->x = p->x + dx;
//   p->y = p->y + dy;
// }
// // function to print the point
// void printPoint(point p) { printf("point is at %d %d\n", p.x, p.y); }