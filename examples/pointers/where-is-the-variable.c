int vg[5]; // array of 5 ints, in static memory occupying 4*5 bytes (20)
int main() // 
{
 // code here!
}

int f (int * p, int vp []) { // BOTH are pointers. 
                             //occupying 4 bytes and existing in the heap, 
                             //this is because both are references
    int vl[5]; 

    int *q = (int *) calloc(5, sizeof (int)); //q is a local variable in stack, 
                                              //that's 4 bytes (from the pointer)
                                              //but it is pointing to a heap-memory direction 
                                              //that is 20 bytes long 
    //...
}