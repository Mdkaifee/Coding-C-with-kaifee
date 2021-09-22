#include<stdio.h>
#include<stdlib.h>
int main( )
{
    FILE *fptr;
    char dataToBeRead[50];
    fptr = fopen("file.txt", "r");
    if ( fptr == NULL ){
        printf( "file.txt failed to open.");
        exit(1);
    }
    else{
        printf("The file is now opened.\n");
        while( fgets ( dataToBeRead, 50, fptr ) != NULL ) {
            printf( "%s", dataToBeRead ) ;  // Print the dataToBeRead
         }
        fclose(fptr);
        printf("Data successfully read from file.\n");
        printf("The file is now closed.");
    }
    return 0;

}
