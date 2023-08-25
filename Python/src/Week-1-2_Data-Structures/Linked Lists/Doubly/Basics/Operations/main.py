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
        return

    def pop(self) -> Node:
        if self.length == 0:
            return None
        temp = self.tail
        if self.length == 1:
            self.head = self.tail = None
        else:
            self.tail = self.tail.prev
            self.tail.next = None
            temp.prev = None
        self.length -= 1
        return temp

    def prepend(self, value: int) -> bool:
        new_node = Node(value)
        if self.length == 0:
            self.head = self.tail = new_node
        else:
            new_node.next = self.head
            self.head.prev = new_node
            self.head = new_node
        self.length += 1
        return True

    def pop_first(self) -> Node:
        if self.length == 0:
            return None
        temp = self.head
        if self.length == 1:
            self.head = self.tail = None
        else:        
            self.head = self.head.next
            self.head.prev = None
            temp.next = None
        self.length -= 1
        return temp


my_doubly_linked_list = DoublyLinkedList(7)
# my_doubly_linked_list.append(6)
# my_doubly_linked_list.append(8)
# my_doubly_linked_list.append(9)
my_doubly_linked_list.print_list()
my_doubly_linked_list.pop_first()
my_doubly_linked_list.pop_first()
my_doubly_linked_list.print_list()
