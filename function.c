#include <stdio.h>
#include <math.h>

double solve(int n,int x) {
    int num=3;
    double ans=(float)1/x;
    //printf("%lf\n",ans);
    int i;
    for(i=1; i<=n; i++) {
        double value=(float)1/pow(x,num);
       // printf("x=%lf",pow(x,num));
        num+=2;
        if(i%2==0) {
            ans-=value;
        }
        else {
            ans+=value;
        }
    }
    return ans;
}


int main() {
    int a,b;
    printf("Enter number of variable:");
    scanf("%d",&a);
    printf("Enter variable:");
    scanf("%d",&b);
    double result=solve(a,b);
    printf("Result:%.3lf",result);



    return 0;
}
