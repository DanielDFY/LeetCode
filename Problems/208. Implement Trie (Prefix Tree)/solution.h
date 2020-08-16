#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
using std::string;

#include <unordered_map>
using std::unordered_map;

#include <memory>
using std::shared_ptr;
using std::make_shared;

class Trie {
public:
    /** Initialize your data structure here. */
    Trie() : _pRoot(make_shared<TrieNode>()) { }

    /** Inserts a word into the trie. */
    void insert(string word) {
        auto pNode = _pRoot;
        for (const auto& c : word) {
            if (pNode->next.find(c) == pNode->next.end())
                pNode->next[c] = make_shared<TrieNode>();
            pNode = pNode->next[c];
        }
        pNode->isWord = true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        auto pNode = _pRoot;
        for (const auto& c : word) {
            if (pNode->next.find(c) == pNode->next.end())
                return false;
            pNode = pNode->next[c];
        }
        return pNode->isWord;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        auto pNode = _pRoot;
        for (const auto& c : prefix) {
            if (pNode->next.find(c) == pNode->next.end())
                return false;
            pNode = pNode->next[c];
        }
        return true;
    }

private:
    struct TrieNode {
        unordered_map<char, shared_ptr<TrieNode>> next;
        bool isWord;
    	
        TrieNode() : next({}), isWord(false) { }
    };
	
    shared_ptr<TrieNode> _pRoot;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

#endif //LEETCODE_SOLUTION_H