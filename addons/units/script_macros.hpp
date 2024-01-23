#define MACRO_ADDUNITGROUP(SIDE,NAME,PRIORITY) class PMCS_##SIDE##_##NAME { \
	displayName = CSTRING(UnitGroup_##NAME); \
	priority = PRIORITY; \
}

#define MACRO_ADDUNITSUBCAT(SIDE,NAME) class PMCS_##SIDE##_##NAME { \
	displayName = CSTRING(UnitGroup_##NAME); \
}

#define UNITGROUP(SIDE,NAME) QUOTE(PMCS_##SIDE##_##NAME)

#define LINKEDITEMS(items) linkedItems[] = items; respawnLinkedItems[] = items
#define WEAPONS(items) weapons[] = items; respawnWeapons[] = items
#define ITEMS(items) Items[] = items; RespawnItems[] = items
#define MAGAZINES(items) magazines[] = items; respawnMagazines[] = items

#define MAG_2(a) "a", "a"
#define MAG_3(a) "a", "a", "a"
#define MAG_4(a) "a", "a", "a", "a"
#define MAG_5(a) "a", "a", "a", "a", "a"
#define MAG_6(a) "a", "a", "a", "a", "a", "a"
#define MAG_7(a) "a", "a", "a", "a", "a", "a", "a"
#define MAG_8(a) "a", "a", "a", "a", "a", "a", "a", "a"
#define MAG_9(a) "a", "a", "a", "a", "a", "a", "a", "a", "a"
#define MAG_10(a) "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"
#define MAG_11(a) "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"
#define MAG_12(a) "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"