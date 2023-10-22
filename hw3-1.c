#include <stdio.h>
main()
{
int n,flag = 1;
scanf("%d", &n);
if (n > 1)
{
   for (int i = 2 ; i < n ; i++)
   {
       if (n%i == 0)
       {
           flag = 0;
       }
   }

}
else
    flag = 0;
if (flag == 1)
    printf("%s","YES");
else
    printf("%s","NO");
}
