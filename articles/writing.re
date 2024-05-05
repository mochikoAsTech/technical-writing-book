= エンジニアのためのテクニカルライティング

仕様書、設計書、手順書、オンボーディング資料、ドキュメント、技術ブログ、技術記事など、技術に関する文章を書く場面はたくさんあります。分かりやすい文章を書くために、筆者が日々実践していることを紹介します。

== 必要ない人に無駄に文章を読ませない

小説であれば、読みはじめてすぐに「もういいや」と読むのをやめてしまうつまらない話よりも、最後の1文字まで読者を惹きつけて離さない面白い話の方がいいはずです。ですが実用文においては、読んだ人が「私は何をどうすればいいのか」という答えを見つけて、やるべき作業に早く進めた方がいいので、最後まで読んでもらえないのはいいことなのです。

=== 関係ない人を早めにふるい落とそう

100人の読み手がいて、そこに書いてある情報を必要としている人はそのうち1人しか居なかった場合に、100人が最後まで読んでしまうと相当な労力が無駄になります。たとえばマネージャ以上の管理職に対して組織の目標設定を促すお知らせがあった場合、最初に「これはマネージャ以上の管理職に向けたお知らせです」と書いてあれば、その時点で管理職ではない殆どの人が離脱できます。（@<img>{flow}）

//image[flow][読む読まないの離脱フロー][scale=0.8]{
//}

一通り読んだ後で、ようやく自分には関係のない話だと気付いたときの「関係ないなら早くそう言ってよ！」という徒労感には誰しも覚えがあるはずです。このまま読み進むべきか、自分には関係ないので読まなくていいのかを判断できる情報を早い段階で提示するようにしましょう。

みんなの時間を無駄に使わないことはコスト削減でもあります。組織全体の「読む」労力ができるだけ少なくなるよう、早めに@<ttb>{できるだけたくさんの人が該当する分岐}で読み手をふるい落としましょう。

=== 読者層を決めてから書こう

万人に最適な文章というものはありません。文章を読む人が変われば、適した文章も変わります。

たとえばDNSに関する技術書を書くとしても、対象となる読者層が「インターネット？ほぼ使ってないです。インスタは使ってますけど」というレベルの大学生なのか、それとも「Aレコードは登録したことあるけどフルリゾルバは知らないです」というレベルのエンジニアなのかによって、書くべき内容や説明方法は大きく異なります。

あなたがこれから書く文章は誰に向けたものなのか、を最初にしっかり決めておかないと、のちのち「どこまでさかのぼって説明しないとだめなんだ……？HTTPステータスコードの概念からか……？」と頭を抱えることになったり、あるいは読者に「こんな簡単なことはもう知っているので、もっと踏み込んだ内容が読めると期待していたのに」と不満を持たれたりします。

どれだけ美味しいめんつゆでも、麦茶だと思って飲んだ人からすると吹き出すくらいひどい味に感じられます。文章を読み終わったときに、文句を言いたくなったり低評価を付けたくなったりするいちばんの動機は「思っていたものと違った……」です。読み終わってから残念な思いをさせないよう、書く前に想定の読者層をはっきりさせておきましょう。

=== 想定する読者層とゴールを明示しておこう

関係ない人を早めに振い落として残念なミスマッチを防ぐ簡単な方法は、本文の前に「想定する読者層」と「ゴール」を書いておくことです。たとえば筆者が以前書いた「SSLをはじめよう」という書籍では、想定する読者層を次のように定義していました。

//cmd{
本書は、こんな人に向けて書かれています。

 * よく分からないままネットの手順通りにSSLを設定している人
 * 「サイトをHTTPS化したいな」と思っている人
 * 証明書の購入や設置の流れがいまいち分かっていない人
 * SSLとTLSの関係性がよく分からない人
 * SSL証明書が一体何を証明しているのか知らない人
 * これからシステムやプログラミングを学ぼうと思っている新人
 * ウェブ系で開発や運用をしているアプリケーションエンジニア
 * 「インフラがよく分からないこと」にコンプレックスのある人
//}

想定読者を明示しておくことで、ここに当てはまらない人は本文を読む前に「自分が期待している内容ではないかもしれない」と判断できます。さらにもう一歩踏み込んで「マッチしない読者層」も書いておくと、「あ、これは自分向けではないんだな」に気付いて、よりミスマッチが防ぎやすくなります。

//cmd{
本書は、こんな人が読むと恐らく「not for meだった…（私向けじゃなかった）」となります。

 * SSL/TLSの通信をC言語で実装したい人
 * 「プロフェッショナルSSL/TLS」を読んで完全に理解できた人
