class CfgWeapons {
    class ItemCore;
    class CBA_MiscItem: ItemCore{};
    class ACE_ItemCore: CBA_MiscItem{};

    class ACE_artilleryTable: ACE_ItemCore {
        model = QPATHTOF(tables\tbd_mortar_table);
    };
};
