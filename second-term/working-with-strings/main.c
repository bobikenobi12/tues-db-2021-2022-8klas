#include <stdio.h>
#define maxbr 256
// 1 zad

// int main(void) {
//   char s[100];
//   fgets(s, 99, stdin);
//   for(int i=0;s[i]!='\n';i++) printf("%c\n", s[i]);
// }

// 2 zad

// int main(void) {
//   int arr[10];
//   for(int i=0;i<10;i++) {
//     scanf("%d", &arr[i]);
//   }
//   int max=arr[0];
//   for(int i=1;i<10;i++) {
//     if(arr[i]>max) max=arr[i];
//   }
//   printf("max=%d", max);
// }

// zad 3

// int main(void) {
//   char s[100];
//   fgets(s, 99, stdin);
//   int curr_count=1, max_count=1;
//   for(int i=0;s[i]!='\n';i++) {
//     if(s[i]==s[i+1]) curr_count++;
//     else {
//       if(curr_count>max_count) max_count=curr_count;
//       curr_count=1;
//       }
//   }
//   printf("%d", max_count);
// }

// 4 zad

// int main(void) {
//   char s[100];
//   int arr[maxbr]={0};
//   fgets(s, 99, stdin);
//   for(int i=0;s[i]!='\n';i++) {
//     arr[s[i]]++;
//   }
//   for(int i=0;i<maxbr;i++) {
//     if(arr[i]) {
//       printf("\n%c=%d", (char)i, arr[i]);
//     }
//   }
// }

// 5 zad

int main(void)
{
  char s[100];
  int arr[maxbr] = {0};
  fgets(s, 99, stdin);
  for (int i = 0; s[i] != '\n'; i++)
  {
    arr[s[i]] = i + 1;
  }
  for (int i = 0; i < maxbr; i++)
  {
    if (arr[i])
    {
      printf("\n%c=%d", (char)i, arr[i] - 1);
    }
  }
}
