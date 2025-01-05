LittlerootTown_DevHouse_MapScripts::
	.byte 0


LittlerootTown_DevHouse_EVBerry_NPC::
# 6 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	lock
# 7 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	faceplayer
# 8 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	message LittlerootTown_DevHouse_EVBerry_NPC_Text_0
# 9 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	waitmessage
# 10 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	pokemart LittlerootTown_EVBerry_Mart
# 11 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	msgbox LittlerootTown_DevHouse_EVBerry_NPC_Text_1
# 12 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	release
	end


LittlerootTown_DevHouse_EvoItem_NPC::
# 17 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	lock
# 18 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	faceplayer
# 19 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	message LittlerootTown_DevHouse_EvoItem_NPC_Text_0
# 20 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	waitmessage
# 21 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	pokemart LittlerootTown_EvoItem_Mart
# 22 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	msgbox LittlerootTown_DevHouse_EVBerry_NPC_Text_1
# 23 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	release
	end


# 27 "data/maps/LittlerootTown_DevHouse/scripts.pory"

# 28 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.align 2
# 29 "data/maps/LittlerootTown_DevHouse/scripts.pory"
LittlerootTown_EVBerry_Mart:
# 30 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 31 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 32 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 33 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 34 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_GREPA_BERRY
# 35 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_TAMATO_BERRY
# 36 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	pokemartlistend
# 37 "data/maps/LittlerootTown_DevHouse/scripts.pory"

# 38 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .align 2
# 39 "data/maps/LittlerootTown_DevHouse/scripts.pory"
LittlerootTown_EvoItem_Mart:
# 40 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 41 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 42 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 43 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	pokemartlistend

LittlerootTown_DevHouse_EVBerry_NPC_Text_0:
# 8 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.string "I am the EV Berry Hoarder. \pWould you like to buy some?$"

LittlerootTown_DevHouse_EVBerry_NPC_Text_1:
# 11 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.string "Please come again.$"

LittlerootTown_DevHouse_EvoItem_NPC_Text_0:
# 19 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.string "I am the Evolution Item Keeper. \pPlease have a look.$"
