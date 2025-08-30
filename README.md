# 📚 Library Management System (Day 12)

Welcome to **Day 12** of the 100-day coding journey!  
This project continues from **Day 11**, where we built the basic menu and structure.  
Now, we have implemented the **Book Management Module** with full functionality using **C++ + File Handling**.

---

## 🚀 Features Implemented
- ➕ **Add Book** – store new book details in a file (`books.txt`).
- 📖 **View Books** – display all books in a neat tabular format.
- 🔍 **Search Book** – find a book by its **ID**.
- ❌ **Delete Book** – remove a book record by its **ID**.
- 💾 **Persistent Storage** – all records are saved in `books.txt`, so data is available across runs.

---

## 🗂 Project Structure
day-12/
├── main.cpp # Main menu + program entry point
├── book.h # Book structure + function declarations
├── book.cpp # Function implementations (Add/View/Search/Delete)
└── outfut/
    ├──books.txt # Data file (created automatically on first run)
    └── lms.exe
