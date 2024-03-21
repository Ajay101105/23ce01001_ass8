#include<stdio.h>
#include<string.h>
void circular(int *a,int *b,int *c){
    int temp;
    temp=*a;
    *a=(*c);
    *c=(*b);
    *b=temp;
    return;
}

int main(){
    int x,y,z;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter value of y: ");
    scanf("%d",&y);
    printf("Enter value of z: ");
    scanf("%d",&z);
    circular(&x,&y,&z);
    printf("After circular shift value of x: %d\n",x);    
    printf("After circular shift value of y: %d\n",y);
    printf("After circular shift value of z: %d\n",z);
    return 0;
}