//}

また「SSLをはじめよう」ではゴールを次のように定義していました。

//cmd{
本書を読み終わると、あなたはこのような状態になっています。

 * SSL証明書がどんな役割を果たしているのか説明できる
 * 証明書を買うときの手順が分かっている
 * 意図せず「保護されていない通信」と表示されてしまったときの対処法が分かる
 * 障害が起きたときに原因を調査できる
 * 読む前よりSSLが好きになっている
 * SSL/TLSと併記されている「TLS」の意味が分かっている
//}

このようにゴールを書いておくことで、読み手は「読むことで何が得られるのか」を事前に把握できます。ざっと概要だけ知りたいのか、手を動かして実践的な知識を得たいのか、文章を読む目的は人によって異なります。

最初に「想定する読者層」および「マッチしない読者層」、そして「ゴール」を書いておくことで、不幸なミスマッチを防げます。また著者自身が文章の方向性を見失いかけたときに「これって誰に向けた文章なんだっけ？」「読み終わったらどうなってて欲しいんだっけ？」と振り返る拠り所にもなります。

=== いつまでに何をしてほしいのかを書こう

ある日、あなたに「情報資産の棚卸しのお願い」というお知らせが届きました。

お知らせには棚卸しの対象となる資産や、自分が会社から貸与されている資産の一覧を見る方法などが詳しく書いてありますが、結局いつまでに何をすればいいのかや、そもそも自分がこの棚卸しという作業をしなければいけない対象者なのか否かはまったく分かりません。色々と人に聞いたり調べたりした結果、もうすぐ年1回の棚卸しの時期がくるので事前告知として概要を先出ししているだけで、現時点はやるべきことやできることは何もない、ということが分かり、あなたには徒労感だけが残りました……。

こんなお知らせ、実際によくありますよね。文章を書くときは、これを誰に読んでもらって、いつまでに何をして欲しいのかを最初の方に書きましょう。

このお知らせが届いた人全員に今すぐ何かをしてほしいのか、それともリンクを踏んでもらって貸与されている資産があった人にだけ読んでもらって何かをしてほしいのか、はたまた今やれることは何もないから時間のある人に事前告知として把握しておいてほしいのか、いったいこの文章を「どれくらいの優先度で読めばいいのか」を先に説明してあげましょう。

何の食べ物だか言わずにいきなり「食べて！ほら食べて！」とスプーンを差し出されると、「え、怖い。なになになに？」となって、とても素直に口を開く気にはなれませんし、食べたところで猜疑心で味もよく分かりません。初めて作ったプリンが思いのほか美味しくできたので一口食べて感想を教えてほしい、というように、「どういう気持ちで何をして欲しいのか」を先に説明してあげる必要があります。

文章も同じで「読んで！さあ読んで！」と要求する前に、これを読んでいつまでに何をして欲しいのかを書いておく必要があります。

== 文書構造や文章量が適切だと読みやすい

文章は、それぞれの文章そのものに加えて、読む順番や量によっても読みやすさが変わってきます。読み手に合わせた適切な文書構造や文章量にしましょう。

=== 一文の長さは一口で食べられる量にしよう

まずはこの「長くて分かりにくい文章の例」を読んでみてください。

//cmd{
まず、事前に確認しておきたいのですが先週金曜の16時の定例のミーティングで話に上がっていた方針で間違いはないと思うのですが、興味深い内容がありましたのでその際にもお伝えしたとおりその件につきまして理解したとおりの見解を共有させていただければという意図です。既存仕様と異なると考えられる理由としては殆どの機能がメインケースとサブケースを切り分けて動作していないので意図と異なる動きになりユーザーが混乱すると考えているため、リジェクトの可能性もあるので回避のために僭越ながら先方への回答は迅速に行いたいと思っています。
//}

我ながらすばらしくひどい例ができてしまいました。目が滑って全然頭に入ってきません。理解しようとし3回くらい読み返しましたが、読み返してもなお何を言っているのかさっぱり分かりません。

文章の「一文」は、食事の「一口（ひとくち）」と同じようなものです。句点（。）までの一文は、食事における一口分と同義なので、一口があまりに大きいと口の中いっぱいに食べ物を詰め込んでいるような状態になります。大きすぎる一口は、口の中で延々ともぐもぐ咀嚼する必要があり、いつまでたっても飲み込めません。（@<img>{bite}）

//image[bite][一文を短くすれば理解しやすい][scale=0.8]{
//}

