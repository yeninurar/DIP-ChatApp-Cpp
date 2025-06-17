# DIP Chat App C++ (SOLID Principle Demo)

This project demonstrates the **Dependency Inversion Principle (DIP)** in C++ using:

✅ Dependency Injection  
✅ Factory Pattern  
✅ Strategy Pattern  

## 💡 Scenario
Imagine building a chat app called `QuickTalk`. Initially it supports only WhatsApp. Then you need to add Telegram, Signal, etc.  
To make the code flexible and testable, we apply **DIP** to separate high-level logic from implementation details.

## 🛠 Techniques

| Technique          | Purpose |
|-------------------|---------|
| Dependency Injection | Inject messenger object from outside |
| Factory Pattern      | Create messenger object without coupling |
| Strategy Pattern     | Allow dynamic switching of messenger strategy |

## 🔧 Build & Run
```bash
g++ src/main.cpp -o quicktalk
./quicktalk
