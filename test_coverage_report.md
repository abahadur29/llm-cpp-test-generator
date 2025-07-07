# ✅ Test Coverage Report

**Author:** Aditya Bahadur  
**Session:** Keploy Fellowship - Session 5  
**Project:** AI-Powered Unit Test Generator for C++

---

## 🧪 Test Coverage Summary

- **Target File:** `functions.cpp`
- **Total Lines:** 32  
- **Executed Lines:** 28  
- **Coverage:** ✅ **87.50%**

Command used:
```bash
g++ -std=c++17 -fprofile-arcs -ftest-coverage tests/test_main.cpp functions.cpp -lgtest -lgtest_main -pthread -o test_main_cov
./test_main_cov
gcov test_main_cov-functions.cpp
