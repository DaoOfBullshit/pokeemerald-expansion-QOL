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


LittlerootTown_DevHouse_AbilityItem_NPC::
# 39 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	lock
# 40 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	faceplayer
# 41 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	message LittlerootTown_DevHouse_AbilityItem_NPC_Text_0
# 42 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	waitmessage
# 43 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	pokemart LittlerootTown_AbilityItem_Mart
# 44 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	msgbox LittlerootTown_DevHouse_EVBerry_NPC_Text_1
# 45 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	release
	end


LittlerootTown_DevHouse_PowerItem_NPC::
# 50 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	lock
# 51 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	faceplayer
# 52 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	message LittlerootTown_DevHouse_PowerItem_NPC_Text_0
# 53 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	waitmessage
# 54 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	pokemart LittlerootTown_DevHouse_PowerItem_Mart
# 55 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	msgbox LittlerootTown_DevHouse_EVBerry_NPC_Text_1
# 56 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	release
	end


LittlerootTown_DevHouse_HeartScale_NPC::
# 61 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	lock
# 62 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	faceplayer
# 63 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	message LittlerootTown_DevHouse_HeartScale_NPC_Text_0
# 64 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	waitmessage
# 65 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	pokemart LittlerootTown_DevHouse_HeartScale_Mart
# 66 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	msgbox LittlerootTown_DevHouse_EVBerry_NPC_Text_1
# 67 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	release
	end


	.align 2
# 72 "data/maps/LittlerootTown_DevHouse/scripts.pory"
LittlerootTown_EVBerry_Mart:
# 73 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 74 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 75 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 76 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 77 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 78 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
	.2byte ITEM_NONE

	.align 2
# 82 "data/maps/LittlerootTown_DevHouse/scripts.pory"
LittlerootTown_EvoItem_Mart:
# 83 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 84 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 85 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
	.2byte ITEM_NONE

	.align 2
# 89 "data/maps/LittlerootTown_DevHouse/scripts.pory"
LittlerootTown_NatureMint_Mart:
# 90 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 91 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 92 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 93 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 94 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 95 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 96 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_LAX_MINT
# 97 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 98 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 99 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_MILD_MINT
# 100 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_RASH_MINT
# 101 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 102 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_CALM_MINT
# 103 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 104 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 105 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 106 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 107 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 108 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 109 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 110 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

	.align 2
# 113 "data/maps/LittlerootTown_DevHouse/scripts.pory"
LittlerootTown_AbilityItem_Mart:
# 114 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 115 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

	.align 2
# 118 "data/maps/LittlerootTown_DevHouse/scripts.pory"
LittlerootTown_DevHouse_PowerItem_Mart:
# 119 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 120 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 121 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 122 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_POWER_BELT
# 123 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_POWER_LENS
# 124 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_POWER_BAND
# 125 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_POWER_ANKLET
	.2byte ITEM_NONE

	.align 2
# 128 "data/maps/LittlerootTown_DevHouse/scripts.pory"
LittlerootTown_DevHouse_HeartScale_Mart:
# 129 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.2byte ITEM_HEART_SCALE
	.2byte ITEM_NONE

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

LittlerootTown_DevHouse_AbilityItem_NPC_Text_0:
# 41 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.string "I sell ability changing items.\pBut I must warn you they are expensive!$"

LittlerootTown_DevHouse_PowerItem_NPC_Text_0:
# 52 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.string "I sell Power Items.$"

LittlerootTown_DevHouse_HeartScale_NPC_Text_0:
# 63 "data/maps/LittlerootTown_DevHouse/scripts.pory"
	.string "I sell heart scales.\pYou better stock up!$"
