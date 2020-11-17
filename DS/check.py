import sys
file = sys.argv[1]

class Node:
    def __init__(self , info = None):
        self.data = info
        self.nextadr = None

class SinglyLL:
    def __init__(self):
        self.head = None

if __name__ == '__main__':
    heap = SinglyLL()
    stack = SinglyLL()
    objects = ['struct','class','vector']
    with open(file) as file:
        lines = file.readlines()
        flag = False
        list3 = []
        for i in lines:
            i = i[0:-1]
            # print(i)
            if 'class' in i:
                list2 = i.split(' ')
                for k in list2:
                    if k == 'class':
                        continue
                    s = k[0:-1]
                    r = k[0:-1]
                    list3.append(s)
                    s += "()"
                    list3.append(s)
                    r += "(i)"
                    list3.append(r)


            if 'main' in i: 
                flag = True
                continue
            if flag:
                # print(flag)
                list1 = i.split(' ')
                flag2 = False
                c = 0
                for j in list1:
                    if j == " ":
                        c += 1
                        continue
                    if j in objects or j in list3:
                        flag2 = True
                        break
                # print(i , flag2 , list3)

                if c == len(list1):
                    continue

                if flag2:
                    if heap.head == None:
                        heap.head = Node(i)
                        tail = heap.head
                    else:
                        e = Node(i)
                        tail.nextadr = e
                        tail = e
                else:
                    if stack.head == None:
                        stack.head = Node(i)
                        tail1 = stack.head
                    else:
                        e = Node(i)
                        tail1.nextadr = e
                        tail1 = e
    
    temp = heap.head
    print('heap memory')

    while temp is not None:
        print(temp.data)
        temp = temp.nextadr

    temp2 = stack.head
    print('stack memory')
    # print(temp2)
    while temp2 is not None:
        print(temp2.data)
        temp2 = temp2.nextadr

                        