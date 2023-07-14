#include <iostream>
#include <unordered_map>
using namespace std;
struct ListNode {
public:
    int value;
    ListNode* next;

    ListNode(int val) : value(val), next(nullptr) {}
};

class HashTable {
private:
    unordered_map<int, ListNode*> table;
    int tableSize;

public:
    HashTable(int size) : tableSize(size) {}

    int hashFunction(int key) {
        return key % tableSize;
    }

    void insert(int value) {
        int index = hashFunction(value);
        ListNode* newNode = new ListNode(value);
        if (table.find(index) == table.end()) {
            table[index] = newNode;
        } else {
            ListNode* current = table[index];
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    bool search(int key) {
        int index = hashFunction(key);
        if (table.find(index) != table.end()) {
            ListNode* current = table[index];
            while (current != nullptr) {
                if (current->value == key) {
                    return true; // Key found
                }
                current = current->next;
            }
        }
        return false; // Key not found
    }

    void remove(int key) {
        int index = hashFunction(key);
        if (table.find(index) != table.end()) {
            ListNode* prev = nullptr;
            ListNode* current = table[index];
            while (current != nullptr) {
                if (current->value == key) {
                    if (prev == nullptr) {
                        table[index] = current->next;
                    } else {
                        prev->next = current->next;
                    }
                    delete current;
                    break;
                }
                prev = current;
                current = current->next;
            }
        }
    }
};

int main() 
{
    HashTable hashTable(10);

    // Inserting elements
    hashTable.insert(10);
    hashTable.insert(20);
    hashTable.insert(30);
    hashTable.insert(40);

    // Searching elements
    cout << hashTable.search(20) << endl;  // Output: 1 (true)
    cout << hashTable.search(40) << endl;  // Output: 1 (true)
    cout << hashTable.search(50) << endl;  // Output: 0 (false)

    // Removing elements
    hashTable.remove(20);
    cout << hashTable.search(20) << endl;  // Output: 0 (false)

    return 0;
}
