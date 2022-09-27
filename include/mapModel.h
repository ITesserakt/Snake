#pragma once

#include <cstdlib>

#include "settings.h"
#include "snake.h"

enum Cell {
// Тип клетки
    EMPTY,
    SNAKE_HEAD,
    SNAKE,
    WALL,
    TELEPORT,
    FRUIT,
    ANTIFRUIT
};

class MapModel {
// Класс для отображения карты
public:
    MapModel(Settings settings);
    ~MapModel();
    void put_snake(Snake);
    void generate_fruit(Cell);
    void clear_cell(Position);
    Cell check_cell(unsigned, unsigned);
    unsigned get_width();
    unsigned get_length();
private:
    Cell **field;
    unsigned length;
    unsigned width;
};
