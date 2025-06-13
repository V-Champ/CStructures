
// #include <stdio.h>

// void swap(int* a, int* b) {
// int temp = *a; *a = *b; *b = temp;
// }

// int partition(int arr[], int low, int high, void (*swp)(int*, int*)) {
// int pivot = arr[low], i = low, j = high;
// while (i < j) {
// while (arr[i] <= pivot && i <= high - 1) i++;
// while (arr[j] > pivot && j >= low + 1) j--;
// if (i < j) swp(&arr[i], &arr[j]);
// }
// swp(&arr[low], &arr[j]);
// return j;
// }

// void quickSort(int arr[], int low, int high, void (*swp)(int*, int*)) {
// if (low < high) {
// int pi = partition(arr, low, high, swp);
// quickSort(arr, low, pi - 1, swp);
// quickSort(arr, pi + 1, high, swp);
// }
// }

// int main() {
// int arr[] = {400, 002, -5, 3, 1,0,0,1}, n = sizeof(arr) / sizeof(arr[0]);
// quickSort(arr, 0, n - 1, swap);
// for (int i = 0; i < n; i++) printf("%d ", arr[i]);
// return 0;
// }












/*function pointer */
/*polymorphism in C using function pointers*/
// #include<stdio.h>
// int add(int a, int b) {
//   return a + b;
// }
// int multiply(int a, int b) {
//   return a * b;
// }
// int subtract(int a, int b)
// {
//   return a - b;
// }
// int divide(int a, int b)
// {
//   if(b==0)
//   {
//     printf("Divide by zero error\n");
//   }
//   else
//     return a / b;

// }
// int compute(int a, int b, int (*operation)(int, int)) {
//   return operation(a, b);
// }
// int main()
// {
//   int a=30, b=20;
//   int result = compute(a, b, add);
//   printf("Addition: %d\n", result);
//   result = compute(a, b, multiply);
//   printf("Multiplication: %d\n", result);
//   result = compute(a, b, subtract);
//   printf("Subtraction: %d\n", result);
//   result = compute(a, b, divide);
//   printf("Division: %d\n", result);
//   return 0;

  
// }