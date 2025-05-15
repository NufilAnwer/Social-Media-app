# 🌐 Social Media App (C++ with SFML GUI)

This is a fully interactive **Social Media Application** built using **C++** and **SFML (Simple and Fast Multimedia Library)**. It features a graphical interface with real-time input handling, and simulates a complete user experience — from registration and login to viewing posts and interacting with others — using a well-structured **object-oriented design**.

---

## 💡 Object-Oriented Programming Concepts Used

| OOP Concept      | Description                                                                 |
|------------------|-----------------------------------------------------------------------------|
| **Encapsulation** | Data members are private; access is through public setters/getters          |
| **Inheritance**   | UI elements and managers inherit base functionality                        |
| **Polymorphism**  | Virtual functions allow dynamic UI rendering (e.g., rendering different screens) |
| **Abstraction**   | Complex logic hidden behind class interfaces (e.g., User, Post, Feed)       |
| **Association**   | Users can view posts but are not owners of all of them                     |
| **Aggregation**   | A User has Posts, but Posts can exist independently (e.g., stored in feed) |
| **Composition**   | A Profile *owns* its UI components — they cease to exist when the Profile is destroyed |
| **Modular Design**| Header-based separation of concerns and single-responsibility classes       |

---

## 🎯 Key Features

- 👤 User registration & login system
- 📝 Create and delete posts
- 📜 View posts in personal or global feeds
- 👁️ View profiles of other users
- 🖱️ Interactive GUI with mouse & keyboard support
- 💾 Persistent storage using file I/O
- 💡 Built completely with C++ classes and no STL containers
- 🧱 Clean code structure using `.h` and `.cpp` separation

---

## 🧱 Technologies Used

| Technology | Role                                   |
|------------|----------------------------------------|
| C++        | Core logic and OOP architecture        |
| SFML       | GUI, event handling, rendering         |
| File I/O   | Persistent storage of users and posts  |
| Header Files | Modularization and reusable components |

---

## 🗂️ File Structure

