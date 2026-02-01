#linkedlist

---

1. [[Inserting, Deleting nodes in linkedlist]]
2. [[Remove Duplicates from Sorted Array]]
3. [[Find Middle In a LinkedList]]
4. [[Remove nth Node from End of List]]
5. [[Linked List Cycle]]
6. [[Reversing a Linked List]]
7. [[Rotate Linked List by K places]]

---

# IMPORTANT CONCEPS USED IN LINKEDLISTS :

#### 1) Slow and Fast Pointer Technique :

**Slow and Fast pointers** (also called the “tortoise and hare” technique) are two pointers that traverse a linked list at different speeds:

- **Slow pointer**: moves **one node at a time**.
    
- **Fast pointer**: moves **two nodes at a time**.
    

By moving at different speeds, the two pointers can reveal structural properties of the list:

- **Middle node**: When the fast pointer reaches the end, the slow pointer is in the middle.
    
- **Cycle detection**: If the list has a loop, the fast pointer will eventually “lap” the slow pointer.
    
- **Nth node from the end**: You can offset the fast pointer by `n` steps ahead and move both pointers together.


---

#### 2) Dummy Pointer :

A **dummy node** (or sentinel node) is an **extra node you create at the start of a linked list**.

- It doesn’t contain meaningful data (usually `0` or `-1`).
- Its `next` pointer points to the **actual head** of your list.
- It allows you to **avoid special cases** when your operations might affect the head of the list.

Think of it as a “buffer” node that simplifies edge-case logic.

```
ListNode dummy(0);   // create dummy node (0 is the value of the node)
dummy.next = head;   // point to actual list
```

Now `dummy.next` acts like the “real head,” and `dummy` itself is just a placeholder.

---

#### Reversal (Entire/k-group) :



