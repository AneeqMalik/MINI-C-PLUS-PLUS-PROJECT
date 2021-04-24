#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Player
{
	public:
		Player() {
			cout << "Enter Name : ";
			cin.getline(name, 50);
			cout << "Enter Team Name : ";
			cin.getline(team, 50);
			cout << "Enter Age : ";
			cin >> age;
			
		}
		void input() {
			cout << "Enter The Name: " << endl;
			cin >> name;
			cout << "Enter the Team: " << endl;
			cin >> team;
			cout << "Enter the Age: " << endl;
			cin >> age;
			system("pause");
		}
		void display() {
			cout << "Name is: " << name << endl;
			cout << "Team is: " << team << endl;
			cout << "Age is: " << age << endl;
			system("pause");
		}
		/*void change(char n[50], char t[50], int a) {
			strcpy(name, n);
			strcpy(team, t);
			age = a;
		}*/
	
	private:
		int age;
		char name[50], team[50];
};
int main() {
	Player P;
	int choice;
	do {
		system("cls");
		cout << "--------------------MAIN MENU------------------" << endl;
		cout << "1:-   Input Details" << endl;
		cout << "2:-   Display Details" << endl;
		cout << "3:-   Change Details" << endl;
		cout << "4:-     Exit" << endl;
		cout << "Enter the Choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			P.input();
			break;
		case 2:
			P.display();
			break;
		case 3:
			/// <summary>
			/// 
			/// </summary>
			/// <returns></returns>
			break;
		case 4:
			exit(1);
			break;
		default:
			cout << "You Have Entered Invalid Choice..........." << endl;
		}
	} 	while (1);
}