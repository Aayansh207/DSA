#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums,int mid, int stu){
    int students=1;int pages=0;
    for(int x:nums){
        if(pages+x<=mid){pages+=x;}
        else{pages=x;students++;}
    }
    return students<=stu;
}

int book_allocation(vector<int> &nums, int stu){
    int start= *max_element(nums.begin(),nums.end());int end=accumulate(nums.begin(),nums.end(),0);
    while(start<=end){
        int mid=(start+end)/2;
        if(check(nums,mid,stu)){end=mid-1;}
        else{start=mid+1;};
    }
    return start;
}
int main(){
    vector<vector<int>> tests = {
        {12, 34, 67, 90},              // Case 1: Standard case
        {5, 17, 100, 11},              // Case 2: students = books
        {10, 20, 30, 40, 50},          // Case 3: balanced pages
        {10, 20, 30, 40, 50, 60, 70},  // Case 4: longer sequence
        {7, 2, 5, 10, 8},              // Case 5: famous LeetCode variant
        {100},                         // Case 6: single book
        {1, 1, 1, 1, 1},               // Case 7: all small equal books
        {10, 20, 30, 40},              // Case 8: fewer students
        {10, 20, 30, 40, 50, 60, 70, 80}, // Case 9: larger input
        {1000, 2000, 3000, 4000, 5000} // Case 10: big numbers
    };

    vector<int> students = {
        2, 4, 2, 3, 2, 1, 5, 1, 3, 2
    };

    for(int i=0;i<tests.size();i++){
        cout << "Test " << i+1 << ": ";
        cout << book_allocation(tests[i], students[i]) << endl;
    }
    return 0;
}
