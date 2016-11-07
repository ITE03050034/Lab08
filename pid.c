#include<stdio.h>
#include<stdlib.h>
int pid;
int status=0;
int i,son,dad;
int main()
{
for(i=1;i<=3;i++)
{
pid=fork();
if(pid!=0)
{
//parent
son=getpid();
printf("Dad=%d\n",son);
pid=wait(&status);
}
else
{
//child
son=getpid();//get from myself
dad=getppid();//get from parent
printf("Son=%d Dad=%d\n",son,dad);
exit(status);
}
}
}
