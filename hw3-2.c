#include <stdio.h>
main()
{
    int car = 3 ,s1,d1,s2,d2,s3,d3 ;
    scanf("%d %d %d %d %d %d",&s1,&d1,&s2,&d2,&s3,&d3);
    int slist[] = {s1,s2,s3};
    int dlist[] = {d1,d2,d3};
     for (int i = 0 ; i < 3 ; i++)
    {
        if (car == 1)
        {
        break;
        }

        for (int j = 0 ; j < 3 ; j++)
        {
            if (car == 1)
            {
                break;
            }
            if (slist[j]>=dlist[i])
            {
                for (int k = 0 ; k < 3 ; k++)
                {
                   if (slist[k]>=dlist[j])
                   {
                       car = 1;
                   }
                    else
                   {

                       car = 2;
                   }

                }

            }
        }

    }
    printf("%d",car);
}
