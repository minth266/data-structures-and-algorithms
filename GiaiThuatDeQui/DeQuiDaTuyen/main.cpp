#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// De qui da tuyen la de qui vua vong lap, vua de qui
// Sau moi lan de qui luu vao stack
// Het de qui goi stack

void print_array(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
}

void print_permutations(int arr[],int n,int i)
{
	int j,swap;
	print_array(arr,n);
	for(j=i+1;j<n;j++)
	{
		if(arr[i]>arr[j])
		{
			swap=arr[i];
			arr[i]=arr[j];
			arr[j]=swap;
		}
		print_permutations(arr,n,i+1);
	}
}

int main(int argc, char** argv) {
	int M[3]={10,2,5};
	print_permutations(M,3,0);
	return 0;
}
