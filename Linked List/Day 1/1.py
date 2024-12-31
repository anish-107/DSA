class Node:
    def __init__(self, data):
        self.data = data
        self.address = None


arr = [0, 1, 2, 3, 4, 5, 6 , 7, 8, 9]

head = None

for i in range(len(arr)):
    if head is None:
        head = Node(arr[i])

    else:
        temp = Node(arr[i])
        temp.address = head
        head = temp


temp = head
while temp is not None:
    print(temp.data)
    temp = temp.address

