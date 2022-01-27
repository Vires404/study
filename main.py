# the first programme


data = [
        {
            'id': 0,
            'name': 'beef',
            'price': '20 dollars',
            'country of origin': 'japan',
            'wait time': '30 minutes'
        },
        {
            'id': 1,
            'name': 'fish',
            'price': '15 dollars',
            'country of origin': 'japan',
            'wait time': '20 minutes'
        },
        {
            'id': 2,
            'name': 'ham',
            'price': '12 dollars',
            'country of origin': 'france',
            'wait time': '15 minutes'
        },
        {
            'id': 3,
            'name': 'pizza',
            'price': '18 dollars',
            'country of origin': 'the US',
            'wait time': '20 minutes'
        },
]
# show all the information
def show_all_info():
    for item in data:
        print(item)

# create a new piece of information
def new_item():
    id = input('please enter id')
    name = input('please enter name')
    price = input('please enter price')
    origin = input('please enter the origin')
    time = input('please enter the time')
    item = {
        'id': id,
        'name': name,
        'price': price,
        'country of origin': origin,
        'wait time': time
    }
    data.append(item)

# Search a piece of information
def search_info():
    item_id = int(input('please enter the id of that item'))
    for item in data:
        if item['id'] == item_id:
            print(item)
            return
    else:
        print('sorry, we do not have this item')
        print('do you want to add this item?')
        add_choice = input('please enter yes or no')
        if add_choice == 'yes':
            print('you can add a new item')
            new_item()

# modify the info
def modify_item():
    item_id = int(input('please enter the id of that item'))
    for item in data:
        if item['id'] == item_id:
            print(item)
            item['id'] = int(input('please input new id'))
            item['name'] = input('please input new name')
            item['price'] = input('please input new price')
            item['country of origin'] = input('please input new origin')
            item['wait time'] = input('please input new time')
            return
    else:
        print('sorry, we do not have this item')

# delete the info
def remove_info():
    item_id = int(input('please enter the id of that item'))
    for item in data:
        if item['id'] == item_id:
            print(item)
            data.remove(item)
            return
    else:
        print('sorry, we do not have this item')

while True:
    print('Welcome to use this programme')
    print('In this programme you can see or change the menu')
    print('0. Show all the information')
    print('1. Create a new piece of information')
    print('2. Search a piece of information')
    print('3. Change a piece of information')
    print('4. Delete a piece of information')
    print('5. Exit this programme')
    operation = input('please enter the number of your choice')
    if operation == '0':
        print('here are our menu')
        show_all_info()
    elif operation == '1':
        print('you can add a new item')
        new_item()
    elif operation == '2':
        search_info()
    elif operation == '3':
        modify_item()
    elif operation == '4':
        remove_info()
    elif operation == '5':
        print('Are you sure to exit this programme?')
        choice = input('please enter yes or no')
        if choice == 'yes':
            break
        elif choice == 'no':
            continue



