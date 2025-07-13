#include <stdio.h>
int main(){
    
    int p;
    int d;
    int b;
    int t;
    scanf("%d", &p);
    scanf("%d", &d);
    scanf("%d", &b);
    t = (1*p)+(2*d)+(3*b);
    if (t >= 150){
        printf("B");
    }
    else if (t<150 && t>=120){
        printf("D");
    }
    else if (t<120 && t>=100){
        printf("P");
    }
    if (t<100){
        printf("N");
    }
    return 0;



}