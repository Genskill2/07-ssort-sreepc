#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void swap_max(int arr[], int l, int n );

void ssort(int arr[], int l);

void swap_max(int arr[], int l, int n ){
int c;
int b;
int amax=arr[n];
for(int i=n+1;i<l;i++){
if(arr[i]>amax){
amax=arr[i];
c=i;}}
b=arr[n];
arr[n]=arr[c];
arr[c]=b;
}
void ssort(int arr[], int l){
for(int i=0;i<=l-1;i++){
swap_max(arr,l,i);}
}
