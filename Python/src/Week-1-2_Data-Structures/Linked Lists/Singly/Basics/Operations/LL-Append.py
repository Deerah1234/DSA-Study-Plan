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
        temp = self.head
        while temp is not None:
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


# my_linked_list = LinkedList(4)
# my_linked_list.append(3)
# my_linked_list.print_list()


# def main():
#     choice = 1
#     value = int(input("Enter a value: "))
#     my_linked_list = LinkedList(value)

#     while choice:
#         choice = int(input("Do you want to continue? (0 or 1): "))

#         if choice == 0:
#             break

#         value = int(input("Enter a value: "))
#         my_linked_list.append(value)

#     my_linked_list.print_list()


# main()
