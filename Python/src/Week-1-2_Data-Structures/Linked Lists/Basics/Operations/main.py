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
        temp: Node = self.head
            print(temp.value, end="\t")
            temp = temp.next

    def append(self, value) -> None:
        new_node = Node(value)
        if self.head is None:
            self.head = self.tail = new_node
        else:
            self.tail.next = new_node
            self.tail = new_node
        self.length += 1
        return True

    def prepend(self, value) -> None:
        new_node = Node(value)
        if self.head is None:
            self.head = self.tail = new_node
        else:
            new_node.next = self.head
            self.head = new_node

    def postion(self, value, pos) -> None:
        new_node = Node(value)
        temp = self.head
        if self.head is None:
            self.head = self.tail = new_node
        else:
            count = 1
            while count < pos - 1:
                temp = temp.next
                count += 1

            new_node.next = temp.next
            temp.next = new_node

    def pop(self) -> None:
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

# my_linked_list.append(2)
# my_linked_list.append(3)
# my_linked_list.prepend(0)
# my_linked_list.postion(4, 3)
my_linked_list.pop()
my_linked_list.print_list()
