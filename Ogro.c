int main(){
    int e;
    int d;
    int n;
    scanf("%d", &e);
    scanf("%d", &d);
    if (e>d){
        n = (e+d);
        //return n;
        printf("%d", n);
    }else {

        n = 2 * (d-e);
        //return n;
        printf("%d", n);
    }
    return 0;



}