#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct t{
char v[20];
int l;
};
int i,j,n;
struct t tb[20];
void create();
void modify();
void insert();
void display();
int search(char c[20]);
void main()
{
int a,b;
char c[20];
do{
b=0;
printf("enter the choice 1.create table\n2.insert\n3.modify\n4.search\n5.display\n6.exit\n");
scanf("%d",&a);
switch(a)
{
case 1:
printf("enter the length of table\n");
scanf("%d",&n);
create();
break;
case 2:insert();
break;
case 3:modify();
break;
case 4:
printf("enter the variable to be searched \n");
scanf("%s",&c);
b=search(c);
if(b)
printf("value is found at i=%d \n",b);
else
printf("b is not found\n");
break;
case 5:display();
break;
case 6:exit(1);
break;
}
}while(a!=6);

}
void create()
{
for(i=1;i<=n;i++)
{
printf("enter the variable name and value\n");
scanf("%s%d",&tb[i].v,&tb[i].l);
}
display();
}
void modify()
{ 
char m[20];
int k;
printf("enter the variable to be modified \n");
scanf("%s",&m);
k=search(m);
if(k)
{
printf("enter variable and value\n");
scanf("%s%d",&tb[k].v,&tb[k].l);
display();
}
else
printf("variable not found\n");
}
void insert()
{
n++;
printf("enter the variable name and value\n");
scanf("%s%d",&tb[n].v,&tb[n].l);

}
void display()
{printf("variable\tvalue\n");
for(i=1;i<=n;i++)
printf("%s \t\t %d\n",tb[i].v,tb[i].l);
}
int search(char c[20]){
int q,f=0;
for(i=0;i<n;i++)
{
if(strcmp(c,tb[i].v)==0)
{
f=1;
q=i;
}}
if(f==1)
return(q);
else 
return 0;
}
