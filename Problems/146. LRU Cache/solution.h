#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <list>
using std::list;

#include <utility>
using std::pair;

#include <unordered_map>
using std::unordered_map;


class LRUCache {
public: 
    LRUCache(int capacity) : _capacity(capacity) {

    }

    int get(int key) {
        auto it = _cache.find(key);
        if (it == _cache.end()) return -1;
        update(it);
        return it->second.first;
    }

    void put(int key, int value) {
        auto it = _cache.find(key);
        if (it != _cache.end()) {
            update(it);
        }
        else {
            if (_cache.size() == _capacity) {
                _cache.erase(_used.back());
                _used.pop_back();
            }
            _used.push_front(key);
        }
        _cache[key] = { value, _used.begin() };
    }

private:
    unordered_map<int, pair<int, list<int>::iterator>> _cache;
    list<int> _used;
    int _capacity;

    void update(unordered_map<int, pair<int, list<int>::iterator>>::iterator& it) {
        int key = it->first;
        _used.erase(it->second.second);
        _used.push_front(key);
        it->second.second = _used.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

#endif //LEETCODE_SOLUTION_H