#include <stdio.h>
#include <stdlib.h>

typedef struct seat {
    int opp_seat;
    char *type;
} Seat;

char *getType(int seatNo) {
	int typeNo = seatNo % 12;
	switch(typeNo) {
		case 0:
		case 1:
		case 6:
		case 7:
			return "WS";
		case 2:
		case 11:
		case 5:
		case 8:
			return "MS";
		case 3:
		case 10:
		case 4:
		case 9:
			return "AS";
	}
}

int getOppSeat(int seatNo) {
	int oppSeatFactor = seatNo % 12;

	switch(oppSeatFactor) {
		case 1:
			return seatNo + 11;
		case 2:
			return seatNo + 9;
		case 3:
			return seatNo + 7;
		case 4:
			return seatNo + 5;
		case 5:
			return seatNo + 3;
		case 6:
			return seatNo + 1;
		case 7:
			return seatNo - 1;
		case 8:
			return seatNo - 3;
		case 9:
			return seatNo - 5;
		case 10:
			return seatNo - 7;
		case 11:
			return seatNo - 9;
		case 0:
			return seatNo - 11;

	}
}

void resolveSeats(int *N,int T,Seat **result) {
	int i;
	Seat *temp = (Seat *)malloc(sizeof(Seat)*T);
	for(i=0;i<T;i++) {
		int currentSeatNo = N[i];

		temp[i].type = getType(currentSeatNo);
		temp[i].opp_seat = getOppSeat(currentSeatNo);
	}

	*result = temp;
}

int main()
{
    int T,*N,i;
    Seat *result;

    scanf("%d",&T);

    N = (int *)malloc(sizeof(int)*T);

    for(i=0;i<T;i++)
        scanf("%d",&N[i]);

    resolveSeats(N,T,&result);

    for(i=0;i<T;i++) {
	printf("%d %s\n",result[i].opp_seat,result[i].type);
    }

    return 0;
}

