void mergesort(int a[],int p, int r)//help in partition of array
{
    int q;
    if(r>p)
    {
        q= (p+r)/2;
        mergesort(a,p,q); //first partition
        mergesort(a,q+1,r);//second partition
        merge(a,p,q,r); // merge function
    }
}
void merge(int a[],int p,int q,int r)//helps in merging the resultant array
{
    int l[20],ri[20],n1,n2,i,j,k;
    n1=q-p+1;
    n2=r-q;
    for(i=1;i<=n1;i++)
    {
        l[i]=a[p+i-1];// left array
    }

    for(j=1;j<=n2;j++)
    {
        ri[j]=a[q+j];// right array
    }
    l[n1+1]=9999;
    ri[n2+1]=9999;
    i=1,j=1;
    for(k=p;k<=r;k++)
    {
        if(l[i]<=ri[j])
        {
            a[k]=l[i];
            i++;
        }
        else{
            a[k]=ri[j];
            j++;
        }
    }

}
void main()
{
   int a[12],n,i;
   printf("Enter the elements");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     scanf("%d",&a[i]);
   }
   mergesort(a,1,n);
   printf("Sorted array is\n");
   for(i=1;i<=n;i++)
   {
       printf("%d",a[i]);
   }
}
