class Node:
    def __init__(self, value: int) -> None:
        self.value = value
        self.next = None


class Stack:
    def __init__(self, value: int) -> None:
        new_node = Node(value)
        self.top = new_node
        self.height = 1

    def print_stack(self) -> None:
        temp = self.top
        while temp is not None:
            print(temp.value, end="\t")
            temp = temp.next
        print()

    def push(self, value: int) -> bool:
        new_node = Node(value)
        if self.height == 0:
            self.top = new_node
        else:
            new_node.next = self.top
            self.top = new_node
        self.height += 1

    def pop(self) -> Node:
        if self.top is None:
            return None
        temp = self.top
        self.top = self.top.next
        temp.next = None
        self.height -= 1
        return temp


my_stack = Stack(4)
my_stack.push(3)
my_stack.print_stack()
my_stack.pop()
my_stack.print_stack()
