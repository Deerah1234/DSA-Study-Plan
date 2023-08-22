class Node:
    def __init__(self, value) -> None:
        self.value = value
        self.next = None


class LinkedList:
    def __init__(self, value) -> None:
        new_node = Node(value)
        self.head = new_node
        self.tail = new_node
        self.length = 1

    def print_list(self) -> None:
        """Prints the linked list values"""
        temp = self.head
        while temp != None:
            print(temp.value, end="\t")
            temp = temp.next
        print()
        print(self.length)

    def append(self, value: int) -> bool:
        """Appends a node to the end of the LInked list.

        Args:
            value (int): value part of the node to be appended.

        Returns:
            bool: to confrim that the value was appended successfull.
        """
        new_node = Node(value)
        if self.head is None:
            self.head = self.tail = new_node
        self.tail.next = new_node
        self.tail = new_node
        self.length += 1
        return True

    def pop(self) -> Node:
        """Pops out the last node of the Linked List

        Returns:
            Node: returns the node that was poped out from the linked list
        """
        temp = prev = self.head
        if self.length == 0:
            return None
        while temp.next:
            prev = temp
            temp = temp.next
        self.tail = prev
        self.tail.next = None
        self.length -= 1
        if self.length == 0:
            self.head = self.tail = None
        return temp

    def prepend(self, value: int) -> bool:
        """Adds a new node at the begining of the linked list.

        Args:
            value (int): value part of the node to be added at the begining of the linked list.

        Returns:
            bool: to confrim that the node was prepended successfull.
        """
        new_node = Node(value)
        if self.head is None:
            self.head = self.tail = new_node
        new_node.next = self.head
        self.head = new_node
        self.length += 1
        return True

    def pop_fist(self) -> Node:
        """Remove the first node of the linked list.

        Returns:
            Node: the node that has been removed.
        """
        temp = self.head
        if self.head is None:
            return None
        self.head = self.head.next
        temp.next = None
        self.length -= 1
        return temp

    def get(self, index: int) -> Node:
        """Gets a particular node at a given index.

        Args:
            index (int): value to find the node

        Returns:
            Node: the node that was found.
        """
        temp = self.head
        if index < 0 or index > self.length:
            return None
        for _ in range(index):
            temp = temp.next
        return temp

    def set_value(self, value: int, index: int) -> bool:
        """Sets the value of a given index.

        Args:
            value (int): value to overwritten the older value of the given index.
            index (int): index to the node where to set the value.

        Returns:
            bool: confrim that the value was successfully set.
        """
        if temp := self.get(index):
            temp.value = value
            return True
        return False

    def insert(self, value: int, index: int) -> bool:
        """Inserts a node at a specific position in the linked list.

        Args:
            value (int): the value of the node to be inserted.
            index (int): the index of where to insert the node.

        Returns:
            bool: to confrim or not that the node was successfully inserted.
        """
        if index < 0 or index > self.length:
            return False
        if index == 0:
            return self.prepend(value)
        if index == self.length:
            return self.append(value)
        new_node = Node(value)
        temp = self.get(index - 1)
        new_node.next = temp.next
        temp.next = new_node
        self.length += 1
        return True

    def remove(self, index: int) -> Node:
        """Remove node at a specific index.

        Args:
            index (int): index to which the node will be removed

        Returns:
            Node: the node that was removed.
        """
        if index < 0 or index > self.length:
            return None
        if index == 0:
            return self.pop_fist()
        if index == self.length:
            return self.pop()
        prev = self.get(index - 1)
        temp = prev.next
        prev.next = temp.next
        self.length -= 1
        return temp

    def reverse(self) -> None:
        """Reverse a given linked list, starting from back."""
        temp = self.head
        self.head = self.tail
        self.tail = temp

        before = None
        after = temp
        for _ in range(self.length):
            after = temp.next
            temp.next = before
            before = temp
            temp = after


my_list = LinkedList(1)
my_list.append(2)
my_list.append(3)
my_list.append(4)
my_list.prepend(0)
my_list.print_list()
my_list.reverse()
my_list.print_list()
