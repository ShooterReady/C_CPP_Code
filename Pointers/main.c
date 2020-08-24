#include <stdio.h>
#include <stdlib.h>
// This functions takes in a pointer as an argument
int pointer_function(const int *ptr_arg)
{
    /* This functions that a pointer as an argument
     We use the const argument to show that this function
     doesn't change the value of the pointer that's being
     passed in.
     */
    printf("The address of ptr_arg is: %d\n", ptr_arg);
    printf("The value of ptr_arg is: %d\n" , *ptr_arg );
}
/*
 * A basic functions that return a pointer
 * The * in front of *max_val tells us that the function
 * returns a pointer
 * */
int *max_val(int *num_1 ,int *num_2)
{
    if (*num_1 > *num_2)
    {
        printf("The address of the first arguement is: %d\n",num_1);
        return num_1; // num_1 is a pointer
    } else{
        printf("The address of the second arguement is: %d\n",num_2);
        return num_2;// num_2 is a pointer
    }
}


int main()
{
  // initialize some basic variables and set some pointers
  // variables init
  int x, y, z, *p, *q, *r, *s; // we assigned p as a pointer
  x = 5; // set x = 5
  y = 55;
  z = 217;
  p = &x; // assign the address of x into the pointer p
  printf("The size of x is %d\n", sizeof(x));
  printf("The address of x is: %d\n" , p); // print the address of p
  printf("The value of p is: %d\n" , *p); // indirection operator * and get the actual value in that address where we stored x
  // copy the value that p points to into q
  q = p;
  printf("q points to address %d\n", q); // We can see that p and q are referencing the same address
  printf("The value in the point q is %d\n", *q);
  // Store the address of z into r
  r = &z;
  printf("The size of r is: %d bytes\n", sizeof(r));
  printf("The address of r is %d\n" , r);
  printf("The value of r is %d\n", *r);
  // store the address of y into s
  s = &y;
  printf("The address of y is %d\n" , s);
  printf("The value inside the address of s is %d\n\n", *s);
  // Pointers as Arguments
  int x1 = 5;
  int *x1_ptr = &x1; // store the address of x1 into x1_ptr
  pointer_function(x1_ptr); // pass the address of x1 into pointer_function()
  // Pointers are return values
  int *ptr_rtn,*val1_ptr,*val2_ptr , val1,val2;
  val1 = 20;
  val2 = 10;
  val1_ptr = &val1;
  val2_ptr = &val2;
  // Since max_val returns a pointer we set ptr_rtn to a pointer
  ptr_rtn = max_val(val1_ptr , val2_ptr);
  printf("The larger value is: %d\n", *ptr_rtn); // indirection operator get the value stored in the address ]
  //
  int my_array [10] = {10,20,30,40,50}; // array of 40 bytes
  printf("%d\n",my_array);
  /*
   * Since arrays are arrays and pointers we can access the the entries like the following
   */
  printf("The first entry int the array is: %d\n" , *(my_array + 0)); //Offset is zero gets 10
  printf("The second entry int the array is: %d\n" , *(my_array + 1)); //Offset is one gets 20
  printf("The third entry int the array is: %d\n" , *(my_array + 2)); //Offset is two gets 30
  printf("The third entry in the array when offset from the 5th byte is %d\n",*((my_array+4)-2));
  // Subtracting pointers gets the distance between the two address
  // The result is the distance measured in array element
  printf("The distance from address %d to %d is %d\n", (my_array),(my_array+1),(my_array+1)-(my_array));
  // Lets play with some char arrays
  char char_array [] = {"Hello World"};
  printf("Whats the size of my char array %d bytes and %d bits\n",sizeof(char_array),sizeof(char_array)*8);
  printf("The address of my char array is %d\n",char_array);
  printf("Whats in my char array?: %d\n", char_array[0]); // returns ascii 72 which is H
  printf("play around with some indexing in my char array: %d\n", *(char_array+1)); // returns ascii 101
  printf("The length of the string in char array is %d bytes\n\n",sizeof(char_array)/sizeof(char_array[0])); // 12 bytes(11 plus a null zero)
  // Advanced use of pointers
  /*
   * C supports dynamic storage allocation
   * This gives us the ability to allocate storage during program execution
   * To allocate storage we need to call one of three allocation functions in stdlib.h
   */





  return 0;

}
