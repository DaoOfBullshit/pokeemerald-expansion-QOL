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


# 16 "data/maps/LittlerootTown_DevHouse/scripts.pory"

# 17 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.align 2
# 18 "data/maps/LittlerootTown_DevHouse/scripts.pory"
LittlerootTown_EVBerry_Mart:
# 19 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 20 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 21 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 22 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 23 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_GREPA_BERRY
# 24 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_TAMATO_BERRY
# 25 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	pokemartlistend

LittlerootTown_DevHouse_EVBerry_NPC_Text_0:
# 8 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.string "How may I serve you?$"

LittlerootTown_DevHouse_EVBerry_NPC_Text_1:
# 11 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.string "Please come again.$"
