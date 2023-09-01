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
        while temp is not None:
            print(temp.value, end="\t")
            temp = temp.next
        print()

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
        self.length += 1
        return True

    def pop(self) -> Node:
        """Pops out the element of the node from the last

        Returns:
            _type_: _description_
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

    def pop_first(self) -> Node:
        if self.length == 0:
            return None

        temp = self.head
        self.head = self.head.next
        temp.next = None
        self.length -= 1

        if self.length == 0:
            self.tail = None
        return temp

    def get(self, index: int) -> None:
        if index < 0 or index > self.length:
            return None
        temp = self.head
        for _ in range(index):
            temp = temp.next
        return temp

    def set_value(self, index: int, value: int) -> bool:
        if temp := self.get(index):
            temp.value = value
            return True
        return False

    def insert(self, index: int, value: int) -> bool:
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
        if index < 0 or index > self.length:
            return None
        if index == 0:
            return self.pop_first()
        if index == self.length:
            return self.pop()
        temp = self.head
        prev = self.head
        prev = self.get(index - 1)
        temp = prev.next
        prev.next = temp.next
        self.length -= 1
        return temp

    def reverse(self) -> None:
        temp = self.head
        self.head = self.tail
        self.tail = temp

        after = temp
        before = None
        for _ in range(self.length):
            after = temp.next
            temp.next = before
            before = temp
            temp = after

    def find_kth_from_end(self, k: int) -> Node:
        fast = slow = self.head

        for _ in range(k):
            if fast is None:
                return None
            fast = fast.next

        while fast:
            slow = slow.next
            fast = fast.next

        return slow.value


my_linked_list = LinkedList(1)

my_linked_list.append(2)
my_linked_list.append(3)
my_linked_list.append(3)
my_linked_list.append(44)
my_linked_list.append(4)
my_linked_list.append(5)
my_linked_list.prepend(0)
my_linked_list.print_list()
print(my_linked_list.find_kth_from_end(3), end="\n")
