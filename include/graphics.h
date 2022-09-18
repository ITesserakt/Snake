#pragma once

class Graphics {
public:
    virtual void print_empty_cell() = 0;
    virtual void print_snake_cell() = 0;
    virtual void print_snake_head_cell() = 0;
    virtual void print_wall_cell() = 0;
    virtual void print_fruit_cell() = 0;
    virtual void print_teleport() = 0;
};


class SymGraphics : public Graphics {
public:
    void print_empty_cell() override;
    void print_snake_cell() override;
    void print_snake_head_cell() override;
    void print_wall_cell() override;
    void print_fruit_cell() override;
    void print_teleport() override;
};

class EscSymGraphics : public Graphics {
public:
    void print_empty_cell() override;
    void print_snake_cell() override;
    void print_snake_head_cell() override;
    void print_wall_cell() override;
    void print_fruit_cell() override;
    void print_teleport() override;
};

class EscGraphics : public Graphics {
public:
    void print_empty_cell() override;
    void print_snake_cell() override;
    void print_snake_head_cell() override;
    void print_wall_cell() override;
    void print_fruit_cell() override;
    void print_teleport() override;
};
