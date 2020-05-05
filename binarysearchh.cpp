#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int l, int r, int x)
{
  if(l<=r)
  {
  	int mid=l+(r-l)/2;
  	if(arr[mid]==x)
  		return mid;
  	else if(arr[mid]>x)
  		return binarysearch(arr,l,mid-1,x);
  	else
  		return binarysearch(arr,mid+1,r,x);
  }
  return -1;
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int x;
  cin>>x;
  int res=binarysearch(arr,0,n-1,x);
  cout<<res;
  return 0;
}
