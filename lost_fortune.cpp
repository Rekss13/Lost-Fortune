// Lost Fortune
// A personalized adventure

#include <iostream>
#include <string>
#include <clocale>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;

	// get the information
	setlocale(LC_CTYPE, "rus");
	cout << "����� ���������� � Lost Fortune\n\n";
	cout << "����������, ������� ���������� ����� ����������: ";

	cin >> adventurers;

	cout << "������� ����� ����� ����� ������ �������: ";
	cin >> killed;

	survivors = adventurers - killed;

	cout << "������� ���� ������� (�� ����������): ";
	cin >> leader;

	// tell the story
	cout << "\n�������� ������ �� " << adventurers << " �������(�) ����������� �� " << endl;
	cout << "������ ����������� ��������� ������� ������." << endl;
	cout << "������ ��������� ����������� ��������������, " << leader << ".\n";

	cout << "\n�� ���� ������ ����� ���������� �������� ������ �� �����." << endl;
	cout << "��� ������ ��������� ��� ������������� " << leader << "," << endl;
	cout << "� ���� ���� ���������, �� ������� �����." << endl;
	cout << "�� ������������, " << killed << " �����(��)," << endl;
	cout << "�������� ������ " << survivors << " �������(�) � ������.\n";

	cout << "\n����� ������� ������ �������." << endl;
	cout << "��, ������ ���������(��)," << endl;
	cout << "��� ���������� �� ���������� ����." << endl;
	cout << "����, ����������� ��������� " << GOLD_PIECES << " �������." << endl;
	cout << leader << " ������� ������ " << (GOLD_PIECES % survivors) << endl;
	cout << " ������� � ������, ����� ��� ���� ��-��������.\n";

	return 0;
}