[Vim插件](https://www.oschina.net/news/53381/turn-vim-full-fledged-ide "vim plugins")
#一、流程图
```flow
st=>start: 开始
op=>operation: My Operation
cond=>condition: Yes or No?
e=>end
st->op->cond
cond(yes)->e
cond(no)->op
&```
#二、代码
##代码块
 (```)
    function fun(){
         echo "这是一句代码";
    }
    fun();
(```)
##单行代码
`System.out.println("单行代码");`
#三、表格
表头|表头|表头
---|:--:|---:
内容|内容|内容
内容|内容|内容

第二行分割表头和内容。
- 有一个就行，为了对齐，多加了几个
文字默认居左
-两边加：表示文字居中
-右边加：表示文字居右
注：原生的语法两边都要用 | 包起来。此处省略


