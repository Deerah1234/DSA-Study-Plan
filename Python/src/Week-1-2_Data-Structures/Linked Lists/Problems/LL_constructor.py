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
        

my_linked_list = LinkedList(4)
print("Head: ", my_linked_list.head.value)
print("tail: ", my_linked_list.tail.value)
print("Length: ", my_linked_list.length)     
