#include <stdio.h>
#define maxbr 256
// zad 1
// int main(void) {
//   char str[maxbr];
//   printf("str=");
//   scanf("%s", str);
//   printf("%i", len(str));
//   return 0;
// }

// int len(char str[]) {
//   int i;
//   for(i=0;str[i];i++);
//   return i;
// }

// zad 2
//  int isPrime(int *pn);
//  int main(void) {
//    int num;
//    printf("num=");
//    scanf("%i", &num);
//    printf("%i", isPrime(&num));
//    return 0;
//  }

int isPrime(int *pn)
{
    for (int i = 2; i < *pn; i++)
    {
        if (*pn % i == 0)
            return 0;
    }
    return 1;
}

// zad 3
//  int main(void) {
//    int n, a;
//    printf("n=");
//    scanf("%i", &n);
//    do{
//    printf("a=");
//    scanf("%d", &a);
//    }while(a<0 || a>9);
//    printf("%i", check(&n, &a));
//  }

int check(int *pn, int *pa)
{
    while (*pn > 0)
    {
        if (*pn % 10 == *pa)
            return 1;
        *pn = *pn / 10;
    };

    return 0;
}

// zad 4

// int main(void) {
//   int len, arr[maxbr];
//   int seven=7;
//   printf("len=");
//   scanf("%d", &len);
//   for(int i=0;i<len;i++) {
//     printf("num %d=", i+1);
//     scanf("%i", &arr[i]);
//   }
//   for(int i=0;i<len;i++) {
//     int initialNum=*(arr+i);
//     if(isPrime(arr+i) && check(arr+i, &seven)) {
//       printf("%d\n", initialNum);
//     }
//   }
//   return 0;
// }

// zad 5
// char *glueStrings(char s1[], char s2[]);

// int main(void) {
//   char s1[maxbr], s2[maxbr];
//   printf("string #1=");
//   gets(s1);
//   printf("string #2=");
//   scanf("%s", s2);
//   printf("\nglued string: %s", glueStrings(s1, s2));
//   return 0;
// }
// char *glueStrings(char s1[], char s2[]) {
// int s1len=0;
// for(;s1[s1len];s1len++);
// for(int i2=0;s2[i2];i2++, s1len++) {
//   s1[s1len]=s2[i2];
// }
//   s1[s1len]='\0';
//   return s1;
// }

// zad 6
int checkString(char s1[], char s2[]);
int main(void)
{
    char s1[maxbr], s2[maxbr];
    printf("string #1=");
    scanf("%s", s1);
    printf("string #2=");
    scanf("%s", s2);
    printf("%d", checkString(s1, s2));
    return 0;
}

int checkString(char s1[], char s2[])
{
    int s1len = 0, s2len = 0, len;
    for (; s1[s1len]; s1len++)
        ;
    for (; s2[s2len]; s2len++)
        ;
    if (s1len > s2len)
        len = s1len;
    else
        len = s2len;
    for (int i = 0; i < len; i++)
    {
        if (s1[i] > s2[i])
            return 1;
        else if (s1[i] < s2[i])
            return -1;
    }
    return 0;
}