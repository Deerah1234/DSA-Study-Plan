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
