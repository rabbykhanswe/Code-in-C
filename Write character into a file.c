#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file;
    char name[20] = "Rabby Khan";
    int i,lenth;
    lenth = strlen(name);

    file = fopen("written.txt","w");

    if(file==NULL){
        printf("File Doesn't Exixst");
    }
    else{
        for(i=0; i<lenth; i+=1){
            fputc(name[i],file);
        }
        printf("File written Successfull");
        fclose(file);
    }

getch();
}
