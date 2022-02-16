ADD_ROGER="ADD\nRoger\nRabbit\nToon\nslkdf\n235\nterrible\n"
ADD_SIMON="ADD\nSimon\nJeremy\nGencive\n00014235\nQuand il est content il vomit\n"
ADD_SERGE="ADD\nSerge\nKaramazof\nAucun lien\nslkdf\n2347405\nFils unique\nSEARCH\n1\n"
ADD_ODILE="ADD\nOdile\nDeraie\nRed is dead\npouet\n235\nMaquillage horrible\n"
ADD_VIALES="ADD\nCommissaire\nViales\nPat'\nslkdf\n288835\nUn pullover ca moule\n"
ADD_EMILE="ADD\nEmile\nEmile\nLucas !\nslkdf\n235\nC'est Emile le tueur\n"
ADD_MARTINE="ADD\nMartine\n...\nS.E.C.U\nslkdf\n0324568455\nSeropositive\n"
ADD_KARA="ADD\nSerge2\nKaramazof\nAucun lien\nslkdf\n2347405\nFils unique\nSEARCH\n7\n"
ADD_VADOR="ADD\nDark\nVador\nAnakin\nslkdf\n66\nC'est le pere de Luke (spoiler)\nSEARCH\n0\n"
ADD_SIDIOUS="ADD\nDark\nSidious\nPalpatine\n66987\nLe mechaaaaant (spoiler)\nSEARCH\n4\n"


CMD="${ADD_ROGER}${ADD_SIMON}${ADD_SERGE}${ADD_ODILE}${ADD_VIALES}${ADD_EMILE}${ADD_MARTINE}${ADD_KARA}${ADD_VADOR}${ADD_SIDIOUS}EXIT"

echo ${CMD} | ./phonebook


echo "\n\nERROR\n"
INVALID_CMD="skfjh\n"
SEARCH_NAN="SEARCH\nsldkfj\n"
SEARCH_BAD_INDEX="SEARCH\n9\n"

CMD_ERR="${INVALID_CMD}SEARCH\n${ADD_ROGER}${ADD_VADOR}${SEARCH_NAN}${SEARCH_BAD_INDEX}EXIT"
echo "${CMD_ERR}" | ./phonebook