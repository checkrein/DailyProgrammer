#include <stdio.h>

int max(int x, int y)
{
    //which is larger
    
    if ( x > y ){
        return x;
    }
    else{
        return y;
    }
}



int largestchar(char* num)
{
    //find largestchar

    int maximum;
    int i;

    maximum = 0;
    for (i=0;i<4;i++){
        maximum = max(maximum, num[i]);
    }
    return maximum;
}


int main()
{
    //Main code
    char num[4];
    printf("Enter a 4-digit number: ");
    scanf("%s", num);
    printf("%c\n", largestchar(num));
}
