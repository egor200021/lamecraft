#ifndef WorldGenerator_H
#define WorldGenerator_H

class CraftWorld;

class WorldGenerator
{
	public:
		void initRandompMap(int worldSize,int chunkSize, CraftWorld *world);
		void initRandompMap(int worldSize,int chunkSize, CraftWorld *world, int terrainType,bool makeFlat,bool makeTrees,bool makeWater,bool makeCaves);
		void initTrees(int WORLD_SIZE, int treeChoose, CraftWorld *world);

};

#endif
