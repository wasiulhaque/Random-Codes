#include<stdio.h>
int main()
{
    int q1,q2,q3,q4,att,mid,sem,tot=0,per;
    printf("Enter the quiz marks: ");
    scanf("%d%d%d%d", &q1, &q2, &q3, &q4);
    printf("Enter Attendance Marks: ");
    scanf("%d", &att);
    printf("Enter mid semester marks: ");
    scanf("%d", &mid);
    printf("Enter Semester Final Marks: ");
    scanf("%d", &sem);
    if(q1<q2&&q1<q3&&q1<q4)
    {
        printf("The best three quiz marks are: %d %d %d\n",q2,q3,q4);
        tot=q2+q3+q4+att+mid+sem;
        per=tot/3;
    }
    else if(q2<q1&&q2<q3&&q2<q4)
    {
        printf("The best three quiz marks are: %d %d %d\n",q1,q3,q4);
        tot=q1+q3+q4+att+mid+sem;
        per=tot/3;
    }
    else if(q3<q1&&q3<q2&&q3<q4)
    {
        printf("The best three quiz marks are: %d %d %d\n",q1,q2,q4);
        tot=q1+q2+q4+att+mid+sem;
        per=tot/3;
    }
    else
    {
        printf("The best three quiz marks are: %d %d %d\n",q1,q2,q3);
        tot=q1+q2+q4+att+mid+sem;
        per=tot/3;
    }

    printf("Total Marks: %d\n", tot);
    printf("Percentage: %d%%\n", per);
    if(per<=100&&per>=80)
    {
        printf("Grade: A+");
    }
    else if(per>=75&&per<=79)
    {
        printf("Grade: A");
    }
    else if(per>=70&&per<=74)
    {
        printf("Grade: A-");
    }
    else if(per>=65&&per<=69)
    {
        printf("Grade: B+");
    }
    else if(per>=60&&per<=64)
    {
        printf("Grade: B");
    }
    else if(per>=55&&per<=59)
    {
        printf("Grade: B-");
    }
    else if(per>=50&&per<=54)
    {
        printf("Grade: C");
    }
    else if(per>=0&&per<=49)
    {
        printf("Grade: F");
    }

}
