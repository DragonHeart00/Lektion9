#include <stdio.h>


//swap using pointer
void NewSwap(int *firstVal, int *secondVal)
{
    int tmp;
    tmp = *firstVal;
    *firstVal= *secondVal;
    *secondVal = tmp;
}


// divide using pointer
int IntDivide(int x, int y, *quoPtr, int *remPtr)
{
    if(y !=0){
        *quoPtr = x / y;
        *remPtr = x % y;
        return 0;
    }else
    {
        return -1;
    }
}


int main() {

    /*
     * offset of object = 0
     * offset of ptr = -1
     */
    int object;
    int *ptr;

    /*
     * AND R0, R0 #0
     * AND R0, RO #4
     * STR R0, R5, #0  ;object = 4   a local variable => we use R5
     */
    object = 4;


    /*
     * AND R0, R5, #0  ; Address of object
     * STR R0, R5, #-1 ;  ptr = &object;
     */
    ptr = &object;

    //using pointer to swapping
    int valueA =3;
    int valueB =4;
    NewSwap(&valueA,&valueB);

    printf("value of b after swapping: %i\n",valueB);
    printf("value of a after swapping: %i\n",valueA);





    int dividend=10, divisor=3;
    int quotient, remainder;
    int error;

    error = IntDivide(dividend,divisor, &quotient, &remainder);

    if(!error)
        printf("Quotient: %d\nRemainder: %d\nQuotient\nRemainder\n");
    else
        printf("IntDivide failed.\n");



    char word[] = "Hello World";
    char *cptr;
    cptr = word;
    printf("%s\n",cptr);




    //scanf use pointer
    /*
    int input;
    printf("enter the number\n");
    scanf("%d\n",input);
    */

    return 0;
}
