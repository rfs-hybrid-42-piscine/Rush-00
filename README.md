*This project has been created as part of the 42 curriculum by maaugust.*

<div align="center">
  <img src="https://raw.githubusercontent.com/rfs-hybrid/42-piscine-artwork/main/assets/covers/cover-rush00.png" alt="Rush 00 Cover" width="100%" />
</div>

<div align="center">
  <h1>🚀 Rush 00: ASCII Art Rectangles</h1>
  <p><i>The first team project: logic, loops, and terminal drawing.</i></p>
  
  <img src="https://img.shields.io/badge/Language-C-blue" alt="Language badge" />
  <img src="https://img.shields.io/badge/Grade-125%2F100-success" alt="Grade badge" />
  <img src="https://img.shields.io/badge/Norminette-Passing-success" alt="Norminette badge" />
</div>

---

## 💡 Description
The first collaborative project in the Piscine challenges teams to build a program that prints customized ASCII rectangles to the standard output. The objective is to combine basic loops, conditionals, and a dedicated write function to form a structured graphic based on given width and height dimensions.

This exercise forces you to carefully manage character coordinates, distinguish between borders and inner spaces, and correctly link multiple C source files into a single functional executable.

---

## 🧠 Core Logic Breakdown

All five variations of this project share the exact same core loop architecture, differing only in the specific characters assigned to the corners and edges.

To generate a shape with a width of `x` and a height of `y`:
1. **Safety Check:** If either dimension is zero or negative, the program quietly stops without printing anything to prevent infinite loops.
2. **Vertical Iteration:** An outer `while` loop tracks the current row being printed, running from the top down to `y`.
3. **Horizontal Iteration:** An inner `while` loop tracks the current column, running from left to right up to `x`.
4. **Coordinate Evaluation:** Inside the inner loop, conditions determine the exact character to output:
   * **Corners:** Checked first (e.g., top-left, top-right, bottom-left, bottom-right).
   * **Edges:** Checked second (top/bottom borders, left/right borders).
   * **Inner Space:** If it is neither a corner nor an edge, it prints an empty space `' '`.
5. **Line Breaks:** Once the inner loop finishes a row, a newline `\n` character is printed to move to the next row.

---

## 🎨 The 5 Variations
| Assignment | Character Pattern |
| :--- | :--- |
| **`rush00`** | `o` at corners, `-` for horizontal borders, `|` for vertical borders. |
| **`rush01`** | `/` and `\` at corners, `*` for all borders. |
| **`rush02`** | `A` top corners, `C` bottom corners, `B` for all borders. |
| **`rush03`** | `A` left corners, `C` right corners, `B` for all borders. |
| **`rush04`** | `A` top-left/bottom-right, `C` top-right/bottom-left, `B` for borders. |

Below are the expected visual outputs for each version of the rush when passing the dimensions `(5, 3)` (width 5, height 3).

### `rush00`
Uses `o` for corners, `-` for top/bottom edges, and `|` for side edges.
```text
o---o
|   |
o---o
```

### `rush01`
Uses `/` and `\` for alternating corners, and `*` for all surrounding edges.
```text
/***\
* *
\***/
```

### `rush02`
Uses `A` for both top corners, `C` for both bottom corners, and `B` for all edges.
```text
ABBBA
B   B
CBBBC
```

### `rush03`
Uses `A` for both left corners, `C` for both right corners, and `B` for all edges.
```text
ABBBC
B   B
ABBBC
```

### `rush04`
Uses `A` for top-left and bottom-right corners, `C` for top-right and bottom-left corners, and `B` for all edges.
```text
ABBBC
B   B
CBBBA
```

---

## 🛠️ Instructions

### 🧪 Compilation & Testing
You are required to compile the main file, the printing utility file, and your specific logic file together. All of these files are located inside the `ex00` directory.

1. **Clone the repository:**
   ```bash
   git clone git@github.com:rfs-hybrid-42-piscine/Rush-00.git Rush-00
   cd Rush-00/ex00
   ```

2. **Compile a specific rush:**
   To test a specific version (for example, `rush02`), you compile its source file alongside the main and helper files within the same directory.
   ```bash
   cc -Wall -Wextra -Werror main.c ft_putchar.c rush02.c -o rush_test
   ```

3. **Execute:**
   Run the generated executable. You can modify the **[`main.c`](ex00/main.c)** file to test different `x` and `y` arguments (including testing 1D lines, zeros, and massive numbers).
   ```bash
   ./rush_test
   ```

> **⚠️ WARNING for 42 Students:** Evaluators will modify your **[`main.c`](ex00/main.c)** to verify that your code handles extreme numbers, zero, and negative dimensions without crashing or entering infinite loops.

### 🚨 The Norm
Moulinette relies on a program called `norminette` to check if your files comply with the Norm. Every single `.c` file must pass. 

**The 42 Header:**
Before writing any code, every file must start with the standard 42 header. `norminette` will automatically fail any file missing this specific signature.
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 21:43:04 by maaugust          #+#    #+#             */
/*   Updated: 2026/03/05 23:21:50 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
```

Run the following command before pushing:
```bash
norminette -R CheckForbiddenSourceHeader <file.c>
```

---

## 📚 Resources & References

* `man 2 write` - Manual for the only allowed system call.
* [42 Norm V4](https://cdn.intra.42.fr/pdf/pdf/96987/en.norm.pdf) - The strict coding standard for 42 C projects.
* [Official 42 Norminette Repository](https://github.com/42School/norminette) - The open-source linter enforcing the strict 42 coding standard.

### 🤖 AI Usage Guidelines
* **Code:** No AI-generated code was used to solve these exercises. All C functions were built manually to strictly comply with the 42 Norm and deeply understand nested logic, enforcing the concept that learning is about developing the ability to find an answer, not just getting one directly.
* **Documentation:** AI tools were utilized to structure this `README.md` and format the logic breakdowns to create a clean, accessible educational resource for fellow 42 students.
