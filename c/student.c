// Online C compiler to run C program online
#include <stdio.h>

int main() {

int math, science , english;
float totalram, totalsita, totalrahul;
printf("enter the mark of 3 student out of 100\n");
                // write the ram mark
printf("ram's marks\n");
printf("enter the mark of math:");
scanf("%d", &math);
printf("enter the mark of science:");
scanf("%d", &science);
printf("enter the mark of english:");
scanf("%d", &english);
            // find the average of all 3 subject of ram marks
totalram= (math+science+english)/3;
printf("the average of ram mark is %f\n\n", totalram);
            // write the sita mark
printf("sita's marks\n");
printf("enter the mark of math:");
scanf("%d", &math);
printf("enter the mark of science:");
scanf("%d", &science);
printf("enter the mark of english:");
scanf("%d", &english);
   // find the average of all 3 subject of sita marks
totalsita= (math+science+english)/3;
printf("the average of sita mark is %f\n\n", totalsita);
            // write the rahul mark
printf("rahul's marks\n");
printf("enter the mark of math:");
scanf("%d", &math);
printf("enter the mark of science:");
scanf("%d", &science);
printf("enter the mark of english:");
scanf("%d", &english);
          // find the average of all 3 subject of rahul marks
totalrahul= (math+science+english)/3;
printf("the average of rahul mark is %f\n\n", totalrahul);
// we need to find a who's gonna winner
if (totalram>=totalsita && totalram>= totalrahul)
{
    printf("ram is first\n");
}

else if (totalsita>=totalram && totalsita>=totalrahul)
{
    printf("sita is first\n");
}
else if(totalrahul>=totalram && totalrahul>=totalsita)
{
    printf("rahul is fist");
}

else
{
    printf("you are \n");
}
    return 0;
}