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

	cout << "Введите вашу фамилию (на английском): ";
	cin >> leader;

	// tell the story
	survivors = adventurers - killed;
	cout << "\nОтважная группа из " << adventurers + 1 << " человек(а) отправилась на " << endl;
	cout << "поиски потерянного сокровища Древних гномов." << endl;
	cout << "Группу возглавил легендарный путешественник, " << leader << ".\n";

	cout << "\nДля продолжения нажмите любую клавишу и затем Enter" << endl;
	char key;
	cin >> key;

	cout << "\nПо пути группа огров-грабителей устроила засаду на отряд." << endl;
	cout << "Все храбро сражались под командованием " << leader << "," << endl;
	cout << "и огры были побеждены, но дорогой ценой." << endl;
	cout << "Из авантюристов, " << killed << " погиб(ли)," << endl;
	cout << "в группе осталось только " << survivors + 1 << " человек(а).\n";

	cout << "\nДля продолжения нажмите любую клавишу и затем Enter" << endl;
	cin >> key;

	cout << "\nОтряд потерял всякую надежду." << endl;
	cout << "Но, хороня покойного(ых)," << endl;
	cout << "они наткнулись на закопанный клад." << endl;
	cout << "Итак, авантюристы разделили найденные " << GOLD_PIECES << " золотых." << endl;
	cout << leader << " оставил лишние " << GOLD_PIECES % (survivors + 1) << " золотых в могиле," << endl;
	cout << "чтобы все было по-честному.\n";

	return 0;
}