一文の長さは、一口で食べられるくらいの量（短さ）にしてください。具体的に言うと、以下のような接続詞が出てきたらそこを「です」や「ます」にして、スパッと文章を切りましょう。

 * ～ですが
 * ～ので
 * ～し
 * ～して
 * ～ため

これだと長いだろうか、と迷ったときは、その一文を声に出して読んでみましょう。前述のひどい例で試してみると分かりますが、長すぎる文章は一息で喋れません。途中で息継ぎをするはめになったら、その一文は長すぎると判断してください。

=== 先に大枠を説明して段々詳しくしていこう

文章で何かを説明するときには、先に大枠を理解してもらい、それから段々細かい内容にしていくという順番を意識しましょう。

たとえばババ抜きの説明を書くのであれば、「トランプを使うゲーム」「2人以上でやる」といった概要をまず書きます。その上で、「同じ数字のカードは2枚を1組にして場に捨てられる」「カードの中に1枚だけジョーカーがある」「順番に隣の人のカードを引いていき、最後まで手元にジョーカーが残った人が負け」という詳細を書き、最後に「どれがジョーカーか悟られないようにポーカーフェイスを保つことが大事」「ババ抜きから派生したゲームでジジ抜きもある」のような補足情報を書きます。

この大枠から詳細へという順番を無視して、先に細かい部分から書いてしまうと、読み手は全体像が分かっていないので混乱します。

=== 既知から未知に繋ごう

「大枠から詳細へ」の他に、意識すべきもう1つの順番は「既知から未知へ」です。

技術ドキュメントを読んでいても、最初から知らない単語や知らない概念ばかりが出てくると、「知らないことについて説明してくれているけど、その説明がまず分からない」という状態になります。まずは読み手の既知（すでに知っていること）から始めて、段々と未知（まだ知らないこと）に踏み込んでいきましょう。

たとえばあなたが実家に帰ったとき、親から「こないだ、桜井さんちのりおちゃんが広場に行こうとして転んじゃって手当てしたのよ」と言われても「まず誰だよ、桜井さん……どこだよ、広場って……」となり、肝心の「りおちゃんが転んだ」という情報は頭に入ってきません。まずは「中学3年生のとき、あなたの同級生に桜井さんっていたでしょ？覚えてる？」という既知の情報から始めて、「ああ、桜井さん」となったところで、「桜井さんって何年か前に結婚してお子さんも生まれたの。いま子供が夏休みだからって実家に帰ってきてるのよ」と未知の情報を土台として定着させ、最後に「お子さんの名前がりおちゃんって言うんだけど、その子がこの間、向かいにある公園の広場に行こうとしてうっかりうちの前で転んじゃって手当てしたのよ」と繋げれば、情報がきちんと頭に入ってくるはずです。

未知の事柄の上にさらに新しい情報を重ねようとすると、ぐらぐらと不安定な積み木の上にさらにボールを載せようとしているような状態なので、知識が脳内で安定せずにどんがらがっしゃーんとすべて崩壊してしまいます。

知っていることから知らないことへ、順番に認知の負荷を上げていきましょう。

=== 要約文ではじめよう

最初に要約文を書いておく

=== 1つの段落では1つのことを話そう

1つの段落に2つの情報を詰めない

=== 一度に把握できることは7つまで

短期記憶は7つまで

=== そこにあることを気付いて辿り着いてもらわないと意味がない

いくら分かりやすいドキュメントがあっても、どこにあるのか分かりにくいと意味がない。
届かなければ意味がない。

よく読めば分かるでしょ、というのは提供する側の傲慢さで、人はできれば文章なんか読みたくない。
だから「今北産業」があるのだ。

最初の2、3行を読んで「ここにはなさそう」と思われたら、そこで大方の人間が離脱する。

困っている人は困っているので割と最後の方まで熱心に読んでくれるけど、熱心に読んだ挙げ句に欲しい情報が手に入らないと怒り狂う。

=== 見つけやすくたどり着きやすいドキュメントにしよう

「メンテナンスされていないものも含めて、ドキュメントがとにかく大量にある」状態は、「ドキュメントがまったくない」状態よりも人を混乱させることがあります。ドキュメントはあればあるほどいいというものではなく、メンテナンスを怠ればコードと同じようにドキュメントも負債化します。

お知らせや告知、社内資料があまりにも多すぎて、とてもたどり着けない、アクセシビリティが低い状態では、ドキュメントはその良さを発揮できません。

良い文章を書くことと同じくらい、その文章を見つけやすくたどり着きやすい状態にしておくことが大切です。

