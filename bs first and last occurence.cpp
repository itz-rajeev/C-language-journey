#include<stdio.h>
int lowsearch(int arr[],int num,int size){
	int low=0,high=size-1;
	int result=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(num==arr[mid]){
			result=mid;
			high=mid-1;
		}
		else if(num<arr[mid]){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return result;
}

int highsearch(int arr[],int num,int size){
	int low=0,high=size-1;
	int result=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(num==arr[mid]){
			result=mid;
			low=mid+1;
		}
		else if(num<arr[mid]){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return result;
}
int main(){
	int arr[]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6};
	int num=0;
	int lsearch=lowsearch(arr,num,15);
	int hsearch=highsearch(arr,num,15);
	if(lsearch==-1 && hsearch==-1){
		printf("number is not found");
	}
	else{
		printf("the firse occurence of element %d is at %d \n",num,lsearch);
	    printf("the last occurence of element %d is at %d ",num,hsearch);
	}
	
	return 0;
}
