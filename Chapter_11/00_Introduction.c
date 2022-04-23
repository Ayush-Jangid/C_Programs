/*                                 DYNAMIC MEMORY ALLOCATION...

Dynamic Memory Allocation:
                            This is a way to allocate memory to a data structure during the runtime...
We can use DMA functions available in C to allocate and free memeory during runtime...


                        ...Functions For DMA in C...
1. malloc()
2. calloc()
3. free()
4. realloc()


malloc():- 
           malloc stands for memory allocation. It takes number of bytes to be allocated as an input 
           and returns a pointer of type void...

calloc():-
           calloc stands for continuous allocation...
           It intializes each memory block with a defaylt value of 0.

free():-
         We can use free() function to  de-allocate the memeory.
         The memeory allocated using calloc/malloc is not deallocated automatically...

realloc():-
           Sometimes the dynamic allocated memory is insufficient or more than required.

           realloc is used to allocate memory of new size using the previous pointer and size...
*/