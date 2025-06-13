#include <math.h>
#include <stdio.h>
// // base class : shape
// typedef struct Shape {
//   void (*draw)(struct Shape *);   // function pointer for draw
//   double (*area)(struct Shape *); // function pointer for area

// } Shape;
// // derived class : circle
// typedef struct {
//   Shape base;
//   double radius;
// } Circle;
// // derived class : rectangle
// typedef struct {
//   Shape base;
//   double width;
//   double height;
// } Rectangle;
// // function to draw a circle
// void drawCircle(Shape *s) {
//   Circle *c = (Circle *)s;
//   printf("Drawing a circle with radius %f\n", c->radius);
// } // structure are public by default
// double areaCircle(Shape *s) {
//   Circle *c = (Circle *)s;
//   return M_PI * c->radius * c->radius;
// }
// void drawRectangle(Shape *s) {
//   Rectangle *r = (Rectangle *)s;
//   printf("Drawing a rectangle with width %f and height %f\n", r->width,
//          r->height);
// }
// double areaRectangle(Shape *s) {
//   Rectangle *r = (Rectangle *)s;
//   return r->width * r->height;
//   // return 0;
// }
// int main(void) {
//   // printf("Hello World\n");
//   // create a circle type object
//   Circle circle = {{drawCircle, areaCircle}, 5.7};
//   // create a rectangle type object
//   Rectangle rectangle = {{drawRectangle, areaRectangle}, 30.0, 4.0};
//   //polymorphic array of pointers to shape
//   Shape *sh[2];
//   sh[0] = (Shape *)&circle;//here we are typecasting the circle to shape
//   sh[1] = (Shape *)&rectangle;//here we are typecasting the rectangle to shape

//   //Iterate through the array and call the draw and area functions
//   for (int i = 0; i < 2; i++)
//     {
//       double a;
//       sh[i]->draw(sh[i]);  // call draw function
//       a= sh[i]->area(sh[i]); // call area function
//       printf("Area: %f\n",a);
//     }
//   return 0;
//   //how diff pointer variable can be connected?
//   //create a array of pointer 
//   // if unreleated types are connected then we use  pointer array of pointers to connect them 
//   // Shape *sh[2];
//   // sh[0] = (Shape *)&circle;//here we are typecasting the circle to shape
//   // sh[1] = (Shape *)&rectangle;//here we are typecasting the rectangle to shape
// }
//typecast:
// int main()
// {

//   int a=10;
//   float b=(float)a;
//   printf("b = %f\n",b);
//   printf("a = %d\n",a);
//   return 0;
  
// }