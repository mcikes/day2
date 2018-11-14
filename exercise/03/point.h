class point
{
private:
	int x_, y_;
public:
	point(int x = 0, int y = 0);
	bool operator==(const point &p);
	bool operator!=(const point &p);
	bool operator < (const point &p);
};