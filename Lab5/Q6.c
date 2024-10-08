//Reason
//We are given the following expression for x:
x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30;
//Since 5 > 8 is **false**, this gets reduced to:
x = 1 != 2 < 5 ? 20 : 30;
//The condition 2 < 5 runs first, which is true.
x = 1 != 1 ? 20 : 30;
//Since 1 != 1 is **false**, this gets reduced to:
x = 30;
//Hence the value of x becomes 30, and the output is 30.
