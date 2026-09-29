CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

SRC = src/main.cpp \
      src/menu.cpp \
      src/game.cpp \
      src/user.cpp \
      src/stats.cpp \
      src/ml.cpp \
      src/dictionary.cpp \
      src/database.cpp

TARGET = wordapt

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)