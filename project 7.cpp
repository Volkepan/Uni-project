#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int n(5), m(2);
    double** M = new double* [n];
    double t(0), input, u, s;
       
    for (int i = 0; i < n; i++) {
        double* A = new double[m];
        cout << " Введите скорость на " << i + 1 << " промежутке : ";
        cin >> A[0]; 
        cout << " Введите путь на " << i + 1 << " промежутке :";
        cin >> A[1];
        M[i] = A;
        for (int j = 0; j < m; j++) {
            cout << *(M[i] + j) << '\t';
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        if ((*(M[i] + 1) > 0)&&(*M[i] > 0)) {
            t += *M[i] / *(M[i] + 1);
        }
        else {
            cout << "Incorrect Data" << endl
                 << "iteration :" << i << endl
                 << "incorrect vallue 1 :" << *M[i]<< endl
                 << "incorrect vallue 2 :" << *(M[i] + 1) << endl;
            break;
        }
        cout << "t :" << t << '\t' << endl;
    }
    cout << "total time :" << t << endl;

    for (int i = m; i > 0; --i) {
        delete[] M[i];
    }

    delete[]* M;
    M = NULL;
   
    return 0;
}
