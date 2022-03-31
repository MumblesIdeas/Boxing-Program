# Read Me
I guess the thing I need to figure out is how to actually implement what I'm thinking into this program.
What I want to do is set up an actual device/app on screen that helps us score rounds in boxing.
There will be a boxing mode and an MMA mode. These two sports have different scoring criteria.
For boxing...
Round can go anywhere from 1 to 12 rouds.
Bouts range from 4, 6, 8, 10, and 12 rounds. I might need to double check this one out.

Boxing...
It is scored on a 10 - 9 round basis.
Meaning. The winner of the round is awarded 10 points. The loser is awarded 9.
However, if there is a knockdown. The person who got the knocked-down loses a point.
Anoter way you can lose a point in boxing is by referee takes away a point.

Note...you can't earn points. You can only lose points.
Boxing is fought between two boxers. Boxer A is in the red corner and Boxer B is in the blue corner.

Questions to ask..
1. Who won the round>
2. Was there a knockdown?
3. Was there a point taken away?

Things to consider...
A. What happens if theres a knockout? How am I going to handle this?
B.

Psudocode.
Who won the round?
If winner of round is (Boxer A or Boxer B) then
    add 10 points to Total Score of Round Winner
    add 9 points to Total Score of Loser of Round.

I have to do this anywhere from [1,12].
Once this happens...
I need to return the the total score of Boxer A
and
I need to return teh totral score of Boxer B
and then compare the two to give us the winner of a fight.
