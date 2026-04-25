//# include<iostream >
//using namespace std;
//class TTT {
//	char** ptr;
//	char A;
//	char B;
//public:
//	TTT() {
//		cout << "\nConstructor has been called  \n";
//		ptr = new char * [3];
//		for (int i = 0; i < 3; i++)
//		{
//			ptr[i] = new char[3];
//		}
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				ptr[i][j] = 'N';
//			}
//
//		}
//		cout << "\nThis is the Tic Tac Toe Board (N means NILL) : ";
//		cout << endl;
//		this->print();
//		this->set();
//	}
//	~TTT() {
//		for (int i = 0; i < 3; i++)
//		{
//			delete[] ptr[i];
//		}
//		delete[] ptr;
//	}
//	void set() {
//		for (int i = 1; i <= 9; i++)
//		{
//			if (i % 2 == 0)
//			{
//				setB();
//			}
//			if(i%2!=0) {
//				setA();
//			}
//		}
//	}
//	void setA() {
//		cout << "\nPlayer A's turn (type x (Big ONe )) : ";
//		cout << endl;
//		check();
//		print();
//		cout << "\nAt which index(0 - 8) you want to enter the value : \n ";
//		int index = 0;
//		line:cin >> index;
//		cout << "Enter the value (X): ";
//		if (index == 0) {
//			cin >> A;
//			if(ptr[0][0]=='N')
//			ptr[0][0] = A;
//			else
//			{
//				cout << "\nIndex is full . Enter again : ";
//				goto line;
//			}
//		}
//		if (index == 1) {
//			cin >> A;
//			if (ptr[0][1] == 'N' )
//				ptr[0][1] = A;
//			else
//			{
//				cout << "\nIndex is full . Enter again : ";
//				goto line;
//			}
//		}
//		if (index == 2) {
//			cin >> A;
//			if (ptr[0][2] == 'N')
//				ptr[0][2] = A;
//			else
//			{
//				cout << "\nIndex is full . Enter again : ";
//				goto line;
//			}
//		}
//		if (index == 3) {
//			cin >> A;
//			if (ptr[1][0] == 'N')
//				ptr[1][0] = A;
//			else
//			{
//				cout << "\nIndex is full . Enter again : ";
//				goto line;
//			}
//		}
//		if (index == 4) {
//			cin >> A;
//			if (ptr[1][1] == 'N')
//				ptr[1][1] = A;
//			else
//			{
//				cout << "\nIndex is full . Enter again : ";
//				goto line;
//			}
//		}
//		if (index == 5) {
//			cin >> A;
//			if (ptr[1][2] == 'N' )
//				ptr[1][2] = A;
//			else
//			{
//				cout << "\nIndex is full . Enter again : ";
//				goto line;
//			}
//		}
//		if (index == 6) {
//			cin >> A;
//			if (ptr[2][0] == 'N')
//				ptr[2][0] = A;
//			else
//			{
//				cout << "\nIndex is full . Enter again : ";
//				goto line;
//			}
//		}
//		if (index == 7) {
//			cin >> A;
//			if (ptr[2][1] == 'N' )
//				ptr[2][1] = A;
//			else
//			{
//				cout << "\nIndex is full . Enter again : ";
//				goto line;
//			}
//		}
//		if (index == 8) {
//			cin >> A;
//			if (ptr[2][2] == 'N')
//				ptr[2][2] = A;
//			else
//			{
//				cout << "\nIndex is full . Enter again : ";
//				goto line;
//			}
//		}
//		
//
//	}
//	void setB() {
//		cout << "\nPlayer B's turn (type O (Big ONe )) : ";
//		cout << endl;
//		check();
//		print();
//		cout << "\nAt which index (0-8) you want to enter the value  : \n ";
//		int index = 0;
//	line:cin >> index;
//		cout << "\nEnter the value (O): ";
//		if (index == 0) {
//			cin >> B;
//			if (ptr[0][0] == 'N')
//				ptr[0][0] = B;
//			else
//			{
//				cout << "\nIndex is full . Enter again : ";
//				goto line;
//			}
//		}
//		if (index == 1) {
//			cin >> B;
//			if (ptr[0][1] == 'N')
//				ptr[0][1] = B;
//			else
//			{
//				cout << "\nIndex is full . Enter again : ";
//				goto line;
//			}
//		}
//		if (index == 2) {
//			cin >> B;
//			if (ptr[0][2] == 'N')
//				ptr[0][2] = B;
//			else
//			{
//				cout << "\nIndex is full . Enter again : ";
//				goto line;
//			}
//		}
//		if (index == 3) {
//			cin >> B;
//			if (ptr[1][0] == 'N')
//				ptr[1][0] = B;
//			else
//			{
//				cout << "\nIndex is full . Enter again : ";
//				goto line;
//			}
//		}
//		if (index == 4) {
//			cin >> B;
//			if (ptr[1][1] == 'N')
//				ptr[1][1] = B;
//			else
//			{
//				cout << "\nIndex is full . Enter again : ";
//				goto line;
//			}
//		}
//		if (index == 5) {
//			cin >> B;
//			if (ptr[1][2] == 'N')
//				ptr[1][2] = B;
//			else
//			{
//				cout << "\nIndex is full . Enter again : ";
//				goto line;
//			}
//		}
//		if (index == 6) {
//			cin >> B;
//			if (ptr[2][0] == 'N')
//				ptr[2][0] = B;
//			else
//			{
//				cout << "\nIndex is full . Enter again : ";
//				goto line;
//			}
//		}
//		if (index == 7) {
//			cin >> B;
//			if (ptr[2][1] == 'N')
//				ptr[2][1] = B;
//			else
//			{
//				cout << "\nIndex is full . Enter again : ";
//				goto line;
//			}
//		}
//		if (index == 8) {
//			cin >> B;
//			if (ptr[2][2] == 'N')
//				ptr[2][2] = B;
//			else
//			{
//				cout << "\nIndex is full . Enter again : ";
//				goto line;
//			}
//		}
//
//
//	}
//	void print() {
//		for (int i = 0; i < 5; i++)
//		{
//			cout << "-" << " ";
//		}
//		cout << endl;
//		for (int i = 0; i < 3; i++)
//		{
//			cout << "- ";
//			for (int j = 0; j < 3; j++)
//			{
//				cout << ptr[i][j]<<" ";
//			}
//			cout << "- " << endl;
//		}
//		for (int i = 0; i < 5; i++)
//		{
//			cout << "-" << " ";
//		}
//	}
//	void check() {
//		
//		
//		for (int i = 0; i < 3; i++)
//		{
//			// rows 
//			if (ptr[i][0] == ptr[i][1] && ptr[i][1] == ptr[i][2])
//			{
//				if (ptr[i][0] == 'X')
//				{
//					cout << "Player A won !\n";
//					exit(0);
//				}
//				if (ptr[i][0] == 'O')
//				{
//					cout << "Player B won !\n";
//					exit(0);
//				}
//
//			}
//			
//			
//			for (int j = 0; j < 3; j++)
//			{
//             //Diagonal
//				if (ptr[0][0]==ptr[1][1]&&ptr[1][1]==ptr[2][2]&&ptr[0][0]!='N')
//				{
//					if (ptr[i][i] == 'X')
//					{
//						cout << "Player A won !\n";
//						exit(0);
//					}
//					if (ptr[i][i] == 'O')
//					{
//						cout << "Player B won !\n";
//						exit(0);
//					}
//
//				}
//				// columns 
//				if (ptr[0][j] == ptr[1][j] && ptr[1][j] == ptr[2][j])
//				{
//					if (ptr[0][j] == 'X')
//					{
//						cout << "Player A won !\n";
//						exit(0);
//					}
//					if (ptr[0][j] == 'O')
//					{
//						cout << "Player B won !\n";
//						exit(0);
//					}
//
//				}
//				//Semi-diagonal
//				
//				if (ptr[0][2] == ptr[1][1] && ptr[1][1] == ptr[2][0] && ptr[0][2]!='N')
//				{
//					if (ptr[0][2] == 'X')
//					{
//						cout << "Player A won !\n";
//						exit(0);
//					}
//					if (ptr[0][2] == 'O')
//					{
//						cout << "Player B won !\n";
//						exit(0);
//					}
//				}
//
//			}
//		}
//		
//	}
//	
//};
//int main() {
//	TTT tic;
//	
//	system("pause");
//	return 0;
//}