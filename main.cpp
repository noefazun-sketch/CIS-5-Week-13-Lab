#include <iostream>
#include <string>

// Lab 13 — Noe Zuniga
// CIS 5 Week 13 · Names and a roster

struct Student {
  std::string name;
  int id;
  double gpa;
};

void printStudent(const Student& s) {
  std::cout << s.id << " " << s.name << " " << s.gpa << "\n";
}

int main() {
  // Part 1: format a name
  std::string first, last;
  std::cout << "First: ";
  std::cin >> first;
  std::cout << "Last: ";
  std::cin >> last;

  std::string full = first + " " + last;

  std::cout << "Full name: " << full << "\n";
  std::cout << "Length: " << full.size() << "\n";

  // Part 2: a roster of three
  const int N = 3;
  Student roster[N] = {
    {"Ada", 1, 3.9}, {"Ben", 2, 2.7}, {"Cy", 3, 3.2}
  };

  std::cout << "All students:\n";

  for (int i = 0; i < N; i++) {
    printStudent(roster[i]);
  }

  std::cout << "Honors (gpa 3.0 or above):\n";

  int count = 0;

  for (int i = 0; i < N; i++) {
    if (roster[i].gpa >= 3.0) {
      printStudent(roster[i]);
      count++;
    }
  }

  std::cout << count << " of " << N << "\n";

  return 0;
}
