#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file;
    char text[25];
    file = fopen("string.txt","a");

    if(file==NULL){
        printf("File Doesn't Exixst");

    }
    else{
        printf("Enter Your Name :");
        gets(text);
        fputs(text,file);
        fputs("\n",file);
        printf("File written successfull");
        fclose(file);
    }

getch();
}
