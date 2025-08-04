#  цікава база (Interesting Base) Problem

[![Language](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![University](https://img.shields.io/badge/University-Sharif%20University%20of%20Technology-red.svg)](http://www.sharif.edu/)

[cite_start]This repository contains the C++ solution for the "Interesting Base" problem, part of the third homework assignment for the Fundamentals of Programming course at Sharif University of Technology. [cite: 1]

---

## 📝 Problem Description

[cite_start]The challenge is to find the smallest "interesting base" for a given natural number `n`. [cite: 25] [cite_start]An "interesting base" `b` is defined as a base where the representation of `n` consists solely of the digit '1'. [cite: 26]

[cite_start]For example, given `n = 7`, the smallest interesting base is `2`, because 7 in base 2 is `111`. [cite: 26] [cite_start]While `n = 7` in base `6` is `11`, which also consists of only ones, the base `6` is not the *smallest* such base. [cite: 27]

[cite_start]The program's goal is to efficiently find this smallest interesting base for `n`. [cite: 27]

## ⚙️ Constraints

The solution must adhere to the following constraints:

* [cite_start]**Time Limit:** 50 milliseconds [cite: 21]
* [cite_start]**Memory Limit:** 256 MB [cite: 21]
* [cite_start]**Input `n`:** The input is a single natural number `n` where $3 \le n \le 10^{18}$. [cite: 29]

## 🚀 How to Compile and Run

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/your-username/Sharif-Interesting-Base-Problem.git](https://github.com/your-username/Sharif-Interesting-Base-Problem.git)
    cd Sharif-Interesting-Base-Problem
    ```
2.  **Compile the source code:**
    You can use a standard C++ compiler like g++.
    ```bash
    g++ main.cpp -o interesting_base -std=c++17
    ```
3.  **Run the executable:**
    ```bash
    ./interesting_base
    ```
    The program will then wait for you to input the number `n`.

## 🧪 Examples

Here are the examples provided in the problem description:

| Input (`n`) | Output (Smallest Interesting Base) | Explanation |
| :---------- | :--------------------------------- | :---------- |
| `4681`      | `8`                                | [cite_start]4681 in base 8 is `11111`. [cite: 30] |
| `19608`     | `7`                                | (19608 in base 7 is `1111111`) [cite_start][cite: 30] |

---

## 🎓 Source

[cite_start]This problem is from the third homework assignment for the **Fundamentals of Programming** course (Fall 2024), offered by the Department of Electrical Engineering at **Sharif University of Technology**. [cite: 1]

## 📄 License

This project is licensed under the MIT License.