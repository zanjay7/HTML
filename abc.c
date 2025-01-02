
#include <stdio.h>

int main()
{
    int Num;
    int count=0,digits,sum=0;
    printf("Enter the number: ");
    scanf("%d",&Num);
    int temp;
    while (temp != 0) {
        count++;
        temp /= 10;
    }
    temp=Num;
    int tempnum;
    for(tempnum=temp;tempnum!=0;tempnum /=10){
        int digits = tempNum % 10;
    }
     
    

    return 0;
    
}