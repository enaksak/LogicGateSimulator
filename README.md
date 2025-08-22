Logic Gate Simulator

A simple C program that simulates basic digital logic gates.
This project is useful for students of Electrical & Electronics Engineering and beginners in Digital Logic Design.


Features:

Simulates the following gates:

AND, OR, NOT, XOR, NAND, NOR, XNOR

Allows user to enter inputs (0 or 1).

Shows the result of the chosen gate.

Displays the truth table of the selected gate.

Easy-to-use command-line interface (CLI).


Installation & Compilation
1. Clone the repository
   git clone https://github.com/yourusername/logic-gate-simulator.git
   cd logic-gate-simulator
2. Compile the program
   gcc logic_gates.c -o logic_gates
3. Run the program
   ./logic_gates

 Usage Example
 ==============================
      LOGIC GATE SIMULATOR
==============================
1. AND
2. OR
3. NOT
4. XOR
5. NAND
6. NOR
7. XNOR
8. Exit
Choose a gate: 1
Enter A (0/1): 1
Enter B (0/1): 0
Result: 0

Truth Table for AND gate:
A B | OUT
---------
0 0 | 0
0 1 | 0
1 0 | 0
1 1 | 1


Truth Tables
AND Gate
| A | B | OUT |
| - | - | --- |
| 0 | 0 | 0   |
| 0 | 1 | 0   |
| 1 | 0 | 0   |
| 1 | 1 | 1   |

OR Gate
| A | B | OUT |
| - | - | --- |
| 0 | 0 | 0   |
| 0 | 1 | 1   |
| 1 | 0 | 1   |
| 1 | 1 | 1   |

(other gates are also supported: NOT, XOR, NAND, NOR, XNOR)

License
This project is licensed under the MIT License – feel free to use, modify, and share.

