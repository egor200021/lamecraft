#include "Blocks.h"

#include "CraftWorld2.h"

std::vector<BaseBlock*> blockTypes;

GrassBlock::GrassBlock():BaseBlock()
{
	textureRow = 0;

	upPlane = 0;
	downPlane = 2;
	sidePlane = 3;
	editable = true;
	transparent = false;
	soundType = 0;
}

block_t GrassBlock::getID(){ return 1;}

DirtBlock::DirtBlock():BaseBlock()
{
	textureRow = 0;

	upPlane = 2;
	downPlane = 2;
	sidePlane = 2;
	editable = true;
	transparent = false;
	soundType = 1;
}

block_t DirtBlock::getID(){ return 2;}


RockBlock::RockBlock():BaseBlock()
{
	textureRow = 1;

	upPlane = 0;
	downPlane = 0;
	sidePlane = 0;
	editable = true;
	transparent = false;
	soundType = 2;
}

block_t RockBlock::getID(){ return 3;}


WaterBlock::WaterBlock():BaseBlock()
{
	textureRow = 3;

	upPlane = 2;
	downPlane = 2;
	sidePlane = 2;
	editable = true;
	transparent = true;
	soundType = -1;
}

block_t WaterBlock::getID(){ return 4;}

GoldBlock::GoldBlock():BaseBlock()
{
	textureRow = 6;

	upPlane = 2;
	downPlane = 2;
	sidePlane = 2;
	editable = true;
	transparent = false;
	soundType = 2;
}

block_t GoldBlock::getID(){ return 5;}

LadderBlock::LadderBlock():BaseBlock()
{
	textureRow = 3;

	upPlane = 0;
	downPlane = 0;
	sidePlane = 0;
	editable = true;
	transparent = true;
	soundType = 3;
}
block_t LadderBlock::getID(){ return 6;}


SandBlock::SandBlock():BaseBlock()
{
	textureRow = 1;

	upPlane = 2;
	downPlane = 2;
	sidePlane = 2;
	editable = true;
	transparent = false;
	soundType = 1;
}
block_t SandBlock::getID(){ return 7;}


