#  (Interesting Base) Problem

[![Language](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![University](https://img.shields.io/badge/University-Sharif%20University%20of%20Technology-red.svg)](http://www.sharif.edu/)

This repository contains the C++ solution for the "Interesting Base" problem, part of the third homework assignment for the Fundamentals of Programming course at Sharif University of Technology, School of Electrical Engineering in 2024.

---

## 📝 Problem Description

The challenge is to find the smallest "interesting base" for a given natural number `n`. An "interesting base" `b` is defined as a base where the representation of `n` consists solely of the digit '1'.

For example, given `n = 7`, the smallest interesting base is `2`, because 7 in base 2 is `111`. While `n = 7` in base `6` is `11`, which also consists of only ones, the base `6` is not the *smallest* such base.

The program's goal is to efficiently find this smallest interesting base for `n`. The important condition of the problem is to find the interesting base of the input number in less than 50 milliseconds.

## ⚙️ Constraints

The solution must adhere to the following constraints:

* **Time Limit:** 50 milliseconds 
* **Memory Limit:** 256 MB
* **Input `n`:** The input is a single natural number `n` where $3 \le n \le 10^{18}$. 

## 🧪 Examples

Here are the examples provided in the problem description:

| Input (`n`) | Output (Smallest Interesting Base) | Explanation |
| :---------- | :--------------------------------- | :---------- |
| `4681`      | `8`                                | [cite_start]4681 in base 8 is `11111`. [cite: 30] |
| `19608`     | `7`                                | (19608 in base 7 is `1111111`) [cite_start][cite: 30] |

---

## 🎓 Source

This problem is from the third homework assignment for the **Fundamentals of Programming** course (Fall 2024), offered by the Department of Electrical Engineering at Sharif University of Technology.

Exercise designer: Seyed Fariman Sakkaki

## Credits

|  Student Name  |        School      | Student ID |
| :------------- | :----------------- | :--------- |
| Parsa Paktinat | EE Department, SUT | 403101518  |

---

## 📄 License

This project is licensed under the MIT License.
