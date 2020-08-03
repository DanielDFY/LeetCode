#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

Node* createList(const std::vector<int>& v, const std::vector<int>& r) {
    assert(v.size() == r.size());
	
    Node* pHead = new Node(0);
    Node* pTail = pHead;

    std::vector<Node*> nodes;

    for (const auto& k : v) {
        pTail->next = new Node(k);
        pTail = pTail->next;
        nodes.push_back(pTail);
    }

    for (int i = 0; i < r.size(); ++i) {
        if (r[i] >= 0) {
            nodes[i]->random = nodes[r[i]];
        }
    }

    Node* pRet = pHead->next;
    delete(pHead);
    pHead = nullptr;

    return pRet;
}

void deleteList(Node* pList) {
    for (Node* pNext; pList != nullptr; pList = pNext) {
        pNext = pList->next;
        delete(pList);
    }
}

bool checkList(Node* pList1, Node* pList2) {
    while (pList1 != nullptr && pList2 != nullptr) {
        if (pList1->val != pList2->val) {
            return false;
        }
        else {
            pList1 = pList1->next;
            pList2 = pList2->next;
        }
    }

    return pList1 == nullptr && pList2 == nullptr;
}

TEST_CASE("Copy List with Random Pointer")
{
	Solution s;
	
	SECTION("normal input") {
		vector<int> input1{ 7,13,11,10,1 };
        vector<int> random1{ -1,0,4,2,0 };

        Node* inputList1 = createList(input1, random1);
        Node* outputList1 = s.copyRandomList(inputList1);
		Node* ansList1 = createList(input1, random1);
		CHECK(checkList(outputList1, ansList1));
        deleteList(inputList1);
        deleteList(outputList1);
        deleteList(ansList1);

        vector<int> input2{ 1,2 };
        vector<int> random2{ 1,1 };

        Node* inputList2 = createList(input2, random2);
        Node* outputList2 = s.copyRandomList(inputList2);
        Node* ansList2 = createList(input2, random2);
        CHECK(checkList(outputList2, ansList2));
        deleteList(inputList2);
        deleteList(outputList2);
        deleteList(ansList2);

        vector<int> input3{ 3,3,3};
        vector<int> random3{ -1,0,-1};

        Node* inputList3 = createList(input3, random3);
        Node* outputList3 = s.copyRandomList(inputList3);
        Node* ansList3 = createList(input3, random3);
        CHECK(checkList(outputList3, ansList3));
        deleteList(inputList3);
        deleteList(outputList3);
        deleteList(ansList3);
	}

	SECTION("empty input") {
        vector<int> input{  };
        vector<int> random{  };

        Node* inputList = createList(input, random);
        Node* outputList = s.copyRandomList(inputList);
        Node* ansList = createList(input, random);
        CHECK(checkList(outputList, ansList));
        deleteList(inputList);
        deleteList(outputList);
        deleteList(ansList);
	}
}