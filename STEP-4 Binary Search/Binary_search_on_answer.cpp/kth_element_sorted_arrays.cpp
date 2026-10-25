#include <bits/stdc++.h>
using namespace std;

int kthElement(vector<int>& a, vector<int>& b, int k) {
    if(a.size()>b.size()){return kthElement(b,a,k);}
    int n1=a.size(),n2=b.size();
    int start=0,end=n1;
    while(start<=end){
        int mid1=(start+end)/2;
        int mid2=k - mid1;
        int l1= mid1==0 ? INT_MIN:a[mid1-1];
        int l2= mid2==0 ? INT_MIN:b[mid2-1];
        int r1= mid1==n1 ? INT_MAX:a[mid1];
        int r2= mid2==n2 ? INT_MAX:b[mid2];
        if(l1<=r2 && l2<=r1){return max(l1,l2);}
        else if(l1>=r2){end=mid1-1;}
        else{start=mid1+1;}
    }
    return -1;
}

int main() {
    int n, m, k;
    cout << "Enter size of first array: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> m;
    vector<int> b(m);
    cout << "Enter elements of second array: ";
    for (int i = 0; i < m; i++) cin >> b[i];

    cout << "Enter k: ";
    cin >> k;

    int ans = kthElement(a, b, k);
    cout << k << "-th element is: " << ans << endl;

    return 0;
}
