#include <iostream>

using namespace std;

struct node {
    int nrp;
    node* kiri;
    node* kanan;

    node(int val) : nrp(val), kiri(nullptr), kanan(nullptr) {}
};

node* urut(node* root, int val){
    if (root == nullptr){
        return new node(val);
    }

    if (val < root->nrp){
        root->kiri = urut(root->kiri, val);
    }else{
        root->kanan = urut(root->kanan, val);
    }

    return root;
}


void print(node* root){
    if (root == nullptr){
        return;
    }
    print(root->kiri);
    cout << root->nrp << " ";
    print(root->kanan);
}

int main(){
    int nrp;
    node* pohon=nullptr;
    while (cin >> nrp){
        pohon = urut(pohon, nrp);
    }
    print(pohon);
    return 0;
}


