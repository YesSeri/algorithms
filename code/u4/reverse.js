function Node(val, next){
    this.val = val;
    this.next = next;
}

function reverseLinkedList(node){
    let prevNode = null;
    let nextNode = node.next;
    while(nextNode != null){
        node.next = prevNode;
        prevNode = node;
        node = nextNode;
        nextNode = node.next;
    }
    node.next = prevNode;
    prevNode = node;
    node = nextNode;
}


let z = new Node(3, null);
let y = new Node(44, z);
let x = new Node(-7, y);
console.log(x)
debugger
reverseLinkedList(x);
console.log(z)
