#include<stdio.h>
int main()
{
    int n,m,a[100],i,b = 0,k;
    scanf("%d%d",&n,&m); //n表示人数  m表示练习的数字
    for(i=1;i<=n;i++)
        a[i]=i;
    if(n>1&&m<=n) a[m]=0; //判断m和n比较的情况
    if(m>n&&n>1) //这两个if是并列的
    {
        if(m%n!=0) {m=m%n; a[m]=0;}
        if(m%n==0) {m=n ;a[m]=0;}
    }
    for(i=2;i<=n-1;i++)//程序从这里正式开始，以上为预处理 //i=3
    {
        if(i==2)
            b=m;  //b是用来递加的
        k=0; //k重新为0
        
        for(;k<m;)
        {
            b++; //b=4  b=5
            if(b>n&&b%n==0)
                b=n;
            if(b>n&&b%n!=0)
                b=b%n;  //b=1
            if(a[b]!=0) //a[3]!=0
                k++; //k=1 k=2
            if(k==m)  //m=2
                a[b]=0; //a[4]=0
        }
    }
    for(i=1;i<=n;i++)
        if(a[i]!=0)
        //if
        printf("The left child is NO %d.\n",i);
}
