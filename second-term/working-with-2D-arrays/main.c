#include <stdio.h>
#include <string.h>
// zad 1
// int main(void) {
//   int x[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
// for(int i=0;i<3;i++) {
//   for(int j=0;j<3;j++) {
//     printf("%d ", x[i][j]);
//   }
//   printf("\n");
// }
//   return 0;
// }

// zad 2
// int main(void) {
//   int x[3][3] = {{7, 3, 1}, {0, 1, 1}, {6, 7, 1}}, count=0;
//     for(int i=0;i<3;i++) {
//     for(int j=0;j<3;j++) {
//       if(x[i][j]==1) count++;
//     }
//   }
//   printf("%d", count);
//   return 0;
// }

// zad 3
// int main(void) {
//   int x[2][3] = {{0, 1, 2}, {3, 4, 5}};
//   for(int i=0;i<3;i++) {
//     for(int j=0;j<2;j++) {
//       printf("%d ", x[j][i]);
//     }
//     printf("\n");
//   }
// }

// zad 4
// int numRookCaptures(char** board, int boardSize, int boardColSize){
//    int x,y;
//         for(int i=0;i<8;i++)
//         {
//             for(int j=0;j<8;j++)
//             {
//                 if(board[i][j]=='R')
//                 {
//                     x=i;
//                     y=j;
//                 }

//             }
//         }

//         // горе
//         int count=0;
//         int p=x;
//         int q=y;
//         while(p>=0 && board[p][q]!='B'){
//             if(board[p][q]=='p'){
//                 count++;
//                 break;
//             }
//             p--;

//         }

//     // долу
//         p=x;
//         q=y;
//           while(p<8 && board[p][q]!='B'){
//             if(board[p][q]=='p'){
//                 count++;
//                 break;
//             }
//             p++;

//         }
//         // дясно

//         p=x;
//         q=y;

//         while(q<8 && board[p][q]!='B'){
//             if(board[p][q]=='p'){
//                 count++;
//                 break;
//             }
//             q++;
//         }

//         p=x;
//         q=y;
//         // ляво
//           while(q>=0 && board[p][q]!='B'){
//             if(board[p][q]=='p'){
//                 count++;
//                 break;
//             }
//             q--;
//         }
//         return count;
// }

// zad 5

int main(void)
{
    char name[10];
    char dictionary[5][10] = {"Ivan", "Dobromir", "Lora", "Stoqn", "Emilia"};
    printf("enter name you want to search for:");
    scanf("%s", name);
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(dictionary[i], name) == 0)
        {
            printf("1");
            return 0;
        }
    }
    printf("0");
    return 0;
}