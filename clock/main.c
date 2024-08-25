#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif
#include <unistd.h>  // For usleep function
#include <stdlib.h>  // For exit function


int main(){
    int h,m,s;
    int d = 1000; // we add a delay of 10000 milliseconds
    printf("Set time : \n");
    scanf("%d%d%d",&h,&m,&s);
    if(h > 12 || m > 60 || s > 60){
        printf("Error ! \n");
        exit(0);
    }
    while(1){
        s++;
        if(s > 59){
            m++;
            s=0;
        }
        if(m > 59){
            h++;
            m = 0;
        }
        if(h > 12){
            h=1;
        }
       
         printf("\n %02d:%02d:%02d", h, m, s);// this play the time with colon between
         printf("\n Clock : ");
         usleep(d * 1000);  // Sleep for d milliseconds
        system("clear");   // Clear the screen
    }
    return 0;
}