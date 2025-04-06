# 0x14. C - Bit manipulation

## 📚 Description

This project is part of the Holberton School low-level programming curriculum. It focuses on the fundamentals of **bit manipulation** in the C programming language.

You will learn how to:
- Represent numbers in **binary**, **decimal**, and **hexadecimal**.
- Use **bitwise operators**: AND, OR, XOR, NOT, shift left/right.
- Set, clear, and get the value of specific bits.
- Count the number of bits needed to change from one number to another.
- Handle binary strings safely in C.

---

## 🛠️ Project Structure

| File | Function | Description |
|------|----------|-------------|
| `0-binary_to_uint.c` | `binary_to_uint` | Converts a binary string to an unsigned int |
| `1-print_binary.c` | `print_binary` | Prints the binary representation of a number (recursively) |
| `2-get_bit.c` | `get_bit` | Returns the value of a bit at a given index |
| `3-set_bit.c` | `set_bit` | Sets the value of a bit to 1 at a given index |
| `4-clear_bit.c` | `clear_bit` | Sets the value of a bit to 0 at a given index |
| `5-flip_bits.c` | `flip_bits` | Returns the number of bits needed to flip to get from one number to another |
| `main.h` | Header file | Contains all function prototypes and includes `_putchar` |

---

## ✨ Usage

To compile and test each function:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c 0-binary_to_uint.c -o test0
./test0

