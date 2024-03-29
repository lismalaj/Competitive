/*Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome.

Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.

This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.

Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".*/\

#include <iostream>
#include <string>
using namespace std;
void Solve(){
    string x; cin>>x;
    long long n = x.length()-2;
    if(x.length() < 11 ) cout<< x<<'\n';
        //cout<< string(1, x[0])+ to_string(n) + string(1, x[x.length() -1])<<'\n';//x[0]+string(n)+x[-1];
    else cout<< x[0]<< x.length()-2 << x[x.length()-1]<<'\n';
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin>>t;
    while (t--) {
        Solve();
    }
    return 0;
}

/*~~~~~J@P~!~Y@B!!!!~G@?!!!!!~?@Y!&@G?&B!!7!!!#GJ@5~~~~##!~!!!J@G~!~?@@7!!~B@?!!!!!~5@P~!~P@5~!~~!~~G@5!77Y@P??????##?@&J@P5&J?JJ?Y@&YYJJJJB@5JJYJB@BYYYYYYP@@YJJJP@GYYYYYB@@B5YJJJJJJJJJJJJJ???JPYJ??JJJJ
~~!!~J@5~!!Y@B!!!!~G@?!!!7!~J@J~&@B7&G!!!!!!#GJ@5~~~!&B~!!!!?@P!!~?@@?!!!B@?!!!!!~5@G~!~P@Y~~~~~!~5@&BB##&#B#######B#&&&BB##BBBBGGGPPPPPPGPPPGPPGGGGGGGGPGGGPGPPPPPPPPPPPGPPPPPPPPPPPPPPPPB@BJY5@@&P&@PP
~~!!~J@P!!!J@B!!!!~5@J~!!7!~?@J~#@G7&P~!!!!!BPJ@J~~~7@5~!!!!Y@5!!!?@#7!!!G@?!!!7!!J@G!!!5@Y~~~!~~~Y@G!!!!!!!!!!!!!!!!7!!!!!!~!77!7!!7!!!777777??77777777777??????????????????77777777777775@B~~^#@B~B&!~
~~!77JBPY55PB#P5PPY5#G555PP55&G5#&G5&B5555P5BBB&5Y55P&PPGGPY#&PPPP5#B5555G&GPP5PPP5##PPPG&BGGGBBBBB#GPPPPPPGGGGPPGPPGGGPP5P55#5??JJ?JJJJJY5YYYYYJJYJJYJJJJJJ??????JJJJ???????????J????JJYJY@B~~~#@B~G&7~
~!!?7!!!77777?777777!777777??77777777????????7??777????????77777777777777777!7777777777777????7?J??7?7?7777777777!!!!!!!!!!~5@?~~~!!!!!!!?!~!~~!~!!!!!!!!!!!7!7?7?!!!!!!!!!!!!!!7777!77!!~?@B~^~&@B~G@7~
~!777777???JJJJJJJJJ?????JJJ?J??JJ??JJ?????????JJJJJYJJYYYJYYYYYYYYYYYYYJY5YYYYYYJP5555555555Y5555Y5555555PPP5555555555555YP@P~!PY!7!!!!!!!!!!!!!!!!!!!!!!~PY~Y@5Y?Y?!77!!!!!!!!7!!!!!!!!!?@B~^^#@G~P@7~
~7?JJJJJJJJJJYYJJJJ?J?J??J???????7?????????JJJJJJJJJJ?????????????????????J77??????7?7????????????7?777777777777!!77777!77!5@Y5GBG^~~~~^~^~^~~~~~!!~~~~~~~^PG~5@JB@&GPGGPPB#BPPPPB#BGGGGGG#@J^~~#@B^5&!~
~!!!!!!!!!!77777777!!?7JJ7777777777777777777??????????????7???7?777777?7??J??????????????7????777?5?YPJ!!!!!!!!!~~!~~!~!~!~J@Y&#B#GPGGGGGGGGGGGG#&##J~~~~~^PG~5@?B@5^!!!~~B@J~!!~Y@G~!!!!!B@?~~~#@B~5@7~
~~!!JJ?77777!777777!!BYP@7!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!~~~~~~~~~~~~~~~~~~~~~!~~!~~~~!~!7!7!!!!Y&!P@57B!~~~~~~~~~~~~~~^~^7#!PBP@&YJ??Y@@PJJJJ?#@Y&J^~~~~^GP^5@?B@Y^~!~~^B@J~~~~?@G^~~~~~B@J~~~#@B~P&!~
~~!!Y&@#GGGB&#GGPGPPB@BG@#55PPG#BGGPPB&GPPPPPPBBGPPP##GPPPPGGGPPPPGGPPPPPPGGPPP5P55GG555P#P~!!~~~J@!P@Y7@BPPPPPPBGP55PGGGPPG&P##Y@#7!~~!&@J!!~~~B@?#J^~~~~^G5^P@?B@5^~!!~~B@J~~~~?@G^~~~~~B@5~~~#@B~P@7~
~~!~~G@P^^^Y@#!!!!!~Y@55@#~~!~7@B~~~~Y@P~!!!!7B@J777B@J!!7??J7!!!!B@5!!7!J@#!7777!?@@7!!J@G!7!!~~Y@7P@Y7@G7777!!&@G~!!G@&7777?##Y@#!!!~7&@J77~~~B@J&J^~~~~~B5~B&?B@Y^~!!~~B@J~~~~7@B~~~~~~B@Y~~~#@B^P@7~
~~!!~G@P^~^5@#!!!!!~?@55@#~~~~7@B~~~^J@G~!!!!!G&77!~G@J~~!!7?!~~~^G@5^~~~7@&~~~~~~!@&!~^7@B~7!!~~J@75@P7@Y~~~~~~#@P^^^Y@B~~~~~G&G@#!!!~7&@J7!~~!B@J&J^~!~~~B5~#&?#@5^~!~~^B@?~~~~?@B~~~~~~B@Y~~~#@B~P@7~
~~!!!G@P^~^5@#!!!7!~?@5P@B~~~~!&B~~~^J@G~!~!~~G&7!!~G@J!!!77?7!!!~G@P~!!~?@@7~!!!~!&&7~^?@G~!7!~^?@75@57@5~~~~~~#@5^~^5@B~~~~~G#5@&7!!~!&@J77~~!&&?&J^~~~~^BY^#&7B@5^~!!~^B@J~~~^J@G^~~~~^B@5~~^P@G^P@?~
!!!!!B@G~!~5@#!!!!!~Y@YG@B~~~~!&B^~~^J@G~~~~~~B@7!!~G@P!!!!!7!!!!~G@G~!!!7@@!~~~~~!&&7~~7@G~7!!!~Y@75@57@P~~~!~~#@5^~^5@B~~~~~G#P@@?!!~7&@Y!!!~~#&?&Y^~!~~^BY~B&?#@P^~!!~^G@J~~~^?@B^~~~~^G@Y~~!G@BJB@YJ
!!!!!B@5~!~5@#!!7!!~P@JG@B~~~~!&B~~~^J@P~~~~~~G@?!!~P@5!!!!!7!!!!~G@G~!!!?@@7~~~~~!&@7~~?@B~!!!~~Y@75@P7@G~~~~~~&@5^~^P@B~~~~~G&G@@?!!!7&@Y!!!~~#&7&5^~~~~^BY^G@?#@5^~!!~^B@J~~~^?@G^~~~~^P@Y~~7G@&55PPP
!!!!!G@G~!~Y@#!!!!!~G@JG@B~~~~!##~~~^J@P~~~~~~G@J!!~5@5!!!!!7!!!!~G@B~!!!7@@7~!!~~~#&7~~?@G~!!!~~Y&7P@P7@G~~~~~~&@P^~^P@G~~~~^G&P@@?!7!?@@Y!7!!!#&7#P^~~~~~GY^G&7#@5^~!!~^G@J~~!~J@G^~~~~^P@Y~~~5@&!!777
~!!!!G@P~!~5@#!!!!!~P@?G@B~~~!7##~~~~?@G~!~~!~B@J7!~5@5!!!!!!!!!!~G@5~!!!7@@7!!!!!!&@?~~7@G~!7!~~Y&75@G7@G~~~!~!&@Y^~^P@G~~~~~G&P@@?!7!?&@Y!7!!~B&7&P^~~~^~GP~G&?#@5^~!!~^G@J~~!^J@G^~~~~^G@Y~!~P@B?YY5Y
!!~!~P@P~!~Y@#!!!!7~P@JG@G~~~~!#B~!!~?@P~~!!!~G@J77!P@J!!!!!!!!!!~G@P~!!!7&&!!!!~!!#@?!~?@G~!7!!~J&75@B7@G~~~!~!&@P^~^G@G~~~~^P&P@@?!7!?&@5!!!!!##?&5^~~~~~GP~G@?#@Y~~!!~~G@J~!~^J@G^~~~~^G@5~!~P@5^~~~~
!!!!~G@5!!!Y@#!!!!!~P@JP@B~~~~~#B~~~~J@Y~~~~!~B@?77!B@?!!!!~!!7!7!P@P~!!!7&@7!!!!!!#@?!~?@B~!7!!~J&75@B7@G~~~!~!&@P^~^G@P!~~~~G&P@@?!!!7&@5!!!~!##7&P^^~~~^GP~P@?#@5^~~!~^G@J~!~~?@P^~~~~~G@5!!~5@P????J
~~~!!G@Y~!~5@#!!!!5P#@GG@#555YY&#YYJJG@PYYJYYJ&#YYYJ#&YYYJY5Y77!!~P@G~!!!!#@7!!!!!!#@?!!7@B~!7!~~J&75@B7@G~~~!~!&@5~~~G@G!!!~~5&B@@?!!!?@@5~!!~~##?@P^~~~~~GG~G&?B@5^~~!~^G@?~!~^J@P^~~~~~G@5~!~G@&P@&JJ
~!!!!G@J~!~5@#!!!!5@@Y?????????JJJJJJY5JJJYYYJ55555555555YG@&?!~!!P@B~!!~!#@?!!7!~!#&7~~7&#!!!~~~?&75@B?@G~~~~~~&@5^~~P@G!!!!~P&B@@?!!~?@@5!7!~!##?@P^~~~~~GP~P@?B@P^~~~~^#@J~!!^J@G^~~~~~G@Y~~~G@#~#@7^
~!!!!B@?~!~5@#!!~~?@@P?JJJJJJJJ?J??J??????????J?????????775@B!~~!!P@B~!!~!#@?!!?!!!&@?!!7&#!!!~~~?&7P@G?@B~~~~~~#@5^~~P@G!!!!~P&B@&?!!~?@@577!~~##?@P^~~~~~GG^P@?B@P^~~~^^#@J~!!^J@G^~~~~~G@?^~~B@B~B@?^
~!!!!#@7~!~P@#!!~~?@@5!7!!!!!7?GJ7777777?7?7YG5J??J?JJJJJ?5@B!!~!~5@B~!!~!&@7!!77!7&@?!!7&#!!!~~~J&75@GJ@B~~~!~~#@5~~~G@G!!!!!P&#@&?!!~J@@577!~!##7&P^~~~~~GG^P@?B@P^~~!~^B@J~!~^?@G^~~!~^P@J~~~B@B^G@7~
~~!!!#@7!!~P@B!!~~7@@B7777777!5@5~!??!!!!!JYJ@P777777!!!!!J@#!~~!~5@B~~!~!&@7!!77!7&@?!!7&&!!!~~~?&!Y@BJ@G^~~!~~#@G~~~P@G!!!!!G&#@&?!!~?@@5!7!~!&#?@P^~~~~~PP^P@?B@P~~~!~^B@J~!~^J@G~~!!~^G@?^~^P@#~P@!^
~~!~!&@7~!~G@B~!!~5@@P5PPP5B&7G@P~G@#5PPGG#&J@&GGPGG#BBBGGB&B777!~5@#~!!!~#@?!!!!!~G@J!!7&&!!!~~^7&7Y@BY@B~~~!~~#@P~!~P@P!!!!!P&B@&?!!~7@@5!7!~~&#?@P^~~~~~5P^P@7B@G~~!!~^B@J~~~^?@G~~~!!^G@J^~^P@#^P@7^
~~~~~#@7!!~G@B~!~~7@#~^~!~^Y@7G@P~#@J^~~!~P&J@#!!!!?@P&@5777?B&J~~5@#~~!!!&@?!!7!~!#@J!!!#&!~!!!~?@7P@BJ@B~~~!~~#@P~!~P@P!!!!~P&G@&J!~~7@@577!~~#&?&P^~~~~~5P^G@7B@G~~!!~^B@Y^~!^?@B~~~!!^G@J^~^G@#~P@!^
^^~~~#@?!!~G@B~~~~7@&~~~!~^5@!G@G~B@?^~~!^G&J@#~~~~7@P#@P~!!~G@J~~5@#~~!!!#@?!!!!~!#@J!!!#&!!!~!~?&!5@G?@B~~~!~~#@P~!~P@P~!!!~5&G@@J!~~7@@577!~~#&?&P^~~~~~PP^G@7B@B~~!!~^G@Y^~~^?@G~~~~!~G@Y^~^P@#~G@!^
~~~~~B@7~!~G@#~~~~7@&~~~!~^P@!G@B~#@?^~~!~G&J@#~~~~?@PB@5~!!~G@?~~5@&!!!!~#@J!7!!~!#@J~!!#&!!!!!~?&75@GJ@B~~~!~~#@P^!~P@P~~!!!5@G@@J7!~!&@577!!!&#7&G^~~~~~PG~G@7B@B~~!!~^B@5^~~^J@G~~~~~~G@J~~^P@#~P@!^
^~~!~B@7~!~G@#!!!~!&&!~~!~^5@!G@B~#@7^~~!~G#J@#~~~~J@YB@5~!!~G@7~~5@&!!!!~#@?!7!!!~B@J!!!##!~!!~~J@?P@PJ@B~~~!~~#@P^!~5@G!!!!~Y@P@@J!!~!&@5!7!~!&#?@G^~~~~~PG~G@7B@B~~~!!^G@5^~~^?@G~~~~~~B@J^~^5@#~P@7^
^^~~~B@J~!~G@#!!!~7&&!~~~~^5&7G@B!&@7^~~~~G#Y@#~~~~?@P#@5~!!!B@?~~Y@&!~!~!#@?!7!!!!#@J~~7@#!!!!~~?@?G@5J@G^~~~~^B@P^!~P@G~!!!~J@G@@Y!!!~#@577!!!#&?&G^^~~~~5B~G@?B@B~~~!~^G@5^~~~?@G~~~~~~B@J^~^J@&~P@7^
^^~~~B@Y~!~P@#!!!!!&@7~~~~~G&7G@B!&@!^~~~^P#Y@#~~!!!&P#@5!!!~G@J!~Y@&7~!~~#@?!!!!!~B@?~~7@B!!7!~~?&7G@5J@G^~~~~^B@5^!~P@G~!!!!?&G&@Y!!!~#@P!7!!!#&?#G^^~~~~YB~G&JB@B~~!!~^G@5^~~^J@G~~!!~~B@J~~^J@&~5@7^
^^~~~#@Y~!~P@#!~~~!&@?~~~~~G&7G@B!&&!^~~~^P#Y@#~~~!!&G#@5~!!!G@?!~Y@&7~!!!&@7!7!!!~B@?~~7@B!77~~^?&7B@P?@P^~~~~^B@5^~~P@G~!!!!?&P&@5!7!!#@P77!!~B&?#G^~~~~~YB~P&?B@G~~~!~^P@5~~~^J@P~~~~~~B@J~~^Y@&~P@7^
~~~~!#@Y~!~G@#!~~~!&@?~~~~~P&7G@B!&@7^~~~^G#5@#~~~!!&P#@P!!!~P@?!~Y@&!~!!!&@7~!!!!~B@J~~7@#!!7!~^?&7B@P?@P^~!!~^B@Y^~~P@P~!!~~?@B&@Y!7!~G@P!!!!!B&?#P^^~~~~Y#~P&?B@G^~!7~^G@5~~~^J@Y~~~~~~#@J~~^5@#^5@7^
~~~~~B@Y~!~P@&!~~~!&@J!!!~~5&7G@#!#@!^~~~^G#P@B~~~~7&G#@G~!!~G@?~~Y@@!~!!~#@?!!!!!!#@J~~!&#!!7!~~J&7G@GJ@P^~!!~^#@5^~^5@5~!!~~J@B@@Y!!!~G@G!!!!!#&7#P^^~~~~J#!G&7B@G^~!!~^P@5~!!^Y@5~~~~~~#@?~~^P@#^5@7^
~~~~~B@Y~!~P@&!~~~!&@?~~~~~5@7B@#!#@7^~~~~B#P@B~~!~!&PB@P~!!~G@J~~Y@@7~!!!#@J~~!!!~B@?~~7@B!!7!~~J&7B@PJ@P^~!!~^#@Y^~~5@5~!!!~?@G&@Y!!!~G@G!!!!~B&7&P^~~~~~JB~G&7B@B~~!!!^G@5~!!^Y@P~~~~~~#@7~~^P@&^5@?^
~~~~~#@?!!~5@&!~~~~#@?~~~~^5@?B@#!#@?^~~~~BBP@G~~!~7@PG@G!!!~G@J~~Y@@7~!!~#@?!~!!!~B@?~~?@B!!7!~~?@7B@5J@5^~!!~^#@J^~^5@P~~~~~7&B&@5!!!~B@B!!~!!#&7#P^~~~~~JB~5&7B@B~~~!~^P@5~!!^J@P~~~~~~&@7~~^G@#^P@7^
~~!!!#&7!!~5@&!~~~~B@?~~~~^P@7B@B!#@7^~~~^BBY@G~!~~!&PP@P~!!~G@?~~J@@?~!!~B@J~!!!~~B@?~!?@B~77~~^?@7B@5J@Y^~~7!^#@Y^~^5@P^~~!~7@G&@Y!!!~G@B!~~~~B&7#P^~~~~~Y#~P&!B@G^~~!!^5@5~!!^J@G~~~~~^#@7~~^G@B^G@!^
~!!!!#@7!!~P@&!~~~!&@?^~~~^5@?#@B!#@7^~~~~B#Y@G~!~!!&P5@P~!!~B@J!~J@@7~!!!#@Y~~!!!~B@?~!?@G~!7!!^?&7B@5J@Y^~~!!^#@Y^~^5@P^~~~~7@B@@J!~!~B@B!~~~~B&7&P^^~~~~J#~5&7B@B^~~!!^P@5^~!^J@G~~~~~^#@7~~^G@B:G@7^
^~!!~B@?!!~5@&!~~!!&@J^~7~^5@?#@#7#@?^~~~~BBY@G~!~~!&GB@P~!!~B@?~~J@@?~!!!B@J~!!!!!#@?~~?@G~!!!~^?&7#@5J@Y^~~!!^#@Y^~~5@P^~~~~?@B@@J!!!!B@B!~~~~B&7&P^^~~~^J#~5@7B@B^^^!!^P@P~~~^J@B~~~~~~#@7~~^P@#:P@7~
^~!!~G@?!!~P@#!~~!!&@J~~!~^5&7B@#7&@7^~~^~B#Y@G~~~~~#PG@G~!!!#@?~~?@@?~!!!#@J!!!!!!&@7~~?@G~!!!~~?&7B@PJ@Y^~~!~^#@Y^~~5@P^~~!~?@G@@J!~!!#@B!~~~~#&7&5^^^~~^J#~5&?B@B^^~~~^P@P^~~^?@G~~~~~^B@!~~^5@&P#&PY
^~!!~G@J~!~P@#~~~!!&@J~!!~~5&7B@#7&@7^~~^^BB5@G^~~~~#PB@P~!!~B@7~~J@@?~!!~#@J~!!!!!&@7~~7@G~!!!~~J@7B@PJ@Y^~~~~~&@Y^~~P@5^~!!~7&G@@J7!~~#@B!!~~~#&7&5^^^^~~?B~5&?#@B^^~~~^5@P~~~^J@B~~~~~^#@7~~^?@@?~~!!
~~!~~G@Y!!~G@B~~!!!&@?~!~~~Y&7#@B7&&!^~~~^BGY@B^!~~~#PB@5~!!!B&7~~J@@?~!~~B@?~!!~~!&@7~~7@B~!!~~^J@7B@PJ@Y^~~~~~&@Y^~~G@5^~~!~?&B@&?!!~!#@B!~!~~#&7&5^^^^^~JB~P&?#@B^^^~~^5@P~!!^J@B^~~~~^B@7~~!P@@PJJJY
~~!!~G@Y~!!B@B~!!~!&@?~!!~^5&?#@B7&&!^~~~^#B5@B~~~~!&5B@5~!!!B@?~~J@@7~!~~B@?~!!!~!&&!~~?@B~!!~!^?@7#@5J@Y^~~~^!@@J^~~G@5^~~~^7&B@&?!~~!&@B!~~~~#&?&5^^^^^~YB~P@7#@#^^~~~^5@P^~~^J@G^~^~~^B@7^^!@@5~7777
~~!!~B@Y~!~G@B~!!~7@@7~!~~^5&?#@B!&&!^~~~^#B5@B^~!~!&5B@P~!!~B@7!!J@@7~!~~G@?~!!!~!&&!~~7&#~!!!!^Y@7#@YY@Y^~~~^!@@?^~^G@5^~~^^?&B@&7!~~!#@B!~~~!##7&5^~^^^^YB~P@7B@B^^~^~:5@P^~~^J@G:^~~^^#@7^~~#@Y:^^^^
~~~!!#@J~!~B@B~!~~?@&!!!~~^5&?#@B7&&!^~~~^##P@G^~~~!&YB@5~~!~B@?!!?@@?~!~~B@?~~!~~~&&!~~7@B~~!!!:Y@7#@JY@Y^~~!~7@@7^~^G@P~~~^^Y@B@&77!!!&@P!!~~~##?@5^~~~^~5B~5@7B@B::^~~:5@P^~~^?@G:^~~^^#@7^~^B@J:^^^^
~~~!!#@J~!!B@B~~~~?@&!~~~~^5&?#@B7&&~~~~~^#BY@G^~~~!&YB@5~~!!#@?~~7&@?~~~~G@J~!!~~!&&!~~7@B~~!!~:Y&!#@JY@Y^~~!~7@@7^~^B@G~~~^^?&#@&7!!!!#@P~~~~~#&?@5^^~^^^5B~Y@!G@#^::^^:Y@G^^~^J@B::^^^^#@?^~^B@Y^^^^~
^~~!!B@?~~~G@B~~~~?@#~~~~~^5@7#@B!&&~~!~^~##5@G^~~~7&YB@P~!!!#@?~~!&@J~!~~G@Y~!!!!7&@7~~7@B~~!!~:J&!#@YY@J^~~~^7@@7^~^B@P^~~~^?&#@&?~~~~B@P!~~~~##?&Y^^^^^^5G^Y&!G@&^:^~^:5@G^^^:J@G:^^^^:B@?^~^B@#GGGGG
~~~~~P@J~~~G@G~~~~?@#~~~~~^Y@?&@B!&&~^~~^^B&P@B^~~~7@5B@G~!!!#@?^~!&@Y~~~^G@Y~!!!!!&&!~~7@G~~!!~:?&~B@YY@J^~~~~!@@!^~^B@5^^^~^7&B@@?!~~!#@P~~~~!&B?@J^^~^^^5P^Y&!G@B:^^^^:P@G:^^:J@G:^^^^:B@J^^:5@#^^^~!
~~~!!P@?~~~B@G~~~~J@#~~~~~^5&7#@B!#@!^~~~~##P@B^~~^?@YB@G~!!!#@7~!!&@Y~~~~G@5~~~!!!&#!~~?@B^~!!~:Y&!B@YY@J^~^~^!@@7:^^B@5^^^^^?@#@&!~~~?@@5~~~~~&B?@J^^^^^^5G~P&!G@G:^^^^:G@G:^^:J@P:^^^^^#@?^^:P@#:^^^^
~~!!!G@?~~~B@P^~~^J@#~~~~~^5&7#@B!#@!^~~^~#BP@G^~~^?@YB@G~!!!#@7~!7&@J~!~!B@5~~~!!7@#!~~7@G^~7!~:?&!B@YY@?^~~~^!@@J:^~#@Y^^^^^?@#@&!~~~?@@P~~~~~&BJ@J^^~~~^PG~P&~P@G:^^^^:B@G:^^:J@5^^^~~^#@7^^:G@#^^^^~
~!!~~G@7~~~G@P^~~^Y@#~^~~~^P&7#@B!#@!^~~^^#P5@P^~~^?@JB@P~!!~#&7~!!&@?~~~~B@J~~!!!!&#!~~?@G^~!!!:J&!B@YY@?^~~~^!@@?^^^B@Y^~~~^7&B@@!~~~7&@5~~~^7@GY@J^^~~~^PB~G#~P@G:^^~^:G@G^^^:J@B^^~~^^#@?:^:G@#^^^^!
~~~~^G&!~~~G@P^~~^J@#^^~^~^5@7B@B!#@?^^~^!&PP@P^~~^?@5#@5~~~!&&!~~!&&!~~~!#@?~~!!!!&#!~~J@P^~!~~^P#!#@J5@Y:~~~^!@@Y^~^B@5^~~~~7@#@&!~~~!&@Y~~~^?@PY@Y^^~~~^P#~G#~P@P:^^~~^G@P^~^^?@B^^~~~^#@7:^:P@#^^^^!
~~~~~G#!~~~P@P^~~^J@#^^^^^^5@?B@B!#@?:^^^!&BP@G^~~^7@G#@J~~~!&&~~~!&@!~~~7&&!~~~!!7&B~~~Y@5^~!~~^G#!B@J5@Y:~~~~7@@J^^^P@5^~~~~~&#@&!^^^7@@5~~~^7@PY@5:^~~~^Y#~GB~P@P:^^~~^G@Y^~~^7@B^~~~^^#@7:^:P@#^^^^!*/
 