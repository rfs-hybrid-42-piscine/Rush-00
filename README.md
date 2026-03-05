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
The first collaborative project in the Piscine challenges you to build a program that prints customized ASCII rectangles to the standard output. The objective is to combine basic loops, conditionals, and a dedicated write function to form a structured graphic based on given width and height dimensions.

This exercise forces you to carefully manage character coordinates, distinguish between borders and inner spaces, and correctly link multiple C source files into a single functional executable.

---

## 🧠 Exercise Breakdown & Logic

*The five variations of this project share the same core algorithm but differ in the specific characters used to draw the shape.*

### 🔹 The Core Logic
To generate a shape with a width of `x` and a length of `y`:
1. **Safety Check:** If either dimension is zero or negative, the program quietly stops without printing anything.
2. **Vertical Iteration:** An outer loop tracks the current row being printed, running from the top down to `y`.
3. **Horizontal Iteration:** An inner loop tracks the current column, running from left to right up to `x`.
4. **Coordinate Evaluation:** Inside the inner loop, conditions determine the exact character to output:
   * Corner pieces (top-left, top-right, bottom-left, bottom-right).
   * Edge pieces (top/bottom borders, left/right borders).
   * Empty space (the hollow center of the shape).
5. **Line Breaks:** Once the inner loop finishes a row, a newline character is printed to move to the next row.

### 🎨 The Variants
| Assignment | Character Pattern |
| :--- | :--- |
| **`rush00`** | `o` at corners, `-` for horizontal borders, `|` for vertical borders. |
| **`rush01`** | `/` and `\` at corners, `*` for all borders. |
| **`rush02`** | `A` top corners, `C` bottom corners, `B` for all borders. |
| **`rush03`** | `A` left corners, `C` right corners, `B` for all borders. |
| **`rush04`** | `A` top-left/bottom-right, `C` top-right/bottom-left, `B` for borders. |

---

## 🛠️ Instructions

### 🧪 Compilation & Testing
You are required to compile the main file, the printing utility file, and your specific logic file together.

1. **Clone the repository:**
   ```bash
   git clone git@github.com:rfs-hybrid-42-piscine/Rush-00.git Rush-00
   cd Rush-00
   ```

2. **Compile a specific rush:**
   To test a specific version (for example, `rush02`), you compile its source file alongside the main and helper files.
   ```bash
   cc -Wall -Wextra -Werror main.c ft_putchar.c ex00/rush02.c -o rush_test
   ```

3. **Execute:**
   Run the generated executable. (You can modify the **[`main.c`](ex00/main.c)** file to test different `x` and `y` arguments).
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
/*   Updated: 2026/03/05 21:43:05 by maaugust         ###   ########.fr       */
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
* **Documentation:** AI tools were utilized
