#include <stdio.h>
void add(int,int[]);
int grade(char[]);
void main()
{
   int a[2],b[3];
   printf("How many courses are found\n");
   scanf("%d",&a[0]);
   add(a[0],b);
   printf("<====   %.4f   ====>",b[0]/(float)b[1]);
}
void add(int n,int z[])
{
    struct pt
    {
        char sub[100];
        int cre;
        char gra[10];
    }s[1000];
    int gp[1000],i,Tc=0,Tgp=0;
    printf("plz type this format=> subject name'space'credit'space'grade(or)grade point'enter'\n");
    printf("Note:plz type subject name without space\narrear subjects type '0'\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i].sub);
        scanf("%d",&s[i].cre);
        scanf("%s",s[i].gra);
        gp[i]=s[i].cre*grade(s[i].gra);
    }
    for(i=0;i<n;i++)
    {
        Tc+=s[i].cre;
        Tgp+=gp[i];
    }
    z[0]=Tgp;
    z[1]=Tc;
}
int grade(char x[])
{
    int k;
    if(x[0]=='A' || x[0]=='a') if(x[1]=='+') k=9; else k=8;
    else if(x[0]=='B' || x[0]=='b') if(x[1]=='+') k=7; else k=6;
    else if(x[0]=='O' || x[0]=='o') k=10;
    else if(x[0]=='9'||x[0]=='8'||x[0]=='7'||x[0]=='6'||x[0]=='5'||x[0]=='4'||x[0]=='3'||x[0]=='2'){
    if(x[0]=='9'||x[0]=='8'||x[0]=='7'||x[0]=='6')
    {if(x[0]=='9') k=9; else if(x[0]=='8') k=8; else if(x[0]=='7') k=7; else if(x[0]=='6') k=6;}
    else if(x[0]=='5'||x[0]=='4'||x[0]=='3'||x[0]=='2')
    {if(x[0]=='5') k=5; else if(x[0]=='4') k=4; else if(x[0]=='3') k=3; else if(x[0]=='2') k=2;}}
    else{if(x[0]=='1' && x[1]=='0') k=10; else if(x[0]=='1') k=1;}
    return k;
}
