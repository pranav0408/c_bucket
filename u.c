int main()
    {
        long int test;
        scanf("%d",&test);

       long int n,i;//dif_fact,fact;
       long int result=0;
        for(i=0;i<test;i++)
        {
            scanf("%d",&n);
            if(n<=1)
            continue;
            //fact=fac(n);
            //dif_fact=fac(n-2);
            result = n*(n-1)/2;
            printf("%d\n",result);

        }

        return 0;
    }
