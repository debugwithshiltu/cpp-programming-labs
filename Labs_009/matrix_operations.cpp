#include <iostream>
#include <string>
#include <cstdlib> // Required for system("cls") and system("color")

using namespace std;

// Forward declarations of functions
int main();
void read_display();
void transpose();
void sum_matrices();
void product();
void main_menu_view();

void read_display()
{
    system("cls");
    cout << "\t\tREAD AND DISPLAY\n";
    cout << "Please input information about 2D array: " << endl;
    int row_input, col_input;
    cout << "Rows (max 5): ";
    cin >> row_input;
    cout << "Columns (max 5): ";
    cin >> col_input;
    int a[5][5];
    
    if (row_input > 0 && row_input <= 5 && col_input > 0 && col_input <= 5)
    {
        cout << "Now input elements of Matrix: \n";
        for (int row = 0; row < row_input; row++)
        {
            for (int col = 0; col < col_input; col++)
            {
                cin >> a[row][col];
            }
        }
        cout << "\nResult: \n";
        for (int row = 0; row < row_input; row++)
        {
            for (int col = 0; col < col_input; col++)
            {
                cout << a[row][col] << "  ";
            }
            cout << endl;
        }
        cout << endl;
        cout << "Do you want to try again? (Yes = 1, No = Any Key)\n";
        string respond;
        cout << "Your choice: ";
        cin >> respond;
        if (respond == "1")
        {
            read_display();
        }
        else
        {
            system("cls");
            main();
        }
    }
    else
    {
        system("cls");
        cout << "Please input valid numbers from 1 to 5 ! " << endl;
        system("pause"); 
        read_display();
    }
}

void transpose()
{
    system("cls");
    cout << "\t\tTRANSPOSE OF MATRIX\n";
    int a[5][5], trans[5][5], r, c, i, j;
    cout << "Please input information about 2D array: " << endl;
    cout << "Rows (max 5): ";
    cin >> r;
    cout << "Columns (max 5): ";
    cin >> c;
    
    if (r > 0 && r <= 5 && c > 0 && c <= 5)
    {
        cout << "Enter elements of matrix: " << endl;
        for (i = 0; i < r; ++i)
        {
            for (j = 0; j < c; ++j)
            {
                cin >> a[i][j];
            }
        }
            
        cout << "\nEntered Matrix: " << endl;
        for (i = 0; i < r; ++i)
        {
            for (j = 0; j < c; ++j)
            {
                cout << " " << a[i][j];
            }
            cout << endl;
        }
        
        // Finding transpose of matrix
        for (i = 0; i < r; ++i)
        {
            for (j = 0; j < c; ++j)
            {
                trans[j][i] = a[i][j];
            }
        }
            
        cout << "\nTranspose of Matrix: " << endl;
        for (i = 0; i < c; ++i)
        {
            for (j = 0; j < r; ++j)
            {
                cout << " " << trans[i][j];
            }
            cout << endl;
        }
        cout << endl;
        cout << "Do you want to try again? (Yes = 1, No = Any Key)\n";
        string respond;
        cout << "Your choice: ";
        cin >> respond;
        if (respond == "1")
        {
            transpose();
        }
        else
        {
            system("cls");
            main();
        }
    }
    else
    {
        system("cls");
        cout << "Please input valid numbers from 1 to 5 ! " << endl;
        system("pause");
        transpose();
    }
}

