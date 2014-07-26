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
# The Lambda-Man status is a 5-tuple consisting of:
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

    def run(self, state, undocumented):
        mu_world, mu_man_state, ghosts, fruit = state

        mu_man_vit, mu_man_pos, mu_man_dir, mu_man_lives, mu_man_score = mu_man_state

        closest_dist = 2,147,483,647 # max signed int

        # we have 4 possible moves, so see which are valid (aren't walls) and evaluate each one
        # case: up
        x, y = mu_man_pos
        up_y = y - 1

        # check if it's a wall
        y_row = mu_world[up_y]
        if y_row[x] != 0:
            closest_dist = self.calc_hn(state, 0)
            move = 0

        # case: down
        down_y = y +1
        # check if it's a wall
        y_row = mu_world[down_y]
        if y_row[x] != 0:
            new_dist = self.calc_hn(state, 2)
            if closest_dist > new_dist:
                closest_dist = new_dist
                move = 2

        # case: right
        right_x = x +1
        # check if it's a wall
        y_row = mu_world[y]
        if y_row[right_x] != 0:
            new_dist = self.calc_hn(state, 1)
            if closest_dist > new_dist:
                closest_dist = new_dist
                move = 1

        # case: right
        left_x = x -1
        # check if it's a wall
        y_row = mu_world[y]
        if y_row[left_x] != 0:
            new_dist = self.calc_hn(state, 3)
            if closest_dist > new_dist:
                closest_dist = new_dist
                move = 3

        return (state, move)


    def calc_hn(self, state, move):
        mu_world, mu_man_state, ghosts, fruit = state

        # current heuristic: move towards closest pill
        closest_manh = 2,147,483,647 # max signed int
        closest_x = 0
        closest_y = 0

        for y in range(0, len(mu_world)):
            row = mu_world[y]
            for x in range(0, len(row)):
                if row[x] in [2,3,4]:
                    # we have something we want to move towards
                    manh_dist = self.calc_manh_distance(x, y, state)
                    
                    if closest_manh > manh_dist:
                        closest_manh = manh_dist
                        closest_x = x
                        closest_y = y

        return (closest_x, closest_y, closest_manh)


    def calc_manh_distance(self, x, y, state):
        mu_world, mu_man_state, ghosts, fruit = state
        mu_man_vit, mu_man_pos, mu_man_dir, mu_man_lives, mu_man_score = mu_man_state

        mu_x, mu_y = mu_man_pos

        return abs(x - mu_x) + abs(y - mu_y)
