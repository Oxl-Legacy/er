#include <iostream>
#include <vector>
using namespace std;

int main() {
    // --- পার্ট ১: ১ম ম্যাট্রিক্স (A) এর ইনপুট ---
    int r1, c1;
    cout << "Matrix A (Row Col): "; 
    cin >> r1 >> c1;
    
    // A ম্যাট্রিক্স তৈরি
    vector<vector<int>> A(r1, vector<int>(c1));
    cout << "Enter Matrix A values:\n";
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c1; j++) cin >> A[i][j];
    }

    // --- পার্ট ২: ২য় ম্যাট্রিক্স (B) এর ইনপুট ---
    int r2, c2;
    cout << "Matrix B (Row Col): "; 
    cin >> r2 >> c2;
    
    // B ম্যাট্রিক্স তৈরি
    vector<vector<int>> B(r2, vector<int>(c2));
    cout << "Enter Matrix B values:\n";
    for(int i=0; i<r2; i++) {
        for(int j=0; j<c2; j++) cin >> B[i][j];
    }

    // --- পার্ট ৩: গুণ করা (Logic) ---
    if(c1 != r2) {
        cout << "Gun kora shombhob na! (A er col != B er row)";
        return 0;
    }

    // রেজাল্ট ম্যাট্রিক্স (r1 x c2 সাইজের)
    vector<vector<int>> Result(r1, vector<int>(c2, 0));

    // মেইন গুণের কাজ
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++) {
            for(int k=0; k<c1; k++) {
                Result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // --- পার্ট ৪: রেজাল্ট দেখানো ---
    cout << "Result Matrix:\n";
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++) {
            cout << Result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
