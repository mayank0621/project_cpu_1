//CODE FOR CPU PROFILING//

#include <stdlib.h>
#include<stdio.h>
#include <unistd.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int *ptr = (int *) malloc(sizeof(int));

for (int i = 0; i < argc; ++i)
{
    printf("Arguments at index %d is: %s\n",i,argv[i]);
}
    if(argc>1){
 if ( ! strcmp(argv[1], "10")){
            sleep(10);
            printf("Wait for 10 second.\n");
        }   


         else if ( ! strcmp(argv[1], "20")){
            sleep(20);
            printf("Wait for 20 second.\n");
        }  


         else if ( ! strcmp(argv[1], "30")){
            sleep(30);
            printf("Wait for 30 second.\n");
        }    

         else {
            printf("Infinite while loop start......\n");
            while(1);
            
        }   

    }

return 0;
}

    





