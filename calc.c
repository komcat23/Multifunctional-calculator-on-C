#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	printf("*======================================*\n");
    printf("Instruction:\n");
    printf("1. Write first number\n");
    printf("2. Write second number\n");
    printf("3. Choice the calculation method\n");
    printf("*======================================*\n");
    long a;
    long b;
    scanf("%ld", &a);
    scanf("%ld", &b);
    char c[99];
    scanf("%s", &c);
    if(strcmp(c, "+") == 0 || (c, "sum") == 0 || (c, "plus") == 0)
    {
        long f = a+b;
        printf("%ld\n", f);
    }
    else if(strcmp(c, "-") == 0)
    {
        long f = a-b;
        printf("%ld\n", f);
    }
    else if(strcmp(c, "*") == 0)
    {
        long f = a*b;
        printf("%ld\n", f);
    }
    else if(strcmp(c, "**") == 0)
    {
        double f = pow(a,b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "/") == 0)
    {
        int f = a/b;
        printf("%d\n", f);
    }
    else if(strcmp(c, "%") == 0)
    {
        long f = a%b;
        printf("%ld\n", f);
    }
    else if(strcmp(c, "log+sum") == 0)
    {
        double f = log(a)+log(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log") == 0)
    {
        double f = log(a);
        double g = log(b);
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "sqrt") == 0)        
    {
        double f = sqrt(a);
        double g = sqrt(b);
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "sqrt+sum") == 0)
    {
        double f = sqrt(a)+sqrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "sqrt+min") == 0)
    {
        printf("%lf\n", sqrt(a)-sqrt(b));
    }
    else if(strcmp(c, "cbrt") == 0)             
    {                                           
        printf("DEBUG: a=%f, b=%f\n", a, b);
    
        double f = cbrt(a);
        double g = cbrt(b);
    
        printf("cbrt(a)=%lf\n", f);
        printf("cbrt(b)=%lf\n", g);
    
    }
    else if(strcmp(c, "cbrt+sum") == 0)
    {
        double f = cbrt(a)+cbrt(b);
        printf("%lf\n", f);
    }
    else
    {
        printf("err\n");
        return 1;
    }
    return 0;
}