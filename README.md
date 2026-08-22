# ELECTIVE 1 - Simple Adaptive Rule in C++

**Name:** ABULKHAIR, JOHANIE A.  
**Section:** CCS4D  
**Date:** AUGUST 24, 2026  

## Project Title

**E-Learning Adaptive Study Assistant**

## Application Domain

E-learning platform

## Description

This project is a simple console-based adaptive system written in **C++**. It demonstrates how an e-learning application can observe student behavior and use if-then rules to personalize recommendations.

The project follows the user-modeling concepts discussed in CS412 Module 1, particularly behavior-based and preference/goal-based modeling. The module explains that systems can collect observable actions such as clicks, navigation, quiz attempts, and other interaction data, then use those observations to adapt the user's experience.

## Adaptive Rules

### Rule 1

**If** the student searches for past exams 3 or more times  
**Then** the system prioritizes exam-preparation resources and past-exam materials.

**Why it improves personalization:**  
Repeated searches for past exams can indicate that the student is preparing for an upcoming test. Instead of showing only general learning materials, the system adapts by prioritizing resources that match the student's likely goal of test preparation. This is similar to the module's example of inferring a student's goal as "test preparation" when they repeatedly search for past exams.

### Rule 2

**If** the student attempts a quiz on the same topic at least 2 times and the latest score is below 70%  
**Then** the system recommends reviewing that topic before taking another practice quiz.

**Why it improves personalization:**  
Repeated attempts combined with a low score can indicate that the student needs additional support with the topic. The system responds by recommending review material rather than simply giving the same quiz again. This creates a more helpful learning path based on the student's observed behavior and performance.

## Required Logic Format

**Rule 1:** If [student searches for past exams 3 or more times] → Then [prioritize exam-preparation resources and past-exam materials].

**Rule 2:** If [student attempts a quiz at least 2 times and scores below 70%] → Then [recommend reviewing the topic before another practice quiz].

## How to Run the Program

### Requirements

- C++ compiler such as `g++`
- Visual Studio Code
- VS Code C/C++ extension is recommended

### Option 1: Using the VS Code Terminal

Open this project folder in VS Code.

Compile the program:

```bash
g++ main.cpp -o adaptive_rule
```

Run it on Windows:

```bash
.\adaptive_rule.exe
```

Run it on macOS/Linux:

```bash
./adaptive_rule
```

### Option 2: Using VS Code Run/Debug

1. Open `main.cpp` in VS Code.
2. Make sure a C++ compiler is installed.
3. Click the Run/Debug button.
4. Follow the prompts in the terminal.

## Example Test

Try these inputs:

```text
Enter the number of times you searched for past exams: 4
Enter the number of quiz attempts for one topic: 3
Enter your latest quiz score (0-100): 65
Enter the topic you are studying: UserModeling
```

The system should trigger both adaptive rules.

## Expected Result

The program should recommend:

1. Exam-preparation resources and past-exam materials.
2. Reviewing the selected topic before taking another practice quiz.

## Project Structure

```text
ELECTIVE1_AdaptiveRule_CPP/
├── main.cpp
├── README.md
└── .gitignore
```

## GitHub Submission

Create a GitHub repository and upload the complete project folder.

Suggested repository name:

`CS412-ELECTIVE1-Adaptive-Rule-CPP`

After uploading, make sure the repository is accessible to your instructor. Submit the GitHub repository link through Google Classroom.

## Academic Basis

The rules are designed using concepts from **CS412 Module 1: Introducing User Modelling**, including behavior-based user models, observable user actions, goal/intent inference, and adaptation.

The module explains that behavior-based models can use actions such as clicks, navigation, and quiz-related activity to infer user characteristics or needs. It also gives the example that repeated searches for "past exams" can indicate a student's goal of test preparation.

## Notes

This project intentionally uses a console interface because the assignment states that a UI is optional. The focus is on demonstrating accurate, relevant, and understandable adaptive rules.
