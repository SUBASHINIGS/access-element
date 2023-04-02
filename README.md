# access-element
C programming code for accessing elements in an array through pointer.

#Pointers in C:
In the C programming language, pointers are used to refer to the memory locations in which variables are stored. 
In essence, a pointer is a "data type" that is used to hold addresses. A pointer is just a technique of notifying the compiler that this variable will contain an address, similar to how int is used to store integer values.

int A = 10;
int* Aptr = &A;

printf("The value of var A is %d and the address it is in %p\n", A, Aptr);

A key character that signals to the compiler that it is a pointer is the star(). The compiler is informed that we want the address of the next variable by the ampersand (&). Here, it's important to keep in mind that not all points are created equal.

#Array variables are similar to pointers:
Array variables store the memory location of the first element in the array; array variables can be dereferenced, and the value given will be the first element in the array. Integers can be added to array variables, and dereferencing those expressions will give successive elements in the array
