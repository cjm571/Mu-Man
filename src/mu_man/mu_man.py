# Important Things:
#
# A 4-tuple consisting of

# 1. The map;
# 2. the status of Lambda-Man;
# 3. the status of all the ghosts;
# 4. the status of fruit at the fruit location.
# 
# The map:
# 0 = Wall
# 1 = Empty
# 2 = Pill
# 3 = Power pill
# 4 = fruit
# 5 = mu-man starting pos
# 6 = ghost staring pos
#
#The Lambda-Man status is a 5-tuple consisting of:
#  1. Lambda-Man's vitality;
#  2. Lambda-Man's current location, as an (x,y) pair;
#  3. Lambda-Man's current direction;
#  4. Lambda-Man's remaining number of lives;
#  5. Lambda-Man's current score.
#
# Lambda-Man's vitality is a number which is a countdown to the expiry of
# the active power pill, if any. It is 0 when no power pill is active.
#  * 0: standard mode;
#  * n > 0: power pill mode: the number of game ticks remaining while the
#           power pill will will be active
#
# The status for each ghost is a 3-tuple consisting of
#  1. the ghost's vitality
#  2. the ghost's current location, as an (x,y) pair
#  3. the ghost's current direction
#
# The Ghosts' vitality is an enumeration:
#  * 0: standard;
#  * 1: fright mode;
#  * 2: invisible.
#
# The Ghosts' and Lambda-Man's direction is an enumeration:
#  * 0: up;
#  * 1: right;
#  * 2: down;
#  * 3: left.
#
# The status of the fruit is a number which is a countdown to the expiry of
# the current fruit, if any.
#  * 0: no fruit present;
#  * n > 0: fruit present: the number of game ticks remaining while the
#           fruit will will be present.

class MuMan:

    def run(state, undocumented, self):
        mu_world, mu_man_state, ghosts, fruit = state

        mu_man_vit, mu_man_pos, mu_man_dir, mu_man_lives, mu_man_score = mu_man_state

        # we have 4 possible moves, so see which are valid (aren't walls) and evaluate each one
        #
        
        

    def calc_hn(state, move, self)
        


if __name__ == "__main__":