== 書く速度を速くするためにできること

=== まずは「分かりやすい一文」を書けるようになろう

タマネギのみじん切りができないのに、いきなりハンバーグに挑戦するのはやめろ
段階的に難しくなっていくので、段階的にできるようになっていこう

一文を考える
一段落を考える
一ページを考える
一章を考える
一冊を考える
ドキュメント全体を考える
段々と難しくなっていく

=== 全部並べていちばん良い文を早く見つける

早くたくさんのパターンを書いて、最善手を見つける
100点を思いつくまで書かないのではなく、思いつくままにたくさんのパターンを書いていく
改善案を思いついたら直前の案をコピペして別の案として書く
とにかくナンバリングしながら全部の案を並べていく
1番良い物を見つける

「いちばん良い一行を見つける近道」

どういうことかというと、こんなシチュエーション、心当たりがありませんか？

「ここの説明、いまいち分かりにくいから直したいんだけど、どうしようかな」と悩みながら、書き足したり、消したり、少し言い回しを変えたり、前後を入れ替えたり、いやいややっぱりさっきの方がよかったかも、と元に戻したり…

いちばん良い一行を探して、気づいたらあーだこーだと気づいたら長時間悩んでしまっていた！

心当たり、ありますかね？

今日は、こういう「いちばん良い一行」を探すときは、こういうふうにやるといいよ、という方法を紹介します。
実践的に、実際やってみるのが分かりやすいと思うので、お題を出しますね。

ちょっと前なんですけど、LINE API Statusっていうサイトをオープンしました。

これはAWSのサービスヘルスチェックダッシュボードとか、TwitterのAPI Statusみたいな感じで、
開発者が「あれ？このサービス落ちてる？」とか、「このAPI、応答しないけどいまなんか起きてる？」っていうのを確認したいときに、落ちてるのか落ちてないのか、状況を一目で確認できるサイトです。

我々は思いました。
LINE API Statusサイトがオープンした！めでたい！
LINE APIを使っている開発者のみなさんに、ぜひともお知らせしたい！

そうだ、LINE Developersサイトでニュースを出そう！と思いました。

で、ニュースのタイトルはどうしようかと悩んだんですね。

初案がこれでした。
障害状況やステータスを確認できるLINE API Statusを公開しました

障害が起きてるってことがすぐ分かるし、何も起きてなくてLINE APIが安定稼働してるっていうステータスも分かる、そういうLINE API Statusっていうサイトがオープンしたんだなぁ、なるほど。
つたわる気がする。いいタイトルでは？よしよしって思いました。

でも、前回テクニカルライターのお仕事を紹介したときにも話したんですが、LINE Developersサイトって日本語と英語で同時公開してるのんですね。
日本語書き終わった後に、チーム内で英訳するんですけど、
タイトルを英訳してみるとなんか変だなってなったんですよ。

それがこちらです。

日：障害状況やステータスを確認できるLINE API Statusを公開しました
英：LINE API Status site for checking outage status and status opened

障害状況やステータス、日本語だとまあそこまで違和感なかったんですが、英語にするとOutage status and statusなので、同じこと2回言ってるわーと。
それに気づいてから改めて日本語のタイトルを読んでみると、確かに「障害が起きてる」っていうのもAPIのステータス、つまり状況のひとつなので、「障害状況やステータス」って言っちゃうと、同じこと2回言ってておかしいなーと。

で、英訳してくれたライターが気を利かせて、こうしてくれたんですね。
「Outage status and status」って2回言わなくていいだろ、日本語はそのままで、英語だけ「and status」削っておいたぞ、と。なるほど配慮。ありがとう。

良いかな！このまま行っても！とちょっと思いました。

でもすかさず、レビューしてくれた別のテクニカルライターから日本語に突っ込みが入ります。

> 悩ましいのですが、障害「状況」と「ステータス」が同意なので、「障害の概要やステータス」ではいかがでしょうか？もう少し座りの良い言い回しがあれば良いのですが。。

おっしゃるとおりです。英語だけ「and status」削ればいいって話じゃなくて、日本語のタイトルをちゃんと直すべきですね。
よし、腰を据えて良いタイトルを模索しよう！

ということで、よりよい一行を見つける旅に出ることになるんですが、こういうときにやってはいけないことがあります！

初案の、
障害状況やステータスを確認できるLINE API Statusを公開しました
から、「状況や」のところをささっと消して、
さっきレビュアーに提案してもらった
障害の概要やステータスを確認できるLINE API Statusを公開しました
に書き換える。
よし、第2案できた！

