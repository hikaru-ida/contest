s=1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071727374757677787980818283848586878889909192939495969798991
s*=gets.to_i
printf "%d.%0190d\n", (s/10**190).to_i, s%10**190
