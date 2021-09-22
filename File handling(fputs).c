#include<stdio.h>
#include<stdlib.h>
int main( )
{
    FILE *fptr;
    char dataToBeWritten[50]  = "PPS-LAB\n";
    fptr = fopen("newfile.txt", "w");
    if ( fptr == NULL ){
        printf( "newfile.txt failed to open.");
        exit(1);
    }
    else{
        printf("The file is now opened.\n");
        fputs(dataToBeWritten, fptr);
        fputs("\n", fptr);
    }
    fclose(fptr);
    printf("Data successfully written to a file.\n");
    printf("The file is now closed.");
    return 0;
}
