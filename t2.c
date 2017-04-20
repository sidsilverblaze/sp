#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct t{
char v[20];
int l;
};
int i,j,n=20;
struct t tb[20];
void create();
void insert();
void modify();
void display();
int search(char a[20]);
void main(){
int k;

do{
char b[20];
int m=0;
printf("enter the option \n1.create\n2.insert\n3.modify\n4.display\n5.search\n6.exit\n");
scanf("%d",&k);
switch(k)
{
case 1:printf("enter the length of the table\n");
scanf("%d",&n);
create();
break;
case 2:insert();
break;
case 3:modify();
break;
case 4:display();
break;
case 5:printf("enter the variable whose value is to be found\n");
scanf("%s",&b);
m=search(b);
if(m)
printf("the value is found at %d  and the value is %d\n",m,tb[m].l);
else
printf("the variable is not found\n");
break;
case 6:
exit(1);
break;
}
}while(k!=6);
}
void create()
{
for(i=1;i<=n;i++)
{
printf("enter the variable and value\n");
scanf("%s%d",&tb[i].v,&tb[i].l);
}
display();
}
void insert()
{n++;
printf("enter the variable and value to be inserted\n");
scanf("%s%d",&tb[i].v,&tb[i].l);
display();
}
void modify()
{
int k=0;
char s[20];
printf("enter the variable to be modified\n");
scanf("%s",&s);
k=search(s);
if(k)
{
printf("enter the variable and value\n");
scaternf("%s%d",&tb[k].v,&tb[k].l);
}
else
printf("the variable is not found\n");
}
void display(){
printf("variable\tvalue\n");
for(i=1;i<=n;i++)
printf("%s\t\t%d\n",tb[i].v,tb[i].l);
}
int search(char a[20]){
int f,q=0;
for(i=1;i<=n;i++)
{
if(strcmp(a,tb[i].v)!=0)
f=0;
else
f=1;
q=i;
}
if(f=1)
return(q);
else 
return 0;

}

