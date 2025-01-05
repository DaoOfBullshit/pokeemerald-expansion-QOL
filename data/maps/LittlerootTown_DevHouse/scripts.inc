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


LittlerootTown_DevHouse_NatureMint_NPC::
# 28 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	lock
# 29 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	faceplayer
# 30 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	message LittlerootTown_DevHouse_NatureMint_NPC_Text_0
# 31 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	waitmessage
# 32 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	pokemart LittlerootTown_NatureMint_Mart
# 33 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	msgbox LittlerootTown_DevHouse_EVBerry_NPC_Text_1
# 34 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	release
	end


# 38 "data/maps/LittlerootTown_DevHouse/scripts.pory"

# 39 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.align 2
# 40 "data/maps/LittlerootTown_DevHouse/scripts.pory"
LittlerootTown_EVBerry_Mart:
# 41 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 42 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 43 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 44 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 45 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_GREPA_BERRY
# 46 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_TAMATO_BERRY
# 47 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	pokemartlistend
# 48 "data/maps/LittlerootTown_DevHouse/scripts.pory"

# 49 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .align 2
# 50 "data/maps/LittlerootTown_DevHouse/scripts.pory"
LittlerootTown_EvoItem_Mart:
# 51 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 52 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 53 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 54 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	pokemartlistend
# 55 "data/maps/LittlerootTown_DevHouse/scripts.pory"

# 56 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .align 2
# 57 "data/maps/LittlerootTown_DevHouse/scripts.pory"
LittlerootTown_NatureMint_Mart:
# 58 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 59 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 60 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 61 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_BRAVE_MINT
# 62 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_BOLD_MINT
# 63 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_IMPISH_MINT
# 64 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_LAX_MINT
# 65 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_RELAXED_MINT
# 66 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_MODEST_MINT
# 67 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_MILD_MINT
# 68 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_RASH_MINT
# 69 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_QUIET_MINT
# 70 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_CALM_MINT
# 71 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_GENTLE_MINT
# 72 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_CAREFUL_MINT
# 73 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_SASSY_MINT
# 74 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_TIMID_MINT
# 75 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_HASTY_MINT
# 76 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_JOLLY_MINT
# 77 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_NAIVE_MINT
# 78 "data/maps/LittlerootTown_DevHouse/scripts.pory"
    .2byte ITEM_SERIOUS_MINT
# 79 "data/maps/LittlerootTown_DevHouse/scripts.pory"
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

LittlerootTown_DevHouse_NatureMint_NPC_Text_0:
# 30 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.string "Would you like some nature mints?$"
