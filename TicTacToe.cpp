#include<iostream>
#include<windows.h>
using namespace std;

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

class TTT {
    char** ptr;
    char A;
    char B;
public:
    TTT() {
        setColor(11); // Cyan
        cout << "\nConstructor has been called  \n";
        ptr = new char* [3];
        for (int i = 0; i < 3; i++)
            ptr[i] = new char[3];
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                ptr[i][j] = 'N';

        setColor(14); // Yellow
        cout << "\nThis is the Tic Tac Toe Board (N means NILL) : ";
        cout << endl;
        this->print();
        this->set();
    }
    ~TTT() {
        for (int i = 0; i < 3; i++)
            delete[] ptr[i];
        delete[] ptr;
    }
    void set() {
        for (int i = 1; i <= 9; i++) {
            if (i % 2 == 0) setB();
            if (i % 2 != 0) setA();
        }
    }
    void setA() {
        setColor(10); // Green for Player A
        cout << "\nPlayer A's turn (type X (Big One)) : ";
        cout << endl;
        check();
        print();
        cout << "\nAt which index(0 - 8) you want to enter the value : \n ";
        int index = 0;
    line:cin >> index;
        cout << "Enter the value (X): ";
        int row = index / 3, col = index % 3;
        if (index >= 0 && index <= 8) {
            cin >> A;
            if (ptr[row][col] == 'N')
                ptr[row][col] = A;
            else {
                setColor(12); // Red for error
                cout << "\nIndex is full. Enter again : ";
                setColor(10);
                goto line;
            }
        }
    }
    void setB() {
        setColor(13); // Magenta for Player B
        cout << "\nPlayer B's turn (type O (Big One)) : ";
        cout << endl;
        check();
        print();
        cout << "\nAt which index (0-8) you want to enter the value : \n ";
        int index = 0;
    line:cin >> index;
        cout << "\nEnter the value (O): ";
        int row = index / 3, col = index % 3;
        if (index >= 0 && index <= 8) {
            cin >> B;
            if (ptr[row][col] == 'N')
                ptr[row][col] = B;
            else {
                setColor(12); // Red for error
                cout << "\nIndex is full. Enter again : ";
                setColor(13);
                goto line;
            }
        }
    }
    void print() {
        setColor(14); // Yellow for board border
        for (int i = 0; i < 5; i++) cout << "- ";
        cout << endl;
        for (int i = 0; i < 3; i++) {
            setColor(14);
            cout << "- ";
            for (int j = 0; j < 3; j++) {
                if (ptr[i][j] == 'X')
                    setColor(10); // Green for X
                else if (ptr[i][j] == 'O')
                    setColor(13); // Magenta for O
                else
                    setColor(7); // White for N
                cout << ptr[i][j] << " ";
            }
            setColor(14);
            cout << "- " << endl;
        }
        for (int i = 0; i < 5; i++) cout << "- ";
        setColor(7); // Reset
        cout << endl;
    }
    void check() {
        for (int i = 0; i < 3; i++) {
            if (ptr[i][0] == ptr[i][1] && ptr[i][1] == ptr[i][2]) {
                if (ptr[i][0] == 'X') { setColor(10); cout << "Player A won !\n"; setColor(7); exit(0); }
                if (ptr[i][0] == 'O') { setColor(13); cout << "Player B won !\n"; setColor(7); exit(0); }
            }
            for (int j = 0; j < 3; j++) {
                if (ptr[0][0] == ptr[1][1] && ptr[1][1] == ptr[2][2] && ptr[0][0] != 'N') {
                    if (ptr[i][i] == 'X') { setColor(10); cout << "Player A won !\n"; setColor(7); exit(0); }
                    if (ptr[i][i] == 'O') { setColor(13); cout << "Player B won !\n"; setColor(7); exit(0); }
                }
                if (ptr[0][j] == ptr[1][j] && ptr[1][j] == ptr[2][j]) {
                    if (ptr[0][j] == 'X') { setColor(10); cout << "Player A won !\n"; setColor(7); exit(0); }
                    if (ptr[0][j] == 'O') { setColor(13); cout << "Player B won !\n"; setColor(7); exit(0); }
                }
                if (ptr[0][2] == ptr[1][1] && ptr[1][1] == ptr[2][0] && ptr[0][2] != 'N') {
                    if (ptr[0][2] == 'X') { setColor(10); cout << "Player A won !\n"; setColor(7); exit(0); }
                    if (ptr[0][2] == 'O') { setColor(13); cout << "Player B won !\n"; setColor(7); exit(0); }
                }
            }
        }
    }
};

int main() {
    TTT tic;
    system("pause");
    return 0;
}
