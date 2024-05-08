= はじめに

//flushright{

2024年5月
mochikoAsTech

//}

この本を手に取ってくださったあなた、こんにちは、あるいははじめまして。『読み手につたわる文章 - テクニカルライティング』の筆者、mochikoAsTechです。

突然ですが……私たちは、毎日のようにテキストで誰かに何かを説明したり、説明してもらったりしています。

 * Slackで他部署の人に仕様の疑問点をつたえて質問する
 * 業務でつまづいている部分を日報に書いて上司に報告する
 * ローカルで開発環境を作る手順を社内Wikiに書いておく
 * 全社イベントの日時と参加方法をメールで知らせる
 * 家族にLINEで今週末の旅行スケジュールを送る
 * 子供に買うものリストを見せておつかいを頼む

こんなふうに日常生活の中で何かをつたえる「手段」としての文章は、詩や小説といった文学作品の文章とは区別して@<ttb>{実用文}と呼ばれています。@<code>{実用}的な@<code>{文}章なので実用文ですね。

そしてこの実用文を書くときに、つたえたかったことを分かりやすく書くための技術として@<ttb>{テクニカルライティング}というものがあり、そのテクニカルライティングを専門とする@<ttb>{テクニカルライター}という職業もあります。@<fn>{shigoto}

//footnote[shigoto][エンジニアリングの技術を学んでシステムを開発する人たちが「エンジニア」であるように、テクニカルライティングの技術を学んで実用文を分かりやすく書く人たちは「テクニカルライター」です。テクニカルライターは、厚生労働省の職業情報提供サイトにも載っています。 @<href>{https://shigoto.mhlw.go.jp/User/Occupation/Detail/358}]

テクニカルライターは、もともとは家電や電化製品の取扱説明書を書く人たちでした。ですが近年はそこから広がって、IT企業で技術ドキュメントやAPIリファレンスなどを書く専門職としてテクニカルライターが採用されるようになっています。

筆者はもともとWeb制作会社のインフラエンジニアでしたが、2019年からはIT企業でテクニカルライターをしています。転職をした当時はテクニカルライターという職業があること自体が業界の中でもほとんど知られていませんでした。そこから約5年が経ってテクニカルライターを募集しているIT企業が段々と増えてきたことを感じます。

本書はテクニカルライターである筆者が、テクニカルライティング技術の中でも普段から特に気をつけているいくつかのコツを紹介するものです。「文章の書き方」を解説した書籍でよく見かける文法的な話だけではなく、実際に書いていて悩みがちな部分にスポットを当てて、できるだけ実践的な内容を紹介しています。@<fn>{Technic}

//footnote[Technic][なお本書には、2019年4月に発刊した「技術をつたえるテクニック ～分かりやすい書き方・話し方～」の内容を一部改訂して再掲したものが含まれています。]

本書が「もっとうまく書けるようになりたい」と感じている方の一助となれれば嬉しく思います。

== 想定する読者層

本書は、こんな人に向けて書かれています。

 * 文章がうまく書けるようになりたい人
 * テキストでのコミュニケーションで誤解されることが多くて困っている人
 * 相手の理解度にあわせた説明ができるようになりたい人
 * 技術書や技術記事を書いている人
 * 技術書の翻訳をしている人
 * 英語ができないけど英語でドキュメントを書いている人
 * ちゃんとドキュメントを残したい人
 * ごちゃついた情報をスッキリ整理したい人

== マッチしない読者層

本書は、こんな人が読むと恐らく「not for meだった…（私向けじゃなかった）」となります。

 * 魅力的な小説や詩文を書けるようになりたい人
 * 広告やキャッチコピーが書けるようになりたい人
 * 法務文書を書くときのコツが知りたい人

//pagebreak

== 本書のゴール

本書を読み終わると、あなたはこのような状態になっています。

 * 読む前よりも実用文がうまく書ける
 * テキストコミュニケーションで相手の誤解を生まなくなる
 * 悩みすぎて筆が進まない状態から早めに脱出できる
 * レビュイーが受け止めやすい形で文章のレビューができる
 * 英語ができないのに英語を書かなければいけないときになんとか頑張れる

== 免責事項

本書に記載された社名、製品名およびサービス名は、各社の登録商標または商標です。

本書に記載されている内容は筆者の所属する組織の公式見解ではありません。

また本書はできるだけ正確を期すように努めましたが、筆者が内容を保証するものではありません。よって本書の記載内容に基づいて読者が行なった行為、及び読者が被った損害について筆者は何ら責任を負うものではありません。

不正確あるいは誤認と思われる箇所がありましたら、必要に応じて適宜改訂を行ないますのでGitHubのIssueやPull Requestで筆者までお知らせいただけますと幸いです。

@<href>{https://github.com/mochikoAsTech/technical-writing-book}
