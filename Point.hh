/**
 * @brief The Point class represents a point in a 2D coordinate system.
 */
class Point {
private:
	int x; /**< The x-coordinate of the point. */
	int y; /**< The y-coordinate of the point. */

public:
	/**
	 * @brief Constructs a Point object with the given x and y coordinates.
	 * @param x The x-coordinate of the point.
	 * @param y The y-coordinate of the point.
	 */
	Point(int x, int y) : x(x), y(y) {}
	/**
	 * @brief Constructs a Point object by copying the coordinates from another Point object.
	 * @param p The Point object to copy from.
	 */
	Point(const Point& p) : x(p.x), y(p.y) {}
	/**
	 * @brief Constructs a Point object by adding an offset to the coordinates of another Point object.
	 * @param p The Point object to add the offset to.
	 * @param offset The offset to add to the coordinates.
	 */
	Point(const Point& p, int offset) : x(p.x + offset), y(p.y + offset) {}
	/**
	 * @brief Constructs a Point object by adding separate offsets to the coordinates of another Point object.
	 * @param p The Point object to add the offsets to.
	 * @param offsetX The offset to add to the x-coordinate.
	 * @param offsetY The offset to add to the y-coordinate.
	 */
	Point(const Point& p, int offsetX, int offsetY) : x(p.x + offsetX), y(p.y + offsetY) {}
	/**
	 * @brief Constructs a Point object by adding the coordinates of another Point object as an offset.
	 * @param p The Point object to add as an offset.
	 * @param offset The Point object representing the offset.
	 */
	Point(const Point& p, const Point& offset) : x(p.x + offset.x), y(p.y + offset.y) {}
	/**
	 * @brief Constructs a Point object with the default coordinates (0, 0).
	 */
	Point() : x(0), y(0) {}

	/**
	 * @brief Destroys the Point object.
	 */
	~Point() { x = 0; y = 0; }

	/**
	 * @brief Sets the x and y coordinates of the point.
	 * @param x The new x-coordinate.
	 * @param y The new y-coordinate.
	 */
	void setCords(int x, int y) { this->x = x; this->y = y; }
	/**
	 * @brief Sets the x-coordinate of the point.
	 * @param x The new x-coordinate.
	 */
	void setX(int x) { this->x = x; }
	/**
	 * @brief Sets the y-coordinate of the point.
	 * @param y The new y-coordinate.
	 */
	void setY(int y) { this->y = y; }

	/**
	 * @brief Gets the x-coordinate of the point.
	 * @return The x-coordinate.
	 */
	int getX() const { return x; }
	/**
	 * @brief Gets the y-coordinate of the point.
	 * @return The y-coordinate.
	 */
	int getY() const { return y; }

	/**
	 * @brief Adds the coordinates of two Point objects and returns the result as a new Point object.
	 * @param p The Point object to add.
	 * @return The result of the addition.
	 */
	Point operator+(const Point& p) const { return Point(x + p.x, y + p.y); }
	/**
	 * @brief Subtracts the coordinates of two Point objects and returns the result as a new Point object.
	 * @param p The Point object to subtract.
	 * @return The result of the subtraction.
	 */
	Point operator-(const Point& p) const { return Point(x - p.x, y - p.y); }
	/**
	 * @brief Multiplies the coordinates of the Point object by a scalar value and returns the result as a new Point object.
	 * @param n The scalar value to multiply by.
	 * @return The result of the multiplication.
	 */
	Point operator*(int n) const { return Point(x * n, y * n); }
	/**
	 * @brief Divides the coordinates of the Point object by a scalar value and returns the result as a new Point object.
	 * @param n The scalar value to divide by.
	 * @return The result of the division.
	 */
	Point operator/(int n) const { return Point(x / n, y / n); }
	/**
	 * @brief Adds the coordinates of another Point object to the current Point object and updates the current object.
	 * @param p The Point object to add.
	 * @return A reference to the updated current Point object.
	 */
	Point operator+=(const Point& p) { x += p.x;y += p.y;return *this; }
	/**
	 * @brief Subtracts the coordinates of another Point object from the current Point object and updates the current object.
	 * @param p The Point object to subtract.
	 * @return A reference to the updated current Point object.
	 */
	Point operator-=(const Point& p) { x -= p.x;y -= p.y;return *this; }
	/**
	 * @brief Multiplies the coordinates of the Point object by a scalar value and updates the current object.
	 * @param n The scalar value to multiply by.
	 * @return A reference to the updated current Point object.
	 */
	Point operator*=(int n) { x *= n;y *= n;return *this; }
	/**
	 * @brief Divides the coordinates of the Point object by a scalar value and updates the current object.
	 * @param n The scalar value to divide by.
	 * @return A reference to the updated current Point object.
	 */
	Point operator/=(int n) { x /= n; y /= n; return *this; }
	/**
	 * @brief Checks if the coordinates of two Point objects are equal.
	 * @param p The Point object to compare with.
	 * @return True if the coordinates are equal, false otherwise.
	 */
	bool operator==(const Point& p) const { return x == p.x && y == p.y; }
	/**
	 * @brief Checks if the coordinates of two Point objects are not equal.
	 * @param p The Point object to compare with.
	 * @return True if the coordinates are not equal, false otherwise.
	 */
	bool operator!=(const Point& p) const { return x != p.x || y != p.y; }
	/**
	 * @brief Checks if the coordinates of the current Point object are less than the coordinates of another Point object.
	 * @param p The Point object to compare with.
	 * @return True if the coordinates are less, false otherwise.
	 */
	bool operator<(const Point& p) const {
		return x < p.x || (x == p.x && y < p.y);
	}
	/**
	 * @brief Checks if the coordinates of the current Point object are less than or equal to the coordinates of another Point object.
	 * @param p The Point object to compare with.
	 * @return True if the coordinates are less than or equal, false otherwise.
	 */
	bool operator<=(const Point& p) const { return x < p.x || (x == p.x && y <= p.y); }
	/**
	 * @brief Checks if the coordinates of the current Point object are greater than the coordinates of another Point object.
	 * @param p The Point object to compare with.
	 * @return True if the coordinates are greater, false otherwise.
	 */
	bool operator>(const Point& p) const { return x > p.x || (x == p.x && y > p.y); }
	/**
	 * @brief Checks if the coordinates of the current Point object are greater than or equal to the coordinates of another Point object.
	 * @param p The Point object to compare with.
	 * @return True if the coordinates are greater than or equal, false otherwise.
	 */
	bool operator>=(const Point& p) const { return x > p.x || (x == p.x && y >= p.y); }
	/**
	 * @brief Negates the coordinates of the Point object and returns the result as a new Point object.
	 * @return The negated Point object.
	 */
	Point operator-() const { return Point(-x, -y); }
	/**
	 * @brief Increments the coordinates of the Point object by 1 and returns the updated Point object.
	 * @return A reference to the updated Point object.
	 */
	Point operator++() { ++x; ++y; return *this; }
	/**
	 * @brief Decrements the coordinates of the Point object by 1 and returns the updated Point object.
	 * @return A reference to the updated Point object.
	 */
	Point operator--() { --x; --y; return *this; }
};