#include <stdio.h>

int main()
{
    double a[100]={0};

    int x;  //target value

    printf("Input value x for x!\n");
    scanf("%d", &x);  //for input target value

    //put numbers from 1 to target value into array
    for(int i = 0 ; i<x ; i++){
        a[i] = i+1;
    }

    //make the later one times the former one and set the later one as j+1! 'til reaching target value
    for(int j = 1 ; j<x ; j++){
        a[j] = (a[j])*(a[j-1]);
    }
    printf("%d! = %.0f\n", x, a[x-1]);

    return 0;
}
