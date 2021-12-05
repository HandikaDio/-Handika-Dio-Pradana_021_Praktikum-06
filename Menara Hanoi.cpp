#include <bits/stdc++.h>
using namespace std;
void menaraHanoi(int n, char dari_pasak, char ke_pasak, char tambah_pasak) 
{ 
    if (n == 1) 
    { 
        cout << "Pindahkan disc 1 dari pasak " << dari_pasak <<" ke pasak " << ke_pasak<<endl; 
        return; 
    } 
        menaraHanoi(n - 1, dari_pasak, tambah_pasak, ke_pasak); 
        cout << "Pindahkan disc " << n << " dari pasak " << dari_pasak <<" ke pasak " << ke_pasak << endl; 
        menaraHanoi(n - 1, tambah_pasak, ke_pasak, dari_pasak); 
} 

int main() 
{ 
    int n; 
    cout <<"Jumlah disk : ";
    cin >> n;
    cout << "Langkah-langkah nya adalah dengan :"  <<endl;
    menaraHanoi(n, 'A', 'C', 'B'); 
    return 0; 
}
