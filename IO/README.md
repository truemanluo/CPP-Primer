### C++中OJ的输入输出

Notes：

> 1. cin等输入流以会默认跳过空格、TAB、换行符（line feed，`\n`表示）、回车（carriage return，`\r`表示）

- 以空格作为分隔符：
  - 单行
  ```
  while (cin >> a) {
      ...
  }
  ```
  - 多行
    - 先用`getline`获取每行输入
    - 再处理每一行
  ```
    string line;
    int num;
    while (getline(cin, line)) {
        istringstream numbers(line); // 把string当成一个IO流，构造一个输入流
        while (numbers >> num) {
            do something...
        }
        ans.push_back(sum);
    }
  ```

- 以特定字符分割字符串
  - `geline`中设置特定[分隔符](split_by_special_delimeters.cpp)
  > 注意：只适合一行的情况
  ```
    string line;
    int num;
    vector<int> ans;
    while (getline(cin, line, ':')) {
        istringstream numbers(line);
        while (numbers >> num) {
            ans.push_back(num);
        }
    }
  ```


  - 使用string的`find`和`substr`方法（[stackoverflow](https://stackoverflow.com/questions/14265581/parse-split-a-string-in-c-using-string-delimiter-standard-c)）
    - `find`
        > `size_t find (const string& str, size_t pos = 0) const;`
        > The position of the first character of the first match. If no matches were found, the function returns string::npos（`size_t`的最大值）.
        >
        > `pos`参数表示从`pos`开始查找

    - `substr`
        > `string substr (size_t pos = 0, size_t len = npos) const;`

    例子：
    ```
    std::string s = "scott>=tiger>=mushroom";
    std::string delimiter = ">="; // 分隔符

    size_t pos = 0; // 分隔符的初始位置
    std::string token; // 分隔符之前的字符串
    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        std::cout << token << std::endl;
        s.erase(0, pos + delimiter.length()); // 删除已处理的部分，从分隔符的下一个位置开始
    }
    std::cout << s << std::endl;
    ```