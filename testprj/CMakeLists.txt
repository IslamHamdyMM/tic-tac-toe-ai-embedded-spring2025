cmake_minimum_required(VERSION 3.10)
project(TicTacToeTests)

# Add Google Test
add_subdirectory(lib/googletest)
enable_testing()

# Include source headers
include_directories(src)

# Define your test executable
add_executable(board_tests
  tests/test_board.cpp
  src/Board.cpp
)

# Link the executable with Google Test
target_link_libraries(board_tests gtest gtest_main)

# Register tests with CTest
include(GoogleTest)
gtest_discover_tests(board_tests)

add_executable(game_tests
  src/GameLogic.cpp
  src/Board.cpp
  tests/test_game.cpp
)

target_link_libraries(game_tests gtest gtest_main)

gtest_discover_tests(game_tests)
 add_executable(minimax_tests
  src/MiniMaxAgent.cpp
  src/Board.cpp
  tests/test_minimaxagent.cpp
)

target_link_libraries(minimax_tests gtest gtest_main)
gtest_discover_tests(minimax_tests)

add_executable(playerhistory_tests
  src/PlayerHistory.cpp
  tests/test_playerhistory.cpp
)

target_link_libraries(playerhistory_tests gtest gtest_main)

add_executable(performance_test
  src/Board.cpp
  src/MiniMaxAgent.cpp
  src/PlayerHistory.cpp
  tests/performance_test.cpp
)

target_link_libraries(performance_test PRIVATE stdc++fs)
