//
// Created by Paul on 2020/12/19.
// Reference: https://juejin.cn/post/6844903928497176584
//

#ifndef CHOCOLATEBOILER_CHOCOLATEBOILER_H
#define CHOCOLATEBOILER_CHOCOLATEBOILER_H

#include <iostream>
using namespace  std;

class ChocolateBoiler {
public:
    static ChocolateBoiler* getInstance() {
        if (!m_uniqueInstance) {
            unique_lock<mutex> lock(m_Mutex); // Lock
            if (!m_uniqueInstance) {          // Double Check
                m_uniqueInstance = new (nothrow) ChocolateBoiler(true, false);
                cout << "Created a new chocolate boiler." << endl;
            }
        }

        cout << "Got a chocolate boiler instance." << endl;
        return m_uniqueInstance;
    }

    static void deleteInstance() {
        unique_lock<mutex> lock(m_Mutex);     // Lock
        if (m_uniqueInstance) {
            delete m_uniqueInstance;
            m_uniqueInstance = nullptr;
            cout << "Boiler has been released." << endl;
        }
    }

    void fill() {
        if (isEmpty()) {
            m_empty = false;
            m_boiled = false;

            cout << "Filling the chocolate-boiler..." << endl;

            // ... 在锅炉内填满巧克力和牛奶混合物
        }
    }

    void drain() {
        if (!isEmpty() && isBoiled()) {
            m_empty = true;

            cout << "Draining the chocolate and milk out from the boiler..." << endl;
            // ... 排出煮沸的巧克力和牛奶
        }
    }

    void boil() {
        if (!isEmpty() && !isBoiled()) {
            // ... 将锅炉内物煮沸
            cout << "Boiling..." << endl;
            m_boiled = true;
        }
    }

    bool isEmpty() {
        return m_empty;
    }

    bool isBoiled() {
        return m_boiled;
    }

private:
    ChocolateBoiler(bool empty, bool boiled):
    m_empty(empty),
    m_boiled(boiled) {

    }
    ~ChocolateBoiler() {

    }
    bool m_empty;
    bool m_boiled;
    static ChocolateBoiler* m_uniqueInstance;
    static mutex m_Mutex;
};

// 初始化静态成员变量
ChocolateBoiler* ChocolateBoiler::m_uniqueInstance = nullptr;
mutex ChocolateBoiler::m_Mutex;

#endif //CHOCOLATEBOILER_CHOCOLATEBOILER_H
