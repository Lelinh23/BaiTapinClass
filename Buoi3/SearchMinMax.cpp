#include <cstdlib> 
#include <iostream> 
using namespace std; 
int main(int argc, char *argv[]) 
{ 
  int arr[5]; 
  int mode[5][2]; 
   cout<<"Nhap 5 so nguyen\n"; 
  for(int l=0;l<5;l++) {
     cout<<"Gia tri "<<l<<" la :";cin>>arr[l]; 
}  
 //tim gia tri lon nhat va nho nhat 
 int i,j,temp; 
//sap xep mang de tim gia tri lon nhat va nho nhat 
 for(i=0;i<5;i++)
  for(j=4;j>i;j--)
     if(arr[j]<arr[j-1]) {
         int temp=arr[j]; 
         arr[j]=arr[j-1]; 
         arr[j-1]=temp;
}
                  
  cout<<"Gia tri lon nhat="<<arr[4]<<"\nGia tri nho nhat="<<arr[0]; 
  cout<<"\n"; 
  
  return 0; 
}