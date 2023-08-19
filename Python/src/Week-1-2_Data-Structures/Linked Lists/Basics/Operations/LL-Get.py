class Node:
    def __init__(self, value: int) -> None:
        self.value = value
        self.next = None


class LinkedList:
    def __init__(self, value: int) -> None:
        newnode = Node(value)
        self.head = newnode
        self.tail = newnode
        self.length += 1

    def get(self, index: int) -> Node:
        if index < 0 or index > self.length:
            return None
        temp = self.head
        for _ in range(index):
            temp = temp.next
        return temp
