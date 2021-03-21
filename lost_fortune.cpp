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
	cout << "Добро пожаловать в Lost Fortune\n\n";
	cout << "Пожалуйста, введите количество ваших попутчиков: ";

	cin >> adventurers;

	cout << "Введите любое целое число меньше первого: ";
	cin >> killed;

	survivors = adventurers - killed;

	cout << "Введите вашу фамилию (на английском): ";
	cin >> leader;

	// tell the story
	cout << "\nОтважная группа из " << adventurers << " человек(а) отправилась на ";
	cout << "поиски потерянного сокровища Древних гномов. ";
	cout << "Группу возглавил легендарный путешественник, " << leader << ".\n";

	cout << "\nПо пути группа огров грабителей устроила засаду на отряд. ";
	cout << "Все храбро сражались под командованием " << leader;
	cout << ", и огры были побеждены, но дорогой ценой. ";
	cout << "Из авантюристов, " << killed << " погиб(ли), ";
	cout << "осталось только " << survivors << " человек(а) в группе.\n";

	cout << "\nОтряд потерял всякую надежду. ";
	cout << "Но, хороня покойного(ых), ";
	cout << "они наткнулись на закопанный клад. ";
	cout << "Итак, авантюристы разделили " << GOLD_PIECES << " золотых. ";
	cout << leader << " оставил лишние " << (GOLD_PIECES % survivors);
	cout << " золотых в могиле, чтобы все было по-честному.\n";

	return 0;
}