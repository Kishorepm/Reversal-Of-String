#include<stdio.h>
void toh(int disk,char sou,char temp,char des);
int main()
{
    char source='A',temp='B',des='C';
    int disk;
    printf("");
    scanf("%d",&disk);
    toh(disk,sou,tem,disk);
    return 0;
    }
void toh(int disk,char source,char temp,char dest)
{
    {
        if(disk==1)
     }
toh(disk-1,sou,des,temp);
pf("",disk,source,des);
toh(disk-1,temp,sou,des);
}