void sum_matrices()
{
    system("cls");
    cout << "\t\tSUM TWO MATRICES\n";
    cout << "\tNOTE: Rows 1 = Rows 2 && Columns 1 = Columns 2\n";
    cout << "Please input details for the First Matrix: \n";
    int row_input, col_input;
    cout << "Rows (max 5): ";
    cin >> row_input;
    cout << "Columns (max 5): ";
    cin >> col_input;
    int a[5][5];
    
    if (row_input > 0 && row_input <= 5 && col_input > 0 && col_input <= 5)
    {
        cout << "Now input elements of First Matrix: ";
        for (int row = 0; row < row_input; row++)
        {
            for (int col = 0; col < col_input; col++)
            {
                cin >> a[row][col];
            }
        }
        cout << "First Matrix: \n";
        for (int row = 0; row < row_input; row++)
        {
            for (int col = 0; col < col_input; col++)
            {
                cout << a[row][col] << "  ";
            }
            cout << endl;
        }
    }
    else
    {
        system("cls");
        cout << "Please input valid numbers from 1 to 5 ! " << endl;
        system("pause");
        sum_matrices();
        return;
    }
    
    cout << endl;
    cout << "Please input details for the Second Matrix: \n";
    int row_input2, col_input2;
    cout << "Rows (max 5): ";
    cin >> row_input2;
    cout << "Columns (max 5): ";
    cin >> col_input2;
    int b[5][5];
    
    if (row_input2 > 0 && row_input2 <= 5 && col_input2 > 0 && col_input2 <= 5)
    {
        cout << "Now input elements of Second Matrix: ";
        for (int row = 0; row < row_input2; row++)
        {
            for (int col = 0; col < col_input2; col++)
            {
                cin >> b[row][col];
            }
        }
        cout << "Second Matrix: \n";
        for (int row = 0; row < row_input2; row++)
        {
            for (int col = 0; col < col_input2; col++)
            {
                cout << b[row][col] << "  ";
            }
            cout << endl;
        }
    }
    else
    {
        system("cls");
        cout << "Please input valid numbers from 1 to 5 ! " << endl;
        system("pause");
        sum_matrices();
        return;
    }
    
    int sum[5][5];
    if (row_input == row_input2 && col_input == col_input2)
    {
        for (int row = 0; row < row_input; row++)
        {
            for (int col = 0; col < col_input; col++)
            {
                sum[row][col] = a[row][col] + b[row][col];
            }
        }
        cout << endl << "Sum of two matrices is: " << endl;
        for (int row = 0; row < row_input; row++)
        {
            for (int col = 0; col < col_input; col++)
            {
                cout << sum[row][col] << "  ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << endl;
        cout << "These Matrices cannot be added due to dimension mismatch.";
    }
    
    cout << endl;
    cout << "Do you want to try again? (Yes = 1, No = Any Key)\n";
    string respond;
    cout << "Your choice: ";
    cin >> respond;
    if (respond == "1")
    {
        sum_matrices();
    }
    else
    {
        system("cls");
        main();
    }
}

void product()
{
    system("cls");
    cout << "\t\tMULTIPLY TWO MATRICES\n";
    cout << "\tNOTE: Columns 1 must equal Rows 2 \n";
    cout << "Please input details for the First Matrix: \n";
    int row_input, col_input;
    cout << "Rows (max 5): ";
    cin >> row_input;
    cout << "Columns (max 5): ";
    cin >> col_input;
    int a[5][5];
    
    if (row_input > 0 && row_input <= 5 && col_input > 0 && col_input <= 5)
    {
        cout << "Now input elements of First Matrix: ";
        for (int row = 0; row < row_input; row++)
        {
            for (int col = 0; col < col_input; col++)
            {
                cin >> a[row][col];
            }
        }
        cout << "First Matrix: \n";
        for (int row = 0; row < row_input; row++)
        {
            for (int col = 0; col < col_input; col++)
            {
                cout << a[row][col] << "  ";
            }
            cout << endl;
        }
    }
    else
    {
        system("cls");
        cout << "Please input valid numbers from 1 to 5 ! " << endl;
        system("pause");
        product();
        return;
    }
    
    cout << endl;
    cout << "Please input details for the Second Matrix: \n";
    int row_input2, col_input2;
    cout << "Rows (max 5): ";
    cin >> row_input2;
    cout << "Columns (max 5): ";
    cin >> col_input2;
    int b[5][5];
    
    if (row_input2 > 0 && row_input2 <= 5 && col_input2 > 0 && col_input2 <= 5)
    {
        cout << "Now input elements of Second Matrix: ";
        for (int row = 0; row < row_input2; row++)
        {
            for (int col = 0; col < col_input2; col++)
            {
                cin >> b[row][col];
            }
        }
        cout << "Second Matrix: \n";
        for (int row = 0; row < row_input2; row++)
        {
            for (int col = 0; col < col_input2; col++)
            {
                cout << b[row][col] << "  ";
            }
            cout << endl;
        }
    }
    else
    {
        system("cls");
        cout << "Please input valid numbers from 1 to 5 ! " << endl;
        system("pause");
        product();
        return;
    }
    
    int multi[5][5];
    if (col_input == row_input2)
    {
        // Initializing the multiplication matrix arrays to 0
        for (int row = 0; row < row_input; row++)
        {
            for (int col = 0; col < col_input2; col++)
            {
                multi[row][col] = 0;
            }
        }
        
        // Performing standard matrix multiplication calculation
        for (int row = 0; row < row_input; row++)
        {
            for (int col = 0; col < col_input2; col++)
            {
                for (int i = 0; i < col_input; i++)
                {
                    multi[row][col] += a[row][i] * b[i][col];
                }
            }
        }
        
        cout << endl;
        cout << "Result of Multiplication: \n";
        for (int row = 0; row < row_input; row++)
        {
            for (int col = 0; col < col_input2; col++)
            {
                cout << multi[row][col] << "  ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << endl;
        cout << "These Matrices cannot be multiplied (Dimension Mismatch).";
    }
    
    cout << endl;
    cout << "Do you want to try again? (Yes = 1, No = Any Key)\n";
    string respond;
    cout << "Your choice: ";
    cin >> respond;
    if (respond == "1")
    {
        product();
    }
    else
    {
        system("cls");
        main();
    }
}

void main_menu_view()
{
    system("color 3F");
    cout << "\t\t\t===============================\n";
    cout << "\t\t\t        M A I N   M E N U\n";
    cout << "\t\t\t===============================\n";
    cout << "\t\t\t[1] Read and Display Matrix\n";
    cout << "\t\t\t[2] Transpose\n";
    cout << "\t\t\t[3] Sum of two Matrices\n";
    cout << "\t\t\t[4] Product of two Matrices\n\n";
}

int main()
{
    main_menu_view();
    cout << "\t\t\tYOUR CHOICE: ";
    string user_choice;
    cin >> user_choice;
    
    if (user_choice == "1" || user_choice == "2" || user_choice == "3" || user_choice == "4")
    {
        if (user_choice == "1")
            read_display();
        else if (user_choice == "2")
            transpose();
        else if (user_choice == "3")
            sum_matrices();
        else if (user_choice == "4")
            product();
    }
    else
    {
        system("cls");
        cout << "\t\tYou have inputted wrong number, please try again!\n";
        system("pause");
        main();
    }

    return 0;
}

/*
Output

===============================
                                M A I N   M E N U
                        ===============================
                        [1] Read and Display Matrix
                        [2] Transpose
                        [3] Sum of two Matrices
                        [4] Product of two Matrices

                        YOUR CHOICE: 2



TRANSPOSE OF MATRIX
Please input information about 2D array: 
Rows (max 5): 2
Columns (max 5): 3
Enter elements of matrix: 
10 20 30
40 50 60

Entered Matrix: 
 10 20 30
 40 50 60

Transpose of Matrix: 
 10 40
 20 50
 30 60

Do you want to try again? (Yes = 1, No = Any Key)
Your choice: 0						


*/