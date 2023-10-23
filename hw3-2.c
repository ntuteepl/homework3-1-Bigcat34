main()
{
    int car = 3 ,s1,d1,s2,d2,s3,d3 ;
    scanf("%d %d %d %d %d %d",&s1,&d1,&s2,&d2,&s3,&d3);
    int slist[] = {s1,s2,s3};
    int dlist[] = {d1,d2,d3};

printf("%d %d %d %d %d %d\n",slist[0],dlist[0],slist[1],dlist[1],slist[2],dlist[2]);
    void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
    for (int i = 0; i < 3 - 1; ++i) {
        for (int j = 0; j < 3 - i - 1; ++j) {
            if (slist[j] >slist[j + 1]) {
                // 如果前一個數字比後一個大，交換它們
                swap(&slist[j], &slist[j + 1]);
                swap(&dlist[j], &dlist[j + 1]);
            }
        }
    }

    if (dlist[0]>=slist[1] && dlist[1]<=slist[2])
    {
        car = 1;
    }
    else if(dlist[0]>=slist[1] && dlist[1]>slist[2])
    {
        car = 2 ;
    }

    printf("%d %d %d %d %d %d\n",slist[0],dlist[0],slist[1],dlist[1],slist[2],dlist[2]);
    printf("%d",car);
}
