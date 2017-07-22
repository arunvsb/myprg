public static void spiralOrZigzagLevelOrder(TreeNode root) {
        if(root==null) return; 
        Stack stack=new Stack();
        stack.push(root);
        
        boolean directionflag=false;
        while(!stack.isEmpty())
        {
            Stack tempStack=new Stack();
        
            while(!stack.isEmpty())
            {
                TreeNode tempNode=stack.pop();
             System.out.printf("%d ",tempNode.data);
                if(!directionflag) 
                {
                    if(tempNode.left!=null) 
                     tempStack.push(tempNode.left);
                    if(tempNode.right!=null) 
                     tempStack.push(tempNode.right);
                }else
                {
                    if(tempNode.right!=null) 
                     tempStack.push(tempNode.right);
                    if(tempNode.left!=null) 
                     tempStack.push(tempNode.left);
                }
            }
            // for changing direction
            directionflag=!directionflag; 
      
            stack=tempStack; 
        }
     
    }
