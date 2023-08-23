class Node:
    def __init__(self, value: int) -> None:
        self.value = value
        self.next = None
        self.prev = None


class DoublyLinkedList:
    def __init__(self, value: int) -> None:
        new_node = Node(value)
        self.head = new_node
        self.tail = new_node
        self.length = 1

    def print_list(self) -> None:
        temp = self.head
        while temp is not None:
            print(temp.value, end="\t")
            temp = temp.next
        print()

    def append(self, value: int) -> bool:
        new_node = Node(value)
        if self.head is None:
            self.head = self.tail = new_node
        else:
            new_node.prev = self.tail
            self.tail.next = new_node
            self.tail = new_node
        self.length += 1
        return True


my_DLL = DoublyLinkedList(7)
my_DLL.append(6)
my_DLL.print_list()
