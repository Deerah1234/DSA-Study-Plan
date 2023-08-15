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

    def pop(self) -> Node:
        """Pops out the last node of the list

        Returns:
            Node: Returns the last node been poped out of the list
        """
        temp = pre = self.head
        if self.length == 0:
            return None
        while temp.next:
            pre = temp
            temp = temp.next
        self.tail = pre
        self.tail.next = None
        self.length -= 1
        if self.length == 0:
            self.head = self.tail = None
        return temp


my_linked_list = LinkedList(1)
my_linked_list.pop()
