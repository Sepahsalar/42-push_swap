Makefile:15:HEADER	= -I ./includes
Makefile:24:CFLAGS = -Wall -Wextra -Werror
Makefile:27:	cc ${CFLAGS} ${HEADER} -c $< -o $@
Makefile:32:	@make -C ./libft
Makefile:33:	@cc ${CFLAGS} ${OBJ} -Llibft -lft ${HEADER} -o ${NAME}
Makefile:36:	rm -f ${OBJ} ${OBJ_BONUS}
Makefile:37:	@make clean -C ./libft
Makefile:40:	rm -f ${NAME}
Makefile:41:	@make fclean -C ./libft
README.md:1:# 42-push_swap
README.md:21:$> git clone https://github.com/Sepahsalar/42-push_swap.git
README.md:31:- **num**: unique numbers in a non-ascending order.
README.md:46:- `sa` : swap `a` - Swap the first `2` elements at the top of stack `a`. Do nothing if there is only one or no elements.
README.md:47:- `sb` : swap `b` - Swap the first `2` elements at the top of stack `b`. Do nothing if there is only one or no elements.
README.md:48:- `ss` : `sa` and `sb` at the same time.
README.md:49:- `pa` : push `a` - Take the first element at the top of `b` and put it at the top of `a`. Do nothing if `b` is empty.
README.md:50:- `pb` : push `b` - Take the first element at the top of `a` and put it at the top of `b`. Do nothing if `a` is empty.
README.md:51:- `ra` : rotate a - Shift up all elements of stack `a` by `1`. The first element becomes the last one.
README.md:52:- `rb` : rotate b - Shift up all elements of stack `b` by `1`. The first element becomes the last one.
README.md:53:- `rr` : `ra` and `rb` at the same time.
README.md:54:- `rra` : reverse rotate `a` - Shift down all elements of stack a by `1`. The last element becomes the first one.
README.md:55:- `rrb` : reverse rotate `b` - Shift down all elements of stack b by `1`. The last element becomes the first one.
README.md:56:- `rrr` : `rra` and `rrb` at the same time.
README.md:83:[Push swap tutorial](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)
Binary file checker_Mac matches
libft/ft_atoi.c:18:	if (str[i] == '-' || str[i] == '+')
libft/ft_atoi.c:20:		if (str[i] == '-')
libft/ft_atoi.c:21:			sign = sign * -1;
libft/ft_atoi.c:26:		a = a * 10 + (str[i] - '0');
libft/ft_atoi.c:28:			return (-1);
libft/ft_atoi.c:29:		else if (a < 0 && sign == -1)
libft/ft_itoa.c:22:	i = count - 1;
libft/ft_itoa.c:25:		result[0] = '-';
libft/ft_itoa.c:26:		nbr = -nbr;
libft/ft_itoa.c:36:		i--;
libft/ft_itoa.c:52:	if (n == -2147483648)
libft/ft_itoa.c:53:		return (ft_strdup("-2147483648"));
libft/ft_lstadd_back.c:25:		(ft_lstlast(*lst))->next = new;
libft/ft_lstadd_front.c:24:	new->next = *lst;
libft/ft_lstclear.c:24:		temp = (*lst)->next;
libft/ft_lstdelone.c:19:	del(lst->content);
libft/ft_lstiter.c:21:		f(lst->content);
libft/ft_lstiter.c:22:		lst = lst->next;
libft/ft_lstlast.c:19:	while (lst->next)
libft/ft_lstlast.c:20:		lst = lst->next;
libft/ft_lstmap.c:26:		node = ft_lstnew(f(lst->content));
libft/ft_lstmap.c:33:		lst = lst->next;
libft/ft_lstnew.c:22:	list->content = content;
libft/ft_lstnew.c:23:	list->next = NULL;
libft/ft_lstsize.c:22:		lst = lst->next;
libft/ft_memcmp.c:24:			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
libft/ft_memmove.c:22:	if ((size_t)dst - (size_t)src < len)
libft/ft_memmove.c:24:		i = len - 1;
libft/ft_memmove.c:28:			i--;
libft/ft_putnbr_fd.c:19:		ft_putchar_fd('-', fd);
libft/ft_putnbr_fd.c:20:		n = -n;
libft/ft_putnbr_fd.c:22:	if (n == -2147483648)
libft/ft_split.c:49:	array[index] = (char *)malloc(((str - word_start) + 1) * sizeof(char));
libft/ft_split.c:61:	while (i < (str - word_start))
libft/ft_split.c:66:	array[index][str - word_start] = '\0';
libft/ft_strlcat.c:28:	while (src[i] && c < dstsize - 1)
libft/ft_strlcpy.c:22:		while (src[i] && i < (dstsize - 1))
libft/ft_strncmp.c:23:		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
libft/ft_strncmp.c:31:	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
libft/ft_strrchr.c:24:		s--;
libft/ft_strtrim.c:25:		i--;
libft/ft_substr.c:27:		real_len = ft_strlen(s) - start;
libft/ft_toupper.c:16:		return (c - 32);
libft/get_next_line.c:24:		if (i == -1)
libft/get_next_line.c:88:	new_str = malloc((my_strlen(str) - i + 1) * sizeof(char));
libft/get_next_line_utils.c:49:	i = -1;
libft/Makefile:28:CFLAGS = -Wall -Wextra -Werror
libft/Makefile:31:	@cc ${CFLAGS} -c $< -o $@
libft/Makefile:36:	@ar -crs ${NAME} ${OBJ}
libft/Makefile:39:	@rm -f ${OBJ}
libft/Makefile:42:	@rm -f ${NAME}
push_swap_test.sh:3:# -=-=-=-=-	CLRS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #
push_swap_test.sh:16:printf ${BLUE}"\n-------------------------------------------------------------\n"${DEF_COLOR};
push_swap_test.sh:19:printf ${BLUE}"\n-------------------------------------------------------------\n"${DEF_COLOR};
push_swap_test.sh:21:rm -rf traces.txt
push_swap_test.sh:22:rm -rf 0
push_swap_test.sh:24:# -=-=-=-=-	Control errors -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #
push_swap_test.sh:29:if [ -f "$FILE" ]; then
push_swap_test.sh:30:	echo -n
push_swap_test.sh:36:if [ $1 == -v ];then
push_swap_test.sh:37:if [ -z "$2" ];then
push_swap_test.sh:42:ARG=$(ruby -e "puts (0..($n)).to_a.shuffle.join(' ')"); ./push_swap $ARG | ./pro_checker $ARG
push_swap_test.sh:46:if [ $1 == -v2 ];then
push_swap_test.sh:51:if [ -z "$1" ] || [ $1 != -b ]; then
push_swap_test.sh:52:printf ${BLUE}"\n-------------------------------------------------------------\n"${DEF_COLOR};
push_swap_test.sh:54:printf ${BLUE}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:58:if [ -s "$FICHERO" ];then
push_swap_test.sh:59:while IFS= read -r line
push_swap_test.sh:72:rm -rf test_check.txt
push_swap_test.sh:76:if [ -s "$FICHERO" ];then
push_swap_test.sh:77:while IFS= read -r line
push_swap_test.sh:90:rm -rf test_check.txt
push_swap_test.sh:94:if [ -s "$FICHERO" ];then
push_swap_test.sh:95:while IFS= read -r line
push_swap_test.sh:108:rm -rf test_check.txt
push_swap_test.sh:111:if [ -s "$FICHERO" ];then
push_swap_test.sh:112:while IFS= read -r line
push_swap_test.sh:125:rm -rf test_check.txt
push_swap_test.sh:129:if [ -s "$FICHERO" ];then
push_swap_test.sh:130:while IFS= read -r line
push_swap_test.sh:143:rm -rf test_check.txt
push_swap_test.sh:145:ARG="-01 -001"
push_swap_test.sh:147:if [ -s "$FICHERO" ];then
push_swap_test.sh:148:while IFS= read -r line
push_swap_test.sh:161:rm -rf test_check.txt
push_swap_test.sh:163:ARG="111-1 2 -3"
push_swap_test.sh:165:if [ -s "$FICHERO" ];then
push_swap_test.sh:166:while IFS= read -r line
push_swap_test.sh:179:rm -rf test_check.txt
push_swap_test.sh:181:ARG="-3 -2 -2"
push_swap_test.sh:183:if [ -s "$FICHERO" ];then
push_swap_test.sh:184:while IFS= read -r line
push_swap_test.sh:197:rm -rf test_check.txt
push_swap_test.sh:201:if [ -s "$FICHERO" ];then
push_swap_test.sh:202:while IFS= read -r line
push_swap_test.sh:215:rm -rf test_check.txt
push_swap_test.sh:217:ARG="-2147483649"
push_swap_test.sh:219:if [ -s "$FICHERO" ];then
push_swap_test.sh:220:while IFS= read -r line
push_swap_test.sh:233:rm -rf test_check.txt
push_swap_test.sh:235:ARG="-2147483650"
push_swap_test.sh:237:if [ -s "$FICHERO" ];then
push_swap_test.sh:238:while IFS= read -r line
push_swap_test.sh:251:rm -rf test_check.txt
push_swap_test.sh:255:if [ -s "$FICHERO" ];then
push_swap_test.sh:256:while IFS= read -r line
push_swap_test.sh:269:rm -rf test_check.txt
push_swap_test.sh:273:if [ -s "$FICHERO" ];then
push_swap_test.sh:274:while IFS= read -r line
push_swap_test.sh:287:rm -rf test_check.txt
push_swap_test.sh:289:ARG="10 -1 -2 -3 -4 -5 -6 90 99 10"
push_swap_test.sh:291:if [ -s "$FICHERO" ];then
push_swap_test.sh:292:while IFS= read -r line
push_swap_test.sh:305:rm -rf test_check.txt
push_swap_test.sh:307:ARG="1 +1 -1"
push_swap_test.sh:309:if [ -s "$FICHERO" ];then
push_swap_test.sh:310:while IFS= read -r line
push_swap_test.sh:323:rm -rf test_check.txt
push_swap_test.sh:325:ARG="3333-3333 1 4"
push_swap_test.sh:327:if [ -s "$FICHERO" ];then
push_swap_test.sh:328:while IFS= read -r line
push_swap_test.sh:341:rm -rf test_check.txt
push_swap_test.sh:343:ARG="111a111 -4 3"
push_swap_test.sh:345:if [ -s "$FICHERO" ];then
push_swap_test.sh:346:while IFS= read -r line
push_swap_test.sh:359:rm -rf test_check.txt
push_swap_test.sh:361:ARG="111111 -4 3 03"
push_swap_test.sh:363:if [ -s "$FICHERO" ];then
push_swap_test.sh:364:while IFS= read -r line
push_swap_test.sh:377:rm -rf test_check.txt
push_swap_test.sh:381:if [ -s "$FICHERO" ];then
push_swap_test.sh:382:while IFS= read -r line
push_swap_test.sh:395:rm -rf test_check.txt
push_swap_test.sh:399:if [ -s "$FICHERO" ];then
push_swap_test.sh:400:while IFS= read -r line
push_swap_test.sh:413:rm -rf test_check.txt
push_swap_test.sh:417:if [ -s "$FICHERO" ];then
push_swap_test.sh:418:while IFS= read -r line
push_swap_test.sh:431:rm -rf test_check.txt
push_swap_test.sh:435:if [ -s "$FICHERO" ];then
push_swap_test.sh:436:while IFS= read -r line
push_swap_test.sh:449:rm -rf test_check.txt
push_swap_test.sh:453:if [ -s "$FICHERO" ];then
push_swap_test.sh:454:while IFS= read -r line
push_swap_test.sh:467:rm -rf test_check.txt
push_swap_test.sh:471:if [ -s "$FICHERO" ];then
push_swap_test.sh:472:while IFS= read -r line
push_swap_test.sh:485:rm -rf test_check.txt
push_swap_test.sh:487:ARG="42 -42 -42 "
push_swap_test.sh:489:if [ -s "$FICHERO" ];then
push_swap_test.sh:490:while IFS= read -r line
push_swap_test.sh:503:rm -rf test_check.txt
push_swap_test.sh:505:ARG="4222-4222"
push_swap_test.sh:507:if [ -s "$FICHERO" ];then
push_swap_test.sh:508:while IFS= read -r line
push_swap_test.sh:521:rm -rf test_check.txt
push_swap_test.sh:525:if [ -s "$FICHERO" ];then
push_swap_test.sh:526:while IFS= read -r line
push_swap_test.sh:539:rm -rf test_check.txt
push_swap_test.sh:541:ARG="-99999999999999999999999999"
push_swap_test.sh:543:if [ -s "$FICHERO" ];then
push_swap_test.sh:544:while IFS= read -r line
push_swap_test.sh:557:rm -rf test_check.txt
push_swap_test.sh:559:ARG="0 -0 1 -1"
push_swap_test.sh:561:if [ -s "$FICHERO" ];then
push_swap_test.sh:562:while IFS= read -r line
push_swap_test.sh:575:rm -rf test_check.txt
push_swap_test.sh:577:ARG="0 +0 1 -1"
push_swap_test.sh:579:if [ -s "$FICHERO" ];then
push_swap_test.sh:580:while IFS= read -r line
push_swap_test.sh:593:rm -rf test_check.txt
push_swap_test.sh:595:ARG="111+111 -4 3"
push_swap_test.sh:597:if [ -s "$FICHERO" ];then
push_swap_test.sh:598:while IFS= read -r line
push_swap_test.sh:611:rm -rf test_check.txt
push_swap_test.sh:613:ARG="-"
push_swap_test.sh:615:if [ -s "$FICHERO" ];then
push_swap_test.sh:616:while IFS= read -r line
push_swap_test.sh:631:if [ -s "$FICHERO" ];then
push_swap_test.sh:632:while IFS= read -r line
push_swap_test.sh:645:rm -rf test_check.txt
push_swap_test.sh:647:ARG="--123 1 321"
push_swap_test.sh:649:if [ -s "$FICHERO" ];then
push_swap_test.sh:650:while IFS= read -r line
push_swap_test.sh:663:rm -rf test_check.txt
push_swap_test.sh:667:if [ -s "$FICHERO" ];then
push_swap_test.sh:668:while IFS= read -r line
push_swap_test.sh:681:rm -rf test_check.txt
push_swap_test.sh:685:if [ -s "$FICHERO" ];then
push_swap_test.sh:686:while IFS= read -r line
push_swap_test.sh:699:rm -rf test_check.txt
push_swap_test.sh:703:if [ -s "$FICHERO" ];then
push_swap_test.sh:704:while IFS= read -r line
push_swap_test.sh:717:rm -rf test_check.txt
push_swap_test.sh:721:if [ -s "$FICHERO" ];then
push_swap_test.sh:722:while IFS= read -r line
push_swap_test.sh:735:rm -rf test_check.txt
push_swap_test.sh:737:ARG="--21345"
push_swap_test.sh:739:if [ -s "$FICHERO" ];then
push_swap_test.sh:740:while IFS= read -r line
push_swap_test.sh:753:rm -rf test_check.txt
push_swap_test.sh:758:if [ -s "$FICHERO" ];then
push_swap_test.sh:759:while IFS= read -r line
push_swap_test.sh:772:rm -rf test_check.txt
push_swap_test.sh:774:ARG="-000 -0000"
push_swap_test.sh:776:if [ -s "$FICHERO" ];then
push_swap_test.sh:777:while IFS= read -r line
push_swap_test.sh:790:rm -rf test_check.txt
push_swap_test.sh:792:ARG="-00042 -000042"
push_swap_test.sh:794:if [ -s "$FICHERO" ];then
push_swap_test.sh:795:while IFS= read -r line
push_swap_test.sh:808:rm -rf test_check.txt
push_swap_test.sh:809:rm -rf 0
push_swap_test.sh:811:# -=-=-=-=-	Basic -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #
push_swap_test.sh:813:printf ${BLUE}"\n-------------------------------------------------------------\n"${DEF_COLOR};
push_swap_test.sh:815:printf ${BLUE}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:818:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:819:if [ $N -lt 4 ]; then
push_swap_test.sh:824:	echo -n "$ARG "
push_swap_test.sh:834:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:835:if [ $N -lt 13 ]; then
push_swap_test.sh:840:	echo -n "$ARG "
push_swap_test.sh:850:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:851:if [ $N -lt 4 ]; then
push_swap_test.sh:856:	echo -n "$ARG "
push_swap_test.sh:866:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:867:if [ $N -lt 4 ]; then
push_swap_test.sh:872:	echo -n "$ARG "
push_swap_test.sh:882:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:883:if [ $N -lt 4 ]; then
push_swap_test.sh:888:	echo -n "$ARG "
push_swap_test.sh:898:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:899:if [ $N -lt 4 ]; then
push_swap_test.sh:904:	echo -n "$ARG "
push_swap_test.sh:913:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:914:if [ $N -lt 13 ]; then
push_swap_test.sh:919:	echo -n "$ARG "
push_swap_test.sh:930:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:931:if [ $N -lt 13 ]; then
push_swap_test.sh:936:	echo -n "$ARG "
push_swap_test.sh:946:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:947:if [ $N -lt 13 ]; then
push_swap_test.sh:952:	echo -n "$ARG "
push_swap_test.sh:962:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:963:if [ $N -lt 13 ]; then
push_swap_test.sh:968:	echo -n "$ARG "
push_swap_test.sh:978:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:979:if [ $N -lt 13 ]; then
push_swap_test.sh:984:	echo -n "$ARG "
push_swap_test.sh:994:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:995:if [ $N -lt 13 ]; then
push_swap_test.sh:1000:	echo -n "$ARG "
push_swap_test.sh:1010:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1011:if [ $N -lt 13 ]; then
push_swap_test.sh:1016:	echo -n "$ARG "
push_swap_test.sh:1026:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1027:if [ $N -lt 13 ]; then
push_swap_test.sh:1032:	echo -n "$ARG "
push_swap_test.sh:1042:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1043:if [ $N -lt 13 ]; then
push_swap_test.sh:1048:	echo -n "$ARG "
push_swap_test.sh:1058:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1059:if [ $N -lt 13 ]; then
push_swap_test.sh:1064:	echo -n "$ARG "
push_swap_test.sh:1074:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1075:if [ $N -lt 13 ]; then
push_swap_test.sh:1080:	echo -n "$ARG "
push_swap_test.sh:1090:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1091:if [ $N -lt 13 ]; then
push_swap_test.sh:1096:	echo -n "$ARG "
push_swap_test.sh:1106:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1107:if [ $N -lt 13 ]; then
push_swap_test.sh:1112:	echo -n "$ARG "
push_swap_test.sh:1122:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1123:if [ $N -lt 13 ]; then
push_swap_test.sh:1128:	echo -n "$ARG "
push_swap_test.sh:1138:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1139:if [ $N -lt 13 ]; then
push_swap_test.sh:1144:	echo -n "$ARG "
push_swap_test.sh:1154:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1155:if [ $N -lt 13 ]; then
push_swap_test.sh:1160:	echo -n "$ARG "
push_swap_test.sh:1170:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1171:if [ $N -lt 13 ]; then
push_swap_test.sh:1176:	echo -n "$ARG "
push_swap_test.sh:1186:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1187:if [ $N -lt 13 ]; then
push_swap_test.sh:1192:	echo -n "$ARG "
push_swap_test.sh:1202:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1203:if [ $N -lt 13 ]; then
push_swap_test.sh:1208:	echo -n "$ARG "
push_swap_test.sh:1218:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1219:if [ $N -lt 13 ]; then
push_swap_test.sh:1224:	echo -n "$ARG "
push_swap_test.sh:1234:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1235:if [ $N -lt 13 ]; then
push_swap_test.sh:1240:	echo -n "$ARG "
push_swap_test.sh:1250:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1251:if [ $N -lt 13 ]; then
push_swap_test.sh:1256:	echo -n "$ARG "
push_swap_test.sh:1266:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1267:if [ $N -lt 13 ]; then
push_swap_test.sh:1272:	echo -n "$ARG "
push_swap_test.sh:1282:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1283:if [ $N -lt 13 ]; then
push_swap_test.sh:1288:	echo -n "$ARG "
push_swap_test.sh:1297:rm -rf 0
push_swap_test.sh:1299:printf ${BLUE}"\n\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:1301:printf ${BLUE}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:1305:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1306:if [ $N -lt 13 ]; then
push_swap_test.sh:1311:	echo -n "$ARG "
push_swap_test.sh:1321:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1322:if [ $N -lt 13 ]; then
push_swap_test.sh:1327:	echo -n "$ARG "
push_swap_test.sh:1337:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1338:if [ $N -lt 13 ]; then
push_swap_test.sh:1343:	echo -n "$ARG "
push_swap_test.sh:1353:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1354:if [ $N -lt 13 ]; then
push_swap_test.sh:1359:	echo -n "$ARG "
push_swap_test.sh:1369:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1370:if [ $N -lt 13 ]; then
push_swap_test.sh:1375:	echo -n "$ARG "
push_swap_test.sh:1385:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1386:if [ $N -lt 13 ]; then
push_swap_test.sh:1391:	echo -n "$ARG "
push_swap_test.sh:1401:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1402:if [ $N -lt 13 ]; then
push_swap_test.sh:1407:	echo -n "$ARG "
push_swap_test.sh:1418:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1419:if [ $N -lt 13 ]; then
push_swap_test.sh:1424:	echo -n "$ARG "
push_swap_test.sh:1434:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1435:if [ $N -lt 13 ]; then
push_swap_test.sh:1440:	echo -n "$ARG "
push_swap_test.sh:1450:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1451:if [ $N -lt 13 ]; then
push_swap_test.sh:1456:	echo -n "$ARG "
push_swap_test.sh:1466:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1467:if [ $N -lt 13 ]; then
push_swap_test.sh:1472:	echo -n "$ARG "
push_swap_test.sh:1482:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1483:if [ $N -lt 13 ]; then
push_swap_test.sh:1488:	echo -n "$ARG "
push_swap_test.sh:1498:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1499:if [ $N -lt 13 ]; then
push_swap_test.sh:1504:	echo -n "$ARG "
push_swap_test.sh:1514:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1515:if [ $N -lt 13 ]; then
push_swap_test.sh:1520:	echo -n "$ARG "
push_swap_test.sh:1530:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1531:if [ $N -lt 13 ]; then
push_swap_test.sh:1536:	echo -n "$ARG "
push_swap_test.sh:1546:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1547:if [ $N -lt 13 ]; then
push_swap_test.sh:1552:	echo -n "$ARG "
push_swap_test.sh:1562:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1563:if [ $N -lt 13 ]; then
push_swap_test.sh:1568:	echo -n "$ARG "
push_swap_test.sh:1578:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1579:if [ $N -lt 13 ]; then
push_swap_test.sh:1584:	echo -n "$ARG "
push_swap_test.sh:1594:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1595:if [ $N -lt 13 ]; then
push_swap_test.sh:1600:	echo -n "$ARG "
push_swap_test.sh:1610:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1611:if [ $N -lt 13 ]; then
push_swap_test.sh:1616:	echo -n "$ARG "
push_swap_test.sh:1626:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1627:if [ $N -lt 13 ]; then
push_swap_test.sh:1632:	echo -n "$ARG "
push_swap_test.sh:1642:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1643:if [ $N -lt 13 ]; then
push_swap_test.sh:1648:	echo -n "$ARG "
push_swap_test.sh:1658:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1659:if [ $N -lt 13 ]; then
push_swap_test.sh:1664:	echo -n "$ARG "
push_swap_test.sh:1674:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1675:if [ $N -lt 13 ]; then
push_swap_test.sh:1680:	echo -n "$ARG "
push_swap_test.sh:1690:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1691:if [ $N -lt 13 ]; then
push_swap_test.sh:1696:	echo -n "$ARG "
push_swap_test.sh:1706:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1707:if [ $N -lt 13 ]; then
push_swap_test.sh:1712:	echo -n "$ARG "
push_swap_test.sh:1722:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1723:if [ $N -lt 13 ]; then
push_swap_test.sh:1728:	echo -n "$ARG "
push_swap_test.sh:1738:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1739:if [ $N -lt 13 ]; then
push_swap_test.sh:1744:	echo -n "$ARG "
push_swap_test.sh:1754:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1755:if [ $N -lt 13 ]; then
push_swap_test.sh:1760:	echo -n "$ARG "
push_swap_test.sh:1770:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1771:if [ $N -lt 13 ]; then
push_swap_test.sh:1776:	echo -n "$ARG "
push_swap_test.sh:1786:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1787:if [ $N -lt 13 ]; then
push_swap_test.sh:1792:	echo -n "$ARG "
push_swap_test.sh:1802:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1803:if [ $N -lt 13 ]; then
push_swap_test.sh:1808:	echo -n "$ARG "
push_swap_test.sh:1818:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1819:if [ $N -lt 13 ]; then
push_swap_test.sh:1824:	echo -n "$ARG "
push_swap_test.sh:1834:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1835:if [ $N -lt 13 ]; then
push_swap_test.sh:1840:	echo -n "$ARG "
push_swap_test.sh:1850:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1851:if [ $N -lt 13 ]; then
push_swap_test.sh:1856:	echo -n "$ARG "
push_swap_test.sh:1866:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1867:if [ $N -lt 13 ]; then
push_swap_test.sh:1872:	echo -n "$ARG "
push_swap_test.sh:1882:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1883:if [ $N -lt 13 ]; then
push_swap_test.sh:1888:	echo -n "$ARG "
push_swap_test.sh:1898:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1899:if [ $N -lt 13 ]; then
push_swap_test.sh:1904:	echo -n "$ARG "
push_swap_test.sh:1914:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1915:if [ $N -lt 13 ]; then
push_swap_test.sh:1920:	echo -n "$ARG "
push_swap_test.sh:1930:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1931:if [ $N -lt 13 ]; then
push_swap_test.sh:1936:	echo -n "$ARG "
push_swap_test.sh:1946:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1947:if [ $N -lt 13 ]; then
push_swap_test.sh:1952:	echo -n "$ARG "
push_swap_test.sh:1962:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1963:if [ $N -lt 13 ]; then
push_swap_test.sh:1968:	echo -n "$ARG "
push_swap_test.sh:1978:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1979:if [ $N -lt 13 ]; then
push_swap_test.sh:1984:	echo -n "$ARG "
push_swap_test.sh:1994:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:1995:if [ $N -lt 13 ]; then
push_swap_test.sh:2000:	echo -n "$ARG "
push_swap_test.sh:2010:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2011:if [ $N -lt 13 ]; then
push_swap_test.sh:2016:	echo -n "$ARG "
push_swap_test.sh:2026:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2027:if [ $N -lt 13 ]; then
push_swap_test.sh:2032:	echo -n "$ARG "
push_swap_test.sh:2042:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2043:if [ $N -lt 13 ]; then
push_swap_test.sh:2048:	echo -n "$ARG "
push_swap_test.sh:2058:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2059:if [ $N -lt 13 ]; then
push_swap_test.sh:2064:	echo -n "$ARG "
push_swap_test.sh:2074:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2075:if [ $N -lt 13 ]; then
push_swap_test.sh:2080:	echo -n "$ARG "
push_swap_test.sh:2090:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2091:if [ $N -lt 13 ]; then
push_swap_test.sh:2096:	echo -n "$ARG "
push_swap_test.sh:2106:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2107:if [ $N -lt 13 ]; then
push_swap_test.sh:2112:	echo -n "$ARG "
push_swap_test.sh:2122:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2123:if [ $N -lt 13 ]; then
push_swap_test.sh:2128:	echo -n "$ARG "
push_swap_test.sh:2138:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2139:if [ $N -lt 13 ]; then
push_swap_test.sh:2144:	echo -n "$ARG "
push_swap_test.sh:2154:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2155:if [ $N -lt 13 ]; then
push_swap_test.sh:2160:	echo -n "$ARG "
push_swap_test.sh:2170:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2171:if [ $N -lt 13 ]; then
push_swap_test.sh:2176:	echo -n "$ARG "
push_swap_test.sh:2186:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2187:if [ $N -lt 13 ]; then
push_swap_test.sh:2192:	echo -n "$ARG "
push_swap_test.sh:2202:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2203:if [ $N -lt 13 ]; then
push_swap_test.sh:2208:	echo -n "$ARG "
push_swap_test.sh:2218:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2219:if [ $N -lt 13 ]; then
push_swap_test.sh:2224:	echo -n "$ARG "
push_swap_test.sh:2234:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2235:if [ $N -lt 13 ]; then
push_swap_test.sh:2240:	echo -n "$ARG "
push_swap_test.sh:2250:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2251:if [ $N -lt 13 ]; then
push_swap_test.sh:2256:	echo -n "$ARG "
push_swap_test.sh:2266:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2267:if [ $N -lt 13 ]; then
push_swap_test.sh:2272:	echo -n "$ARG "
push_swap_test.sh:2282:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2283:if [ $N -lt 13 ]; then
push_swap_test.sh:2288:	echo -n "$ARG "
push_swap_test.sh:2298:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2299:if [ $N -lt 13 ]; then
push_swap_test.sh:2304:	echo -n "$ARG "
push_swap_test.sh:2314:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2315:if [ $N -lt 13 ]; then
push_swap_test.sh:2320:	echo -n "$ARG "
push_swap_test.sh:2330:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2331:if [ $N -lt 13 ]; then
push_swap_test.sh:2336:	echo -n "$ARG "
push_swap_test.sh:2346:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2347:if [ $N -lt 13 ]; then
push_swap_test.sh:2352:	echo -n "$ARG "
push_swap_test.sh:2362:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2363:if [ $N -lt 13 ]; then
push_swap_test.sh:2368:	echo -n "$ARG "
push_swap_test.sh:2378:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2379:if [ $N -lt 13 ]; then
push_swap_test.sh:2384:	echo -n "$ARG "
push_swap_test.sh:2394:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2395:if [ $N -lt 13 ]; then
push_swap_test.sh:2400:	echo -n "$ARG "
push_swap_test.sh:2410:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2411:if [ $N -lt 13 ]; then
push_swap_test.sh:2416:	echo -n "$ARG "
push_swap_test.sh:2426:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2427:if [ $N -lt 13 ]; then
push_swap_test.sh:2432:	echo -n "$ARG "
push_swap_test.sh:2442:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2443:if [ $N -lt 13 ]; then
push_swap_test.sh:2448:	echo -n "$ARG "
push_swap_test.sh:2458:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2459:if [ $N -lt 13 ]; then
push_swap_test.sh:2464:	echo -n "$ARG "
push_swap_test.sh:2474:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2475:if [ $N -lt 13 ]; then
push_swap_test.sh:2480:	echo -n "$ARG "
push_swap_test.sh:2490:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2491:if [ $N -lt 13 ]; then
push_swap_test.sh:2496:	echo -n "$ARG "
push_swap_test.sh:2506:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2507:if [ $N -lt 13 ]; then
push_swap_test.sh:2512:	echo -n "$ARG "
push_swap_test.sh:2522:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2523:if [ $N -lt 13 ]; then
push_swap_test.sh:2528:	echo -n "$ARG "
push_swap_test.sh:2538:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2539:if [ $N -lt 13 ]; then
push_swap_test.sh:2544:	echo -n "$ARG "
push_swap_test.sh:2554:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2555:if [ $N -lt 13 ]; then
push_swap_test.sh:2560:	echo -n "$ARG "
push_swap_test.sh:2570:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2571:if [ $N -lt 13 ]; then
push_swap_test.sh:2576:	echo -n "$ARG "
push_swap_test.sh:2586:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2587:if [ $N -lt 13 ]; then
push_swap_test.sh:2592:	echo -n "$ARG "
push_swap_test.sh:2602:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2603:if [ $N -lt 13 ]; then
push_swap_test.sh:2608:	echo -n "$ARG "
push_swap_test.sh:2618:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2619:if [ $N -lt 13 ]; then
push_swap_test.sh:2624:	echo -n "$ARG "
push_swap_test.sh:2634:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2635:if [ $N -lt 13 ]; then
push_swap_test.sh:2640:	echo -n "$ARG "
push_swap_test.sh:2650:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2651:if [ $N -lt 13 ]; then
push_swap_test.sh:2656:	echo -n "$ARG "
push_swap_test.sh:2666:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2667:if [ $N -lt 13 ]; then
push_swap_test.sh:2672:	echo -n "$ARG "
push_swap_test.sh:2682:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2683:if [ $N -lt 13 ]; then
push_swap_test.sh:2688:	echo -n "$ARG "
push_swap_test.sh:2698:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2699:if [ $N -lt 13 ]; then
push_swap_test.sh:2704:	echo -n "$ARG "
push_swap_test.sh:2714:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2715:if [ $N -lt 13 ]; then
push_swap_test.sh:2720:	echo -n "$ARG "
push_swap_test.sh:2730:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2731:if [ $N -lt 13 ]; then
push_swap_test.sh:2736:	echo -n "$ARG "
push_swap_test.sh:2746:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2747:if [ $N -lt 13 ]; then
push_swap_test.sh:2752:	echo -n "$ARG "
push_swap_test.sh:2762:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2763:if [ $N -lt 13 ]; then
push_swap_test.sh:2768:	echo -n "$ARG "
push_swap_test.sh:2778:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2779:if [ $N -lt 13 ]; then
push_swap_test.sh:2784:	echo -n "$ARG "
push_swap_test.sh:2794:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2795:if [ $N -lt 13 ]; then
push_swap_test.sh:2800:	echo -n "$ARG "
push_swap_test.sh:2810:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2811:if [ $N -lt 13 ]; then
push_swap_test.sh:2816:	echo -n "$ARG "
push_swap_test.sh:2826:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2827:if [ $N -lt 13 ]; then
push_swap_test.sh:2832:	echo -n "$ARG "
push_swap_test.sh:2842:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2843:if [ $N -lt 13 ]; then
push_swap_test.sh:2848:	echo -n "$ARG "
push_swap_test.sh:2858:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2859:if [ $N -lt 13 ]; then
push_swap_test.sh:2864:	echo -n "$ARG "
push_swap_test.sh:2874:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2875:if [ $N -lt 13 ]; then
push_swap_test.sh:2880:	echo -n "$ARG "
push_swap_test.sh:2890:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2891:if [ $N -lt 13 ]; then
push_swap_test.sh:2896:	echo -n "$ARG "
push_swap_test.sh:2906:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2907:if [ $N -lt 13 ]; then
push_swap_test.sh:2912:	echo -n "$ARG "
push_swap_test.sh:2922:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2923:if [ $N -lt 13 ]; then
push_swap_test.sh:2928:	echo -n "$ARG "
push_swap_test.sh:2938:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2939:if [ $N -lt 13 ]; then
push_swap_test.sh:2944:	echo -n "$ARG "
push_swap_test.sh:2954:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2955:if [ $N -lt 13 ]; then
push_swap_test.sh:2960:	echo -n "$ARG "
push_swap_test.sh:2970:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2971:if [ $N -lt 13 ]; then
push_swap_test.sh:2976:	echo -n "$ARG "
push_swap_test.sh:2986:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:2987:if [ $N -lt 13 ]; then
push_swap_test.sh:2992:	echo -n "$ARG "
push_swap_test.sh:3002:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3003:if [ $N -lt 13 ]; then
push_swap_test.sh:3008:	echo -n "$ARG "
push_swap_test.sh:3018:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3019:if [ $N -lt 13 ]; then
push_swap_test.sh:3024:	echo -n "$ARG "
push_swap_test.sh:3034:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3035:if [ $N -lt 13 ]; then
push_swap_test.sh:3040:	echo -n "$ARG "
push_swap_test.sh:3050:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3051:if [ $N -lt 13 ]; then
push_swap_test.sh:3056:	echo -n "$ARG "
push_swap_test.sh:3066:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3067:if [ $N -lt 13 ]; then
push_swap_test.sh:3072:	echo -n "$ARG "
push_swap_test.sh:3082:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3083:if [ $N -lt 13 ]; then
push_swap_test.sh:3088:	echo -n "$ARG "
push_swap_test.sh:3098:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3099:if [ $N -lt 13 ]; then
push_swap_test.sh:3104:	echo -n "$ARG "
push_swap_test.sh:3114:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3115:if [ $N -lt 13 ]; then
push_swap_test.sh:3120:	echo -n "$ARG "
push_swap_test.sh:3130:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3131:if [ $N -lt 13 ]; then
push_swap_test.sh:3136:	echo -n "$ARG "
push_swap_test.sh:3146:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3147:if [ $N -lt 13 ]; then
push_swap_test.sh:3152:	echo -n "$ARG "
push_swap_test.sh:3162:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3163:if [ $N -lt 13 ]; then
push_swap_test.sh:3168:	echo -n "$ARG "
push_swap_test.sh:3178:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3179:if [ $N -lt 13 ]; then
push_swap_test.sh:3184:	echo -n "$ARG "
push_swap_test.sh:3194:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3195:if [ $N -lt 13 ]; then
push_swap_test.sh:3200:	echo -n "$ARG "
push_swap_test.sh:3210:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3211:if [ $N -lt 13 ]; then
push_swap_test.sh:3216:	echo -n "$ARG "
push_swap_test.sh:3225:printf ${BLUE}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:3227:printf ${BLUE}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:3247:while [ $cont -lt $val ]
push_swap_test.sh:3249:ARG=$(ruby -e "puts (00..99).to_a.shuffle.join(' ')");
push_swap_test.sh:3258:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3259:if [ $N -gt $alta ]; then
push_swap_test.sh:3262:	if [ $N -lt $baja ]; then
push_swap_test.sh:3265:if [ $N -gt 700 ] || [ $N -eq 700 ]; then
push_swap_test.sh:3268:if [ $N -lt 700 ] && [ $control -eq 2 ]; then
push_swap_test.sh:3273:elif [ $N -gt 700 ] || [ $N -eq 700 ] && [ $N -lt 900 ] && [ $control -eq 2 ]; then
push_swap_test.sh:3276:	if [ $N -gt $alta ]; then
push_swap_test.sh:3279:	if [ $N -lt $baja ]; then
push_swap_test.sh:3284:elif [ $N -gt 900 ] || [ $N -eq 900 ] && [ $N -lt 1100 ] && [ $control -eq 2 ]; then
push_swap_test.sh:3287:	if [ $N -gt $alta ]; then
push_swap_test.sh:3290:	if [ $N -lt $baja ]; then
push_swap_test.sh:3295:elif [ $N -gt 1100 ] || [ $N -eq 1100 ] && [ $N -lt 1300 ] && [ $control -eq 2 ]; then
push_swap_test.sh:3298:	if [ $N -gt $alta ]; then
push_swap_test.sh:3301:	if [ $N -lt $baja ]; then
push_swap_test.sh:3306:elif [ $N -gt 1300 ] || [ $N -eq 1300 ] && [ $control -eq 2 ]; then
push_swap_test.sh:3309:	if [ $N -gt $alta ]; then
push_swap_test.sh:3312:	if [ $N -lt $baja ]; then
push_swap_test.sh:3317:elif [ $control -eq 3 ]; then
push_swap_test.sh:3325:((val--))
push_swap_test.sh:3354:printf ${BLUE}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:3356:printf ${BLUE}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:3375:while [ $cont -lt $val ]
push_swap_test.sh:3377:ARG=$(ruby -e "puts (-250..249).to_a.shuffle.join(' ')");
push_swap_test.sh:3386:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3387:if [ $N -gt $alta ]; then
push_swap_test.sh:3390:if [ $N -lt $baja ]; then
push_swap_test.sh:3393:if [ $N -gt 700 ] || [ $N -eq 700 ]; then
push_swap_test.sh:3396:if [ $N -lt 5500 ] && [ $control -eq 2 ]; then
push_swap_test.sh:3401:elif [ $N -gt 5500 ] || [ $N -eq 5500 ] && [ $N -lt 7000 ] && [ $control -eq 2 ]; then
push_swap_test.sh:3404:	if [ $N -gt $alta ]; then
push_swap_test.sh:3407:	if [ $N -lt $baja ]; then
push_swap_test.sh:3412:elif [ $N -gt 7000 ] || [ $N -eq 7000 ] && [ $N -lt 8500 ] && [ $control -eq 2 ]; then
push_swap_test.sh:3415:	if [ $N -gt $alta ]; then
push_swap_test.sh:3418:	if [ $N -lt $baja ]; then
push_swap_test.sh:3423:elif [ $N -gt 8500 ] || [ $N -eq 8500 ] && [ $N -lt 10000 ] && [ $control -eq 2 ]; then
push_swap_test.sh:3426:	if [ $N -gt $alta ]; then
push_swap_test.sh:3429:	if [ $N -lt $baja ]; then
push_swap_test.sh:3434:elif [ $N -gt 11500 ] || [ $N -eq 11500 ] && [ $control -eq 2 ]; then
push_swap_test.sh:3437:	if [ $N -gt $alta ]; then
push_swap_test.sh:3440:	if [ $N -lt $baja ]; then
push_swap_test.sh:3445:elif [ $control -eq 3 ]; then
push_swap_test.sh:3452:((val--))
push_swap_test.sh:3481:printf ${BLUE}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:3483:printf ${BLUE}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:3486:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3487:if [ $N -eq 0 ]; then
push_swap_test.sh:3492:R=$(leaks -atExit -- ./push_swap $ARG > /dev/null && echo $?)
push_swap_test.sh:3500:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3501:if [ $N -eq 0 ]; then
push_swap_test.sh:3506:R=$(leaks -atExit -- ./push_swap $ARG > /dev/null && echo $?)
push_swap_test.sh:3514:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3515:if [ $N -eq 0 ]; then
push_swap_test.sh:3520:R=$(leaks -atExit -- ./push_swap $ARG > /dev/null && echo $?)
push_swap_test.sh:3528:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3529:if [ $N -eq 0 ]; then
push_swap_test.sh:3534:R=$(leaks -atExit -- ./push_swap $ARG > /dev/null && echo $?)
push_swap_test.sh:3542:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3543:if [ $N -eq 0 ]; then
push_swap_test.sh:3548:R=$(leaks -atExit -- ./push_swap $ARG > /dev/null && echo $?)
push_swap_test.sh:3556:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3557:if [ $N -eq 0 ]; then
push_swap_test.sh:3562:R=$(leaks -atExit -- ./push_swap $ARG > /dev/null && echo $?)
push_swap_test.sh:3570:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3571:if [ $N -eq 0 ]; then
push_swap_test.sh:3576:R=$(leaks -atExit -- ./push_swap $ARG > /dev/null && echo $?)
push_swap_test.sh:3584:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3585:if [ $N -eq 0 ]; then
push_swap_test.sh:3590:R=$(leaks -atExit -- ./push_swap $ARG > /dev/null && echo $?)
push_swap_test.sh:3598:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3599:if [ $N -eq 0 ]; then
push_swap_test.sh:3604:R=$(leaks -atExit -- ./push_swap $ARG > /dev/null && echo $?)
push_swap_test.sh:3611:ARG="-2147483648 -2147483647 -2147483646";
push_swap_test.sh:3612:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3613:if [ $N -eq 0 ]; then
push_swap_test.sh:3618:R=$(leaks -atExit -- ./push_swap $ARG > /dev/null && echo $?)
push_swap_test.sh:3626:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3627:if [ $N -eq 0 ]; then
push_swap_test.sh:3632:R=$(leaks -atExit -- ./push_swap $ARG > /dev/null && echo $?)
push_swap_test.sh:3640:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3641:if [ $N -eq 0 ]; then
push_swap_test.sh:3646:R=$(leaks -atExit -- ./push_swap $ARG > /dev/null && echo $?)
push_swap_test.sh:3653:printf ${BLUE}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:3655:printf ${BLUE}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:3657:ARG=$(ruby -e "puts (-2147483648..-2147483149).to_a.shuffle.join(' ')");
push_swap_test.sh:3658:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3659:if [ $N -lt 5500 ]; then
push_swap_test.sh:3661:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:3663:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:3665:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:3667:elif [ $N -gt 11500 ]; then
push_swap_test.sh:3677:ARG=$(ruby -e "puts (-2147483648..-2147483149).to_a.shuffle.join(' ')");
push_swap_test.sh:3678:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3679:if [ $N -lt 5500 ]; then
push_swap_test.sh:3681:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:3683:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:3685:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:3687:elif [ $N -gt 11500 ]; then
push_swap_test.sh:3697:ARG=$(ruby -e "puts (0..499).to_a.shuffle.join(' ')");
push_swap_test.sh:3698:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3699:if [ $N -lt 5500 ]; then
push_swap_test.sh:3701:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:3703:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:3705:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:3707:elif [ $N -gt 11500 ]; then
push_swap_test.sh:3717:ARG=$(ruby -e "puts (0..499).to_a.shuffle.join(' ')");
push_swap_test.sh:3718:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3719:if [ $N -lt 5500 ]; then
push_swap_test.sh:3721:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:3723:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:3725:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:3727:elif [ $N -gt 11500 ]; then
push_swap_test.sh:3737:ARG=$(ruby -e "puts (0..498).to_a.shuffle.join(' ')");
push_swap_test.sh:3738:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3739:if [ $N -lt 5500 ]; then
push_swap_test.sh:3741:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:3743:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:3745:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:3747:elif [ $N -gt 11500 ]; then
push_swap_test.sh:3757:ARG=$(ruby -e "puts (0..498).to_a.shuffle.join(' ')");
push_swap_test.sh:3758:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3759:if [ $N -lt 5500 ]; then
push_swap_test.sh:3761:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:3763:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:3765:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:3767:elif [ $N -gt 11500 ]; then
push_swap_test.sh:3777:ARG=$(ruby -e "puts (0..497).to_a.shuffle.join(' ')");
push_swap_test.sh:3778:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3779:if [ $N -lt 5500 ]; then
push_swap_test.sh:3781:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:3783:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:3785:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:3787:elif [ $N -gt 11500 ]; then
push_swap_test.sh:3797:ARG=$(ruby -e "puts (0..497).to_a.shuffle.join(' ')");
push_swap_test.sh:3798:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3799:if [ $N -lt 5500 ]; then
push_swap_test.sh:3801:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:3803:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:3805:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:3807:elif [ $N -gt 11500 ]; then
push_swap_test.sh:3817:ARG=$(ruby -e "puts (-1..498).to_a.shuffle.join(' ')");
push_swap_test.sh:3818:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3819:if [ $N -lt 5500 ]; then
push_swap_test.sh:3821:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:3823:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:3825:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:3827:elif [ $N -gt 11500 ]; then
push_swap_test.sh:3837:ARG=$(ruby -e "puts (5000..5499).to_a.shuffle.join(' ')");
push_swap_test.sh:3838:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3839:if [ $N -lt 5500 ]; then
push_swap_test.sh:3841:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:3843:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:3845:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:3847:elif [ $N -gt 11500 ]; then
push_swap_test.sh:3857:ARG=$(ruby -e "puts (50000..50499).to_a.shuffle.join(' ')");
push_swap_test.sh:3858:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3859:if [ $N -lt 5500 ]; then
push_swap_test.sh:3861:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:3863:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:3865:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:3867:elif [ $N -gt 11500 ]; then
push_swap_test.sh:3877:ARG=$(ruby -e "puts (500000..500499).to_a.shuffle.join(' ')");
push_swap_test.sh:3878:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3879:if [ $N -lt 5500 ]; then
push_swap_test.sh:3881:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:3883:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:3885:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:3887:elif [ $N -gt 11500 ]; then
push_swap_test.sh:3897:ARG=$(ruby -e "puts (5000000..5000499).to_a.shuffle.join(' ')");
push_swap_test.sh:3898:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3899:if [ $N -lt 5500 ]; then
push_swap_test.sh:3901:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:3903:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:3905:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:3907:elif [ $N -gt 11500 ]; then
push_swap_test.sh:3917:ARG=$(ruby -e "puts (50000000..50000499).to_a.shuffle.join(' ')");
push_swap_test.sh:3918:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3919:if [ $N -lt 5500 ]; then
push_swap_test.sh:3921:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:3923:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:3925:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:3927:elif [ $N -gt 11500 ]; then
push_swap_test.sh:3937:ARG=$(ruby -e "puts (500000000..500000499).to_a.shuffle.join(' ')");
push_swap_test.sh:3938:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3939:if [ $N -lt 5500 ]; then
push_swap_test.sh:3941:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:3943:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:3945:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:3947:elif [ $N -gt 11500 ]; then
push_swap_test.sh:3957:ARG=$(ruby -e "puts (0..450).to_a.shuffle.join(' ')");
push_swap_test.sh:3958:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3959:if [ $N -lt 5500 ]; then
push_swap_test.sh:3961:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:3963:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:3965:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:3967:elif [ $N -gt 11500 ]; then
push_swap_test.sh:3977:ARG=$(ruby -e "puts (250..720).to_a.shuffle.join(' ')");
push_swap_test.sh:3978:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3979:if [ $N -lt 5500 ]; then
push_swap_test.sh:3981:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:3983:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:3985:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:3987:elif [ $N -gt 11500 ]; then
push_swap_test.sh:3997:ARG=$(ruby -e "puts (10000..10460).to_a.shuffle.join(' ')");
push_swap_test.sh:3998:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:3999:if [ $N -lt 5500 ]; then
push_swap_test.sh:4001:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:4003:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:4005:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:4007:elif [ $N -gt 11500 ]; then
push_swap_test.sh:4017:ARG=$(ruby -e "puts (100..250).to_a.shuffle.join(' ')");
push_swap_test.sh:4018:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:4019:if [ $N -lt 5500 ]; then
push_swap_test.sh:4021:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:4023:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:4025:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:4027:elif [ $N -gt 11500 ]; then
push_swap_test.sh:4037:ARG=$(ruby -e "puts (90000..90460).to_a.shuffle.join(' ')");
push_swap_test.sh:4038:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:4039:if [ $N -lt 5500 ]; then
push_swap_test.sh:4041:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:4043:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:4045:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:4047:elif [ $N -gt 11500 ]; then
push_swap_test.sh:4057:ARG=$(ruby -e "puts (-500..-9).to_a.shuffle.join(' ')");
push_swap_test.sh:4058:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:4059:if [ $N -lt 5500 ]; then
push_swap_test.sh:4061:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:4063:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:4065:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:4067:elif [ $N -gt 11500 ]; then
push_swap_test.sh:4077:ARG=$(ruby -e "puts (-50000..-49510).to_a.shuffle.join(' ')");
push_swap_test.sh:4078:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:4079:if [ $N -lt 5500 ]; then
push_swap_test.sh:4081:elif [ $N -gt 5500 ] && [ $N -lt 7000 ]; then
push_swap_test.sh:4083:elif [ $N -gt 7000 ] && [ $N -lt 8500 ]; then
push_swap_test.sh:4085:elif [ $N -gt 8500 ] && [ $N -lt 10000 ]; then
push_swap_test.sh:4087:elif [ $N -gt 11500 ]; then
push_swap_test.sh:4097:printf ${BLUE}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:4099:printf ${BLUE}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:4115:while [ $cont2 -lt 501 ]
push_swap_test.sh:4118:while [ $cont -lt 6 ]
push_swap_test.sh:4120:ARG=$(ruby -e "puts (00..($cont2)).to_a.shuffle.join(' ')");
push_swap_test.sh:4121:N=$(./push_swap $ARG | wc -l)
push_swap_test.sh:4127:	((cont2--))
push_swap_test.sh:4135:if [ $cont -eq 5 ]; then
push_swap_test.sh:4137:R=$(leaks -atExit -- ./push_swap $ARG > /dev/null && echo $?)
push_swap_test.sh:4154:((cont3--))
push_swap_test.sh:4176:if [ -f "$FILE" ]; then
push_swap_test.sh:4177:	echo -n
push_swap_test.sh:4183:printf ${MAGENTA}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:4185:printf ${MAGENTA}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:4187:printf ${MAGENTA}"\n-------------------------------------------------------------\n"${DEF_COLOR};
push_swap_test.sh:4189:printf ${MAGENTA}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:4192:if [ -s "$FICHERO" ];then
push_swap_test.sh:4193:while IFS= read -r line
push_swap_test.sh:4208:if [ -s "$FICHERO" ];then
push_swap_test.sh:4209:while IFS= read -r line
push_swap_test.sh:4224:if [ -s "$FICHERO" ];then
push_swap_test.sh:4225:while IFS= read -r line
push_swap_test.sh:4240:if [ -s "$FICHERO" ];then
push_swap_test.sh:4241:while IFS= read -r line
push_swap_test.sh:4255:if [ -s "$FICHERO" ];then
push_swap_test.sh:4256:while IFS= read -r line
push_swap_test.sh:4269:./checker "111-1 2 -3" 2> test_check.txt > /dev/null
push_swap_test.sh:4270:if [ -s "$FICHERO" ];then
push_swap_test.sh:4271:while IFS= read -r line
push_swap_test.sh:4284:./checker "-3 -2 -2" 2> test_check.txt > /dev/null
push_swap_test.sh:4285:if [ -s "$FICHERO" ];then
push_swap_test.sh:4286:while IFS= read -r line
push_swap_test.sh:4300:if [ -s "$FICHERO" ];then
push_swap_test.sh:4301:while IFS= read -r line
push_swap_test.sh:4314:./checker "-2147483649" 2> test_check.txt > /dev/null
push_swap_test.sh:4315:if [ -s "$FICHERO" ];then
push_swap_test.sh:4316:while IFS= read -r line
push_swap_test.sh:4329:./checker "-2147483650" 2> test_check.txt > /dev/null
push_swap_test.sh:4330:if [ -s "$FICHERO" ];then
push_swap_test.sh:4331:while IFS= read -r line
push_swap_test.sh:4345:if [ -s "$FICHERO" ];then
push_swap_test.sh:4346:while IFS= read -r line
push_swap_test.sh:4360:if [ -s "$FICHERO" ];then
push_swap_test.sh:4361:while IFS= read -r line
push_swap_test.sh:4374:./checker "10 -1 -2 -3 -4 -5 -6 90 99 10" 2> test_check.txt > /dev/null
push_swap_test.sh:4375:if [ -s "$FICHERO" ];then
push_swap_test.sh:4376:while IFS= read -r line
push_swap_test.sh:4389:./checker "1 +1 -1" 2> test_check.txt > /dev/null
push_swap_test.sh:4390:if [ -s "$FICHERO" ];then
push_swap_test.sh:4391:while IFS= read -r line
push_swap_test.sh:4404:./checker "3333-3333 1 4" 2> test_check.txt > /dev/null
push_swap_test.sh:4405:if [ -s "$FICHERO" ];then
push_swap_test.sh:4406:while IFS= read -r line
push_swap_test.sh:4419:./checker "111a111 -4 3" 2> test_check.txt > /dev/null
push_swap_test.sh:4420:if [ -s "$FICHERO" ];then
push_swap_test.sh:4421:while IFS= read -r line
push_swap_test.sh:4434:./checker "111111 "-4 3"" 2> test_check.txt > /dev/null
push_swap_test.sh:4435:if [ -s "$FICHERO" ];then
push_swap_test.sh:4436:while IFS= read -r line
push_swap_test.sh:4450:if [ -s "$FICHERO" ];then
push_swap_test.sh:4451:while IFS= read -r line
push_swap_test.sh:4465:if [ -s "$FICHERO" ];then
push_swap_test.sh:4466:while IFS= read -r line
push_swap_test.sh:4480:if [ -s "$FICHERO" ];then
push_swap_test.sh:4481:while IFS= read -r line
push_swap_test.sh:4495:if [ -s "$FICHERO" ];then
push_swap_test.sh:4496:while IFS= read -r line
push_swap_test.sh:4510:if [ -s "$FICHERO" ];then
push_swap_test.sh:4511:while IFS= read -r line
push_swap_test.sh:4525:if [ -s "$FICHERO" ];then
push_swap_test.sh:4526:while IFS= read -r line
push_swap_test.sh:4539:./checker "42 " -42" " 2> test_check.txt > /dev/null
push_swap_test.sh:4540:if [ -s "$FICHERO" ];then
push_swap_test.sh:4541:while IFS= read -r line
push_swap_test.sh:4554:./checker "4222-4222" 2> test_check.txt > /dev/null
push_swap_test.sh:4555:if [ -s "$FICHERO" ];then
push_swap_test.sh:4556:while IFS= read -r line
push_swap_test.sh:4570:if [ -s "$FICHERO" ];then
push_swap_test.sh:4571:while IFS= read -r line
push_swap_test.sh:4584:./checker "-99999999999999999999999999" 2> test_check.txt > /dev/null
push_swap_test.sh:4585:if [ -s "$FICHERO" ];then
push_swap_test.sh:4586:while IFS= read -r line
push_swap_test.sh:4599:./checker "0 -0 1 -1" 2> test_check.txt > /dev/null
push_swap_test.sh:4600:if [ -s "$FICHERO" ];then
push_swap_test.sh:4601:while IFS= read -r line
push_swap_test.sh:4614:./checker "0 +0 1 -1" 2> test_check.txt > /dev/null
push_swap_test.sh:4615:if [ -s "$FICHERO" ];then
push_swap_test.sh:4616:while IFS= read -r line
push_swap_test.sh:4629:./checker "111+111 -4 3" 2> test_check.txt > /dev/null
push_swap_test.sh:4630:if [ -s "$FICHERO" ];then
push_swap_test.sh:4631:while IFS= read -r line
push_swap_test.sh:4644:rm -rf test_check.txt
push_swap_test.sh:4646:./checker "-" 2> test_check.txt > /dev/null
push_swap_test.sh:4647:if [ -s "$FICHERO" ];then
push_swap_test.sh:4648:while IFS= read -r line
push_swap_test.sh:4661:rm -rf test_check.txt
push_swap_test.sh:4664:if [ -s "$FICHERO" ];then
push_swap_test.sh:4665:while IFS= read -r line
push_swap_test.sh:4678:./checker "--123 1 321" 2> test_check.txt > /dev/null
push_swap_test.sh:4679:if [ -s "$FICHERO" ];then
push_swap_test.sh:4680:while IFS= read -r line
push_swap_test.sh:4693:rm -rf test_check.txt
push_swap_test.sh:4696:if [ -s "$FICHERO" ];then
push_swap_test.sh:4697:while IFS= read -r line
push_swap_test.sh:4710:rm -rf test_check.txt
push_swap_test.sh:4712:./checker "09 9 3 -1" 2> test_check.txt > /dev/null
push_swap_test.sh:4713:if [ -s "$FICHERO" ];then
push_swap_test.sh:4714:while IFS= read -r line
push_swap_test.sh:4727:rm -rf test_check.txt
push_swap_test.sh:4730:if [ -s "$FICHERO" ];then
push_swap_test.sh:4731:while IFS= read -r line
push_swap_test.sh:4744:rm -rf test_check.txt
push_swap_test.sh:4746:./checker "-5 00000003 003 9 1" 2> test_check.txt > /dev/null
push_swap_test.sh:4747:if [ -s "$FICHERO" ];then
push_swap_test.sh:4748:while IFS= read -r line
push_swap_test.sh:4761:rm -rf test_check.txt
push_swap_test.sh:4763:echo -e "saa" | ./checker "1" 2> test_check.txt > /dev/null
push_swap_test.sh:4764:if [ -s "$FICHERO" ];then
push_swap_test.sh:4765:while IFS= read -r line
push_swap_test.sh:4778:rm -rf test_check.txt
push_swap_test.sh:4780:echo -e "sa\n" | ./checker "1" 2> test_check.txt > /dev/null
push_swap_test.sh:4781:if [ -s "$FICHERO" ];then
push_swap_test.sh:4782:while IFS= read -r line
push_swap_test.sh:4795:rm -rf test_check.txt
push_swap_test.sh:4797:echo -e "SA" | ./checker "1" 2> test_check.txt > /dev/null
push_swap_test.sh:4798:if [ -s "$FICHERO" ];then
push_swap_test.sh:4799:while IFS= read -r line
push_swap_test.sh:4812:rm -rf test_check.txt
push_swap_test.sh:4814:echo -e "sa " | ./checker "1" 2> test_check.txt > /dev/null
push_swap_test.sh:4815:if [ -s "$FICHERO" ];then
push_swap_test.sh:4816:while IFS= read -r line
push_swap_test.sh:4829:rm -rf test_check.txt
push_swap_test.sh:4831:echo -e "" | ./checker "1" 2> test_check.txt > /dev/null
push_swap_test.sh:4832:if [ -s "$FICHERO" ];then
push_swap_test.sh:4833:while IFS= read -r line
push_swap_test.sh:4846:rm -rf test_check.txt
push_swap_test.sh:4850:printf ${MAGENTA}"\n-------------------------------------------------------------\n"${DEF_COLOR};
push_swap_test.sh:4852:printf ${MAGENTA}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:4856:S=$(echo -e "sa" | ./checker_Mac $ARG)
push_swap_test.sh:4857:R=$(echo -e "sa" | ./checker $ARG)
push_swap_test.sh:4866:S=$(echo -e "pb\npb\nsb\npa\npa" | ./checker_Mac $ARG)
push_swap_test.sh:4867:R=$(echo -e "pb\npb\nsb\npa\npa" | ./checker $ARG)
push_swap_test.sh:4876:S=$(echo -e "pb\npb\nss\npa\npa" | ./checker_Mac $ARG)
push_swap_test.sh:4877:R=$(echo -e "pb\npb\nss\npa\npa" | ./checker $ARG)
push_swap_test.sh:4878:L=$(echo -e "pb\npb\nss\npa\npa" | leaks -atExit -- ./checker $ARG > /dev/null && echo $?)
push_swap_test.sh:4892:S=$(echo -e "ra" | ./checker_Mac $ARG)
push_swap_test.sh:4893:R=$(echo -e "ra" | ./checker $ARG)
push_swap_test.sh:4902:S=$(echo -e "ra\nra" | ./checker_Mac $ARG)
push_swap_test.sh:4903:R=$(echo -e "ra\nra" | ./checker $ARG)
push_swap_test.sh:4912:S=$(echo -e "sa\nsb\nss\npa\npb\npa\npb\nsb\npa\nra\nrb\nrr\nrra\nrrb\nrrr" | ./checker_Mac $ARG)
push_swap_test.sh:4913:R=$(echo -e "sa\nsb\nss\npa\npb\npa\npb\nsb\npa\nra\nrb\nrr\nrra\nrrb\nrrr" | ./checker $ARG)
push_swap_test.sh:4914:L=$(echo -e "sa\nsb\nss\npa\npb\npa\npb\nsb\npa\nra\nrb\nrr\nrra\nrrb\nrrr" | leaks -atExit -- ./checker $ARG > /dev/null && echo $?)
push_swap_test.sh:4926:printf ${MAGENTA}"\n-------------------------------------------------------------\n"${DEF_COLOR};
push_swap_test.sh:4928:printf ${MAGENTA}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:5021:printf ${MAGENTA}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:5023:printf ${MAGENTA}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:5116:rm -rf 0
push_swap_test.sh:5117:rm -rf test_check.txt
push_swap_test.sh:5119:printf ${MAGENTA}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:5121:printf ${MAGENTA}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:5123:echo BONUS-Multiple size '<'= 100 >> traces.txt
push_swap_test.sh:5133:while [ $cont -lt $val ]
push_swap_test.sh:5135:ARG=$(ruby -e "puts (00..99).to_a.shuffle.join(' ')");
push_swap_test.sh:5151:((val--))
push_swap_test.sh:5162:rm -rf 0
push_swap_test.sh:5163:rm -rf test_check.txt
push_swap_test.sh:5165:printf ${MAGENTA}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:5167:printf ${MAGENTA}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:5169:echo BONUS-Multiple size '<'= 500 >> traces.txt
push_swap_test.sh:5180:while [ $cont -lt $val ]
push_swap_test.sh:5182:ARG=$(ruby -e "puts (00..499).to_a.shuffle.join(' ')");
push_swap_test.sh:5198:((val--))
push_swap_test.sh:5209:rm -rf 0
push_swap_test.sh:5210:rm -rf test_check.txt
push_swap_test.sh:5212:printf ${MAGENTA}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:5214:printf ${MAGENTA}"\n-------------------------------------------------------------\n\n"${DEF_COLOR};
push_swap_test.sh:5216:echo BONUS-All size test >> traces.txt
push_swap_test.sh:5223:while [ $cont -lt $val ] && [ $var -lt 500 ]
push_swap_test.sh:5225:ARG=$(ruby -e "puts (00..$var).to_a.shuffle.join(' ')");
push_swap_test.sh:5237:R=$(./push_swap $ARG | leaks -atExit -- ./checker $ARG > /dev/null && echo $?)
push_swap_test.sh:5247:while [ $var -lt 1000 ]
push_swap_test.sh:5249:ARG=$(ruby -e "puts (00..$var).to_a.shuffle.join(' ')");
push_swap_test.sh:5261:R=$(./push_swap $ARG | leaks -atExit -- ./checker $ARG > /dev/null && echo $?)
push_swap_test.sh:5271:((cont--))
push_swap_test.sh:5276:((val--))
push_swap_test.sh:5289:rm -rf 0
push_swap_test.sh:5290:rm -rf test_check.txt
srcs/apply_rotate.c:25:		i_rrb = ft_lstsize_m(*list_b) - cal_insert_index(*list_b, nbr);
srcs/apply_rotate.c:27:		i_rra = ft_lstsize_m(*list_a) - find_index(*list_a, nbr);
srcs/apply_rotate.c:30:		i_rra = i_rra - i_rrb;
srcs/apply_rotate.c:36:		i_rrb = i_rrb - i_rra;
srcs/apply_rotate.c:43:		i_rrr--;
srcs/apply_rotate.c:48:		i_rra--;
srcs/apply_rotate.c:53:		i_rrb--;
srcs/apply_rotate.c:68:		i_ra = i_ra - i_rb;
srcs/apply_rotate.c:74:		i_rb = i_rb - i_ra;
srcs/apply_rotate.c:81:		i_rr--;
srcs/apply_rotate.c:86:		i_ra--;
srcs/apply_rotate.c:91:		i_rb--;
srcs/apply_rotate.c:103:		i_rrb = ft_lstsize_m(*list_b) - cal_insert_index(*list_b, nbr);
srcs/apply_rotate.c:108:		i_ra--;
srcs/apply_rotate.c:113:		i_rrb--;
srcs/apply_rotate.c:125:		i_rra = ft_lstsize_m(*list_a) - find_index(*list_a, nbr);
srcs/apply_rotate.c:130:		i_rra--;
srcs/apply_rotate.c:135:		i_rb--;
srcs/cal_push.c:25:		result.move = -1;
srcs/cal_push.c:32:		i = cal_rrr(list_a, list_b, list_a->n);
srcs/cal_push.c:34:		if (i > cal_rr(list_a, list_b, temp->n))
srcs/cal_push.c:36:			i = cal_rr(list_a, list_b, temp->n);
srcs/cal_push.c:39:		if (i > cal_rarrb(list_a, list_b, temp->n))
srcs/cal_push.c:41:			i = cal_rarrb(list_a, list_b, temp->n);
srcs/cal_push.c:44:		if (i > cal_rrarb(list_a, list_b, temp->n))
srcs/cal_push.c:46:			i = cal_rrarb(list_a, list_b, temp->n);
srcs/cal_push.c:51:			result.min = temp->n;
srcs/cal_push.c:55:		temp = temp->next;
srcs/cal_rotate.c:21:		i = ft_lstsize_m(list_b) - cal_insert_index(list_b, nbr);
srcs/cal_rotate.c:23:		&& (i < (ft_lstsize_m(list_a) - find_index(list_a, nbr))))
srcs/cal_rotate.c:24:		i = ft_lstsize_m(list_a) - find_index(list_a, nbr);
srcs/cal_rotate.c:44:		i = ft_lstsize_m(list_b) - cal_insert_index(list_b, nbr);
srcs/cal_rotate.c:55:		i = ft_lstsize_m(list_a) - find_index(list_a, nbr);
srcs/check_args.c:19:	nbr = list->n;
srcs/check_args.c:22:	while (list->next)
srcs/check_args.c:24:		if (nbr > (list->next)->n)
srcs/check_args.c:26:		nbr = (list->next)->n;
srcs/check_args.c:27:		list = list->next;
srcs/check_args.c:38:		temp = list->next;
srcs/check_args.c:41:			if (list->n == temp->n)
srcs/check_args.c:43:			temp = temp->next;
srcs/check_args.c:45:		list = list->next;
srcs/check_args.c:64:			if (!(argv[i][j] == '+' || argv[i][j] == '-' || argv[i][j] == ' '
srcs/check_args.c:80:			if (argv[i][j] == '+' || argv[i][j] == '-')
srcs/ft_atoi_m.c:24:	if (str[i] == '-' || str[i] == '+')
srcs/ft_atoi_m.c:26:		if (str[i] == '-')
srcs/ft_atoi_m.c:27:			sign = sign * -1;
srcs/ft_atoi_m.c:34:		a = a * 10 + (str[i] - '0');
srcs/ft_sort.c:17:	if (ft_min(*list) == (*list)->n)
srcs/ft_sort.c:22:	else if (ft_max(*list) == (*list)->n)
srcs/ft_sort.c:95:			if (i < ft_lstsize_m(list_b) - i)
srcs/ft_sort.c:96:				while ((list_b)->n != ft_max(list_b))
srcs/ft_sort.c:99:				while ((list_b)->n != ft_max(list_b))
srcs/ft_sort.c:101:			min_a = (*list_a)->n;
srcs/ft_sort.c:102:			mid_a = ((*list_a)->next)->n;
srcs/ft_sort.c:103:			max_a = (((*list_a)->next)->next)->n;
srcs/ft_sort.c:104:			while (list_b && list_b->n > max_a)
srcs/ft_sort.c:106:			while ((*list_a)->n != max_a)
srcs/ft_sort.c:108:			while (list_b && list_b->n > mid_a)
srcs/ft_sort.c:110:			while ((*list_a)->n != mid_a)
srcs/ft_sort.c:112:			while (list_b && list_b->n > min_a)
srcs/ft_sort.c:114:			while ((*list_a)->n != min_a)
srcs/ft_sort.c:116:			while (list_b && list_b->n < min_a)
srcs/ft_sort_utils.c:27:	min = temp->n;
srcs/ft_sort_utils.c:30:		if (temp->n < min)
srcs/ft_sort_utils.c:31:			min = temp->n;
srcs/ft_sort_utils.c:32:		temp = temp->next;
srcs/ft_sort_utils.c:43:	max = temp->n;
srcs/ft_sort_utils.c:46:		if (temp->n > max)
srcs/ft_sort_utils.c:47:			max = temp->n;
srcs/ft_sort_utils.c:48:		temp = temp->next;
srcs/ft_sort_utils.c:60:	while (temp && temp->n != nbr)
srcs/ft_sort_utils.c:63:		temp = temp->next;
srcs/ft_sort_utils.c:78:	else if (nbr > list_b->n && nbr < ft_lstlast_m(list_b)->n)
srcs/ft_sort_utils.c:82:		temp = list_b->next;
srcs/ft_sort_utils.c:83:		while (list_b && (list_b->n < nbr || (temp && temp->n > nbr)))
srcs/ft_sort_utils.c:85:			list_b = list_b->next;
srcs/ft_sort_utils.c:87:				temp = list_b->next;
srcs/list_utils.c:19:	while (lst->next)
srcs/list_utils.c:20:		lst = lst->next;
srcs/list_utils.c:31:	list->n = content;
srcs/list_utils.c:32:	list->next = NULL;
srcs/list_utils.c:43:		lst = lst->next;
srcs/list_utils.c:59:		(ft_lstlast_m(*list))->next = new;
srcs/parse_args.c:35:		temp = (*list)->next;
srcs/parse_args.c:36:		(*list)->n = 0;
srcs/rules_a.c:19:	if (!*list_a || !((*list_a)->next))
srcs/rules_a.c:22:	*list_a = (*list_a)->next;
srcs/rules_a.c:23:	temp->next = (*list_a)->next;
srcs/rules_a.c:24:	(*list_a)->next = temp;
srcs/rules_a.c:37:	*list_b = (*list_b)->next;
srcs/rules_a.c:38:	(*list_a)->next = temp;
srcs/rules_a.c:46:	if (!*list_a || !((*list_a)->next))
srcs/rules_a.c:50:	(*list_a)->next = temp;
srcs/rules_a.c:51:	*list_a = temp->next;
srcs/rules_a.c:52:	temp->next = NULL;
srcs/rules_a.c:62:	if (!*list_a || !((*list_a)->next))
srcs/rules_a.c:66:	while ((*list_a)->next)
srcs/rules_a.c:68:		*list_a = (*list_a)->next;
srcs/rules_a.c:71:	(*list_a)->next = temp;
srcs/rules_a.c:74:		temp = temp->next;
srcs/rules_a.c:75:		j--;
srcs/rules_a.c:77:	temp->next = NULL;
srcs/rules_b.c:19:	if (!*list_b || !((*list_b)->next))
srcs/rules_b.c:22:	*list_b = (*list_b)->next;
srcs/rules_b.c:23:	temp->next = (*list_b)->next;
srcs/rules_b.c:24:	(*list_b)->next = temp;
srcs/rules_b.c:37:	*list_a = (*list_a)->next;
srcs/rules_b.c:38:	(*list_b)->next = temp;
srcs/rules_b.c:46:	if (!*list_b || !((*list_b)->next))
srcs/rules_b.c:50:	(*list_b)->next = temp;
srcs/rules_b.c:51:	*list_b = temp->next;
srcs/rules_b.c:52:	temp->next = NULL;
srcs/rules_b.c:62:	if (!*list_b || !((*list_b)->next))
srcs/rules_b.c:66:	while ((*list_b)->next)
srcs/rules_b.c:68:		*list_b = (*list_b)->next;
srcs/rules_b.c:71:	(*list_b)->next = temp;
srcs/rules_b.c:74:		temp = temp->next;
srcs/rules_b.c:75:		j--;
srcs/rules_b.c:77:	temp->next = NULL;
srcs/rules_both.c:17:	if (!*list_a || !((*list_a)->next) || !*list_b || !((*list_b)->next))
srcs/rules_both.c:26:	if (!*list_a || !((*list_a)->next) || !*list_b || !((*list_b)->next))
srcs/rules_both.c:35:	if (!*list_a || !((*list_a)->next) || !*list_b || !((*list_b)->next))
