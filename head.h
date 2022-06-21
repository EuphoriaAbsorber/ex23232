#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(int* a, int size, char* ans){
    char str[20];
    int firstElemInStreak = a[0];
    int lastElemInStreak = a[0];
    for (int i = 1; i < size; ++i){
        if(a[i] == a[i-1]+1){
            lastElemInStreak++;
        }
        else{
            if(firstElemInStreak==lastElemInStreak){
                sprintf(str,"%d,", firstElemInStreak);
                strcat(ans,str);
            }
                
            else{
                sprintf(str,"%d->%d,",firstElemInStreak, lastElemInStreak);
                strcat(ans,str);
            }
                
            firstElemInStreak = a[i];
            lastElemInStreak = a[i];
        }
        
    }
    if(firstElemInStreak==lastElemInStreak){
        sprintf(str,"%d", firstElemInStreak);
        strcat(ans,str);
    }
        
    else{
        sprintf(str,"%d->%d",firstElemInStreak, lastElemInStreak);
        strcat(ans,str);
    }
    //printf("%s\n", ans);   
}