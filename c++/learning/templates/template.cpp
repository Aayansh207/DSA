#include<iostream>
using namespace std;

template<class T> class vector{
    int size;
    public:
    T* arr;
    vector(int s){
        size=s;
        arr=new T[size]
    };
    T dotproduct(vector &a){
        T d=0;
        for(int i=0;i<=size;i++){
            d+= arr[i]*a.arr[i]
        }
        return d
    };
};

int main() {
    // Creating two float vectors
    vector<float> v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;

    vector<float> v2(3);
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.9;
    v2.arr[2] = 4.1;

    // Calculating dot product
    float result = v1.dotproduct(v2);
    cout << "Dot Product = " << result << endl;

    return 0;
}