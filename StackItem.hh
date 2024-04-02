#include "Point.hh"

/**
 * @class StackItem
 * @brief Represents an item in a stack.
 * 
 * The StackItem class represents an item in a stack. It contains a Point object and a pointer to the next item in the stack.
 */
class StackItem {
protected:
	Point p; /**< The Point object stored in the stack item. */
	StackItem* next; /**< Pointer to the next item in the stack. */

public:
	/**
	 * @brief Constructs a StackItem object with the given Point and next item.
	 * @param p The Point object to be stored in the stack item.
	 * @param next Pointer to the next item in the stack. Default is nullptr.
	 */
	StackItem(Point p, StackItem* next = nullptr) : p(p), next(next) {};

	/**
	 * @brief Destructor for the StackItem class.
	 */
	virtual ~StackItem();

	/**
	 * @brief Sets the next item in the stack.
	 * @param si Pointer to the next item in the stack.
	 */
	virtual void setSINext(StackItem* si) { next = si; };
	/**
	 * @brief Gets the next item in the stack.
	 * @return Pointer to the next item in the stack.
	 */
	virtual StackItem* getSINext() { return next; };

	/**
	 * @brief Sets the Point object stored in the stack item.
	 * @param p The Point object to be stored in the stack item.
	 */
	void setPoint(Point p) { this->p = p; };
	/**
	 * @brief Gets the Point object stored in the stack item.
	 * @return The Point object stored in the stack item.
	 */
	Point getPoint() { return p; };
};


/**
 * @brief Represents a regular stack item.
 * 
 * This class inherits from StackItem and adds functionality specific to regular stack items.
 */
class StackItemRegular : public StackItem {
public:
	/**
	 * @brief Constructs a StackItemRegular object.
	 * 
	 * @param p The point associated with the stack item.
	 * @param next Pointer to the next stack item.
	 */
	StackItemRegular(Point p, StackItem* next) : StackItem(p, next) {};

	/**
	 * @brief Sets the next stack item.
	 * 
	 * @param item Pointer to the next stack item.
	 */
	void setSINext(StackItem* item) override { next = item; };
	/**
	 * @brief Gets the next stack item.
	 * 
	 * @return Pointer to the next stack item.
	 */
	StackItem* getSINext() override { return next; };
};

/**
 * @class StackItemBottom
 * @brief Represents the bottom item of a stack.
 * 
 * This class inherits from the StackItem class and represents the bottom item of a stack.
 * It provides a method to get the next item in the stack, which is always nullptr for the bottom item.
 */
class StackItemBottom : public StackItem {
public:
	/**
	 * @brief Constructs a StackItemBottom object with the given point.
	 * @param p The point associated with the stack item.
	 */
	StackItemBottom(Point p) : StackItem(p) {};

	/**
	 * @brief Gets the next item in the stack.
	 * @return A pointer to the next item in the stack, which is always nullptr for the bottom item.
	 */
	StackItem* getSINext() override { return nullptr; };
};