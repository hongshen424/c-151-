#include<stdio.h>
int main()
{
    int op=0;
    int max=0;
    int min=99;
    int mark=0;
    int n1=-1,n2=-1,n=0;
    for(;1;)
    {
        char c;
        scanf("%c",&c); //scanf后会有一个\n是我自己加的，不加单步执行不下去呀
        if(c==',')
        {
            if(mark==1)
            n=n1;
            else if(mark==2)
            n=n1*10+n2;
            if(n>max)
               max=n;
            if(n<min)
            min=n;
            mark=0;
            n1=-1;
            n2=-1;
            continue;
        }
        if(c=='+')
            op=1;
        else if(c=='-')
            op=2;
        else if(c=='*')
            op=3;
        else if(c=='/')
            op=4;
        else if(c=='%')
            op=5;
        else if(c=='=')
        break;
        
        else if(c<='9'&&c>='0')
        {
            if(mark==0)
            {
                n1=c-'0';
                mark=1;
                
            }
            else if(mark==1)
            {
                n2=c-'0';
                mark=2;
                
            }
        }
    }
    //
    
    switch (op)
    {
        case 1:
        {
            printf("%d + %d = %d\n",max,min,max+min);
            break;
        }
        case 2:
        {
            printf("%d - %d = %d\n",max,min,max-min);
            break;
        }
        case 3:
        {
            printf("%d * %d = %d\n",max,min,max*min);
            break;
        }
        case 4:
        {
            if(min==0)
                printf("Error!\n");
            else
                {
                printf("%d / %d = %d\n",max,min,max/min);
                }
            break;
        }
        case 5:
        {
            if(min==0)
                printf("Error!\n"); else
                {
                    printf("%d %% %d = %d\n",max,min,max%min);
                }
            break;
            
        }
    }
    
}
