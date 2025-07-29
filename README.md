
# 🚀 Advanced C Calculator  

#### 💡*A simple Terminal Based calculator in C with math functions and operation history.*

<p align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/1/19/C_Logo.png" alt="C Programming Logo" width="80">
</p>


Welcome to the **C Terminal-Based Calculator Project**, a comprehensive menu-driven application developed in the **C programming language**. This calculator not only supports **basic arithmetic** but also includes a full suite of **advanced mathematical operations**, **history tracking**, and **modular menus** for smooth user experience.

---

## 📌 Project Overview

This calculator is designed to run entirely in the terminal (command-line interface) and includes:

- Interactive Menus
- Modular Operation Handling
- Operation History
- Both Simple & Advanced Calculations
- Clean User Experience Flow

---

## ✨ Features Breakdown

### 🔢 Basic Operations
- ✅ Addition
- ✅ Subtraction
- ✅ Multiplication
- ✅ Division
- ✅ Modulus

### 🧮 Advanced Operations
- √ Square Root
- ^ Power (Exponentiation)
- % Percentage Calculation
- ∑ Average of Multiple Numbers
- ! Factorial Calculation
- 💰 Simple Interest
- 💸 Compound Interest
- 📏 Area Calculations (Circle, Rectangle, Triangle, etc.)

### 📜 History Functionality
- Shows the list of previously performed operations.
- Tracks both basic and advanced calculations.

### 🔁 Second Menu System
After every operation, the user can choose to:
- Continue with the same operation
- Go back to the main menu
- View calculation history
- Exit the program

---


---

## 🗂️ Project Structure

```
📁 C-Calculator-Project/
│
├── calculator.c        # Core calculator source code
├── calculator.exe      # Compiled executable file (Windows)
├── color.h             # Color macros/header for UI styling, bg color, text color
├── README.md           # Project documentation
└── assets/             # Screenshots or related media

```

---

## 📸 Sample Screenshots

<div align="center"> <img src="assets/Simple.png" alt="Simple Calculator Menu" width="45%" style="margin-right: 10px;" /> <img src="assets/Advance.png" alt="Advanced Calculator Menu" width="45%" /> </div>


### Main Menu Interface
```
                ----------------------- 
                       CALCULATOR
                -----------------------

Location: Menu/

Which Operation Do You Want To Perform?

 1. Addition
 2. Subtraction
 3. Multiplication
 4. Division
 5. Modulus
 6. Previous History
 7. Advance Calculator
 8. Exit
```

### Advanced Menu Example
```
                Advance Calculator
            ----------------------------

Location: Menu/Advance Menu/

Which Operation Do You Want To Perform?

 1. Square Root
 2. Power
 3. Percentage
 4. Average of Numbers
 5. Factorial
 6. Simple Interest
 7. Compound Interest
 8. Area Calculations
 9. Previous History
10. Exit
```

---

## 🧑‍🏫 How to Run the Calculator

You can run this C calculator on **any platform** – using **Dev C++**, **VS Code**, or even **online compilers**. Here's how:

---

### 🧲 Step 1: Clone the Project (Optional)

If you're using Git and want to download this project directly:

```bash
git clone https://github.com/md-sonu07/C-Calculator-Project.git
cd C-Calculator-Project
```

> 📝 Or just manually download the ZIP from GitHub and extract it.

---

### 💻 Option 1: Using Dev C++ (Windows)

```text
1. Open Dev C++.
2. Go to File → New → Source File.
3. Paste the entire code from calculator.c (or open the file from the folder).
4. Save the file with .c extension (e.g., calculator.c).
5. Go to Execute → Compile & Run (or press F11).
```

> ⚠️ If you're using math functions like `sqrt()` or `pow()`,
> make sure `-lm` is linked under:
> **Project → Project Options → Parameters → Linker → Add `-lm`**

---

### 💡 Option 2: Using VS Code (All Platforms)

```bash
# Step 1: Make sure GCC is installed
# Step 2: Open VS Code and install "C/C++" extension by Microsoft
# Step 3: Open your project folder and terminal
# Step 4: Compile your code
gcc calculator.c -o calculator -lm

# Step 5: Run the executable
./calculator       # For Linux/macOS
calculator.exe     # For Windows
```

> ✅ Tip: You can also create build/run tasks in VS Code for one-click execution.

---

### 🌐 Option 3: Run Online (No Installation)

Use these websites to run your code directly in the browser:

```md
🔗 OnlineGDB:
https://www.onlinegdb.com/online_c_compiler

🔗 Programiz:
https://www.programiz.com/c-programming/online-compiler/
```

> ⚠️ **If your code uses `color.h` or other custom header files**, remove or comment those lines while testing online, because many online compilers don’t support custom files.

📌 **Example:**

```c
// #include "color.h"  // ❌ This will give error in online compiler
```

✅ Simply comment it out like above to avoid issues during testing online.

---


---

## 🤝 Contribution Guidelines

Want to improve this project? Feel free to contribute!

### Steps:
1. 🍴 Fork the repository
2. 🔧 Create your branch: `git checkout -b feature-name`
3. 📝 Commit your changes: `git commit -m "Add feature"`
4. 🚀 Push to the branch: `git push origin feature-name`
5. 🔁 Open a Pull Request

---

## 👤 Author

**Md Sonu**  ***(also known as Danish Farhan)***
- 🎓 BCA Students at **Vidya Vihar Institute of Technology (VVIT), Aryabhatta Knowledge University**
- 💼 Aspiring | 💻 Full Stack Dev Learner  
- 🔗 GitHub: [@md-sonu07](https://github.com/md-sonu07)

---

## 📜 License

This project is licensed under the **MIT License**.  
Feel free to use, modify, and distribute it for learning and development purposes.

---

## 💬 Feedback

Have suggestions or found a bug?  
Open an [issue](https://github.com/md-sonu07/C-Programs/issues) or contact me directly!

