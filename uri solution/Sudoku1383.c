#include<stdio.h>
int main()
{
    // int a[3][3],b[3][3],c[3][3],d[3][3],e[3][3],f[3][3],g[3][3],h[3][3],p[3][3];
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,p=0;
    int i,j,n,k=0,l=0,m,inp;

    while(scanf("%d",&m)!=EOF)
    {
        for(n=1; n<=m; n++)
        {
            int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
            int r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0;
            for(i=0; i<9; i++)
            {
                for(j=0; j<9; j++)
                {
                    scanf("%d",&inp);
                    if(i==0)
                    {
                        r1=r1+inp;
                    }
                    else if(i==1)
                    {
                        r2=r2+inp;
                    }
                    else if(i==2)
                    {
                        r3=r3+inp;
                    }
                    else if(i==3)
                    {
                        r4=r4+inp;
                    }
                    else if(i==4)
                    {
                        r5=r5+inp;
                    }
                    else if(i==5)
                    {
                        r6=r6+inp;
                    }
                    else if(i==6)
                    {
                        r7=r7+inp;
                    }
                    else if(i==7)
                    {
                        r8=r8+inp;
                    }
                    else if(i==8)
                    {
                        r9=r9+inp;
                    }

                    if(j==0)
                    {
                        c1=c1+inp;
                    }
                    else if(j==1)
                    {
                        c2=c2+inp;
                    }
                    else if(j==2)
                    {
                        c3=c3+inp;
                    }
                    else if(j==3)
                    {
                        c4=c4+inp;
                    }
                    else if(j==4)
                    {
                        c5=c5+inp;
                    }
                    else if(j==5)
                    {
                        c6=c6+inp;
                    }
                    else if(j==6)
                    {
                        c7=c7+inp;
                    }
                    else if(j==7)
                    {
                        c8=c8+inp;
                    }
                    else if(j==8)
                    {
                        c9=c9+inp;
                    }

                    if(i<=2)
                    {
                        if(j<=2)
                        {
                            a=a+inp;
                        }
                        else if(j<=5)
                        {
                            b=b+inp;
                        }
                        else
                        {
                            c=c+inp;
                        }
                    }
                    else if(i<=5)
                    {
                        if(j<=2)
                        {
                            d=d+inp;
                        }
                        else if(j<=5)
                        {
                            e=e+inp;
                        }
                        else
                        {
                            f=f+inp;
                        }
                    }
                    else
                    {
                        if(j<=2)
                        {
                            g=g+inp;
                        }
                        else if(j<=5)
                        {
                            h=h+inp;
                        }
                        else
                        {
                            p=p+inp;
                        }
                    }


                    /*
                      l++;
                      if(l>2)
                      {
                          l=0;
                      }*/
                }
            }
            /*  k++;
              if(k>2)
              {
                  k=0;
              }*/
            if(a==45&&b==45&&c==45&&d==45&&e==45&&f==45&&g==45&&h==45&&p==45
               &&r1==45&&r2==45&&r3==45&&r4==45&&r5==45&&r6==45&&r7==45&&r8==45&&r9==45
               &&c1==45&&c2==45&&c9==45&&c3==45&&c4==45&&c5==45&&c6==45&&c7==45&&c8==45)
            {
                printf("Instancia %d\n",n);
                printf("SIM\n");

            }
            else
            {
                printf("Instancia %d\n",n);
                printf("NAO\n");

            }
            a=0;
            b=0;
            c=0;
            d=0;
            e=0;
            f=0;
            g=0;
            h=0;
            p=0;
        }
    }

}
