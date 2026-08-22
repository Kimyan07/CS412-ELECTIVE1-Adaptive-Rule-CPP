#include <iostream>
#include <string>

using namespace std;

/*
    ELECTIVE 1 - Building a Simple Adaptive Rule
    Application Domain: E-Learning

    This console program demonstrates two simple if-then adaptive rules.
    The system observes student behavior and adapts the study recommendations.

    Rule 1:
    If the student searches for past exams 3 or more times
    -> Then the system prioritizes exam-preparation resources.

    Rule 2:
    If the student attempts a quiz on the same topic 2 or more times
    and the latest score is below 70%
    -> Then the system recommends reviewing the topic before trying
       another practice quiz.

    These rules are based on the user-modeling idea that systems can use
    observable behavior to infer goals or learning needs and then adapt
    their responses.
*/

int main() {
    cout << "=============================================\n";
    cout << "      E-Learning Adaptive Study Assistant\n";
    cout << "=============================================\n\n";

    int pastExamSearches;
    int quizAttempts;
    double latestQuizScore;
    string topic;

    cout << "Enter the number of times you searched for past exams: ";
    cin >> pastExamSearches;

    cout << "Enter the number of quiz attempts for one topic: ";
    cin >> quizAttempts;

    cout << "Enter your latest quiz score (0-100): ";
    cin >> latestQuizScore;

    cout << "Enter the topic you are studying: ";
    cin >> topic;

    cout << "\n--------------- Adaptive Results ---------------\n";

    bool rule1Triggered = false;
    bool rule2Triggered = false;

    // Rule 1: Detect repeated interest in past exams.
    if (pastExamSearches >= 3) {
        rule1Triggered = true;

        cout << "\nRule 1 Triggered:\n";
        cout << "You have searched for past exams several times.\n";
        cout << "Adaptive Action: Prioritizing exam-preparation resources "
             << "and past-exam materials.\n";
    }

    // Rule 2: Detect repeated quiz attempts with a low latest score.
    if (quizAttempts >= 2 && latestQuizScore < 70) {
        rule2Triggered = true;

        cout << "\nRule 2 Triggered:\n";
        cout << "You have attempted the " << topic
             << " quiz multiple times and your latest score is below 70%.\n";
        cout << "Adaptive Action: Recommending a review of " << topic
             << " before another practice quiz.\n";
    }

    if (!rule1Triggered && !rule2Triggered) {
        cout << "\nNo adaptive rule was triggered.\n";
        cout << "Keep studying and continue interacting with the platform.\n";
    }

    cout << "\n-----------------------------------------------\n";
    cout << "Personalized study recommendations generated.\n";

    return 0;
}
