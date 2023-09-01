def find_kth_from_end(ll, k) -> None:
    if not ll or k < 1:
        return None

    slow_pointer = ll
    fast_pointer = ll

    # Move the fast pointer k steps ahead
    for _ in range(k):
        if fast_pointer is None:
            return None  # The linked list has fewer than k items
        fast_pointer = fast_pointer.next

    # Move both pointers until the fast pointer reaches the end
    while fast_pointer:
        slow_pointer = slow_pointer.next
        fast_pointer = fast_pointer.next

    return slow_pointer.value
