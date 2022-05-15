#include <stdio.h>

// zad 1
//  int sum(int n);
//  int main(void) {
//    int n;
//    scanf("%d", &n);
//    printf("sum=%i", sum(n));
//  }

// int sum(int n) {
//   if(n>0) {
//     return n+sum(n-1);
//   }else return 0;
// }

// zad 2
//  int decimal_to_binary(int n);

// int main(void) {
//   int n=69;
//   printf("%i to binary: %i", n, decimal_to_binary(n));
//   return 0;
// }

// int decimal_to_binary(int n) {
//   int m;
//   m=n%2; // 1. 0 2. 0, 3. 1
//   if(n>0) {
//     return m+(10*decimal_to_binary(n/2)); // 1. 2, 2. 3. 1
//   }else return 0;
// }

// zad 3
// int biggest_common_divider(int a, int b);
// int main(void) {
//   int a, b;
//   printf("Enter a=");
//   scanf("%i", &a);
//   printf("Enter b=");
//   scanf("%i", &b);
//   printf("biggest common divider: %i", biggest_common_divider(a, b));
// }

// int biggest_common_divider(int a, int b) {
//   if(a==0) {
//     return b;
//   }
//   else if(b==0) {
//     return a;
//   }

//   int remainder=a%b;
//   return biggest_common_divider(b,remainder);
// }

// zad 4

// bool isPowerOfTwo(int n){
//     if(n<1) return false;
//     if(n == 1) return true;
//     if(n%2!= 0) return false;
//     return isPowerOfTwo(n/2);
// }

// zad 5
//  int binarySearch(int arr[], int top, int bot, int search);
//  int main(void) {
//    int arr[] = {24, 6, 3, 9, 4, 10, 36, 41, 11, 5};
//    int len=10;
//    int search=56;
//    for(int i=0;i<len;i++) {
//      int min=i;
//      for(int j=i+1;j<len;j++) {
//        if(arr[min]>arr[j]){
//          min=j;
//        }
//      }
//      int temp=arr[i];
//      arr[i]=arr[min];
//      arr[min]=temp;
//    }
//    int res=binarySearch(arr, len-1, 0, search);
//    if(res==-1) printf("not found");
//    else printf("found at %d", res);
//    return 0;
//  }

// int binarySearch(int arr[], int top, int bot, int search) {
//   if(top>=bot) {
//     int mid=(top+bot)/2;
//     if(arr[mid]==search) {
//       return mid;
//     }else if(search>arr[mid]) {
//       return binarySearch(arr, top, mid+1, search);
//     }else {
//       return binarySearch(arr, mid-1, bot, search);
//     }
//   }
//   return -1;
// }

// zad 6
//  int isPath(int grid[4][6], int row, int col, int rows, int cols);
//  int main(void) {
//    int grid[4][6] = {
//    0, 1, 1, 1, 1, 1,
//    0, 0, 1, 0, 0, 1,
//    1, 0, 1, 0, 0, 1,
//    0, 0, 0, 0, 0, 0
//    };
//    printf("%d", isPath(grid, 0, 0, 4, 6));
//  }

// int isPath(int grid[4][6], int row, int col, int rows, int cols) {
//   if(row==rows-1 && col==cols-1) return 1;
//   if(grid[row][col]==1) return 0;
//   if(row<0 || col<0 || row>rows-1 || col>cols-1) return 0;

//   grid[row][col]=1;
//   int up=isPath(grid, row-1, col, rows, cols);
//   int down=isPath(grid, row+1, col, rows, cols);
//   int left=isPath(grid, row, col-1, rows, cols);
//   int right=isPath(grid,row, col+1, rows, cols);
//   return up || down || left || right;
// }