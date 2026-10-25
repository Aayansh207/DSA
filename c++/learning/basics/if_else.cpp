#include <iostream>

int main() {
    int score;
    std::cout << "Enter your test score (0-100): ";
    std::cin >> score;
    char grade;
    if (score >= 90 && score <= 100) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else if (score >= 0) {
        grade = 'F';
    } else {
        std::cerr << "Score can’t be negative!\n";
        return 1;
    }
    std::cout << "Grade: " << grade << "\n";
    switch (grade) {
        case 'A':
            std::cout << "Excellent work! 🏆\n";
            break;
        case 'B':
            std::cout << "Great job, keep pushing for the A.\n";
            break;
        case 'C':
            std::cout << "Good effort, but there’s room to improve.\n";
            break;
        case 'D':
            std::cout << "You passed, but consider more practice.\n";
            break;
        case 'F':
            std::cout << "Unfortunately you failed—review the material and try again.\n";
            break;
        default:
            std::cout << "Unknown grade encountered.\n";
    }
    return 0;
}