#include<stdio.h>
void toh(int disk,char sou,char temp,char des);
int main()
{
    char source='A',temp='B',des='C';
    int disk;
    printf("Enter number of disks");
    scanf("%d",&disk);
    toh(disk,sou,temp,disk);
    return 0;
    }
void toh(int disk,char source,char temp,char des)
{
    {
        if(disk==1)
        {
            printf("From %c to %c\n",disk,sou,des);
        }
     }
toh(disk-1,sou,des,temp);
printf("From %c to %c\n",disk,sou,des);
toh(disk-1,temp,sou,des);
}
