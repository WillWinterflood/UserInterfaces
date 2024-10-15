#pragma once // So that the file is only included once in a single compilation


class Rectangle {
    private:
        double x;
        double y;
    public:
        Rectangle(double height): Rectangle(0, height) {}
        Rectangle(double, double);
        double getX() const {
            return x;
        }
        double getY() const {
            return y;
        }
        bool containsPo

};