#include<stdio.h>

#include<conio.h>

int GenclikCevir(char);

int main()

{

    char str[50];

    int i=0, j, chk;

    printf("Cumle Girin: ");

    gets(str);

    while(str[i]!='\0')

    {

        chk=0;

        if(GenclikCevir(str[i]))

        {

            j=i;

            while(str[j-1]!='\0')

            {

                str[j] = str[j+1];

                j++;

            }

            chk = 1;

        }

        if(chk==0)

            i++;

    }

    printf("\n Kisaltilmis hali: %s", str);

    getch();

    return 0;

}

int GenclikCevir(char ch)

{

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||

       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')

       return 1;

    else

        return 0;



}
