*このプロジェクトは bshoda によって、42 カリキュラムの一環として作成されました。*

# Libft

## 概要

Libft は、42 カリキュラムで今後の C プロジェクトに再利用するための、
自作 C ライブラリです。

このプロジェクトの目的は、よく使われる標準ライブラリ関数の動作を再実装し、文字列操作、メモリ操作、動的メモリ確保、連結リストの
基礎を理解することです。

ライブラリは `libft.a` という静的ライブラリとして作成され、他の C プログラムに
リンクして使用できます。

## ライブラリ内容

### libc 関数の再実装

以下の関数は、libc の標準関数と同じような動作をするように、`ft_` プレフィックス
付きで再実装したものです。

- 文字判定: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- 文字変換: `ft_toupper`, `ft_tolower`
- 文字列操作: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`, `ft_atoi`
- メモリ操作: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- メモリ確保: `ft_calloc`, `ft_strdup`

### 追加関数

以下の関数は、標準 libc には含まれていない、または別の形で存在する便利な関数です。

- `ft_substr`: 文字列から部分文字列を作成する
- `ft_strjoin`: 2つの文字列を連結した新しい文字列を作成する
- `ft_strtrim`: 文字列の先頭と末尾から指定文字を取り除く
- `ft_split`: 区切り文字で文字列を分割し、NULL 終端された配列を返す
- `ft_itoa`: 整数を文字列に変換する
- `ft_strmapi`: 各文字に関数を適用し、新しい文字列を作成する
- `ft_striteri`: 各文字に関数を適用し、文字列を直接変更する
- `ft_putchar_fd`: 指定したファイルディスクリプタに1文字を書き込む
- `ft_putstr_fd`: 指定したファイルディスクリプタに文字列を書き込む
- `ft_putendl_fd`: 指定したファイルディスクリプタに文字列と改行を書き込む
- `ft_putnbr_fd`: 指定したファイルディスクリプタに整数を書き込む

### 連結リスト関数

`libft.h` では、以下の連結リスト構造体を定義しています。

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

連結リスト操作用の関数は以下の通りです。

- `ft_lstnew`: 新しいノードを作成する
- `ft_lstadd_front`: リストの先頭にノードを追加する
- `ft_lstsize`: リスト内のノード数を数える
- `ft_lstlast`: リストの最後のノードを返す
- `ft_lstadd_back`: リストの末尾にノードを追加する
- `ft_lstdelone`: 指定したノードを解放する
- `ft_lstclear`: 指定したノード以降をすべて解放する
- `ft_lstiter`: 各ノードの `content` に関数を適用する
- `ft_lstmap`: 各ノードの `content` に関数を適用し、新しいリストを作成する

## 使い方

ライブラリをコンパイルします。

```sh
make
```

実行すると、以下の静的ライブラリが作成されます。

```text
libft.a
```

オブジェクトファイルを削除します。

```sh
make clean
```

オブジェクトファイルとライブラリを削除します。

```sh
make fclean
```

最初から再ビルドします。

```sh
make re
```

使用例:

```c
#include "libft.h"

int	main(void)
{
	ft_putendl_fd("Hello from libft!", 1);
	return (0);
}
```

`libft.a` と一緒にコンパイルします。

```sh
cc -Wall -Wextra -Werror main.c libft.a
```

## 補足

- このプロジェクトは C 言語で書かれています。
- すべてのソースファイルはリポジトリのルートに配置しています。
- コンパイルには `cc` と `-Wall -Wextra -Werror` を使用します。
- 静的ライブラリは `ar rcs` で作成します。
- グローバル変数は使用しません。
- 1つのソースファイル内でのみ使う補助関数は `static` にします。
- 呼び出し元に返された動的メモリは、必要に応じて呼び出し元が解放します。

## 参考資料

- `strlen`, `memcpy`, `strlcpy`, `calloc`, `atoi` などの `man` ページ
- 42 Libft subject PDF


AIは関数の処理内容の確認において利用しました。
