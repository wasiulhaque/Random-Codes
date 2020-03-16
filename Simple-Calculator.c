#include<stdio.h>
#include<math.h>

double addition(double a, double b);
double subtraction(double a, double b);
double multiplication(double a, double b);
double division(double a, double b);
double square(double a);
double squareroot(double a);
int main()

{
    char ch,u='b';
    double a,b;

    while(u=='B' || u=='b')
    {
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Square\n6.Square-root\n7.Exit\n");
        scanf("%c", &ch);


        switch(ch)
        {
        case '1':
            addition(a,b);
            fflush(stdin);
            scanf("%c", &u);
            break;
        case '2':
            subtraction(a,b);
            fflush(stdin);
            scanf("%c", &u);
            break;
        case '3':
            multiplication(a,b);
            fflush(stdin);
            scanf("%c", &u);
            break;
        case '4':
            division(a,b);
            fflush(stdin);
            scanf("%c", &u);
            break;
        case '5':
            square(a);
            fflush(stdin);
            scanf("%c", &u);
            break;
        case '6':
            squareroot(a);
            fflush(stdin);
            scanf("%c", &u);
            break;
        case '7':
            fflush(stdin);
            scanf("%c", &u);
            break;

        }
    }


}
char menu(char ch)
{

}
double addition(double a, double b)
{
    scanf("%lf %lf", &a, &b);
    printf("%lf", a+b);
}
double subtraction(double a, double b)
{
    scanf("%lf %lf", &a, &b);
    printf("%lf", a-b);
}
double multiplication(double a, double b)
{
    scanf("%lf %lf", &a, &b);
    printf("%lf", a*b);
}
double division(double a, double b)
{
    scanf("%lf %lf", &a, &b);
    printf("%lf", a/b);
}
double square(double a)
{
    scanf("%lf", &a);
    printf("%lf", pow(a,2));
}
double squareroot(double a)
{
    scanf("%lf", &a);
    printf("%lf", sqrt(a));
}
