#ifndef STACK_H
#define STACK_H

template<typename T>
class Stack
{
    public:
        Stack() {
            size = 0;
        }
        bool isEmpty() const {
            return size == 0;
        }
        T peek() const {
            return elements[size - 1];
        }
        void push(T value) {
            elements[size++] = value;
        }
        T pop() {
            return elements[--size];
        }
        int getSize() const {
            return size;
        }
    
    private:
        T elements[100];
        int size;
};

#endif