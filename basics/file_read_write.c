#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *f1 , *f2;
    char filename[100];
    int c;

    printf("Enter the File name for reading: ");
    scanf("%s" , filename);

    f1 = fopen(filename , "r");
    if(f1 == NULL){
        printf("cannot open file %s\n: " , filename);
        exit(1);
    }

    printf("Enter the file name for writing: ");
    scanf("%s" , filename);



    f2 = fopen(filename , "w");
    if(f2 == NULL){
        printf("Cannot open File %s" , f2);
        exit(2);
    }

    while ((c = fgetc(f1)) != EOF){
        fputc(c , f2);
    }

    printf("Contents copied to %s\n", filename);
    fclose(f1);
    fclose(f2);

    return 0;
}