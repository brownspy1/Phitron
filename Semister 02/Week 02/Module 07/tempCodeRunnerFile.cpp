void print(Node * Head){
    Node * temp = Head;
    while (temp!= NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    
}