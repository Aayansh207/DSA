#include<bits/stdc++.h>
using namespace std;

vector<int> _union(vector<int> &nums1,vector<int> &nums2){
    int i=0,j=0;
    vector<int> main;
    while(i<nums1.size() && j<nums2.size()){
        int val;
        if(nums1[i]<nums2[j]){val=nums1[i++];}
        if(nums1[i]>nums2[j]){val=nums2[j++];}
        if(nums1[i]==nums2[j]){val=nums1[i];i++;j++;}
        if((main.empty() || main.back()!=val)){main.push_back(val);}
    }
    while(i<nums1.size()){if((main.empty() || main.back()!=nums1[i])){main.push_back(nums1[i]);}i++;}
    while(j<nums2.size()){if((main.empty() || main.back()!=nums2[j])){main.push_back(nums2[j]);}j++;}
    return main;
}

int main(){
    vector<int> nums1={1,2,2,3,3,4,6,9};
    vector<int> nums2={3,4,5,5,5,6,6,10,10,11};
    vector<int> abcd=_union(nums1,nums2);
    for(int x:abcd){cout<<x<<" ";}
    return 0;
}