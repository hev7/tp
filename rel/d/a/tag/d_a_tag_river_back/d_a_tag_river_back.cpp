//
// Generated By: dol2asm
// Translation Unit: d_a_tag_river_back
//

#include "rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back.h"
#include "dol2asm.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daTagRiverBack_c {
    /* 80D5F2F8 */ void Create();
    /* 80D5F360 */ void create();
    /* 80D5F3F0 */ void execute();
    /* 80D5F48C */ void event_proc_call();
    /* 80D5F548 */ void actionWait();
    /* 80D5F5BC */ void actionOrderEvent();
    /* 80D5F66C */ void actionEvent();
    /* 80D5F70C */ void actionDead();
    /* 80D5F710 */ void demoProc();
    /* 80D5F88C */ void _delete();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
};

struct dEvent_manager_c {
    /* 80047758 */ void getEventIdx(fopAc_ac_c*, char const*, u8);
    /* 80047A78 */ void endCheck(s16);
    /* 80047B1C */ void getMyStaffId(char const*, fopAc_ac_c*, int);
    /* 80047D4C */ void getIsAddvance(int);
    /* 80047E10 */ void getMyActIdx(int, char const* const*, int, int, int);
    /* 800480EC */ void getMySubstanceP(int, char const*, int);
    /* 8004817C */ void cutEnd(int);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

//
// Forward References:
//

extern "C" void Create__16daTagRiverBack_cFv();
extern "C" void create__16daTagRiverBack_cFv();
extern "C" void execute__16daTagRiverBack_cFv();
extern "C" void event_proc_call__16daTagRiverBack_cFv();
extern "C" void actionWait__16daTagRiverBack_cFv();
extern "C" void actionOrderEvent__16daTagRiverBack_cFv();
extern "C" void actionEvent__16daTagRiverBack_cFv();
extern "C" void actionDead__16daTagRiverBack_cFv();
extern "C" void demoProc__16daTagRiverBack_cFv();
extern "C" void _delete__16daTagRiverBack_cFv();
extern "C" static void daTagRiverBack_Execute__FP16daTagRiverBack_c();
extern "C" static void daTagRiverBack_Delete__FP16daTagRiverBack_c();
extern "C" static void daTagRiverBack_Create__FP16daTagRiverBack_c();
extern "C" void func_80D5F920(void* _this, u8*);
extern "C" extern char const* const d_a_tag_river_back__stringBase0;
extern "C" extern void* g_profile_Tag_RiverBack[12];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void getMySubstanceP__16dEvent_manager_cFiPCci();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_80D5FA68[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D5F950-80D5F950 00000C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D5F950 = "RvBack";
SECTION_DEAD static char const* const stringBase_80D5F957 = "RIVER_BACK";
#pragma pop

/* 80D5F980-80D5F98C 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D5F98C-80D5F9A0 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80D5F9A0-80D5F9A4 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_tag_river_back__stringBase0;

/* 80D5F9A4-80D5F9A8 -00001 0004+00 1/1 0/0 0/0 .data            l_evName */
SECTION_DATA static void* l_evName = (void*)(((char*)&d_a_tag_river_back__stringBase0) + 0x7);

/* 80D5F2F8-80D5F360 000078 0068+00 1/1 0/0 0/0 .text            Create__16daTagRiverBack_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagRiverBack_c::Create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back/Create__16daTagRiverBack_cFv.s"
}
#pragma pop

/* 80D5F360-80D5F3F0 0000E0 0090+00 1/1 0/0 0/0 .text            create__16daTagRiverBack_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagRiverBack_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back/func_80D5F360.s"
}
#pragma pop

/* 80D5F3F0-80D5F48C 000170 009C+00 1/1 0/0 0/0 .text            execute__16daTagRiverBack_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagRiverBack_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back/execute__16daTagRiverBack_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5F950-80D5F950 00000C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D5F962 = "rvback";
#pragma pop

/* 80D5F9A8-80D5F9AC -00001 0004+00 1/1 0/0 0/0 .data            l_staffName */
SECTION_DATA static void* l_staffName = (void*)(((char*)&d_a_tag_river_back__stringBase0) + 0x12);

/* 80D5F9AC-80D5F9B8 -00001 000C+00 0/1 0/0 0/0 .data            @3712 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3712[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__16daTagRiverBack_cFv,
};
#pragma pop

/* 80D5F9B8-80D5F9C4 -00001 000C+00 0/1 0/0 0/0 .data            @3713 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3713[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrderEvent__16daTagRiverBack_cFv,
};
#pragma pop

/* 80D5F9C4-80D5F9D0 -00001 000C+00 0/1 0/0 0/0 .data            @3714 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3714[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionEvent__16daTagRiverBack_cFv,
};
#pragma pop

/* 80D5F9D0-80D5F9DC -00001 000C+00 0/1 0/0 0/0 .data            @3715 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3715[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionDead__16daTagRiverBack_cFv,
};
#pragma pop

/* 80D5F9DC-80D5FA0C 00005C 0030+00 0/1 0/0 0/0 .data            l_func$3711 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80D5F48C-80D5F548 00020C 00BC+00 1/1 0/0 0/0 .text event_proc_call__16daTagRiverBack_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagRiverBack_c::event_proc_call() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back/event_proc_call__16daTagRiverBack_cFv.s"
}
#pragma pop

/* 80D5F548-80D5F5BC 0002C8 0074+00 1/0 0/0 0/0 .text            actionWait__16daTagRiverBack_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagRiverBack_c::actionWait() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back/actionWait__16daTagRiverBack_cFv.s"
}
#pragma pop

/* 80D5F5BC-80D5F66C 00033C 00B0+00 1/0 0/0 0/0 .text actionOrderEvent__16daTagRiverBack_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagRiverBack_c::actionOrderEvent() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back/actionOrderEvent__16daTagRiverBack_cFv.s"
}
#pragma pop

/* 80D5F66C-80D5F70C 0003EC 00A0+00 1/0 0/0 0/0 .text            actionEvent__16daTagRiverBack_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagRiverBack_c::actionEvent() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back/actionEvent__16daTagRiverBack_cFv.s"
}
#pragma pop

/* 80D5F70C-80D5F710 00048C 0004+00 1/0 0/0 0/0 .text            actionDead__16daTagRiverBack_cFv */
void daTagRiverBack_c::actionDead() {
    /* empty function */
}

/* ############################################################################################## */
/* 80D5F944-80D5F948 000000 0004+00 1/1 0/0 0/0 .rodata          @3813 */
SECTION_RODATA static f32 const lit_3813 = 1.0f;
COMPILER_STRIP_GATE(0x80D5F944, &lit_3813);

/* 80D5F948-80D5F94C 000004 0004+00 0/1 0/0 0/0 .rodata          @3814 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3814 = -1.0f;
COMPILER_STRIP_GATE(0x80D5F948, &lit_3814);
#pragma pop

/* 80D5F94C-80D5F950 000008 0004+00 0/1 0/0 0/0 .rodata          @3815 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3815[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D5F94C, &lit_3815);
#pragma pop

/* 80D5F950-80D5F950 00000C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D5F969 = "WAIT";
SECTION_DEAD static char const* const stringBase_80D5F96E = "SCENE_CHG";
SECTION_DEAD static char const* const stringBase_80D5F978 = "Timer";
#pragma pop

/* 80D5FA0C-80D5FA14 -00001 0008+00 1/1 0/0 0/0 .data            action_table$3769 */
SECTION_DATA static void* action_table[2] = {
    (void*)(((char*)&d_a_tag_river_back__stringBase0) + 0x19),
    (void*)(((char*)&d_a_tag_river_back__stringBase0) + 0x1E),
};

/* 80D5F710-80D5F88C 000490 017C+00 2/2 0/0 0/0 .text            demoProc__16daTagRiverBack_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagRiverBack_c::demoProc() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back/demoProc__16daTagRiverBack_cFv.s"
}
#pragma pop

/* 80D5F88C-80D5F8C0 00060C 0034+00 1/1 0/0 0/0 .text            _delete__16daTagRiverBack_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagRiverBack_c::_delete() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back/_delete__16daTagRiverBack_cFv.s"
}
#pragma pop

/* 80D5F8C0-80D5F8E0 000640 0020+00 1/0 0/0 0/0 .text daTagRiverBack_Execute__FP16daTagRiverBack_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagRiverBack_Execute(daTagRiverBack_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back/daTagRiverBack_Execute__FP16daTagRiverBack_c.s"
}
#pragma pop

/* 80D5F8E0-80D5F900 000660 0020+00 1/0 0/0 0/0 .text daTagRiverBack_Delete__FP16daTagRiverBack_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagRiverBack_Delete(daTagRiverBack_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back/daTagRiverBack_Delete__FP16daTagRiverBack_c.s"
}
#pragma pop

/* 80D5F900-80D5F920 000680 0020+00 1/0 0/0 0/0 .text daTagRiverBack_Create__FP16daTagRiverBack_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagRiverBack_Create(daTagRiverBack_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back/daTagRiverBack_Create__FP16daTagRiverBack_c.s"
}
#pragma pop

/* 80D5F920-80D5F93C 0006A0 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<Uc>__FPUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80D5F920(void* _this, u8* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back/func_80D5F920.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5FA14-80D5FA34 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagRiverBack_Method */
SECTION_DATA static void* l_daTagRiverBack_Method[8] = {
    (void*)daTagRiverBack_Create__FP16daTagRiverBack_c,
    (void*)daTagRiverBack_Delete__FP16daTagRiverBack_c,
    (void*)daTagRiverBack_Execute__FP16daTagRiverBack_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D5FA34-80D5FA64 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_RiverBack */
SECTION_DATA extern void* g_profile_Tag_RiverBack[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01800000, (void*)&g_fpcLf_Method,
    (void*)0x0000057C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x022C0000, (void*)&l_daTagRiverBack_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80D5F950-80D5F950 00000C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
