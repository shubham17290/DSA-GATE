# DSA-GATE 📚

> **Your comprehensive repository for Data Structures and Algorithms preparation for GATE (Graduate Aptitude Test in Engineering).**

---

## 🎯 About This Repository

Welcome to **DSA-GATE** — a structured, lecture-based collection of Data Structures and Algorithms problems and concepts tailored for **GATE exam preparation**. Whether you're aiming for M.Tech admissions or sharpening your DSA fundamentals, this repo is built to help you learn systematically, practice effectively, and track your progress.

---

## 🗂️ Repository Structure

The repository is organized into **lecture-wise modules** following a progressive learning path:

```
DSA-GATE/
├── .vscode/                    # VS Code configuration for C/C++ development
│   ├── c_cpp_properties.json   # IntelliSense & compiler settings (MinGW GCC)
│   ├── launch.json             # Debug configurations
│   └── settings.json           # Editor & C++ Runner settings
│
└── 01 Introduction/            # Module 01: Introduction to Programming Concepts
    └── lec 04/                 # Lecture 04: Functions in C
        ├── function_01.c       # Example: Function return type behavior
        ├── function_01.exe     # Compiled binary (Windows)
        ├── function_02.c       # Example: Parameterized functions (add function)
        └── function_02.exe     # Compiled binary (Windows)
```

> **Coming soon**: More modules covering Arrays, Linked Lists, Stacks, Queues, Trees, Graphs, Sorting, Searching, Dynamic Programming, and more!

---

## 🛠️ Tech Stack & Prerequisites

- **Language**: C Programming (C99 / C11)
- **Compiler**: GCC (via MinGW on Windows)
- **IDE**: Visual Studio Code
- **Debugger**: GDB (GNU Debugger)

### Setup Instructions

1. **Install MinGW-w64** (if not already installed)
   - Download from [mingw-w64.org](https://www.mingw-w64.org/)
   - Ensure `gcc` and `gdb` are in your system PATH

2. **Clone this repository**
   ```bash
   git clone <your-repo-url> DSA-GATE
   cd DSA-GATE
   ```

3. **Open in VS Code**
   ```bash
   code .
   ```

4. **Configure IntelliSense** (optional)
   - The `.vscode/c_cpp_properties.json` is already configured for MinGW GCC on Windows.
   - Update the `compilerPath` if your MinGW installation is in a different directory.

5. **Run a program**
   ```bash
   gcc -Wall -Wextra -pedantic -o output.exe source_file.c
   ./output.exe
   ```

---

## 📖 How to Use This Repository

### For Learners
1. Navigate to the relevant **module** → **lecture** folder.
2. Read the `.c` source file to understand the concept.
3. Run the code using GCC or the **C/C++ Runner** extension in VS Code.
4. Modify, experiment, and debug the code to deepen your understanding.
5. Solve the practice problems at the end of each topic (to be added).

### For Contributors
We welcome contributions! Please follow these guidelines:

- **Code Style**: Follow the existing naming conventions (`snake_case` for files, descriptive function names).
- **Warnings**: Compile with `-Wall -Wextra -Wpedantic` to maintain clean, warning-free code.
- **Structure**: Place new topics in appropriately numbered modules (e.g., `02 Arrays/lec 01/`).
- **Documentation**: Comment your code clearly. Explain the "why" and "how".
- **Commit Messages**: Use clear, descriptive commit messages (e.g., `Add: Linked list implementation (lec 03)`).

---

## 📝 Contents Overview (Planned)

| Module | Topic | Status |
|--------|-------|--------|
| **01 Introduction** | Functions, Pointers, Recursion | 🟡 In Progress |
| **02 Arrays** | 1D/2D Arrays, Dynamic Arrays, Rotations | 🔜 Planned |
| **03 Linked Lists** | Singly, Doubly, Circular, Operations | 🔜 Planned |
| **04 Stacks & Queues** | Implementation, Applications | 🔜 Planned |
| **05 Trees** | Binary Trees, BST, AVL, Heaps | 🔜 Planned |
| **06 Graphs** | Representation, BFS, DFS, MST | 🔜 Planned |
| **07 Searching & Sorting** | Binary Search, Merge Sort, Quick Sort | 🔜 Planned |
| **08 Dynamic Programming** | Memoization, Tabulation, Patterns | 🔜 Planned |
| **09 GATE Previous Year Questions** | Topic-wise PYQ solutions | 🔜 Planned |
| **10 Interview Prep** | LeetCode & GFG curated problems | 🔜 Planned |

---

## 🚀 Getting Started Quick

```c
// Example: Run function_02.c (Addition using functions)

#include <stdio.h>

int add(int, int);

int main() {
    int a = 10, b = 20, result;
    result = add(a, b);
    printf("%d\n", result); // Output: 30
    return 0;
}

int add(int x, int y) {
    return x + y;
}
```

**Compile & Run:**
```bash
gcc -o add function_02.c && ./add.exe
```

---

## 🤝 Contributing

Contributions are highly encouraged! Here's how you can help:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/new-topic`)
3. Commit your changes (`git commit -m "Add: <topic> implementation"`)
4. Push to the branch (`git push origin feature/new-topic`)
5. Open a Pull Request

Please read [CONTRIBUTING.md](CONTRIBUTING.md) (to be added) for detailed guidelines.

---

## 📄 License

This project is licensed under the **MIT License** — feel free to use, share, and learn from it. See the [LICENSE](LICENSE) file for details.

---

## 🙌 Acknowledgments

- **GATE CSE Syllabus** for providing the roadmap.
- The open-source community for amazing resources.
- Every contributor who helps make this repo better.

---

## 📬 Contact

Have questions, suggestions, or found a bug? Feel free to open an **Issue** or reach out!

---

### ⭐ Star this repo if it helped you in your DSA journey!

**Happy Coding & All the Best for GATE!** 🚀
