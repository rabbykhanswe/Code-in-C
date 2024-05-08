#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file;
    file = fopen("details.txt","a");

    int age,phone;
    char name[30];

    if(file==NULL){
        printf("File Doesn't Exixst");

    }
    else{
        printf("File is open-->\n");

        printf("Enter Your Name :");
        gets(name);

        printf("Enter Your Age :");
        scanf("%d",&age);
        printf("Enter Your Phone :");
        scanf("%d",&phone);
        fprintf(file,"Name = %s,     Age = %d,     Phone = %d\n",name,age,phone);
        fputs("\n",file);
        printf("Written Successfull");
        fclose(file);
    }




getch();
}
