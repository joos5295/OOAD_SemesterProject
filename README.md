# OOAD_SemesterProject
## Joel Courtney, Scott Weygandt, and John Osborne

### Building
You must have the ncurses library installed to build this project. It is typically pre-installed on unix systems.

After cloning this repo, run:

	make
	cd bin

### Running
Then run the game with: "./dungeon".
Follow the directions in game.

### Credits:
We did not write:

	1. the ncurses library (https://www.gnu.org/software/ncurses/ncurses.html)
	
	2. the ascii art for the knight, ogre, and phoenix files (http://ascii.co.uk/art/ogre, https://www.asciiart.eu/)
	
	3. the code template used for singleton classes (https://stackoverflow.com/questions/1008019/c-singleton-design-pattern)

### Patterns:
	1. Enemies, GameStates, and Items are constructed by factories
	
	2. The Display and the Game classes are facades.
	
	3. The Game class uses the state pattern.
	
	4. The terrain cells and glyphs that compose the levels and ascii arts are flyweights.
	
	5. GlyphMap, Terrain, Dipslay, Input, and Debug are all singleton classes. 
