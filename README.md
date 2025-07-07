# 🚀 AI-Powered C++ Unit Test Generator

> **Author**: Aditya Bahadur  
> **Affiliation**: B.Tech CSE, KIIT University  
> **GitHub**: [abahadur29](https://github.com/abahadur29)

---

## 📌 Overview

This is an AI-powered **Unit Test Generator** for C++ using **LLaMA3 via Ollama**. It automates the process of generating, refining, and validating Google Test unit tests using prompts and strict YAML instructions, while also calculating code coverage with **GNU gcov**.

### ✨ Key Features

- 📥 Test creation from raw C++ code  
- ♻️ Automated test refinement and deduplication  
- ✅ Integration with Google Test  
- 📊 Code coverage calculation  
- 🔁 Feedback loop via YAML & LLM to fix build or logic issues  

---

## 🗂️ Project Directory Structure

```bash
cpp-test-generator/
├── functions.cpp              # Core logic
├── functions.h                # Function declarations
├── main.cpp                   # Entry file
├── instructions.yaml          # Strict YAML rules for test generation
├── prompt.txt                 # Prompt input to LLM
├── test_coverage_report.md    # Coverage results
├── README.md                  # This file
├── tests/
│   └── test_main.cpp          # AI-generated Google Test file
├── *.gcov / *.gcda / *.gcno   # Coverage outputs
```

---

## 🧠 Architecture Flow

```
[main.cpp]
   │
   ▼
[test_main.cpp replica]
   │
   ▼
[LLM + YAML strict prompt]
   │
   └──▶ generate/refactor tests
           │
           ▼
       (2nd prompt)
           │
           └──▶ deduplicate, improve tests with includes and edge cases
```

### 📷 Architecture Diagram

![Architecture Diagram](./screenshots/architecture.png)

---

## 🛠️ Environment Setup

### 🔧 Requirements

- `g++` with `C++17` support  
- `Google Test` (`libgtest-dev`)  
- `Ollama` with `LLaMA3`  
- `gcov` for code coverage  

### 📦 Install Dependencies

```bash
sudo apt install g++ cmake gcovr libgtest-dev
ollama pull llama3
```

---

## 🧪 Step-by-Step Workflow

### 1️⃣ Prepare the Files

- Write logic in `functions.cpp` and `functions.h`  
- Sample usage in `main.cpp`  
- YAML rules in `instructions.yaml`  
- Prompt for model in `prompt.txt`  

### 2️⃣ Generate Initial Tests

```bash
ollama run llama3 < prompt.txt > tests/test_main.cpp
```

### 4️⃣ Build and Run

```bash
# Build and run app
g++ -std=c++17 functions.cpp main.cpp -o app
./app
```

📷 **App Output Screenshot**

![App Output](<img width="947" alt="app_run" src="https://github.com/user-attachments/assets/ec616e07-a7d9-46a0-9432-51b2e70c28e8" />)

```bash
# Build and run tests
g++ -std=c++17 tests/test_main.cpp functions.cpp -lgtest -lgtest_main -pthread -o test_main
./test_main
```

### 📷 Test Run Screenshot

![Test Run Output](<img width="709" alt="test_run" src="https://github.com/user-attachments/assets/a39153e7-f3d4-4017-8c93-9f6b5d29a2f7" />)

---

## 📈 Code Coverage Report

### Generate Coverage

```bash
# Compile with coverage flags
g++ -std=c++17 -fprofile-arcs -ftest-coverage tests/test_main.cpp functions.cpp -lgtest -lgtest_main -pthread -o test_main_cov

# Run the test binary
./test_main_cov

# Generate gcov report
gcov test_main_cov-functions.cpp
```

### 📊 Sample Output

- **functions.cpp Coverage**: ✅ **87.5%**  
- **Total coverage across dependencies**: ~35.44%  

![Coverage Tree](<img width="185" alt="coverage_tree" src="https://github.com/user-attachments/assets/8b4a9024-eaa2-4a8a-bf14-99d469e16ea6" />
)

---

## 📤 Deliverables

| Deliverable                             | Status     |
|----------------------------------------|------------|
| 📁 Working project directory            | ✅ Done     |
| 🧪 Test folder (`tests/test_main.cpp`)  | ✅ Created  |
| 📜 YAML instruction file                | ✅ Written  |
| 🧠 AI Prompt file                       | ✅ Included |
| 🤖 AI-generated & refined test cases    | ✅ Complete |
| 🏗️ Build system with test integration   | ✅ Working  |
| 📊 Gcov test coverage                   | ✅ Measured |
| 📄 Coverage report                      | ✅ Logged   |

---

## ✅ Evaluation Checklist

| Criteria                                      | Status           |
|----------------------------------------------|------------------|
| Unit test correctness                        | ✅ Verified       |
| Build error handling & recovery via LLM      | ✅ Implemented    |
| YAML + prompt clarity                        | ✅ Structured     |
| Integration with GNU coverage                | ✅ Confirmed      |
| Documentation and clarity                    | ✅ Professional   |

---

## 📝 Sample Output: Google Test Suite Run

```bash
[==========] Running 6 tests from 2 test suites.
[----------] Global test environment set-up.
[----------] 3 tests from ReverseNumberToWordsTest
[ RUN      ] ReverseNumberToWordsTest.HandlesZero
[       OK ] ReverseNumberToWordsTest.HandlesZero (0 ms)
[ RUN      ] ReverseNumberToWordsTest.HandlesSingleDigit
[       OK ] ReverseNumberToWordsTest.HandlesSingleDigit (0 ms)
[ RUN      ] ReverseNumberToWordsTest.HandlesMultipleDigits
[       OK ] ReverseNumberToWordsTest.HandlesMultipleDigits (0 ms)

[----------] 3 tests from RemoveConsecutiveDuplicatesTest
[ RUN      ] RemoveConsecutiveDuplicatesTest.HandlesEmptyString
[       OK ] RemoveConsecutiveDuplicatesTest.HandlesEmptyString (0 ms)
[ RUN      ] RemoveConsecutiveDuplicatesTest.HandlesNoDuplicates
[       OK ] RemoveConsecutiveDuplicatesTest.HandlesNoDuplicates (0 ms)
[ RUN      ] RemoveConsecutiveDuplicatesTest.HandlesDuplicates
[       OK ] RemoveConsecutiveDuplicatesTest.HandlesDuplicates (0 ms)

[  PASSED  ] 6 tests.
```

---

## 💡 Future Enhancements

- Integrate with **CI/CD** (e.g., GitHub Actions)  
- Use `lcov` to generate HTML coverage reports  
- Support mocking with GoogleMock  
- Extend support to multiple `.cpp` files  

---

## 🙌 Final Notes

This project ensures reliable, repeatable, and explainable unit test generation using AI — making your development cycle **faster**, **safer**, and **more robust**.

---

```text
© 2025 Aditya Bahadur. All rights reserved.
```
