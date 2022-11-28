#include <iostream>
using namespace std;
struct Array {
    int A[20];
    int size;
    int length;
};
void Display(Array arr) {
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
    cout << endl;
}

void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array arr, int key) {
    for (int i = 0; i < arr.length; i++) {
        if (key == arr.A[i])
            return i;
    }
    return -1;
}
//trnasposition
int LinearSearch1(struct Array *arr, int key) {
    for (int i = 0; i < arr->length; i++) {
        if (key == arr->A[i]){
            swap(&arr->A[i],&arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

//move to front/head
int LinearSearch2(struct Array *arr, int key) {
    for (int i = 0; i < arr->length; i++) {
        if (key == arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }
    }
    return -1;
}
int main() {
    Array arr = {{2, 4, 8, 1, 5}, 20, 5};
    cout<<LinearSearch(arr,15)<<endl;
    Display(arr);
    cout<<LinearSearch1(&arr,5)<<endl;//if we call mutiple times item reach to head
    Display(arr);
    cout<<LinearSearch2(&arr,5)<<endl;//if we call it 2nd time item reach to head
    Display(arr);
    return 0;
}

// ~Array arr={{2, 4, 8, 1, 5},20,5};
// {1,2,3,4,5} element of array
// 20 size of array
// 5 length of array