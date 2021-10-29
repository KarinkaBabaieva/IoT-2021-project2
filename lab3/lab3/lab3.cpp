#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

void Transp(int** A, int m)
{
    for (int i = 0; i < m; i++)
        for (int j = i; j < m; j++)
        {
            int tmp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = tmp;
        }
}

int main()
{
    int i, j, m = 0;
    cout << "Vvedit rozmir matrici -> ";
    cin >> m;

    int** A = new int* [m];
    for (i = 0; i < m; i++) A[i] = new int[m];

    srand(time(0));
    for (i = 0; i < m; i++)
        for (j = 0; j < m; j++)
            A[i][j] = rand() % 90 + 10;


    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout.width(3);
            cout << A[i][j];
        }
        cout << endl;
    }

    Transp(A, m);

    cout << endl;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout.width(3);
            cout << A[i][j];
        }
        cout << endl;
    }

    return 0;
}