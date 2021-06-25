#include<stdio.h>
int main()
{    int i,j;
    int marks[2] [4] ={{23,35,45,67},{45,67,98,90}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
    
    
        printf("the value of %d,%d you entered is %d\n",i,j,marks[i][j]);
    }
}