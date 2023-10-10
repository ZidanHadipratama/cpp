#include <iostream>
#include <string>

using namespace std;

struct node
{
    int ang;
    node *kiri;
    node *kanan;

    node(int val) : ang(val), kiri(nullptr), kanan(nullptr) {}
};

node *urut(node *root, int val)
{
    if (root == nullptr)
    {
        return new node(val);
    }

    if (val < root->ang)
    {
        root->kiri = urut(root->kiri, val);
    }
    else
    {
        root->kanan = urut(root->kanan, val);
    }

    return root;
}

void print(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    if (root->kiri == nullptr && root->kanan == nullptr)
    {
        cout << root->ang << " ";
    };
    print(root->kiri);
    print(root->kanan);
}

int main()
{
    int nrp;
    int bnyk;
    node *pohon = nullptr;

    cin >> bnyk; 

    int i = 0;

    while (cin >> nrp)
    {
        if (i >= bnyk)
        {
            cout << "Bang udah bang.";
            return 0;
        }
        pohon = urut(pohon, nrp);
        i++;
    }
    print(pohon);
    return 0;
}
