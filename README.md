# 📌 Input Validation Library (clsInputValidate) ⚡

> **A C++ utility class for validating user input, ensuring data integrity, and handling number and date validation. 🚀**

---

## 🌟 Project Overview

The `clsInputValidate` class provides a set of robust validation functions that help developers ensure that user input meets the required constraints. It includes functionalities such as:
- Validating whether a number is within a given range ✅
- Ensuring date values are within a valid range 📅
- Handling incorrect user input and prompting re-entry 🔄
- Reading and validating various data types 🔢

This class enhances the reliability and user experience of C++ applications by preventing invalid inputs.

---

## ✨ Features

### 🔢 Numeric Validation
- **`Is_Number_Between(Number, From, To)`**: Checks if a number is within a specified range (supports `short`, `int`, `float`, `double`).

### 📅 Date Validation
- **`Is_Date_Between(Date, DateFrom, DateTo)`**: Verifies if a date is within a given range.
- **`Is_Valid_Date(Date)`**: Ensures that a given date is valid.

### 🖊️ User Input Handling
- **`Read_Number<T>()`**: Reads a number from user input and ensures validity.
- **`Read_Number_Between<T>(From, To)`**: Reads a number from the user and validates it against a given range.
- **`Read_Short_Number()`**: Reads a `short` value from the user.
- **`Read_Int_Number()`**: Reads an `int` value from the user.
- **`Read_Float_Number()`**: Reads a `float` value from the user.
- **`Read_Double_Number()`**: Reads a `double` value from the user.
- **`Read_String()`**: Reads and returns a string input from the user.

---

## 🚀 How It Works

### 🔹 Numeric Validation
The class provides multiple overloaded functions to check whether a number falls within a specified range.

### 🔹 User Input Handling
- Uses `cin` along with `cin.clear()` and `cin.ignore()` to manage incorrect inputs gracefully.
- Ensures that only valid numeric values are accepted by continuously prompting the user until valid input is entered.

### 🔹 Date Handling
- Uses `clsDate` class methods to compare and validate date values.
- Swaps `DateFrom` and `DateTo` if they are in the wrong order before performing validation.

---

## 📚 Potential Enhancements

- 🛠 **Extended Error Handling**: More detailed error messages for different invalid input cases.
- 🗄 **Logging**: Store incorrect attempts for debugging or analytics.
- 🔄 **Customizable Validation Rules**: Allow developers to define custom validation rules dynamically.
- 🌎 **Localization Support**: Multi-language error messages for international applications.

---

## ⚙️ Technologies Used

- **Language**: C++
- **Input Handling**: `cin`, `cin.clear()`, `cin.ignore()`
- **Date Validation**: `clsDate` class
- **Template Functions**: Used for generic number validation

---

## 🎯 Learning Outcomes

This project demonstrates:
- ✅ **Robust input validation techniques**
- ✅ **Template function usage for flexible validation**
- ✅ **Error handling using input clearing and ignoring methods**
- ✅ **Working with date objects for validation**
- ✅ **Overloaded function implementation**

---

## 📜 License

This project is open-source. Use it, modify it, share it! 🎉

Feel free to fork, modify, and use this project in your own C++ applications! 🚀

---

## 🤝 Contributing

Contributions are welcome! If you have improvements or additional features to add, feel free to submit a Pull Request.

---

## 🏁 Ready to Use?

### 🚀 How to Run
1. **Download** the repository to your local machine.
2. **Include** `clsInputValidate.h` in your project.
3. **Compile** your C++ code using a standard compiler (e.g., `g++` in terminal).
4. **Run** the program and experiment with the validation functions.

---

