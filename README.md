# 📈 Sharpe Ratio Calculator

This project is a simple **Sharpe Ratio calculator** developed in **C programming language**.  
It calculates the Sharpe ratio to measure the performance of an investment relative to its risk.

---

## 🧮 What Is the Sharpe Ratio?

The **Sharpe Ratio** is a financial metric that compares an investment’s return to its risk.  
The formula is:

\[
\text{Sharpe Ratio} = \frac{\text{Return} - \text{Risk-Free Rate}}{\text{Standard Deviation}}
\]

This ratio shows how efficiently an investment performs compared to the amount of risk taken.  
- **High Sharpe ratio** → The investment provides strong returns for its risk.  
- **Low Sharpe ratio** → The investment’s risk outweighs its reward.

---

## 🧩 Program Features

- Takes three user inputs:
  - Investment return (%)
  - Risk-free interest rate (%)
  - Standard deviation (%)
- Converts percentages to decimal values.
- Calculates and prints the Sharpe ratio.
- Interprets the ratio automatically:
  - `> 3.0` → Excellent  
  - `2.0 – 3.0` → Very good  
  - `1.0 – 2.0` → Good  
  - `< 1.0` → Low  

---

## 💻 Usage

To compile and run the program, use the following commands in your terminal:

```bash
gcc sharpe_orani.c -o sharpe
./sharpe


hen, the program will prompt you to enter:
Enter investment return (%):
Enter risk-free rate (%):
Enter standard deviation (%):
The program will then calculate and display the Sharpe Ratio and provide an evaluation message.
📘 Example Output
Enter investment return (%): 15
Enter risk-free rate (%): 5
Enter standard deviation (%): 4

Sharpe Ratio: 2.50
Sharpe Ratio is very good.
⚙️ Technologies Used
C Programming Language
Standard I/O Functions (stdio.h)
🧠 Author
This project was created to understand financial ratio calculations using the C language.
Author: Taha [you can add your last name here]
📄 License
This project is licensed under the MIT License.
You are free to copy, modify, and distribute it as you wish.

---
