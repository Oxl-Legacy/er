/**
 * Topic: Matrix Multiplication using 2D Vector
 * Language: C++
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // --- Step 1: Input for First Matrix (A) ---
    int r1, c1;
    cout << "Enter rows and columns for Matrix A: ";
    cin >> r1 >> c1;

    // Declaring 2D Vector A with size r1 x c1
    vector<vector<int>> A(r1, vector<int>(c1));

    cout << "Enter elements for Matrix A:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    // --- Step 2: Input for Second Matrix (B) ---
    int r2, c2;
    cout << "Enter rows and columns for Matrix B: ";
    cin >> r2 >> c2;

    // Declaring 2D Vector B with size r2 x c2
    vector<vector<int>> B(r2, vector<int>(c2));

    cout << "Enter elements for Matrix B:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    // --- Step 3: Validation Check ---
    // Multiplication is only possible if (Column of A == Row of B)
    if (c1 != r2) {
        cout << "\nError: Matrix multiplication not possible!" << endl;
        cout << "Condition: Columns of Matrix A must equal Rows of Matrix B." << endl;
        return 0;
    }

    // --- Step 4: Multiplication Logic ---
    // Result matrix will have dimensions: (Row of A) x (Column of B)
    vector<vector<int>> Result(r1, vector<int>(c2, 0)); // Initializing with 0

    for (int i = 0; i < r1; i++) {          // Iterate over rows of A
        for (int j = 0; j < c2; j++) {      // Iterate over columns of B
            for (int k = 0; k < c1; k++) {  // Common dimension
                Result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // --- Step 5: Displaying the Output ---
    cout << "\nResultant Matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << Result[i][j] << " ";
        }
        cout << endl; // Newline after each row
    }

    return 0;



Enter rows and columns for Matrix A: 2 2
Enter elements for Matrix A:
1 2
3 4
Enter rows and columns for Matrix B: 2 2
Enter elements for Matrix B:
5 6
7 8


Resultant Matrix:
19 22 
43 50



}
