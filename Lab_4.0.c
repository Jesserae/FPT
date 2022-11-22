#include <stdio.h>

int main()
{
    1.Declare a pointer to a short int and a pointer to a float.
    
    short int *a;
    float *b;
    
    2.Of what use is the sizeof() operator?
    
    This operature returns the size in bytes of its argument. 
    It can be used to find the size of pointers or aggregate data such as structures.
    
    3.In a given operating system, a pointer to a short int is 32 bit wide. How wode is a pointer to a long int in this same system?
    
    All pointers in the system are the same size of 32 bit.
    
    4.Assume p is a pointer to a float. Further, assume, the value of p is 1000(i.e, the address of the float it points to 
    is 1000). The value of the float is 17.6. What is p++? Define in words what *p and &p mean. Is there a way
    to determine the values of *p and &p given the info above?
    
    p++ will be 1004 because floats are 4 bytes in size.
    *p means that this points to the location to the value of p or the value of that location which is 1000.
    &p is the address of the pointer itself.
    
    5.Given the initializations and memory map at the top, fill out the memory map on the bottom after
    the code has executed. Assume pointers are 32 bit wide.
    
    top ----------------        code
        |              |
        |              |        y = &x;
        |              |        z = &y;
        |              |        x++;
        |              |        
        |              |        *y = *y++;
        ----------------        *z = *z++;
    8000|   101        | x       z++;
        ----------------
        |              |
        ----------------
    5000|   8000       |y 
        ----------------
        |              |
        ----------------
    2000|   5000       |z  
        ----------------
        |              |
        ----------------
        
            map after all codes executes
    top ----------------        
        |              |
        |              |        
        |              |        
        |              |        
        |              |        
        |              |
        ----------------
    8000|   101        | x
        ----------------
        |              |
        ----------------
    5000|   8004       | y 
        ----------------
        |              |
        ----------------
    2000|   5008       | z  
        ----------------
        |              |
        ----------------
}
