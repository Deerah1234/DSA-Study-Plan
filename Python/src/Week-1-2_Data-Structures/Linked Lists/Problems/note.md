# Problems

1. Instructions: Write the Node and LinkedList constructors2
2. Write all the Linked List methods
    - Append
    - Pop
    - Prepend
    - Pop first
    - Get
    - Set
    - Insert
    - Remove
    - Reverse
3. Instructions:
   Write a method to find and return the middle node in the Linked List WITHOUT using the length attribute.
4. Instructions:
   LL: Has Loop (⚡Interview Question)
   Write a method called has_loop that is part of the linked list class.

    The method should be able to detect if there is a cycle or loop present in the linked list.

    The method should utilize Floyd's cycle-finding algorithm, also known as the "tortoise and hare" algorithm, to determine the presence of a loop efficiently.

    The method should follow these guidelines:

    Create two pointers, slow and fast, both initially pointing to the head of the linked list.

    Traverse the list with the slow pointer moving one step at a time, while the fast pointer moves two steps at a time.

    If there is a loop in the list, the fast pointer will eventually meet the slow pointer. If this occurs, the method should return True.

    If the fast pointer reaches the end of the list or encounters a None value, it means there is no loop in the list. In this case, the method should return False.

5. Instructions:
   LL: Remove Duplicates (⚡Interview Question)
   You are given a singly linked list that contains integer values, where some of these values may be duplicated.

    Your task is to implement a method called remove_duplicates() within the LinkedList class that removes all duplicate values from the list.

    Your method should not create a new list, but rather modify the existing list in-place, preserving the relative order of the nodes.

    You can implement the remove_duplicates() method in two different ways:

    Using a Set - This approach will have a time complexity of O(n), where n is the number of nodes in the linked list. You are allowed to use the provided Set data structure in your implementation.

    Without using a Set - This approach will have a time complexity of O(n^2), where n is the number of nodes in the linked list. You are not allowed to use any additional data structures for this implementation.

    Here is the method signature you need to implement:

    def remove_duplicates(self):

    Example:

    Input:

    LinkedList: 1 -> 2 -> 3 -> 1 -> 4 -> 2 -> 5

    Output:

    LinkedList: 1 -> 2 -> 3 -> 4 -> 5