これ、だめです。
何がだめかというと、初案と第2案の比較ができないんです。

こっちが初案で、こっちが訂正後の第2案です。

まだ初案と第2案の2つくらいなら、どこを変えたか、原型はなんだったか覚えていられると思うんですが、ここからあれこれ悩みながら書き足したり、消したり、少し言い回しを変えたり、前後を入れ替えたり、いやいややっぱりさっきの方がよかったかも、みたいなことをやってると、

え、さっきのってどれだっけ…？っていう未来が待っています。
やっぱりさっきのやつがよかった気がするけど、「さっきの」がどんなんだったかもう思い出せない。

よりよい一行を求めて旅に出て、段々良くなっていったとしても、そのヒストリーと差分が見えないと、善し悪しの比較もできなくなっちゃうんですね。

## 「いちばん良い一行」を探すときにお勧めの方法

という訳で今日の本題、「いちばん良い一行」を探すときはこういうふうにやるといいよ、という
こういうときにお勧めの方法はこちら！

直前の案をコピペしながら、全部の案を並べていく、です。
できればナンバリングもしましょう。
2つくらいなら「上の方がいい」とか「下の方がいい」で済みますが、こんな感じで案が増えていったときに「上からえーっと4つめのやつよりは、その下の下のやつが〜」みたいになって辛いです。

こんな感じで、書きながらナンバリングしておけば、「4よりは6の方が分かりやすい」みたいに「どれ」っていうのをはっきり指せるので便利です。

この全部の案を並べていく方法、自分ひとりで考えるときも便利ですが、誰かに「ちょっと5分付き合ってください」みたいに声をかけて、Zoomで画面共有とかしながら頭突き合わせてあーだこーだ考えていくと、改善の螺旋階段を上がってく速度が急激に速くなって、5分くらいで「えっ最高じゃん？最高に分かりやすい。これが最高では？はー、最高！分かりやすい！」みたいな一文にすぐ辿りつけます。

1. 障害状況やステータスを確認できるLINE API Statusを公開しました
2. 障害の概要やステータスを確認できるLINE API Statusを公開しました
3. 障害の概要や安定稼働を確認できるLINE API Statusを公開しました
4. 安定稼働・障害状況を確認できるLINE API Statusを公開しました
5. 現在の稼働状況を確認できるLINE API Statusを公開しました
6. サービスの稼働状況を確認できるLINE API Statusを公開しました
7. サービスの稼働状況や障害状況を確認できるLINE API Statusを公開しました

これ、実際に矢崎さんとあーだこーだ喋りながら考えたときのリストそのままなんですが、このときは最終的に「6だな！！」ってなって、6でリリースされました。
こんな裏側を経て、公開されたニュースがこちらですね。

このタイトルの裏側に、そんなエピソードがあったんだと思うと、ニュースも可愛く見えてきますね。

やっぱりニュースひとつとっても、自分ひとりで書いて、誰のチェックも受けずに出すっていうことはなくて、さっきみたいにレビューしてくれる別のテクニカルライター、それから機能やサービスの担当者、あと問い合わせを受けるサポートのチーム、そういう色んなところと連携して「こういう背景から生まれた機能なので、ここをもっと強調したい」とか「この書き方だと、恐らくこういう懸念から問い合わせが増えちゃうので、そこを解消できるようにこういう書き方にしてほしい」とか、色んな会話をしながら、タイトルひとつとっても色々考えながら、こうやってひとつひとつのドキュメントやニュースを出しています。

という裏話でした。

ということで、まとめです。

いちばん良い一行を探すときは「もとの一行」に直接手を入れずに、コピペしながら全部の案を並べていきましょう。ナンバリングするとなおよしです。
テキストエディタでやれば、最初から行番号出てるので、自分で番号振らなくてよくて楽ですね。

以上、いちばん良い一行を見つける近道、というお話でした。



=== 漕ぎ始めを生成AIにサポートしてもらおう

使えるならChatGPTでもGitHub Copilotでもなんでも使う。
自転車はこぎはじめがしんどい。文章も同じで、初案を書く作業がしんどい
既にある文章を読んで、あーだこーだ文句を付けながら手直ししてく方がラク

ゴミみたいな初案を自分で作れるならそれでもいいけど、「こんな話を書きたい」というのを言ってChatGPTにゴミみたいな初案を作ってもらうのもあり
漕ぎ始めだけやってもらうと、スピードがのった状態で手直しから入れるからラク

== 読み手に配慮しよう

=== 気持ちが伝われば文法はどうでもいい？

