/**
 * Unit Tests for TicTacToeBoard
 **/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"

class TicTacToeBoardTest : public ::testing::Test
{
protected:
	TicTacToeBoardTest() {}
	virtual ~TicTacToeBoardTest() {}
	virtual void SetUp() {}	   // sets up before each test (after constructor)
	virtual void TearDown() {} // clean up after each test, (before destructor)
};

// test for the game

TEST(TicTacToeBoardTest, TicTacToe_Board)
{
	fields[0, 0] = new Field(); // checkign if fields
	fields[0, 1] = new Field();
	ASSERT_TRUE(true);
}
