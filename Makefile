CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

SRC = src/main.c++ \
      src/menu.c++ \
      src/game.c++ \
      src/user.c++ \
      src/stats.c++ \
      src/ml.c++ \
      src/dictionary.c++ \
      src/database.c++ \
      src/universal_helpers.c++

TARGET = wordapt

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)