// todo.cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<string> tasks;
	string task;

	while (true) {
		cout << "Enter a task (or 'quit' to exit): ";
		getline(cin, task);

		if (task == "quit") {
			break;
		}

		tasks.push_back(task);
	}

	cout << "Your tasks:" << endl;
	for (const string& task : tasks) {
		cout << "- " << task << endl;
	}

	return 0;
}