配信などを見るとき、人は多少画質が荒くてもなんとか我慢して見られますが、音が悪いと聞くに堪えなくてすぐに閉じてしまいます。それと同じで、書き手が伝えようとしていた内容がどれだけ重要で素晴らしいものだったとしても、その文章が文法的に誤ったひどいものだと読むに堪えないので最後まで読んでもらえません。

「気持ちが伝われば文法だのなんだの細かいルールはいいじゃないか」という主張も分かりますが、音の悪い配信は生理的に聞くに堪えないのと同じで、あまりに文法が間違っていると「情報を伝える」という目的を阻害するほど読みにくくなってしまいます。

「気持ちが伝わればいい」と思っていても、最低限の文法は守らないとまず「伝わらない」ので、読み手に配慮しましょう。

=== 分かったと分からないの両方の気持ちが必要

分からないから説明を読むが、分からないと読めない

「返ってきたパケットがTLS/SSL recordではないってことですよ」
「え、どういうこと…？（しばらく調べる）あー！返ってきたパケットがTLS/SSL recordではないってことか！」
すごい！さっきまで分からなかった文章が分かるぞ！
分からないから説明読むんだけど、説明は分かんないと読めなくて、分かると読めるんだよな。

分かんない人の気持ちも分からなきゃいけないし、分かんない人に教えられるだけの理解度もいる
分からないときの気持ちや、何が分からないのかを書き残しておこう。

=== 意味のない空白や意味のないスペースを残さない

「なぜここに空白？敢えて？」となるので、意味のない謎の改行やスペースを残さない
「なんでここはこうなの？」と聞かれたら全部理由が言えるようにしておこう

=== 単語で終わらせない

「確認」じゃなくて「確認した」なのか「自分が確認する」なのか「相手に確認してもらう」なのか
「事前告知」じゃなくて「事前告知をした」なのか「事前告知をする」なのか最後まで書く

「説明がうまい人」とかどういう人のことか？
「話したいこと」を「話したい順番」で好きに話す人手はなく、
「相手の聞きたいこと」を「相手の関心度が高い順番」で話して、早く疑問を解消してあげる人

=== 語順を入れ替えよう

より分かりやすい語順がないか考えてみよう。

=== 修飾語はかかる言葉に近づけよう

修飾語は近づけよう。

誤解の少ない文章にする特効薬は、一文を短くすること。複数の修飾が延々と続くような説明はやめて、一文ごとに句点で終わらせる。

=== 同じものは同じ名前で呼ぼう

いままでのものが「A」に変わったら、「いままでのもの」をなんて呼ぶのか考えよう

同じものを安否確認サービスと安否確認システムと緊急時安否確認アラートみたいに色んな名前で呼ばない。
検索したときに、完全一致じゃないと引っかからない検索システムでも引っかかるように。
あとバラバラの名前だと修正時に漏れる。

=== 箇条書きを挟んだ文章を作らない

私がやりたいことは

 * A
 * B
 * C

の3つです。

みたいに書かない。

=== 主語と述語を対応させよう

主語と述語のねじれを見つけよう。

=== 「自分」という主語に注意しよう

カメラマンから「写真を撮るときは鏡に映った自分の目を見てください」と指示されたら、あなたは誰の目を見ますか？この指示文は、次の2つの解釈が可能です。

 * 写真を撮るときは、鏡に映ったカメラマンの目を見てほしい
 * 写真を撮るときは、鏡に映った自分自身の目を見てほしい

自分という一人称が指すものは、「私」であることも「相手」であることもあります。

=== ひらがなに開こう

一方で、漢字にしないと意味が即座に取れずに返って分かりにくいものもある。

=== 一文の中で同じことを二度言わない

「俺が避けるべきだと思う実装は、こういうのやああいうのは避けるべき」みたいに、文章として崩壊していないか確認しよう。

=== いただくはだいたい「くださる」にできる

=== 「しましょう」はLet's do it togetherかYou should do itか

=== 「教えてあげる」ことに酔わないこと

「教えてあげる」「話を聞いてもらう」のは基本的に気持ちがいいことなので、酔わないように気をつける。
色々アウトプットをしているように見えて、実際はここ10年同じことを繰り返し言っているようだと、苦しみながら新しいものを学ぶという楽しい時間を逃しているかもしれない。

=== 変わっていく「語感」を捨て置かずに拾おう

若い世代に「1時間弱」は何分ぐらいか？と聞くと、「1時間が60分、60分とちょびっとだから70分くらい？」と答えるらしい。まさか、と思って息子に聞いたら、その通りに答えた。

