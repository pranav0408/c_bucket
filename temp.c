#include <stdio.h>
int s,elt;
void bubble(int* ar)
{  int temp=0;
                    for(int i=0;i<s-1;i++)
                    {
                    for(int j=0;j<s-1;j++)
                        {
                            if(*(ar+j+1)<*(ar+j))
                            {
                                temp=*(ar+j+1);
                                *(ar+j+1)=*(ar+j);
                                *(ar+j)=temp;
                            }
                        }
                     }
}
int linear(int ar[])
{   int flag=-1;
    for(int i=0;i<s;i++)
    {
        if(ar[i]==elt)
        {
            flag=i;break;
        }
    }
    return flag;
}

int binary(int ar[])
{   int flag=0;
    int ll=0,ul=s-1;
    int mid;
    for(mid=(ll+ul)/2;ll<=ul;mid=(ul+ll)/2)
    {
        if(ar[mid]==elt)
           {flag=1;
            break;}
        if(ar[mid]<elt)
            ll=mid+1;
        else
            ul=mid-1;
    }
    if(flag==1)
    return mid;
    else
    return -1;
}
int isSorted(int ar[])
{
    int c=0;
    for(int i=0;i<s-1;i++)
    {
        if(ar[i+1]>ar[i])
            c++;
    }

        return c;
}

int main()
{
    printf("====================================\n");
    printf("This program follows ascending order\n");
    printf("====================================\n");
    printf("\n");
    printf("Enter size of array\n");
    scanf("%d",&s);
    int arr[s];
    printf("Enter elements in the array\n");
    for(int i=0;i<s;i++)
    scanf("%d",&arr[i]);
    printf("\nEnter the element to search in the array\n");
    scanf("%d",&elt);
    printf("\nEnter 1 to apply linear search\n");
    printf("\nEnter 2 to apply binary search\n");
    int ch,result,bin;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : result=linear(arr);
                 if(result==-1)
                    printf("Element not found\n");
                 else
                    printf("Element is at index %d\n",result);
                 break;
        case 2 : bin=isSorted(arr);
                if(bin==s-1)
                result=binary(arr);
                else
                {
                     bubble(&arr);
                     for(int i=0;i<s;i++)
                        printf("%d ",arr[i]);
                     printf("\n");
                    result=binary(arr);
                }
                if(result==-1)
                    printf("Element not found\n");
                else
                    printf("Element is at index %d of sorted array",result);
                break;

    }

    return 0;
}
