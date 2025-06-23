#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Enter size of the maxHeapay: ";
    int heapSize, insert;
    cin >> heapSize;

    vector<int>maxHeap(heapSize);  

    cout << "Enter elements:\n";
    for (int i = 0; i < heapSize; i++) {
        cin >> 	maxHeap[i];
    }

    cout << "Element to add: ";
    cin >> insert;

    	maxHeap.push_back(insert);  
    
        int idx=maxHeap.size()-1;//i=cutrrentIndex
    
        while( idx!=0 && maxHeap[idx]>maxHeap[idx/2])
        {
            if(maxHeap[idx]>maxHeap[idx/2])
            {
                swap(maxHeap[idx],maxHeap[idx/2]);
                idx=idx/2;
            }
        }

    cout << "Updated maxHeapay: ";
    for (int i=0;i<maxHeap.size();i++)
    {
        cout<<maxHeap[i] << " ";
    }

    return 0;
}
