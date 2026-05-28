# 🧪 Project Vought: Compound V Core Validation & CI Pipeline

A high-performance C++ backend data validation module designed to enforce business logic constraints on Compound V superpower asset allocation. This project implements **Test-Driven Development (TDD)** methodologies and utilizes an automated **Continuous Integration (CI)** pipeline powered by GitHub Actions.

## 🚀 Engineering Highlights

*   **Zero-Overhead Constraints**: Uses highly optimized compile-time conditional checks to catch invalid parameters, buffer exploits, or out-of-bounds user stat inputs.
*   **Decoupled Architecture**: Separation of core business rules (`main.cpp`) from test suites (`tests.cpp`) to reflect enterprise software design patterns.
*   **Automated Cloud QA**: Integrated with a Linux-based GitHub Actions runner that automatically spins up a virtual machine, compiles the codebase via `g++`, and runs unit tests on every single repository update.
*   **Robust Test Suites**: Includes predefined test scenarios mapping valid baseline characters, overallocated stat profiles, and string-boundary name mutations.

## 📁 Repository Architecture

```text
├── .github/workflows/
│   └── verify.yml      # CI/CD Cloud Automation Script
├── main.cpp            # Business Logic & Validator Layer
├── tests.cpp           # Automated QA Unit Tests
└── README.md           # Engineering Portfolio Documentation
```

## 🛠️ Local Compilation Specifications

While this repository executes autonomously in the cloud via GitHub Actions, it can be run on any local environment with a standard C++17 compiler (GCC or Clang):

```bash
# Compile the Quality Assurance verification binary
g++ -std=c++17 tests.cpp -o QA_Engine

# Execute the test matrix
./QA_Engine
```

## 📋 Standard Verification Parameters
To preserve data integrity, the validation system evaluates all entity inputs against rigid design standards:
1. Subject identifier strings must remain under 11 characters.
2. Baseline physiological attributes (Strength, Durability, Speed) must scale strictly between 1 and 4 points.
3. Total baseline resource allocations must equal exactly 7 points prior to dynamic multiplier processing.
