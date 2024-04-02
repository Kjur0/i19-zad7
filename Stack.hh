#include "StackItem.hh"

/**
 * @class Stack
 * @brief A class representing a stack data structure.
 *
 * The Stack class provides basic operations for manipulating a stack, such as push, pop, size, and isEmpty.
 */
class Stack {
private:
	int sp; /**< stack pointer */
	StackItem* top; /**< The top item of the stack. */

public:
	/**
	 * @brief Default constructor for the Stack class.
	 *
	 * Initializes the stack with an initial size of 0 and a null top item.
	 */
	Stack() : sp(0), top(nullptr) {}

	/**
	 * @brief Pushes a new item onto the stack.
	 *
	 * @param p The item to be pushed onto the stack.
	 */
	void push(Point p) {
		StackItem* item = new StackItemRegular(p, top);
		top = item;
		sp++;
	}

	/**
	 * @brief Pops the top item from the stack.
	 *
	 * @return The popped item from the stack.
	 *         If the stack is empty, returns a default-constructed Point object.
	 */
	Point pop() {
		if (isEmpty()) {
			return Point();
		}
		StackItem* poppedItem = top;
		top = top->getSINext();
		Point p = poppedItem->getPoint();
		delete poppedItem;
		sp--;
		return p;
	}

	/**
	 * @brief Returns the current size of the stack.
	 *
	 * @return The size of the stack.
	 */
	int size() {
		return sp;
	}

	/**
	 * @brief Checks if the stack is empty.
	 *
	 * @return True if the stack is empty, false otherwise.
	 */
	bool isEmpty() {
		return (sp == 0);
	}
};