# 介绍  
### 运行效果图
![运行效果图](https://github.com/to-explore-future/ZQNotes/blob/master/Res/-test.png)  


### 特性
- `左边距` `右边距` `上边距` `下边距`   
- 文字与文字之间的 --> `左右边距`  `上下边距`  

### 使用

```
    MyLayout * cc = [[MyLayout alloc]initWithFrame:CGRectMake(0, 100, width, 500)];
    [cc initData];
//    [cc setLinespace:10];
//    [cc setRowspace:10];
//    [cc setElementPaddinLeft:10];
//    [cc setElementPaddinRight:10];
//    [cc setElementPaddinTop:10];
//    [cc setElementPaddinBottom:10];
    [cc setSelfPadding:10];
    
    cc.backgroundColor = [UIColor lightGrayColor];
    [self.view addSubview:cc];

```
