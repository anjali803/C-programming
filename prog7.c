//check whether true or flase
/*#include<stdio.h>
int main()
{   int is_sunday=0;
    int is_snowing=1;
    printf("%d\n",is_sunday && is_snowing);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int is_monday=0;
    int is_raining=1;
    printf("%d\n",is_monday || is_raining);
    return 0;
}*/

#include<stdio.h>
int main()
{
    int x;
    printf("ENTER A TWO DIGIT NUMBER:");
    scanf("%d",&x);
    printf("%d (1 indicates true 0 indicates flase !)",x>9 && x<100);
    return 0;
}