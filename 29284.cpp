#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// This function performs a stable selection sort on a vector of any type.
// `pos` specifies the index to sort by if sorting a vector of pairs.
template <typename T>
void stableSelectionSort(vector<T>& a){
    // Unstable Selection Sort given in slides
    //template<typename T>
         int n = a.size();
            for (int i = 0; i < n; i++) {
                int mindex = i;
                for (int j = i+1; j < n; j++) {
                    if (a[j] < a[min]) min = j;
                }
            if(mindex != i){
                 T minimumVal = a[mindex];
                for(int i = mindex; i>1;i++){
                a[mindex] = a[mindex - 1];
                }
        a[i] = minimumVal;
    }
        
    }
    //T minimumVal = a[min];
    //while(min>i){
      //  a[min] = a[min - 1];
        //min--;
    //}
    //a[i] = minimumVal;
}    

// Unstable Selection Sort given in slides
template <typename T>
void selectionSort(vector<T>& a){
     int n = a.size();
        for (int i = 0; i < n; i++) {
            int min = i;
            for (int j = i+1; j < n; j++) {
                if (a[j] < a[min]) min = j;
            }
            std::swap(a[i], a[min]);
        }

}
int main() {
    // Example usage with an array of pairs
    vector<pair<int, int>> arr = {{3, 1}, {2, 2}, {1, 3}, {2, 1}};

    // Print original array
    cout << "Original array:" << endl;
    for (const auto& p : arr) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    // Sort by the second element of the pairs
    selectionSort(arr);

    // Print sorted array
    cout << "Sorted array by the first element:" << endl;
    for (const auto& p : arr) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    return 0;
}