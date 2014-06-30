import sys

t = int(raw_input())
while(t):
	t = t - 1
	x,n = map(int,sys.stdin.readline().split())
	items = x
	cards = x
	while(cards):
		incr = cards / n
		items = items + incr
		cards = cards % n + incr
		if(cards < n):
			break
	print items
	print "\n"
	