その理屈でいくと「1時間強」は何分くらいになるのか？と聞いたところ、「60分と結構たくさんくらいなので、85分くらいとか？」らしい。なるほど。同じ理屈で大さじ1杯弱も「大さじ1杯＋ちょっと」だと思っていたとのこと。

本来の解釈は伝えたが、こういう「口に出さない誤解」は周囲も誤解に気付かないので解くのが難しい。

言葉の本来の意味は辞書に載っていますが、その言葉から受け取る「こんな感じかな」という語感は、人や世代によって移り変わっていきます。

学校で先生に当てられて答えを言ったとき、先生から「はい。結構です」と止められたら、「満足しました。そこまでで十分ですよ」というプラスの意味で受け取るか、「もういいです。それ以上聞きたくありません」というマイナスの意味で受け取るかは、人に寄って異なると思います。

正しい意味はこれなんだ！誤解した意味で受け取る側が悪い！日本語をちゃんと勉強しろ！と怒る気持ちも分かりますが、誤解する人が2割、3割を増えていってもなお、書き手が頑なにその存在を無視し続けるのはよくありません。

誤解する人が多いと分かった時点で、「1時間弱というのは本来は1時間より少し少ないという意味です」というような補足を入れてあげるか、曖昧な言い方をやめて「45分～60分」のように誤解されない言い方に直してあげましょう。

== 再利用しやすい文章にする

=== 文章と修飾を分けて書こう

Markdown記法のように、文章そのものと、文章の修飾を分けて書こう。
WordとかCMSみたいに、文章そのものと修飾が分かちがたく1つになっていると後で再加工が辛い。

=== 再利用しやすいテキストにしよう

再利用しやすい、再加工しやすいテキストにしよう。
箇条書きに・をつかっていると、「マークダウンに変換しよう」と思ったとき、箇条書きでないところ「りんご・バナナ・いちご」も誤変換されてしまう。

=== 並列をナカグロで書くと、後の変更で箇条書きにしたとき見た目が変になる

・生命・身体・健康に影響を与えるもの
・投資・資産運用に関連するもの
・クラウドファンディング・寄付・投げ銭に類するもの
・ヒーリング・セラピーに類するもの
・自己啓発に類するもの
・メンタルヘルスに関連するもの
・宗教・スピリチュアルに関連するもの
・政治に関連するもの
・アカウントと関連のないプランを提供するもの

=== タイトルは「概要」にすべきか、「○○の概要」にすべきか

上位のタイトルを見れば補完されて分かるけど、場所を動かす可能性もある。私はタイトルだけで分かるようにしたいので「○○の概要」派です

== 技術文書に特有のコツ

=== 正しい名前で呼ぼう

ソフトウェアやハードウェアの名称は、自分がなんとなく使っている通称や誤った表記ではなく、正しい名称で書くようにしましょう。（@<table>{nameCorrect}）

//table[nameCorrect][通称や誤記ではなく正しい表記で書こう]{
通称や誤記	正しい名称
------------------------------------
VSCode	Visual Studio Code
Github	GitHub
Word Press	WordPress
JAVAScript	JavaScript
iphone	iPhone
//}

多少でも名前が間違っていると読者も混乱しますし、間違えられた側も決していい気分はしません@<fn>{nameWrong}。特にスペースの有無や大文字小文字などは意識していても間違えやすいので、筆者は公式サイトや公式ドキュメントの表記をコピーペーストして使うようにしています。

//footnote[nameWrong][以前所属していた会社でMVPとして壇上に呼ばれた際、社長に名前を間違えられて「表彰相手の名前くらいは把握しておいてもらえると嬉しい……」と思ったことがあります。相手に興味がなくてもいいのですが、それを悟らせても得るものは何もないので、せめて興味があるように見える最低限の準備は大事だなと思います。]

また英数字の羅列だと覚えにくいけれど何の略なのか分かれば理解しやすくなる、という側面もありますので@<ttb>{はじめは正式名称で紹介して、以降は略称にする}という形もよいでしょう。読み方が分からずにひそかに悩んでしまう@<fn>{k8s}のも初心者あるあるですので、次のようにカタカナで読み仮名も添えるとなお親切です。

//footnote[k8s][k8sはKubernetesの略でクバネティスと読むとか、nginxと書いてエンジンエックスと読むとか、誰かに教えてもらわないと筆者は想像もつかなかったです。密かに「んぎっくす…？」と思っていました。]

//cmd{
AWSではサーバはAmazon Elastic Compute Cloudの略で「EC2」（イーシーツー）と呼ばれています。
//}

