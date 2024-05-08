#include<stdio.h>
#include<conio.h>
int main()
{
    //Declare a file name
    FILE *file;
    
    //Create a file
    file = fopen("Demo.txt","w");

    if(file==NULL){
        printf("File Doesn't Create");
    }
    else{
        printf("File Successfully Created");
        fclose(file);
    }
    getch();
}
