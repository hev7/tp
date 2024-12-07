#ifndef D_A_OBJ_LV4PRELVTR_H
#define D_A_OBJ_LV4PRELVTR_H

#include "d/actor/d_a_obj_swturn.h"
#include "d/d_bg_s_movebg_actor.h"
#include "f_op/f_op_actor_mng.h"

/**
 * @ingroup actors-objects
 * @class daObjPRElvtr_c
 * @brief Arbiter's Grounds Elevator?
 *
 * @details
 *
 */
class daObjPRElvtr_c : public dBgS_MoveBgActor, public request_of_phase_process_class {
public:
    /* 80C685F8 */ int create1st();
    /* 80C68688 */ void setMtx();
    /* 80C686F8 */ int CreateHeap();
    /* 80C68768 */ int Create();
    /* 80C68844 */ int Execute(Mtx**);
    /* 80C68944 */ int Draw();
    /* 80C689E8 */ int Delete();
    /* 80C68AF0 */ virtual ~daObjPRElvtr_c() {}

    int getSwNo() { return fopAcM_GetParamBit(this, 0, 8); }

private:
    /* 0x5A8 */ Mtx mMtx1;
    /* 0x5D8 */ Mtx mMtx2;
    /* 0x608 */ J3DModel* mpModel;
    /* 0x60C */ int field_0x60c;
};

STATIC_ASSERT(sizeof(daObjPRElvtr_c) == 0x610);

#endif /* D_A_OBJ_LV4PRELVTR_H */
