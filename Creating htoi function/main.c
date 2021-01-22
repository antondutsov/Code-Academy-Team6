#include <stdio.h>
// #include <string.h>

int htoi (char *[]);

int main (){
    char s[10];
    printf ("0x");

    scanf("%s", s);

    int rez=htoi(s);
    printf ("%s\n",s);
    printf ("%d\n",rez);

return 0;
}

int htoi (char *s[]){
    int i=0;
    int br=0;
    int sm=0;
    int sum=0;

    for (br=0;s[br]!=0;br++); // br = strlen(s);

    for (i=0;i<br;i++){
        if (s[i]>='0' && s[i]<='9') {
        printf("first if: %d \n", i);
        sm = s[i] - 'e0';
        printf("'first sm': %d \n", sm);
        }

        else if (s[i]>='A' && s[i]<='F'){
        printf("first elseif: %d \n", i);
        sm = s[i] - 'A';
        printf("'second sm': %d \n", sm);
        sm+=10;
        }

        else if (s[i]>='a' && s[i]<='f'){
        printf("second elseif: %d \n", i);
        sm = s[i] - 'a';
        printf("'third sm': %d \n", sm);
        printf("%d, %d, %c",sm = (s[i] - 'a'));
        sm+=10;
        }

        else{
            printf ("Invalid input\n");
        }
        sum = sum*16 + (sm);
        printf("sum: %d \n", sum);
    }
return sum;
}
