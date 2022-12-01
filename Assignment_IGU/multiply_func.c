// Name: NAYON MAZUMDER
//  REG : 210011015059".
//  Dept. Of CSE, IGU, INDIA

#include<stdio.h>
int multi(int a,int b, int c){
    return a*b*c;
}
int main(){
    int a,b,c,result;
    printf("Please Enter the value of A,B,c : ");
    scanf("%d%d%d",&a,&b,&c);
    result = multi(a,b,c);
    printf("The Multiple of A,B,C is :%d",result);
    return 0;
}