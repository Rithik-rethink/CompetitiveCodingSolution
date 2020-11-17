
class Node:
    def __init__(self, data = None):
        self.data = data
        self.nextadr = None
class SinglyLLHead:
    def __init__(self):
        self.head = None

def find(root , key):
    while root:
        if root.data == key:
            return True
        root = root.nextadr
    return False

if __name__ == "__main__":
    root = SinglyLLHead
    print('enter size')
    n = 5
    i = 0
    root.head = Node(i)
    prev = root.head
    n-=1
    while n:
        i += 1
        e = Node(i)
        prev.nextadr = e
        prev = e
        n-=1
    r = root.head
    key = 2
    find(root.head , key)
    while r:
        print(r.data)
        r = r.nextadr
        
