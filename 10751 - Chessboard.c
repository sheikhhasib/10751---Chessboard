#include<stdio.h>
#include<math.h>
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n>1){
            printf("%.3f\n",((4*n-4)+sqrt(2)*((n-2)*(n-2))));
        }
        else{
            printf("0.000\n");
        }
    }
    return  0;
}
