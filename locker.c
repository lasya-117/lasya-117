#include <stdio.h>
#include <string.h>
int main()
{
    char a[7]="aeiceg";
    char i[3][3];
    char j[7];
    for (int b=0;b<=2;b++){
        for (int c=0;c<=2;c++){
            scanf("%c",&i[b][c]);
        }
    }
    j[0]=i[0][0];
    j[1]=i[1][1];
    j[2]=i[2][2];
    j[3]=i[0][2];
    j[4]=i[1][1];
    j[5]=i[2][0];
    j[6]='\0';
    
    
    if (strcmp(j,a)==0){
        printf("unlocked");
    }
    else{
        printf("locked");
    }

    return 0;
}
