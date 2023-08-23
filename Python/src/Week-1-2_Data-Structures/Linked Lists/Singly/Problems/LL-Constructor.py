class Node:
    def __init__(self, value: int) -> None:
        self.value = value
        self.next = None


class LinkedList:
    def __init__(self, value: int) -> None:
        new_node = Node(value)
        self.head = new_node
        self.tail = new_node
        self.length = 1

    def print(self) -> None:
        temp = self.head
        while temp is not None:
            print(temp.value)
            temp = temp.next

    def append(self, value: int) -> None:
        new_node = Node(value)
        if self.head is None:
            self.head = self.tail = new_node
        else:
            self.tail.next = new_node
            self.tail = new_node
            self.length += 1


my_linked_list = LinkedList(4)
my_linked_list.append(3)

# print("Head: ", my_linked_list.head.value)
# print("tail: ", my_linked_list.tail.value)
# print("Length: ", my_linked_list.length)
my_linked_list.print()
