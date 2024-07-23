/*A paper consists of 4 authors, but one author didn't do any work but he wants to put his name in this paper. But others are not interested at the same time they want to add another author as a 5th author. How to identify the Not worked for paper. 
Write a C++ code for the above scenario.*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Author class
class Author {
private:
    string name;
    bool contributed;

public:
    Author(string n, bool c) : name(n), contributed(c) {}

    string getName() const {
        return name;
    }

    bool hasContributed() const {
        return contributed;
    }
};

int main() {
    vector<Author> authors;

    // Input authors
    authors.push_back(Author("Alice", true));
    authors.push_back(Author("Bob", true));
    authors.push_back(Author("Charlie", false)); // Not contributed
    authors.push_back(Author("David", true));

    // Check for the author who did not contribute
    cout << "Authors who did not contribute:\n";
    for (size_t i = 0; i < authors.size(); ++i) {
        if (!authors[i].hasContributed()) {
            cout << authors[i].getName() << " did not contribute to the paper.\n";
        }
    }

    // Add a new author (5th author) if needed
    cout << "Do you want to add a new author? (yes/no): ";
    string response;
    cin >> response;

    if (response == "yes") {
        string newAuthorName;
        cout << "Enter the name of the new author: ";
        cin.ignore(); // Ignore any newline character left in the input buffer
        getline(cin, newAuthorName);
        authors.push_back(Author(newAuthorName, true)); // Assume new author contributed
        cout << newAuthorName << " has been added as the 5th author.\n";
    }

    return 0;
}

