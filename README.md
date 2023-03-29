# Inventory-in-C
This program implements a simple inventory management system using a linked list data structure. The user can insert new parts into the inventory, search for parts by part number, update the quantity on hand of a part, and display the entire inventory.

The program defines a Node struct which contains the part number, part name, quantity on hand, and a pointer to the next node in the linked list. The program then defines a global pointer inventory which points to the first node in the linked list.

The createNode() function dynamically allocates memory for a new Node struct and returns a pointer to it.

The insertingNewPart() function prompts the user for a new part number, part name, and quantity on hand. It then creates a new node using createNode(), sets its values to the user input, and inserts it into the linked list in ascending order based on part number. If the inventory is empty, the new node becomes the first node in the list.

The searchByPartNumber() function prompts the user for a part number and then traverses the linked list to find a node with that part number. If it finds one, it prints out the node's part number, name, and quantity on hand. If it does not find one, it prints an error message.

The updateInventory() function prompts the user for a part number and then traverses the linked list to find a node with that part number. If it finds one, it prompts the user for a new quantity on hand and updates the node's quantity on hand. It then prints out the updated node's part number, name, and quantity on hand. If it does not find one, it prints an error message.

The displayInventory() function simply traverses the linked list and prints out the part number, name, and quantity on hand of each node in the list.

The main() function provides a menu for the user to choose which operation to perform. It uses a do-while loop to continuously prompt the user for input until they choose to terminate the program.

![Screenshot (2357)](https://user-images.githubusercontent.com/104863304/228558352-df44e06e-9c9a-49a4-8f41-35b34d4e8f78.png)
![Screenshot (2358)](https://user-images.githubusercontent.com/104863304/228558490-3b3866b3-2caa-40bd-9227-ea61afacb6f0.png)
