#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1, Node* node1){
        data = data1;
        next = node1;
    }
};

int main(){
    int arr[] = {2,4,6,8,10};
    int a = 5;
    int* b = &a;
    Node x = Node(arr[1],nullptr);
    Node* y = &x;
    cout << y << endl;
    cout << x.data << endl;
    cout << x.next << endl;
    cout << &y << endl;
    cout << &x;
}