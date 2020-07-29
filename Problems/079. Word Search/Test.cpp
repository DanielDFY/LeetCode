#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Word Search")
{
    Solution s;

    SECTION("normal input") {
        vector<vector<char>> board {
        		{'A','B','C','E'},
            {'S','F','C','S'},
            {'A','D','E','E'}
        };

    		// use copy to avoid modifying the original board
        auto boardCopy = board;
        CHECK(s.exist(boardCopy, "ABCCED") == true);
    	
        boardCopy = board;
        CHECK(s.exist(board, "SEE") == true);
    	
        boardCopy = board;
        CHECK(s.exist(boardCopy, "ABCB") == false);
    }
}