=== 年月日や対象バージョンを書いておこう

書いたドキュメントは、本人が書いたことを忘れるくらい時間が経ってから突然参照されることがあります。その際、「いつ書かれたものか」という情報がないと、非常に古い情報をいま現在の仕様だと思って読んでしまう可能性がありますので、文章を書くときは必ず「その文章が書かれた年月日」を記載しておきましょう。

ブログであれば、その記事を投稿した年月日が自動で表示されるようにしておきましょう@<fn>{classmethod}。技術書であれば奥付@<fn>{okuduke}に書いておけばよいですが、それ以外に文中でも「今年の技術書典」や「5月26日の技術書典」ではなく「2024年5月26日(日)の技術書典」のように、@<ttb>{数年経ってからその文章を読んでもいつのことを指しているのか分かるようにしておく}とさらによいでしょう。

//footnote[classmethod][クラスメソッドさんのDevelopersIOは、1年以上前の記事には「この記事は公開されてから1年以上経過しています。情報が古い可能性がありますので、ご注意ください。」という案内が表示されるところが素晴らしいなと思います。]
//footnote[okuduke][書籍や雑誌の巻末にある著者名・発行者・発行年月日などが書かれている部分。本書にもあります。]

またミドルウェアやソフトウェアであれば、@<ttb>{どのバージョンを対象とした内容なのか}も記載しておきましょう。

=== 例示用のIPアドレスやドメインを使おう

たとえば「ブラウザでwww.example.comを開くと、名前解決が行われてウェブサーバの203.0.113.222というIPアドレスが返ってきます」というように、技術の説明をしていると具体的なIPアドレスやドメインを書きたくなることがあります。このようなときは例示用のドメインやIPアドレスを使いましょう。

実はインターネットでは「例示やテストで使っていいドメインやIPアドレス」というものが定められています@<fn>{rfc}。

例として記載するURL、メールアドレスなどでは次のものをつかいましょう。

//footnote[rfc][例示用のドメインはRFC2606やJPRSのサイト、IPアドレスはRFC5737で確認できます。]

 * 例示として使えるドメイン
 ** example.com
 ** example.net
 ** example.co.jp
 ** example.jp
 * 例示として使えるIPアドレス
 ** 192.0.2.0/24（192.0.2.0～192.0.2.255）
 ** 198.51.100.0/24（198.51.100.0～198.51.100.255）
 ** 203.0.113.0/24（203.0.113.0～203.0.113.255）

例示であっても自分の持ち物でないドメインやIPアドレスを勝手に使うことはトラブルの元になります@<fn>{trouble}。必ず例示用のドメインやIPアドレスを使いましょう。

//footnote[trouble][実際にどんなトラブルになるのか？は「DNSをはじめよう」のP110「＜トラブル＞ test@test.co.jp を使って情報漏洩」で紹介しています。]

=== リンクテキストを「こちら」にしない

可能ならURLは全部書く
コピペしたときに、テキストとして貼り付けると情報が失われることがある
あとリンク先が間違っていたときに、リンクテキストが書いてあることで間違いに気づける
リンクを開く前に、なにに飛ばされるのか判別できないので、見るべきか見なくていいのか分からない 

たとえば利用規約など同意必須の内容を「こちら」をリンクにして参照させていた場合、何かでAタグが外れたり、プレーンテキストとしてコピペして別の場所で使われた際に意図せずリンク情報が消えることがある。
URLをそのまま書いていれば、少なくとも自力でURLを開いて参照できる。

=== リンクは「張る」ものか「貼る」ものか

蜘蛛がこちらからあちらへ糸を張るように、他の情報と繋ぐためのリンクなので、個人的にはリンクは「張る」を使っています。

URLをコピーペーストするイメージで「貼る」を使いたくなるかもしれませんが、Slackでリンクを教えてあげるときは「URL貼っときますね」だし、「商品一覧から詳細ページにリンクを張る」ときは「張る」だと思っています。

@<href>{https://twitter.com/mainichi_kotoba/status/1769229909283778901}

=== 時刻の表記はJSTか

時刻の表記はJST？UTC？

=== その「文字数」って何文字ですか？

文字数の上限を示すときは、カウント方法をちゃんと書こう。
半角は1文字分？全角なら2文字分？それとも1文字は1文字？絵文字は何文字？

=== 以上と以下か、より大きいと未満か

上限や下限の数字を示すときは、「以上」なのか「より大きい」なのか、「以下」なのか「未満」なのかを明示しよう。