WoodBlock::WoodBlock():BaseBlock()
{
	textureRow = 2;

	upPlane = 1;
	downPlane = 1;
	sidePlane = 2;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t WoodBlock::getID(){ return 8;}

LeavesBlock::LeavesBlock():BaseBlock()
{
	textureRow = 2;

	upPlane = 3;
	downPlane = 3;
	sidePlane = 3;
	editable = true;
	transparent = true;
	soundType = 0;
}
block_t LeavesBlock::getID(){ return 9;}


TNTBlock::TNTBlock():BaseBlock()
{
	textureRow = 4;

	upPlane = 3;
	downPlane = 3;
	sidePlane = 3;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t TNTBlock::getID(){ return 10;}


BlackWoolBlock::BlackWoolBlock():BaseBlock()
{
	textureRow = 3;

	upPlane = 6;
	downPlane = 6;
	sidePlane = 6;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t BlackWoolBlock::getID(){ return 11;}


RedWoolBlock::RedWoolBlock():BaseBlock()
{
	textureRow = 1;

	upPlane = 4;
	downPlane = 4;
	sidePlane = 4;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t RedWoolBlock::getID(){ return 12;}


DarkGreyWoolBlock::DarkGreyWoolBlock():BaseBlock()
{
	textureRow = 4;

	upPlane = 5;
	downPlane = 5;
	sidePlane = 5;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t DarkGreyWoolBlock::getID(){ return 13;}



BrownWoolBlock::BrownWoolBlock():BaseBlock()
{
	textureRow = 3;

	upPlane = 4;
	downPlane = 4;
	sidePlane = 4;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t BrownWoolBlock::getID(){ return 14;}


LightBlackWoolBlock::LightBlackWoolBlock():BaseBlock()
{
	textureRow = 3;

	upPlane = 7;
	downPlane = 7;
	sidePlane = 7;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t LightBlackWoolBlock::getID(){ return 15;}



PinkWoolBlock::PinkWoolBlock():BaseBlock()
{
	textureRow = 1;

	upPlane = 5;
	downPlane = 5;
	sidePlane = 5;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t PinkWoolBlock::getID(){ return 16;}


LightGreenWoolBlock::LightGreenWoolBlock():BaseBlock()
{
	textureRow = 4;

	upPlane = 6;
	downPlane = 6;
	sidePlane = 6;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t LightGreenWoolBlock::getID(){ return 17;}

YellowWoolBlock::YellowWoolBlock():BaseBlock()
{
	textureRow = 3;

	upPlane = 5;
	downPlane = 5;
	sidePlane = 5;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t YellowWoolBlock::getID(){ return 18;}

BlueWoolBlock::BlueWoolBlock():BaseBlock()
{
	textureRow = 0;

	upPlane = 6;
	downPlane = 6;
	sidePlane = 6;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t BlueWoolBlock::getID(){ return 19;}

LightBlueWoolBlock::LightBlueWoolBlock():BaseBlock()
{
	textureRow = 0;

	upPlane = 7;
	downPlane = 7;
	sidePlane = 7;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t LightBlueWoolBlock::getID(){ return 20;}

FioletWoolBlock::FioletWoolBlock():BaseBlock()
{
	textureRow = 1;

	upPlane = 6;
	downPlane = 6;
	sidePlane = 6;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t FioletWoolBlock::getID(){ return 21;}

PastelWoolBlock::PastelWoolBlock():BaseBlock()
{
	textureRow = 2;

	upPlane = 6;
	downPlane = 6;
	sidePlane = 6;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t PastelWoolBlock::getID(){ return 22;}

LightFioletWoolBlock::LightFioletWoolBlock():BaseBlock()
{
	textureRow = 1;

	upPlane = 7;
	downPlane = 7;
	sidePlane = 7;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t LightFioletWoolBlock::getID(){ return 23;}

OrangeWoolBlock::OrangeWoolBlock():BaseBlock()
{
	textureRow = 2;

	upPlane = 7;
	downPlane = 7;
	sidePlane = 7;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t OrangeWoolBlock::getID(){ return 24;}

CactusBlock::CactusBlock():BaseBlock()
{
	textureRow = 5;

	upPlane = 0;
	downPlane = 2;
	sidePlane = 1;
	editable = true;
	transparent = true;
	soundType = 3;
}

bool CactusBlock::canStay(CraftWorld *world, int x, int y, int z)
{
    if(world->isSolid(x - 1, y, z))
    {
        return false;
    }
    if(world->isSolid(x + 1, y, z))
    {
        return false;
    }
    if(world->isSolid(x, y, z - 1))
    {
        return false;
    }
    if(world->isSolid(x, y, z + 1))
    {
        return false;
    }
	else
	{
		return world->GetBlock(x,y-1,z) == SandBlock::getID() || world->GetBlock(x,y-1,z) == CactusBlock::getID();
	}
}
	

block_t CactusBlock::getID(){ return 25;}

AllSnowBlock::AllSnowBlock():BaseBlock()
{
	textureRow = 0;

	upPlane = 4;
	downPlane = 4;
	sidePlane = 4;
	editable = true;
	transparent = false;
	soundType = 0;
}
block_t AllSnowBlock::getID(){ return 26;}

BrickBlock::BrickBlock():BaseBlock()
{
	textureRow = 4;

	upPlane = 7;
	downPlane = 7;
	sidePlane = 7;
	editable = true;
	transparent = false;
	soundType = 2;
}
block_t BrickBlock::getID(){ return 27;}

CageBlock::CageBlock():BaseBlock()
{
	textureRow = 6;

	upPlane = 1;
	downPlane = 1;
	sidePlane = 1;
	editable = true;
	transparent = true;
	soundType = 2;
}
block_t CageBlock::getID(){ return 28;}


SnowBlock::SnowBlock():BaseBlock()
{
	textureRow = 0;

	upPlane = 4;
	downPlane = 2;
	sidePlane = 5;
	editable = true;
	transparent = false;
	soundType = 0;
}
block_t SnowBlock::getID(){ return 29;}



DarkWoodBlock::DarkWoodBlock():BaseBlock()
{
	textureRow = 2;

	upPlane = 1;
	downPlane = 1;
	sidePlane = 4;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t DarkWoodBlock::getID(){ return 30;}

WhiteWoodBlock::WhiteWoodBlock():BaseBlock()
{
	textureRow = 2;

	upPlane = 1;
	downPlane = 1;
	sidePlane = 5;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t WhiteWoodBlock::getID(){ return 31;}

IceBlock::IceBlock():BaseBlock()
{
	textureRow = 6;

	upPlane = 0;
	downPlane = 0;
	sidePlane = 0;
	editable = true;
	transparent = false;
	soundType = 2;
}
block_t IceBlock::getID(){ return 32;}

CaneBlock::CaneBlock():BaseBlock()
{
	textureRow = 5;

	upPlane = 4;
	downPlane = 4;
	sidePlane = 3;
	editable = true;
	transparent = true;
	soundType = 2;
}
block_t CaneBlock::getID(){ return 33;}

BoxBlock::BoxBlock():BaseBlock()
{
	textureRow = 4;

	upPlane = 0;
	downPlane = 0;
	sidePlane = 0;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t BoxBlock::getID(){ return 34;}

ShelfBlock::ShelfBlock():BaseBlock()
{
	textureRow = 4;

	upPlane = 0;
	downPlane = 0;
	sidePlane = 1;
	editable = true;
	transparent = false;
	soundType = 3;
}
block_t ShelfBlock::getID(){ return 35;}

WallBlock::WallBlock():BaseBlock()
{
	textureRow = 4;

	upPlane = 2;
	downPlane = 2;
	sidePlane = 2;
	editable = true;
	transparent = false;
	soundType = 2;
}
block_t WallBlock::getID(){ return 36;}

DrySandBlock::DrySandBlock():BaseBlock()
{
	textureRow = 4;

	upPlane = 4;
	downPlane = 4;
	sidePlane = 4;
	editable = true;
	transparent = false;
	soundType = 1;
}
block_t DrySandBlock::getID(){ return 37;}

SnowLewesBlock::SnowLewesBlock():BaseBlock()
{
	textureRow = 2;

	upPlane = 0;
	downPlane = 0;
	sidePlane = 0;
	editable = true;
	transparent = true;
	soundType = 0;
}
block_t SnowLewesBlock::getID(){ return 38;}

MudBlock::MudBlock():BaseBlock()
{
	textureRow = 5;

	upPlane = 5;
	downPlane = 5;
	sidePlane = 5;
	editable = true;
	transparent = false;
	soundType = 1;
}
block_t MudBlock::getID(){ return 39;}

GlassBlock::GlassBlock():BaseBlock()
{
	textureRow = 3;

	upPlane = 1;
	downPlane = 1;
	sidePlane = 1;
	editable = true;
	transparent = true;
	soundType = 2;
}
block_t GlassBlock::getID(){ return 40;}

BrownCoailBlock::BrownCoailBlock():BaseBlock()
{
	textureRow = 6;

	upPlane = 3;
	downPlane = 3;
	sidePlane = 3;
	editable = true;
	transparent = false;
	soundType = 2;
}
block_t BrownCoailBlock::getID(){ return 41;}

BlackCoailBlock::BlackCoailBlock():BaseBlock()
{
	textureRow = 6;

	upPlane = 4;
	downPlane = 4;
	sidePlane = 4;
	editable = true;
	transparent = false;
	soundType = 2;
}
block_t BlackCoailBlock::getID(){ return 42;}

BlueCoailBlock::BlueCoailBlock():BaseBlock()
{
	textureRow = 6;

	upPlane = 5;
	downPlane = 5;
	sidePlane = 5;
	editable = true;
	transparent = false;
	soundType = 2;
}
block_t BlueCoailBlock::getID(){ return 43;}

RedCoailBlock::RedCoailBlock():BaseBlock()
{
	textureRow = 6;

	upPlane = 6;
	downPlane = 6;
	sidePlane = 6;
	editable = true;
	transparent = false;
	soundType = 2;
}
block_t RedCoailBlock::getID(){ return 44;}

SlamRockBlock::SlamRockBlock():BaseBlock()
{
	textureRow = 6;

	upPlane = 7;
	downPlane = 7;
	sidePlane = 7;
	editable = true;
	transparent = false;
	soundType = 2;
}
block_t SlamRockBlock::getID(){ return 45;}

WaterRockBlock::WaterRockBlock():BaseBlock()
{
	textureRow = 5;

	upPlane = 6;
	downPlane = 6;
	sidePlane = 6;
	editable = true;
	transparent = false;
	soundType = 2;
}
block_t WaterRockBlock::getID(){ return 46;}

JackOLantern::JackOLantern():BaseBlock()
{
	textureRow = 7;

	upPlane = 0;
	downPlane = 1;
	sidePlane = 2;
	editable = true;
	transparent = false;
	soundType = 2;
	lightSource = true;
}
block_t JackOLantern::getID(){ return 47;}

Torch::Torch():BaseBlock()
{
	textureRow = 7;

	upPlane = 3;
	downPlane = 3;
	sidePlane = 3;
	editable = true;
	transparent = false;
	soundType = 2;
	lightSource = true;
	blockSpecial = true;
}
block_t Torch::getID(){ return 48;}

//must be always last

IronBlock::IronBlock():BaseBlock()
{
	textureRow = 1;

	upPlane = 1;
	downPlane = 1;
	sidePlane = 1;
	editable = false;
	transparent = false;
	soundType = 2;
}
block_t IronBlock::getID(){ return 49;}

void initBlocks()
{
	//air
	blockTypes.push_back(new BaseBlock());

	//normal blocks
	blockTypes.push_back(new GrassBlock());
	blockTypes.push_back(new DirtBlock());
	blockTypes.push_back(new RockBlock());
	blockTypes.push_back(new WaterBlock());
	blockTypes.push_back(new GoldBlock());
	blockTypes.push_back(new LadderBlock());
	blockTypes.push_back(new SandBlock());
	blockTypes.push_back(new WoodBlock());
	blockTypes.push_back(new LeavesBlock());

	blockTypes.push_back(new TNTBlock());
	blockTypes.push_back(new BlackWoolBlock());
	blockTypes.push_back(new RedWoolBlock());
	blockTypes.push_back(new DarkGreyWoolBlock());
	blockTypes.push_back(new BrownWoolBlock());
	blockTypes.push_back(new LightBlackWoolBlock());
	blockTypes.push_back(new PinkWoolBlock());
	blockTypes.push_back(new LightGreenWoolBlock());
	blockTypes.push_back(new YellowWoolBlock());

	blockTypes.push_back(new BlueWoolBlock());
	blockTypes.push_back(new LightBlueWoolBlock());
	blockTypes.push_back(new FioletWoolBlock());
	blockTypes.push_back(new PastelWoolBlock());
	blockTypes.push_back(new LightFioletWoolBlock());
	blockTypes.push_back(new OrangeWoolBlock());
	blockTypes.push_back(new CactusBlock());
	blockTypes.push_back(new SnowBlock());
	blockTypes.push_back(new BrickBlock());

	blockTypes.push_back(new CageBlock());
	blockTypes.push_back(new AllSnowBlock());
	blockTypes.push_back(new DarkWoodBlock());
	blockTypes.push_back(new WhiteWoodBlock());
	blockTypes.push_back(new IceBlock());
	blockTypes.push_back(new CaneBlock());
	blockTypes.push_back(new BoxBlock());
	blockTypes.push_back(new ShelfBlock());
	blockTypes.push_back(new WallBlock());

	blockTypes.push_back(new DrySandBlock());
	blockTypes.push_back(new SnowLewesBlock());
	blockTypes.push_back(new MudBlock());
	blockTypes.push_back(new GlassBlock());
	blockTypes.push_back(new BrownCoailBlock());
	blockTypes.push_back(new BlackCoailBlock());
	blockTypes.push_back(new BlueCoailBlock());
	blockTypes.push_back(new RedCoailBlock());

	blockTypes.push_back(new SlamRockBlock());
	blockTypes.push_back(new WaterRockBlock());
	blockTypes.push_back(new JackOLantern());
	blockTypes.push_back(new Torch());


	//can't destroy this one
	blockTypes.push_back(new IronBlock());
}

void deleteBlocks()
{
	//delete block vertices
	for(unsigned int i = 0;i < blockTypes.size(); i++)
		delete blockTypes[i];

	blockTypes.clear();

}
