#include <stdio.h>

int main()
{
    // zad 1
    // int arr[100], n;
    // printf("Enter length:");
    // scanf("%d", &n);
    // for(int i=0;i<n;i++) {
    //   printf("Enter number:");
    //   scanf("%d", &arr[i]);
    // }

    // for(int i=0;i<n;i++) {
    //   arr[i]=arr[i]*i;
    // }

    // for(int i=0;i<n;i++) {
    //   printf("%d  ", arr[i]);
    // }

    // zad 2
    // int arr1[100],arr2[100], arr3[100], n;
    // printf("Enter length:");
    // scanf("%d", &n);
    // for(int i=0;i<n;i++) {
    //   printf("Enter number:");
    //   scanf("%d", &arr1[i]);
    // }
    // for(int i=0;i<n;i++) {
    //   printf("Enter number:");
    //   scanf("%d", &arr2[i]);
    // }
    // for(int i=0;i<n;i++) {
    //   arr3[i]=arr1[i]+arr2[i];
    // }
    //  for(int i=0;i<n;i++) {
    //   printf("%d  ", arr3[i]);
    // }

    // zad 3
    // int arr[100], n, max, temp;
    // printf("Enter length:");
    // scanf("%d", &n);
    // for(int i=0;i<n;i++) {
    //   printf("Enter number:");
    //   scanf("%d", &arr[i]);
    // }

    // for(int i=0;i<n;i++) {
    //   max=i;
    //   for(int j=i+1;j<n;j++) {
    //     if(arr[j]>arr[i]) {
    //       max=j;
    //     }
    //   }
    //   temp=arr[i];
    //   arr[i]=arr[max];
    //   arr[max]=temp;
    // }
    //  for(int i=0;i<n;i++) {
    //   printf("%d  ", arr[i]);
    // }

    // zad4
    //   int arr[100], n, min, temp, el, r, k, l=0, found=0;
    //   printf("Enter length:");
    //   scanf("%d", &n);
    //   r=n-1;
    //   printf("Enter element to search for:");
    //   scanf("%d", &el);
    //   for(int i=0;i<n;i++) {
    //     printf("Enter number:");
    //     scanf("%d", &arr[i]);
    //   }
    //   for(int i=0;i<n;i++) {
    //     min=i;
    //     for(int j=i+1;j<n;j++) {
    //       if(arr[j]<arr[i]) {
    //         min=j;
    //       }
    //     }
    //     temp=arr[i];
    //     arr[i]=arr[min];
    //     arr[min]=temp;
    //   }
    //  while(l<=r){
    //   k=l+(r-l)/2;
    //   if (arr[k]==el){
    //   found=1;
    //   break;
    //   }else if(arr[k]<el) {
    //   l=k+1;
    //   }else{
    //   r=k-1;
    //   }
    // }

    //   if(found) {
    //     printf("\n%d", k);
    //   }else {
    //     printf("\n-1");
    //   }
    //   return 0;

    // zad 5
    // int removeDuplicates(int* nums, int numsSize){
    //     int i=0;
    //     for (int j=1;j<numsSize;j++) {
    //         if (nums[j]!=nums[i]) {
    //             i++;
    //             nums[i]=nums[j];
    //         }
    //     }
    //     return i+1;
    // }

    // zad 6

    //  void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    //  int i=0,j=0,num3L=0,nums3[m+n];
    // for(;i<m && j<n;num3L++){
    //     if(nums1[i]>=nums2[j]){
    //         nums3[num3L]=nums2[j];
    //         j++;
    //     }else {
    //         nums3[num3L]=nums1[i];
    //         i++;
    //     }
    // }
    //     for(;j!=n;j++){
    //         nums3[num3L]=nums2[j];
    //         num3L++;
    //     }

    //     for(;i!=m;i++){
    //         nums3[num3L]=nums1[i];
    //         num3L++;
    //     }
    //    for(int i=0;i<num3L;i++){
    //     nums1[i]=nums3[i];
    //    }
    // }
}