#include<stdio.h>
#include<stdlib.h>

void main()
{
    char ch[20],filename[25];
    FILE *fp;

    printf("Enter the file name : ");
    gets(filename);
    fp=fopen(filename,"r");
    if(fp==NULL)
    {
        perror("File does not exist..");
        exit(EXIT_FAILURE);
    }
    while(!feof(fp))
    {
        fscanf(fp,"%s",ch);
        printf("%s\n",ch);
    }
    fclose(fp);

}