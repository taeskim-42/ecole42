# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    push_swap_vadvanced.sh                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/20 11:09:40 by jseo              #+#    #+#              #
#    Updated: 2021/08/31 10:43:57 by pac-man          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

echo -e "\033[1;33mAverage and Result of 500 Random Values Testing\033[0;0m\n"
SUM="0"
STAT="OK"
TEST="100"
for ((i = 0; i < $TEST; ++i))
do
	echo -e "\033[1;30mProcessing $(( i + 1 ))...\033[0;0m\x1b[1A\x1b[M"
	ARG=$(ruby -e "puts (1..500).to_a.shuffle.join(' ')")
	CNT=$(exec ./push_swap $ARG | wc -l)
	RET=$(exec ./push_swap $ARG | exec ./checker $ARG)
	SUM=$(echo $(( SUM + CNT)))
	if [ "$RET" == "KO" ]; then
		STAT="KO"
	fi
done
SUM=$(echo $(( SUM / TEST)))
if [ "$STAT" == "OK" ]; then
	echo -e "RET : [ \033[0;32mOK\033[0;0m ] (avg \033[0;32m$SUM\033[0;0m instructions)\n"
else
	echo -e "RET : [ \033[0;31mKO\033[0;0m ] (avg \033[0;31m$SUM\033[0;0m instructions)\n"
fi
SUM=""
STAT=""
TEST=""
ARG=""
CNT=""
RET=""
