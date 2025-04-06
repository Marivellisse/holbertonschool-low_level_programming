# 0x15. C - File I/O

## 📚 Description

This project is part of the Holberton School low-level programming curriculum. It introduces working with **file descriptors**, file permissions, and system calls such as `open`, `read`, `write`, and `close` using the POSIX API in C.

You’ll learn how to:
- Open and create files with specific permissions.
- Read from and write to files.
- Handle error checking when using system calls.
- Use `dprintf` to print to standard error.
- Copy the contents of a file safely and efficiently using a buffer.

---

## 🛠️ Project Files

| File | Function | Description |
|------|----------|-------------|
| `0-read_textfile.c` | `read_textfile` | Reads and prints a file’s content to standard output |
| `1-create_file.c` | `create_file` | Creates or truncates a file with `rw-------` permissions |
| `2-append_text_to_file.c` | `append_text_to_file` | Appends text at the end of an existing file |
| `3-cp.c` | CLI Program | Copies content from one file to another using a buffer |
| `main.h` | Header file | Contains all prototypes and required includes |

---

## ✨ Function Prototypes

```c
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

