#pragma once
class Point {
public:
	Point();
	Point(const int x, const int y) :x(x), y(y) {}
	void print();
	void printCircular();
	void changePosition(const int x, const int y);
	void clear();
	bool operator==(const Point &point) { return (this->x == point.x) && (this->y == point.y); }
	int getX() { return x; }
	int getY() { return y; }
	~Point();
private:
	int x, y;
};

