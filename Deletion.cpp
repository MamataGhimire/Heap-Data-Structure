#include <iostream>
#include<vector>
using namespace std;
int main() {
  vector<int> arr = {0, 60, 50, 55, 30, 35, 40};
   arr[1]=arr[arr.size()-1];
   arr.pop_back();
   int i=1;
   while(true)
   { int larger=i;
      int left = 2 * i;
      int right = 2 * i + 1;
      if( left< arr.size() && arr[left]>arr[larger] )
          {
              larger=2 * i;
          }
          
         if( right< arr.size() && arr[larger]<arr[right])
          {
              larger=2 * i + 1;
          }

     if( larger != i)
     {
      swap(arr[i],arr[larger]);
      i = larger; 
     }
      else
      break;

   }
   
   for(int i=1;i<arr.size();i++)
   {
       cout<<arr[i]<<" ";
   }
   
return 0;
}
