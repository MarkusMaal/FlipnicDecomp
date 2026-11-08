#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001c2fa0
// Address: 0x1c2fa0 - 0x1c442c
void FUN_001c2fa0_0x1c2fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c2fa0_0x1c2fa0");
#endif

    switch (ctx->pc) {
        case 0x1c2fd4u: goto label_1c2fd4;
        case 0x1c3008u: goto label_1c3008;
        case 0x1c3018u: goto label_1c3018;
        case 0x1c3054u: goto label_1c3054;
        case 0x1c3060u: goto label_1c3060;
        case 0x1c3080u: goto label_1c3080;
        case 0x1c308cu: goto label_1c308c;
        case 0x1c30d8u: goto label_1c30d8;
        case 0x1c30fcu: goto label_1c30fc;
        case 0x1c3118u: goto label_1c3118;
        case 0x1c3124u: goto label_1c3124;
        case 0x1c3138u: goto label_1c3138;
        case 0x1c3144u: goto label_1c3144;
        case 0x1c3168u: goto label_1c3168;
        case 0x1c3170u: goto label_1c3170;
        case 0x1c3180u: goto label_1c3180;
        case 0x1c3188u: goto label_1c3188;
        case 0x1c3198u: goto label_1c3198;
        case 0x1c31a0u: goto label_1c31a0;
        case 0x1c31b8u: goto label_1c31b8;
        case 0x1c31c0u: goto label_1c31c0;
        case 0x1c31d0u: goto label_1c31d0;
        case 0x1c31d8u: goto label_1c31d8;
        case 0x1c31e4u: goto label_1c31e4;
        case 0x1c3200u: goto label_1c3200;
        case 0x1c3208u: goto label_1c3208;
        case 0x1c3218u: goto label_1c3218;
        case 0x1c3220u: goto label_1c3220;
        case 0x1c322cu: goto label_1c322c;
        case 0x1c3238u: goto label_1c3238;
        case 0x1c3254u: goto label_1c3254;
        case 0x1c328cu: goto label_1c328c;
        case 0x1c32a4u: goto label_1c32a4;
        case 0x1c32bcu: goto label_1c32bc;
        case 0x1c32ccu: goto label_1c32cc;
        case 0x1c32f0u: goto label_1c32f0;
        case 0x1c32fcu: goto label_1c32fc;
        case 0x1c3304u: goto label_1c3304;
        case 0x1c3310u: goto label_1c3310;
        case 0x1c33ccu: goto label_1c33cc;
        case 0x1c33dcu: goto label_1c33dc;
        case 0x1c33ecu: goto label_1c33ec;
        case 0x1c33fcu: goto label_1c33fc;
        case 0x1c3408u: goto label_1c3408;
        case 0x1c3418u: goto label_1c3418;
        case 0x1c3424u: goto label_1c3424;
        case 0x1c3438u: goto label_1c3438;
        case 0x1c3444u: goto label_1c3444;
        case 0x1c3454u: goto label_1c3454;
        case 0x1c3460u: goto label_1c3460;
        case 0x1c3470u: goto label_1c3470;
        case 0x1c347cu: goto label_1c347c;
        case 0x1c348cu: goto label_1c348c;
        case 0x1c3498u: goto label_1c3498;
        case 0x1c34a8u: goto label_1c34a8;
        case 0x1c34b8u: goto label_1c34b8;
        case 0x1c34c4u: goto label_1c34c4;
        case 0x1c34d4u: goto label_1c34d4;
        case 0x1c34e4u: goto label_1c34e4;
        case 0x1c34f0u: goto label_1c34f0;
        case 0x1c3514u: goto label_1c3514;
        case 0x1c3530u: goto label_1c3530;
        case 0x1c3538u: goto label_1c3538;
        case 0x1c3548u: goto label_1c3548;
        case 0x1c3550u: goto label_1c3550;
        case 0x1c355cu: goto label_1c355c;
        case 0x1c3568u: goto label_1c3568;
        case 0x1c3578u: goto label_1c3578;
        case 0x1c3594u: goto label_1c3594;
        case 0x1c35b0u: goto label_1c35b0;
        case 0x1c369cu: goto label_1c369c;
        case 0x1c36a8u: goto label_1c36a8;
        case 0x1c36b4u: goto label_1c36b4;
        case 0x1c36bcu: goto label_1c36bc;
        case 0x1c36d4u: goto label_1c36d4;
        case 0x1c36e0u: goto label_1c36e0;
        case 0x1c36ecu: goto label_1c36ec;
        case 0x1c36f4u: goto label_1c36f4;
        case 0x1c3714u: goto label_1c3714;
        case 0x1c3720u: goto label_1c3720;
        case 0x1c372cu: goto label_1c372c;
        case 0x1c3748u: goto label_1c3748;
        case 0x1c375cu: goto label_1c375c;
        case 0x1c3768u: goto label_1c3768;
        case 0x1c3774u: goto label_1c3774;
        case 0x1c378cu: goto label_1c378c;
        case 0x1c379cu: goto label_1c379c;
        case 0x1c37b0u: goto label_1c37b0;
        case 0x1c37d4u: goto label_1c37d4;
        case 0x1c3844u: goto label_1c3844;
        case 0x1c3850u: goto label_1c3850;
        case 0x1c385cu: goto label_1c385c;
        case 0x1c3864u: goto label_1c3864;
        case 0x1c387cu: goto label_1c387c;
        case 0x1c3888u: goto label_1c3888;
        case 0x1c3894u: goto label_1c3894;
        case 0x1c38b4u: goto label_1c38b4;
        case 0x1c38d8u: goto label_1c38d8;
        case 0x1c38e4u: goto label_1c38e4;
        case 0x1c391cu: goto label_1c391c;
        case 0x1c3928u: goto label_1c3928;
        case 0x1c3934u: goto label_1c3934;
        case 0x1c3944u: goto label_1c3944;
        case 0x1c395cu: goto label_1c395c;
        case 0x1c3968u: goto label_1c3968;
        case 0x1c3974u: goto label_1c3974;
        case 0x1c39a0u: goto label_1c39a0;
        case 0x1c39a4u: goto label_1c39a4;
        case 0x1c39c8u: goto label_1c39c8;
        case 0x1c39d4u: goto label_1c39d4;
        case 0x1c39e0u: goto label_1c39e0;
        case 0x1c39f0u: goto label_1c39f0;
        case 0x1c3a08u: goto label_1c3a08;
        case 0x1c3a14u: goto label_1c3a14;
        case 0x1c3a20u: goto label_1c3a20;
        case 0x1c3a4cu: goto label_1c3a4c;
        case 0x1c3a50u: goto label_1c3a50;
        case 0x1c3aa4u: goto label_1c3aa4;
        case 0x1c3ab0u: goto label_1c3ab0;
        case 0x1c3abcu: goto label_1c3abc;
        case 0x1c3accu: goto label_1c3acc;
        case 0x1c3ae4u: goto label_1c3ae4;
        case 0x1c3af0u: goto label_1c3af0;
        case 0x1c3afcu: goto label_1c3afc;
        case 0x1c3b28u: goto label_1c3b28;
        case 0x1c3b2cu: goto label_1c3b2c;
        case 0x1c3b80u: goto label_1c3b80;
        case 0x1c3b8cu: goto label_1c3b8c;
        case 0x1c3b98u: goto label_1c3b98;
        case 0x1c3ba8u: goto label_1c3ba8;
        case 0x1c3bc0u: goto label_1c3bc0;
        case 0x1c3bccu: goto label_1c3bcc;
        case 0x1c3bd8u: goto label_1c3bd8;
        case 0x1c3c04u: goto label_1c3c04;
        case 0x1c3c08u: goto label_1c3c08;
        case 0x1c3c5cu: goto label_1c3c5c;
        case 0x1c3c68u: goto label_1c3c68;
        case 0x1c3c74u: goto label_1c3c74;
        case 0x1c3c84u: goto label_1c3c84;
        case 0x1c3c9cu: goto label_1c3c9c;
        case 0x1c3ca8u: goto label_1c3ca8;
        case 0x1c3cb4u: goto label_1c3cb4;
        case 0x1c3ce0u: goto label_1c3ce0;
        case 0x1c3ce4u: goto label_1c3ce4;
        case 0x1c3d38u: goto label_1c3d38;
        case 0x1c3d44u: goto label_1c3d44;
        case 0x1c3d50u: goto label_1c3d50;
        case 0x1c3d6cu: goto label_1c3d6c;
        case 0x1c3d78u: goto label_1c3d78;
        case 0x1c3d90u: goto label_1c3d90;
        case 0x1c3d9cu: goto label_1c3d9c;
        case 0x1c3da8u: goto label_1c3da8;
        case 0x1c3dbcu: goto label_1c3dbc;
        case 0x1c3de0u: goto label_1c3de0;
        case 0x1c3decu: goto label_1c3dec;
        case 0x1c3df8u: goto label_1c3df8;
        case 0x1c3e14u: goto label_1c3e14;
        case 0x1c3e20u: goto label_1c3e20;
        case 0x1c3e38u: goto label_1c3e38;
        case 0x1c3e44u: goto label_1c3e44;
        case 0x1c3e50u: goto label_1c3e50;
        case 0x1c3e64u: goto label_1c3e64;
        case 0x1c3e88u: goto label_1c3e88;
        case 0x1c3e94u: goto label_1c3e94;
        case 0x1c3ea0u: goto label_1c3ea0;
        case 0x1c3ebcu: goto label_1c3ebc;
        case 0x1c3eccu: goto label_1c3ecc;
        case 0x1c3ee0u: goto label_1c3ee0;
        case 0x1c3f04u: goto label_1c3f04;
        case 0x1c3f64u: goto label_1c3f64;
        case 0x1c3f70u: goto label_1c3f70;
        case 0x1c3f7cu: goto label_1c3f7c;
        case 0x1c3f88u: goto label_1c3f88;
        case 0x1c3f90u: goto label_1c3f90;
        case 0x1c3facu: goto label_1c3fac;
        case 0x1c3fc4u: goto label_1c3fc4;
        case 0x1c3fd0u: goto label_1c3fd0;
        case 0x1c3fdcu: goto label_1c3fdc;
        case 0x1c3ff0u: goto label_1c3ff0;
        case 0x1c401cu: goto label_1c401c;
        case 0x1c4030u: goto label_1c4030;
        case 0x1c403cu: goto label_1c403c;
        case 0x1c4048u: goto label_1c4048;
        case 0x1c4058u: goto label_1c4058;
        case 0x1c4070u: goto label_1c4070;
        case 0x1c407cu: goto label_1c407c;
        case 0x1c4088u: goto label_1c4088;
        case 0x1c4090u: goto label_1c4090;
        case 0x1c40b0u: goto label_1c40b0;
        case 0x1c40bcu: goto label_1c40bc;
        case 0x1c40c8u: goto label_1c40c8;
        case 0x1c40e4u: goto label_1c40e4;
        case 0x1c40f8u: goto label_1c40f8;
        case 0x1c4104u: goto label_1c4104;
        case 0x1c4110u: goto label_1c4110;
        case 0x1c4128u: goto label_1c4128;
        case 0x1c413cu: goto label_1c413c;
        case 0x1c4148u: goto label_1c4148;
        case 0x1c4154u: goto label_1c4154;
        case 0x1c4164u: goto label_1c4164;
        case 0x1c417cu: goto label_1c417c;
        case 0x1c4188u: goto label_1c4188;
        case 0x1c4194u: goto label_1c4194;
        case 0x1c41c0u: goto label_1c41c0;
        case 0x1c41c4u: goto label_1c41c4;
        case 0x1c41e8u: goto label_1c41e8;
        case 0x1c41f4u: goto label_1c41f4;
        case 0x1c4200u: goto label_1c4200;
        case 0x1c4210u: goto label_1c4210;
        case 0x1c4228u: goto label_1c4228;
        case 0x1c4234u: goto label_1c4234;
        case 0x1c4240u: goto label_1c4240;
        case 0x1c426cu: goto label_1c426c;
        case 0x1c4270u: goto label_1c4270;
        case 0x1c42ccu: goto label_1c42cc;
        case 0x1c42d8u: goto label_1c42d8;
        case 0x1c42e4u: goto label_1c42e4;
        case 0x1c42ecu: goto label_1c42ec;
        case 0x1c4310u: goto label_1c4310;
        case 0x1c4328u: goto label_1c4328;
        case 0x1c4334u: goto label_1c4334;
        case 0x1c4340u: goto label_1c4340;
        case 0x1c4354u: goto label_1c4354;
        case 0x1c436cu: goto label_1c436c;
        case 0x1c4384u: goto label_1c4384;
        case 0x1c4390u: goto label_1c4390;
        case 0x1c439cu: goto label_1c439c;
        case 0x1c43a8u: goto label_1c43a8;
        case 0x1c43c0u: goto label_1c43c0;
        case 0x1c43ccu: goto label_1c43cc;
        case 0x1c43dcu: goto label_1c43dc;
        case 0x1c43f4u: goto label_1c43f4;
        case 0x1c4408u: goto label_1c4408;
        case 0x1c4414u: goto label_1c4414;
        case 0x1c441cu: goto label_1c441c;
        default: break;
    }

    ctx->pc = 0x1c2fa0u;

    // 0x1c2fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2fa4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c2fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c2fa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c2fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c2fac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c2fb4: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x1c2fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1c2fb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fbc: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x1c2fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    // 0x1c2fc0: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x1c2fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1c2fc4: 0xac82006c  sw          $v0, 0x6C($a0)
    ctx->pc = 0x1c2fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
    // 0x1c2fc8: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x1c2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1c2fcc: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C2FCCu;
    SET_GPR_U32(ctx, 31, 0x1C2FD4u);
    ctx->pc = 0x1C2FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2FCCu;
    // 0x1c2fd0: 0xac820074  sw          $v0, 0x74($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C2FCCu, 0x1C2FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2FD4u;
label_1c2fd4:
    // 0x1c2fd4: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x1c2fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1c2fd8: 0x2c41003f  sltiu       $at, $v0, 0x3F
    ctx->pc = 0x1c2fd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x1c2fdc: 0x1020050b  beqz        $at, . + 4 + (0x50B << 2)
    ctx->pc = 0x1C2FDCu;
    {
        const bool branch_taken_0x1c2fdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FDCu;
        // 0x1c2fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2fdc) {
            ctx->pc = 0x1C440Cu;
            goto label_1c440c;
        }
    }
    ctx->pc = 0x1C2FE4u;
    // 0x1c2fe4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1c2fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1c2fe8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c2fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c2fec: 0x24631ca0  addiu       $v1, $v1, 0x1CA0
    ctx->pc = 0x1c2fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7328));
    // 0x1c2ff0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c2ff4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c2ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2ff8: 0x400008  jr          $v0
    ctx->pc = 0x1C2FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C3000u: goto label_1c3000;
            case 0x1C32D8u: goto label_1c32d8;
            case 0x1C3690u: goto label_1c3690;
            case 0x1C36C8u: goto label_1c36c8;
            case 0x1C3708u: goto label_1c3708;
            case 0x1C3750u: goto label_1c3750;
            case 0x1C3794u: goto label_1c3794;
            case 0x1C37A8u: goto label_1c37a8;
            case 0x1C3838u: goto label_1c3838;
            case 0x1C3870u: goto label_1c3870;
            case 0x1C38CCu: goto label_1c38cc;
            case 0x1C3910u: goto label_1c3910;
            case 0x1C3950u: goto label_1c3950;
            case 0x1C39BCu: goto label_1c39bc;
            case 0x1C39FCu: goto label_1c39fc;
            case 0x1C3A98u: goto label_1c3a98;
            case 0x1C3AD8u: goto label_1c3ad8;
            case 0x1C3B74u: goto label_1c3b74;
            case 0x1C3BB4u: goto label_1c3bb4;
            case 0x1C3C50u: goto label_1c3c50;
            case 0x1C3C90u: goto label_1c3c90;
            case 0x1C3D2Cu: goto label_1c3d2c;
            case 0x1C3D84u: goto label_1c3d84;
            case 0x1C3DD4u: goto label_1c3dd4;
            case 0x1C3E2Cu: goto label_1c3e2c;
            case 0x1C3E7Cu: goto label_1c3e7c;
            case 0x1C3EC4u: goto label_1c3ec4;
            case 0x1C3ED8u: goto label_1c3ed8;
            case 0x1C3F58u: goto label_1c3f58;
            case 0x1C3FB8u: goto label_1c3fb8;
            case 0x1C4008u: goto label_1c4008;
            case 0x1C4024u: goto label_1c4024;
            case 0x1C4064u: goto label_1c4064;
            case 0x1C40A4u: goto label_1c40a4;
            case 0x1C40ECu: goto label_1c40ec;
            case 0x1C4130u: goto label_1c4130;
            case 0x1C4170u: goto label_1c4170;
            case 0x1C41DCu: goto label_1c41dc;
            case 0x1C421Cu: goto label_1c421c;
            case 0x1C42C0u: goto label_1c42c0;
            case 0x1C431Cu: goto label_1c431c;
            case 0x1C4378u: goto label_1c4378;
            case 0x1C43E8u: goto label_1c43e8;
            case 0x1C4408u: goto label_1c4408;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2FF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C3000u;
label_1c3000:
    // 0x1c3000: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C3000u;
    SET_GPR_U32(ctx, 31, 0x1C3008u);
    ctx->pc = 0x1C3004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3000u;
    // 0x1c3004: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C3000u, 0x1C3008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3008u;
label_1c3008:
    // 0x1c3008: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3008u;
    {
        const bool branch_taken_0x1c3008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3008u;
        // 0x1c300c: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3008) {
            ctx->pc = 0x1C3018u;
            goto label_1c3018;
        }
    }
    ctx->pc = 0x1C3010u;
    // 0x1c3010: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C3010u;
    SET_GPR_U32(ctx, 31, 0x1C3018u);
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C3010u, 0x1C3018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3018u;
label_1c3018:
    // 0x1c3018: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1c3018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1c301c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3020: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x1c3020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x1c3024: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1c3024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1c3028: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C3028u;
    {
        const bool branch_taken_0x1c3028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3028u;
        // 0x1c302c: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3028) {
            ctx->pc = 0x1C30A4u;
            goto label_1c30a4;
        }
    }
    ctx->pc = 0x1C3030u;
    // 0x1c3030: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C3030u;
    {
        const bool branch_taken_0x1c3030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3030u;
        // 0x1c3034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3030) {
            ctx->pc = 0x1C3078u;
            goto label_1c3078;
        }
    }
    ctx->pc = 0x1C3038u;
    // 0x1c3038: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c3038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c303c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C303Cu;
    {
        const bool branch_taken_0x1c303c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C303Cu;
        // 0x1c3040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c303c) {
            ctx->pc = 0x1C304Cu;
            goto label_1c304c;
        }
    }
    ctx->pc = 0x1C3044u;
    // 0x1c3044: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1C3044u;
    {
        const bool branch_taken_0x1c3044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3044u;
        // 0x1c3048: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3044) {
            ctx->pc = 0x1C30ACu;
            goto label_1c30ac;
        }
    }
    ctx->pc = 0x1C304Cu;
label_1c304c:
    // 0x1c304c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C304Cu;
    SET_GPR_U32(ctx, 31, 0x1C3054u);
    ctx->pc = 0x1C3050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C304Cu;
    // 0x1c3050: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C304Cu, 0x1C3054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3054u;
label_1c3054:
    // 0x1c3054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3058: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3058u;
    SET_GPR_U32(ctx, 31, 0x1C3060u);
    ctx->pc = 0x1C305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3058u;
    // 0x1c305c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3058u, 0x1C3060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3060u;
label_1c3060:
    // 0x1c3060: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1c3060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1c3064: 0x28420078  slti        $v0, $v0, 0x78
    ctx->pc = 0x1c3064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1c3068: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C3068u;
    {
        const bool branch_taken_0x1c3068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3068) {
            ctx->pc = 0x1C30A8u;
            goto label_1c30a8;
        }
    }
    ctx->pc = 0x1C3070u;
    // 0x1c3070: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C3070u;
    {
        const bool branch_taken_0x1c3070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3070u;
        // 0x1c3074: 0xae00007c  sw          $zero, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3070) {
            ctx->pc = 0x1C30A8u;
            goto label_1c30a8;
        }
    }
    ctx->pc = 0x1C3078u;
label_1c3078:
    // 0x1c3078: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3078u;
    SET_GPR_U32(ctx, 31, 0x1C3080u);
    ctx->pc = 0x1C307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3078u;
    // 0x1c307c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3078u, 0x1C3080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3080u;
label_1c3080:
    // 0x1c3080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3084: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3084u;
    SET_GPR_U32(ctx, 31, 0x1C308Cu);
    ctx->pc = 0x1C3088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3084u;
    // 0x1c3088: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3084u, 0x1C308Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C308Cu;
label_1c308c:
    // 0x1c308c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1c308cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1c3090: 0x28420078  slti        $v0, $v0, 0x78
    ctx->pc = 0x1c3090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1c3094: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3094u;
    {
        const bool branch_taken_0x1c3094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3094) {
            ctx->pc = 0x1C30A8u;
            goto label_1c30a8;
        }
    }
    ctx->pc = 0x1C309Cu;
    // 0x1c309c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C309Cu;
    {
        const bool branch_taken_0x1c309c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C309Cu;
        // 0x1c30a0: 0xae00007c  sw          $zero, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c309c) {
            ctx->pc = 0x1C30A8u;
            goto label_1c30a8;
        }
    }
    ctx->pc = 0x1C30A4u;
label_1c30a4:
    // 0x1c30a4: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x1c30a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_1c30a8:
    // 0x1c30a8: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1c30a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1c30ac:
    // 0x1c30ac: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C30ACu;
    {
        const bool branch_taken_0x1c30ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C30B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30ACu;
        // 0x1c30b0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30ac) {
            ctx->pc = 0x1C30DCu;
            goto label_1c30dc;
        }
    }
    ctx->pc = 0x1C30B4u;
    // 0x1c30b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c30b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30b8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c30b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c30bc: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c30bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c30c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c30c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c30c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c30c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c30c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30cc: 0x260a0068  addiu       $t2, $s0, 0x68
    ctx->pc = 0x1c30ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x1c30d0: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C30D0u;
    SET_GPR_U32(ctx, 31, 0x1C30D8u);
    ctx->pc = 0x1C30D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30D0u;
    // 0x1c30d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C30D0u, 0x1C30D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30D8u;
label_1c30d8:
    // 0x1c30d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c30d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c30dc:
    // 0x1c30dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c30dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30e0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c30e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c30e4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1c30e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c30e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c30e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30ec: 0x260a0060  addiu       $t2, $s0, 0x60
    ctx->pc = 0x1c30ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1c30f0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1c30f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30f4: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C30F4u;
    SET_GPR_U32(ctx, 31, 0x1C30FCu);
    ctx->pc = 0x1C30F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30F4u;
    // 0x1c30f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C30F4u, 0x1C30FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30FCu;
label_1c30fc:
    // 0x1c30fc: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1c30fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c3100: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C3100u;
    {
        const bool branch_taken_0x1c3100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3100u;
        // 0x1c3104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3100) {
            ctx->pc = 0x1C312Cu;
            goto label_1c312c;
        }
    }
    ctx->pc = 0x1C3108u;
    // 0x1c3108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c310c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c310cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3110: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C3110u;
    SET_GPR_U32(ctx, 31, 0x1C3118u);
    ctx->pc = 0x1C3114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3110u;
    // 0x1c3114: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C3110u, 0x1C3118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3118u;
label_1c3118:
    // 0x1c3118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c3118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c311c: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1C311Cu;
    SET_GPR_U32(ctx, 31, 0x1C3124u);
    ctx->pc = 0x1C3120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C311Cu;
    // 0x1c3120: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1C311Cu, 0x1C3124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3124u;
label_1c3124:
    // 0x1c3124: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3124u;
    {
        const bool branch_taken_0x1c3124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3124u;
        // 0x1c3128: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3124) {
            ctx->pc = 0x1C3148u;
            goto label_1c3148;
        }
    }
    ctx->pc = 0x1C312Cu;
label_1c312c:
    // 0x1c312c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3130: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C3130u;
    SET_GPR_U32(ctx, 31, 0x1C3138u);
    ctx->pc = 0x1C3134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3130u;
    // 0x1c3134: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C3130u, 0x1C3138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3138u;
label_1c3138:
    // 0x1c3138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c3138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c313c: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1C313Cu;
    SET_GPR_U32(ctx, 31, 0x1C3144u);
    ctx->pc = 0x1C3140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C313Cu;
    // 0x1c3140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1C313Cu, 0x1C3144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3144u;
label_1c3144:
    // 0x1c3144: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1c3144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1c3148:
    // 0x1c3148: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c3148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c314c: 0x10430025  beq         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C314Cu;
    {
        const bool branch_taken_0x1c314c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c314c) {
            ctx->pc = 0x1C31E4u;
            goto label_1c31e4;
        }
    }
    ctx->pc = 0x1C3154u;
    // 0x1c3154: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C3154u;
    {
        const bool branch_taken_0x1c3154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3154u;
        // 0x1c3158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3154) {
            ctx->pc = 0x1C31A8u;
            goto label_1c31a8;
        }
    }
    ctx->pc = 0x1C315Cu;
    // 0x1c315c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c315cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3160: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C3160u;
    SET_GPR_U32(ctx, 31, 0x1C3168u);
    ctx->pc = 0x1C3164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3160u;
    // 0x1c3164: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C3160u, 0x1C3168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3168u;
label_1c3168:
    // 0x1c3168: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C3168u;
    SET_GPR_U32(ctx, 31, 0x1C3170u);
    ctx->pc = 0x1C316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3168u;
    // 0x1c316c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C3168u, 0x1C3170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3170u;
label_1c3170:
    // 0x1c3170: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c3170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c3174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3178: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C3178u;
    SET_GPR_U32(ctx, 31, 0x1C3180u);
    ctx->pc = 0x1C317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3178u;
    // 0x1c317c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C3178u, 0x1C3180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3180u;
label_1c3180:
    // 0x1c3180: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C3180u;
    SET_GPR_U32(ctx, 31, 0x1C3188u);
    ctx->pc = 0x1C3184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3180u;
    // 0x1c3184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C3180u, 0x1C3188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3188u;
label_1c3188:
    // 0x1c3188: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x1c3188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c318c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c318cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3190: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C3190u;
    SET_GPR_U32(ctx, 31, 0x1C3198u);
    ctx->pc = 0x1C3194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3190u;
    // 0x1c3194: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C3190u, 0x1C3198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3198u;
label_1c3198:
    // 0x1c3198: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C3198u;
    SET_GPR_U32(ctx, 31, 0x1C31A0u);
    ctx->pc = 0x1C319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3198u;
    // 0x1c319c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C3198u, 0x1C31A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31A0u;
label_1c31a0:
    // 0x1c31a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C31A0u;
    {
        const bool branch_taken_0x1c31a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31A0u;
        // 0x1c31a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31a0) {
            ctx->pc = 0x1C31DCu;
            goto label_1c31dc;
        }
    }
    ctx->pc = 0x1C31A8u;
label_1c31a8:
    // 0x1c31a8: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c31a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c31ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31b0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C31B0u;
    SET_GPR_U32(ctx, 31, 0x1C31B8u);
    ctx->pc = 0x1C31B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31B0u;
    // 0x1c31b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C31B0u, 0x1C31B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31B8u;
label_1c31b8:
    // 0x1c31b8: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C31B8u;
    SET_GPR_U32(ctx, 31, 0x1C31C0u);
    ctx->pc = 0x1C31BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31B8u;
    // 0x1c31bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C31B8u, 0x1C31C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31C0u;
label_1c31c0:
    // 0x1c31c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c31c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c31c8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C31C8u;
    SET_GPR_U32(ctx, 31, 0x1C31D0u);
    ctx->pc = 0x1C31CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31C8u;
    // 0x1c31cc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C31C8u, 0x1C31D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31D0u;
label_1c31d0:
    // 0x1c31d0: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C31D0u;
    SET_GPR_U32(ctx, 31, 0x1C31D8u);
    ctx->pc = 0x1C31D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31D0u;
    // 0x1c31d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C31D0u, 0x1C31D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31D8u;
label_1c31d8:
    // 0x1c31d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c31dc:
    // 0x1c31dc: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1C31DCu;
    SET_GPR_U32(ctx, 31, 0x1C31E4u);
    ctx->pc = 0x1C31E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31DCu;
    // 0x1c31e0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1C31DCu, 0x1C31E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31E4u;
label_1c31e4:
    // 0x1c31e4: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c31e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c31e8: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1c31e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c31ec: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C31ECu;
    {
        const bool branch_taken_0x1c31ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C31F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31ECu;
        // 0x1c31f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31ec) {
            ctx->pc = 0x1C3230u;
            goto label_1c3230;
        }
    }
    ctx->pc = 0x1C31F4u;
    // 0x1c31f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31f8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C31F8u;
    SET_GPR_U32(ctx, 31, 0x1C3200u);
    ctx->pc = 0x1C31FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31F8u;
    // 0x1c31fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C31F8u, 0x1C3200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3200u;
label_1c3200:
    // 0x1c3200: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C3200u;
    SET_GPR_U32(ctx, 31, 0x1C3208u);
    ctx->pc = 0x1C3204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3200u;
    // 0x1c3204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C3200u, 0x1C3208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3208u;
label_1c3208:
    // 0x1c3208: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x1c3208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c320c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c320cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3210: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C3210u;
    SET_GPR_U32(ctx, 31, 0x1C3218u);
    ctx->pc = 0x1C3214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3210u;
    // 0x1c3214: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C3210u, 0x1C3218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3218u;
label_1c3218:
    // 0x1c3218: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C3218u;
    SET_GPR_U32(ctx, 31, 0x1C3220u);
    ctx->pc = 0x1C321Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3218u;
    // 0x1c321c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C3218u, 0x1C3220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3220u;
label_1c3220:
    // 0x1c3220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3224: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1C3224u;
    SET_GPR_U32(ctx, 31, 0x1C322Cu);
    ctx->pc = 0x1C3228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3224u;
    // 0x1c3228: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1C3224u, 0x1C322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C322Cu;
label_1c322c:
    // 0x1c322c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c322cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3230:
    // 0x1c3230: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C3230u;
    SET_GPR_U32(ctx, 31, 0x1C3238u);
    ctx->pc = 0x1C3234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3230u;
    // 0x1c3234: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C3230u, 0x1C3238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3238u;
label_1c3238:
    // 0x1c3238: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C3238u;
    {
        const bool branch_taken_0x1c3238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3238u;
        // 0x1c323c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3238) {
            ctx->pc = 0x1C32B4u;
            goto label_1c32b4;
        }
    }
    ctx->pc = 0x1C3240u;
    // 0x1c3240: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1c3240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c3244: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3244u;
    {
        const bool branch_taken_0x1c3244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3244u;
        // 0x1c3248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3244) {
            ctx->pc = 0x1C3260u;
            goto label_1c3260;
        }
    }
    ctx->pc = 0x1C324Cu;
    // 0x1c324c: 0xc0711c8  jal         func_1C4720
    ctx->pc = 0x1C324Cu;
    SET_GPR_U32(ctx, 31, 0x1C3254u);
    ctx->pc = 0x1C3250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C324Cu;
    // 0x1c3250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4720u, 0x1C324Cu, 0x1C3254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3254u;
label_1c3254:
    // 0x1c3254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3258: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C3258u;
    {
        const bool branch_taken_0x1c3258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3258u;
        // 0x1c325c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3258) {
            ctx->pc = 0x1C32B0u;
            goto label_1c32b0;
        }
    }
    ctx->pc = 0x1C3260u;
label_1c3260:
    // 0x1c3260: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1c3264: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C3264u;
    {
        const bool branch_taken_0x1c3264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3264) {
            ctx->pc = 0x1C32ACu;
            goto label_1c32ac;
        }
    }
    ctx->pc = 0x1C326Cu;
    // 0x1c326c: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1c326cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c3270: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3270u;
    {
        const bool branch_taken_0x1c3270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3270u;
        // 0x1c3274: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3270) {
            ctx->pc = 0x1C3294u;
            goto label_1c3294;
        }
    }
    ctx->pc = 0x1C3278u;
    // 0x1c3278: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c327c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c327cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3280: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c3284: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C3284u;
    SET_GPR_U32(ctx, 31, 0x1C328Cu);
    ctx->pc = 0x1C3288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3284u;
    // 0x1c3288: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C3284u, 0x1C328Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C328Cu;
label_1c328c:
    // 0x1c328c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C328Cu;
    {
        const bool branch_taken_0x1c328c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c328c) {
            ctx->pc = 0x1C32B0u;
            goto label_1c32b0;
        }
    }
    ctx->pc = 0x1C3294u;
label_1c3294:
    // 0x1c3294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3298: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c329c: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C329Cu;
    SET_GPR_U32(ctx, 31, 0x1C32A4u);
    ctx->pc = 0x1C32A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C329Cu;
    // 0x1c32a0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C329Cu, 0x1C32A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32A4u;
label_1c32a4:
    // 0x1c32a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C32A4u;
    {
        const bool branch_taken_0x1c32a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c32a4) {
            ctx->pc = 0x1C32B0u;
            goto label_1c32b0;
        }
    }
    ctx->pc = 0x1C32ACu;
label_1c32ac:
    // 0x1c32ac: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x1c32acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_1c32b0:
    // 0x1c32b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c32b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c32b4:
    // 0x1c32b4: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C32B4u;
    SET_GPR_U32(ctx, 31, 0x1C32BCu);
    ctx->pc = 0x1C32B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32B4u;
    // 0x1c32b8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C32B4u, 0x1C32BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32BCu;
label_1c32bc:
    // 0x1c32bc: 0x10400452  beqz        $v0, . + 4 + (0x452 << 2)
    ctx->pc = 0x1C32BCu;
    {
        const bool branch_taken_0x1c32bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32BCu;
        // 0x1c32c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32bc) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C32C4u;
    // 0x1c32c4: 0xc0711c8  jal         func_1C4720
    ctx->pc = 0x1C32C4u;
    SET_GPR_U32(ctx, 31, 0x1C32CCu);
    ctx->pc = 0x1C32C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32C4u;
    // 0x1c32c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4720u, 0x1C32C4u, 0x1C32CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32CCu;
label_1c32cc:
    // 0x1c32cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c32d0: 0x1000044d  b           . + 4 + (0x44D << 2)
    ctx->pc = 0x1C32D0u;
    {
        const bool branch_taken_0x1c32d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32D0u;
        // 0x1c32d4: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32d0) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C32D8u;
label_1c32d8:
    // 0x1c32d8: 0x92020264  lbu         $v0, 0x264($s0)
    ctx->pc = 0x1c32d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1c32dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C32DCu;
    {
        const bool branch_taken_0x1c32dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C32E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32DCu;
        // 0x1c32e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32dc) {
            ctx->pc = 0x1C32FCu;
            goto label_1c32fc;
        }
    }
    ctx->pc = 0x1C32E4u;
    // 0x1c32e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c32e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32e8: 0xc071160  jal         func_1C4580
    ctx->pc = 0x1C32E8u;
    SET_GPR_U32(ctx, 31, 0x1C32F0u);
    ctx->pc = 0x1C32ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32E8u;
    // 0x1c32ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4580u, 0x1C32E8u, 0x1C32F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32F0u;
label_1c32f0:
    // 0x1c32f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c32f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c32f4: 0xa2020264  sb          $v0, 0x264($s0)
    ctx->pc = 0x1c32f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 612), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c32f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c32f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c32fc:
    // 0x1c32fc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C32FCu;
    SET_GPR_U32(ctx, 31, 0x1C3304u);
    ctx->pc = 0x1C3300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32FCu;
    // 0x1c3300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C32FCu, 0x1C3304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3304u;
label_1c3304:
    // 0x1c3304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3308: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3308u;
    SET_GPR_U32(ctx, 31, 0x1C3310u);
    ctx->pc = 0x1C330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3308u;
    // 0x1c330c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3308u, 0x1C3310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3310u;
label_1c3310:
    // 0x1c3310: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1c3310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1c3314: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x1c3314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1c3318: 0x10620070  beq         $v1, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x1C3318u;
    {
        const bool branch_taken_0x1c3318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3318u;
        // 0x1c331c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3318) {
            ctx->pc = 0x1C34DCu;
            goto label_1c34dc;
        }
    }
    ctx->pc = 0x1C3320u;
    // 0x1c3320: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1c3320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c3324: 0x10620069  beq         $v1, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1C3324u;
    {
        const bool branch_taken_0x1c3324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3324u;
        // 0x1c3328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3324) {
            ctx->pc = 0x1C34CCu;
            goto label_1c34cc;
        }
    }
    ctx->pc = 0x1C332Cu;
    // 0x1c332c: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c3330: 0x1062005f  beq         $v1, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1C3330u;
    {
        const bool branch_taken_0x1c3330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3330u;
        // 0x1c3334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3330) {
            ctx->pc = 0x1C34B0u;
            goto label_1c34b0;
        }
    }
    ctx->pc = 0x1C3338u;
    // 0x1c3338: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c3338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c333c: 0x10650058  beq         $v1, $a1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1C333Cu;
    {
        const bool branch_taken_0x1c333c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C3340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C333Cu;
        // 0x1c3340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c333c) {
            ctx->pc = 0x1C34A0u;
            goto label_1c34a0;
        }
    }
    ctx->pc = 0x1C3344u;
    // 0x1c3344: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1c3344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1c3348: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C3348u;
    {
        const bool branch_taken_0x1c3348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3348u;
        // 0x1c334c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3348) {
            ctx->pc = 0x1C3484u;
            goto label_1c3484;
        }
    }
    ctx->pc = 0x1C3350u;
    // 0x1c3350: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1c3350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c3354: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1C3354u;
    {
        const bool branch_taken_0x1c3354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3354u;
        // 0x1c3358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3354) {
            ctx->pc = 0x1C3468u;
            goto label_1c3468;
        }
    }
    ctx->pc = 0x1C335Cu;
    // 0x1c335c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1c335cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1c3360: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1C3360u;
    {
        const bool branch_taken_0x1c3360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3360u;
        // 0x1c3364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3360) {
            ctx->pc = 0x1C344Cu;
            goto label_1c344c;
        }
    }
    ctx->pc = 0x1C3368u;
    // 0x1c3368: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x1c3368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1c336c: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1C336Cu;
    {
        const bool branch_taken_0x1c336c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C336Cu;
        // 0x1c3370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c336c) {
            ctx->pc = 0x1C342Cu;
            goto label_1c342c;
        }
    }
    ctx->pc = 0x1C3374u;
    // 0x1c3374: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1c3374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c3378: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C3378u;
    {
        const bool branch_taken_0x1c3378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3378u;
        // 0x1c337c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3378) {
            ctx->pc = 0x1C3430u;
            goto label_1c3430;
        }
    }
    ctx->pc = 0x1C3380u;
    // 0x1c3380: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x1c3380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1c3384: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C3384u;
    {
        const bool branch_taken_0x1c3384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3384u;
        // 0x1c3388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3384) {
            ctx->pc = 0x1C3410u;
            goto label_1c3410;
        }
    }
    ctx->pc = 0x1C338Cu;
    // 0x1c338c: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1c338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1c3390: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C3390u;
    {
        const bool branch_taken_0x1c3390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3390u;
        // 0x1c3394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3390) {
            ctx->pc = 0x1C33F4u;
            goto label_1c33f4;
        }
    }
    ctx->pc = 0x1C3398u;
    // 0x1c3398: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c3398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c339c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C339Cu;
    {
        const bool branch_taken_0x1c339c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C339Cu;
        // 0x1c33a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c339c) {
            ctx->pc = 0x1C33E4u;
            goto label_1c33e4;
        }
    }
    ctx->pc = 0x1C33A4u;
    // 0x1c33a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c33a8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C33A8u;
    {
        const bool branch_taken_0x1c33a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33A8u;
        // 0x1c33ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33a8) {
            ctx->pc = 0x1C33D4u;
            goto label_1c33d4;
        }
    }
    ctx->pc = 0x1C33B0u;
    // 0x1c33b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c33b4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C33B4u;
    {
        const bool branch_taken_0x1c33b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C33B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33B4u;
        // 0x1c33b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33b4) {
            ctx->pc = 0x1C33C4u;
            goto label_1c33c4;
        }
    }
    ctx->pc = 0x1C33BCu;
    // 0x1c33bc: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1C33BCu;
    {
        const bool branch_taken_0x1c33bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33BCu;
        // 0x1c33c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33bc) {
            ctx->pc = 0x1C34F4u;
            goto label_1c34f4;
        }
    }
    ctx->pc = 0x1C33C4u;
label_1c33c4:
    // 0x1c33c4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C33C4u;
    SET_GPR_U32(ctx, 31, 0x1C33CCu);
    ctx->pc = 0x1C33C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33C4u;
    // 0x1c33c8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C33C4u, 0x1C33CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33CCu;
label_1c33cc:
    // 0x1c33cc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1C33CCu;
    {
        const bool branch_taken_0x1c33cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c33cc) {
            ctx->pc = 0x1C34F0u;
            goto label_1c34f0;
        }
    }
    ctx->pc = 0x1C33D4u;
label_1c33d4:
    // 0x1c33d4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C33D4u;
    SET_GPR_U32(ctx, 31, 0x1C33DCu);
    ctx->pc = 0x1C33D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33D4u;
    // 0x1c33d8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C33D4u, 0x1C33DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33DCu;
label_1c33dc:
    // 0x1c33dc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1C33DCu;
    {
        const bool branch_taken_0x1c33dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c33dc) {
            ctx->pc = 0x1C34F0u;
            goto label_1c34f0;
        }
    }
    ctx->pc = 0x1C33E4u;
label_1c33e4:
    // 0x1c33e4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C33E4u;
    SET_GPR_U32(ctx, 31, 0x1C33ECu);
    ctx->pc = 0x1C33E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33E4u;
    // 0x1c33e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C33E4u, 0x1C33ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33ECu;
label_1c33ec:
    // 0x1c33ec: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1C33ECu;
    {
        const bool branch_taken_0x1c33ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c33ec) {
            ctx->pc = 0x1C34F0u;
            goto label_1c34f0;
        }
    }
    ctx->pc = 0x1C33F4u;
label_1c33f4:
    // 0x1c33f4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C33F4u;
    SET_GPR_U32(ctx, 31, 0x1C33FCu);
    ctx->pc = 0x1C33F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33F4u;
    // 0x1c33f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C33F4u, 0x1C33FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33FCu;
label_1c33fc:
    // 0x1c33fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c33fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3400: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3400u;
    SET_GPR_U32(ctx, 31, 0x1C3408u);
    ctx->pc = 0x1C3404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3400u;
    // 0x1c3404: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3400u, 0x1C3408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3408u;
label_1c3408:
    // 0x1c3408: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1C3408u;
    {
        const bool branch_taken_0x1c3408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3408) {
            ctx->pc = 0x1C34F0u;
            goto label_1c34f0;
        }
    }
    ctx->pc = 0x1C3410u;
label_1c3410:
    // 0x1c3410: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3410u;
    SET_GPR_U32(ctx, 31, 0x1C3418u);
    ctx->pc = 0x1C3414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3410u;
    // 0x1c3414: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3410u, 0x1C3418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3418u;
label_1c3418:
    // 0x1c3418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c341c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C341Cu;
    SET_GPR_U32(ctx, 31, 0x1C3424u);
    ctx->pc = 0x1C3420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C341Cu;
    // 0x1c3420: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C341Cu, 0x1C3424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3424u;
label_1c3424:
    // 0x1c3424: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1C3424u;
    {
        const bool branch_taken_0x1c3424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3424) {
            ctx->pc = 0x1C34F0u;
            goto label_1c34f0;
        }
    }
    ctx->pc = 0x1C342Cu;
label_1c342c:
    // 0x1c342c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1c342cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c3430:
    // 0x1c3430: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3430u;
    SET_GPR_U32(ctx, 31, 0x1C3438u);
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3430u, 0x1C3438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3438u;
label_1c3438:
    // 0x1c3438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c343c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C343Cu;
    SET_GPR_U32(ctx, 31, 0x1C3444u);
    ctx->pc = 0x1C3440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C343Cu;
    // 0x1c3440: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C343Cu, 0x1C3444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3444u;
label_1c3444:
    // 0x1c3444: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1C3444u;
    {
        const bool branch_taken_0x1c3444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3444) {
            ctx->pc = 0x1C34F0u;
            goto label_1c34f0;
        }
    }
    ctx->pc = 0x1C344Cu;
label_1c344c:
    // 0x1c344c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C344Cu;
    SET_GPR_U32(ctx, 31, 0x1C3454u);
    ctx->pc = 0x1C3450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C344Cu;
    // 0x1c3450: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C344Cu, 0x1C3454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3454u;
label_1c3454:
    // 0x1c3454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3458: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3458u;
    SET_GPR_U32(ctx, 31, 0x1C3460u);
    ctx->pc = 0x1C345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3458u;
    // 0x1c345c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3458u, 0x1C3460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3460u;
label_1c3460:
    // 0x1c3460: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1C3460u;
    {
        const bool branch_taken_0x1c3460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3460) {
            ctx->pc = 0x1C34F0u;
            goto label_1c34f0;
        }
    }
    ctx->pc = 0x1C3468u;
label_1c3468:
    // 0x1c3468: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3468u;
    SET_GPR_U32(ctx, 31, 0x1C3470u);
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3468u, 0x1C3470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3470u;
label_1c3470:
    // 0x1c3470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3474: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3474u;
    SET_GPR_U32(ctx, 31, 0x1C347Cu);
    ctx->pc = 0x1C3478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3474u;
    // 0x1c3478: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3474u, 0x1C347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C347Cu;
label_1c347c:
    // 0x1c347c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C347Cu;
    {
        const bool branch_taken_0x1c347c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c347c) {
            ctx->pc = 0x1C34F0u;
            goto label_1c34f0;
        }
    }
    ctx->pc = 0x1C3484u;
label_1c3484:
    // 0x1c3484: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3484u;
    SET_GPR_U32(ctx, 31, 0x1C348Cu);
    ctx->pc = 0x1C3488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3484u;
    // 0x1c3488: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3484u, 0x1C348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C348Cu;
label_1c348c:
    // 0x1c348c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c348cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3490: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3490u;
    SET_GPR_U32(ctx, 31, 0x1C3498u);
    ctx->pc = 0x1C3494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3490u;
    // 0x1c3494: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3490u, 0x1C3498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3498u;
label_1c3498:
    // 0x1c3498: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C3498u;
    {
        const bool branch_taken_0x1c3498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3498) {
            ctx->pc = 0x1C34F0u;
            goto label_1c34f0;
        }
    }
    ctx->pc = 0x1C34A0u;
label_1c34a0:
    // 0x1c34a0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C34A0u;
    SET_GPR_U32(ctx, 31, 0x1C34A8u);
    ctx->pc = 0x1C34A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34A0u;
    // 0x1c34a4: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C34A0u, 0x1C34A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34A8u;
label_1c34a8:
    // 0x1c34a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C34A8u;
    {
        const bool branch_taken_0x1c34a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c34a8) {
            ctx->pc = 0x1C34F0u;
            goto label_1c34f0;
        }
    }
    ctx->pc = 0x1C34B0u;
label_1c34b0:
    // 0x1c34b0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C34B0u;
    SET_GPR_U32(ctx, 31, 0x1C34B8u);
    ctx->pc = 0x1C34B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34B0u;
    // 0x1c34b4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C34B0u, 0x1C34B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34B8u;
label_1c34b8:
    // 0x1c34b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c34b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c34bc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C34BCu;
    SET_GPR_U32(ctx, 31, 0x1C34C4u);
    ctx->pc = 0x1C34C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34BCu;
    // 0x1c34c0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C34BCu, 0x1C34C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34C4u;
label_1c34c4:
    // 0x1c34c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C34C4u;
    {
        const bool branch_taken_0x1c34c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c34c4) {
            ctx->pc = 0x1C34F0u;
            goto label_1c34f0;
        }
    }
    ctx->pc = 0x1C34CCu;
label_1c34cc:
    // 0x1c34cc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C34CCu;
    SET_GPR_U32(ctx, 31, 0x1C34D4u);
    ctx->pc = 0x1C34D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34CCu;
    // 0x1c34d0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C34CCu, 0x1C34D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34D4u;
label_1c34d4:
    // 0x1c34d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C34D4u;
    {
        const bool branch_taken_0x1c34d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c34d4) {
            ctx->pc = 0x1C34F0u;
            goto label_1c34f0;
        }
    }
    ctx->pc = 0x1C34DCu;
label_1c34dc:
    // 0x1c34dc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C34DCu;
    SET_GPR_U32(ctx, 31, 0x1C34E4u);
    ctx->pc = 0x1C34E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34DCu;
    // 0x1c34e0: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C34DCu, 0x1C34E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34E4u;
label_1c34e4:
    // 0x1c34e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c34e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c34e8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C34E8u;
    SET_GPR_U32(ctx, 31, 0x1C34F0u);
    ctx->pc = 0x1C34ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34E8u;
    // 0x1c34ec: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C34E8u, 0x1C34F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34F0u;
label_1c34f0:
    // 0x1c34f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c34f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c34f4:
    // 0x1c34f4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c34f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c34f8: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c34f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c34fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c34fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3500: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c3500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3504: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c3504u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3508: 0x260a0070  addiu       $t2, $s0, 0x70
    ctx->pc = 0x1c3508u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1c350c: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C350Cu;
    SET_GPR_U32(ctx, 31, 0x1C3514u);
    ctx->pc = 0x1C3510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C350Cu;
    // 0x1c3510: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C350Cu, 0x1C3514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3514u;
label_1c3514:
    // 0x1c3514: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x1c3514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c3518: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1c3518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1c351c: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C351Cu;
    {
        const bool branch_taken_0x1c351c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C351Cu;
        // 0x1c3520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c351c) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C3524u;
    // 0x1c3524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3528: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C3528u;
    SET_GPR_U32(ctx, 31, 0x1C3530u);
    ctx->pc = 0x1C352Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3528u;
    // 0x1c352c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C3528u, 0x1C3530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3530u;
label_1c3530:
    // 0x1c3530: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C3530u;
    SET_GPR_U32(ctx, 31, 0x1C3538u);
    ctx->pc = 0x1C3534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3530u;
    // 0x1c3534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C3530u, 0x1C3538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3538u;
label_1c3538:
    // 0x1c3538: 0x8e060074  lw          $a2, 0x74($s0)
    ctx->pc = 0x1c3538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1c353c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3540: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C3540u;
    SET_GPR_U32(ctx, 31, 0x1C3548u);
    ctx->pc = 0x1C3544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3540u;
    // 0x1c3544: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C3540u, 0x1C3548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3548u;
label_1c3548:
    // 0x1c3548: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C3548u;
    SET_GPR_U32(ctx, 31, 0x1C3550u);
    ctx->pc = 0x1C354Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3548u;
    // 0x1c354c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C3548u, 0x1C3550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3550u;
label_1c3550:
    // 0x1c3550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3554: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1C3554u;
    SET_GPR_U32(ctx, 31, 0x1C355Cu);
    ctx->pc = 0x1C3558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3554u;
    // 0x1c3558: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1C3554u, 0x1C355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C355Cu;
label_1c355c:
    // 0x1c355c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c355cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3560:
    // 0x1c3560: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C3560u;
    SET_GPR_U32(ctx, 31, 0x1C3568u);
    ctx->pc = 0x1C3564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3560u;
    // 0x1c3564: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C3560u, 0x1C3568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3568u;
label_1c3568:
    // 0x1c3568: 0x104003a7  beqz        $v0, . + 4 + (0x3A7 << 2)
    ctx->pc = 0x1C3568u;
    {
        const bool branch_taken_0x1c3568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3568u;
        // 0x1c356c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3568) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3570u;
    // 0x1c3570: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C3570u;
    SET_GPR_U32(ctx, 31, 0x1C3578u);
    ctx->pc = 0x1C3574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3570u;
    // 0x1c3574: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C3570u, 0x1C3578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3578u;
label_1c3578:
    // 0x1c3578: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1c3578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c357c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3580: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3580u;
    {
        const bool branch_taken_0x1c3580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3580u;
        // 0x1c3584: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3580) {
            ctx->pc = 0x1C35A0u;
            goto label_1c35a0;
        }
    }
    ctx->pc = 0x1C3588u;
    // 0x1c3588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c358c: 0xc071160  jal         func_1C4580
    ctx->pc = 0x1C358Cu;
    SET_GPR_U32(ctx, 31, 0x1C3594u);
    ctx->pc = 0x1C3590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C358Cu;
    // 0x1c3590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4580u, 0x1C358Cu, 0x1C3594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3594u;
label_1c3594:
    // 0x1c3594: 0xa2000264  sb          $zero, 0x264($s0)
    ctx->pc = 0x1c3594u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 612), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3598: 0x1000039b  b           . + 4 + (0x39B << 2)
    ctx->pc = 0x1C3598u;
    {
        const bool branch_taken_0x1c3598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3598u;
        // 0x1c359c: 0xae00007c  sw          $zero, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3598) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C35A0u;
label_1c35a0:
    // 0x1c35a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c35a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c35a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35a8: 0xc071160  jal         func_1C4580
    ctx->pc = 0x1C35A8u;
    SET_GPR_U32(ctx, 31, 0x1C35B0u);
    ctx->pc = 0x1C35ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C35A8u;
    // 0x1c35ac: 0xac20f5e8  sw          $zero, -0xA18($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964712), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4580u, 0x1C35A8u, 0x1C35B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C35B0u;
label_1c35b0:
    // 0x1c35b0: 0xa2000264  sb          $zero, 0x264($s0)
    ctx->pc = 0x1c35b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 612), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c35b4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1c35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c35b8: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1c35b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1c35bc: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1C35BCu;
    {
        const bool branch_taken_0x1c35bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35BCu;
        // 0x1c35c0: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35bc) {
            ctx->pc = 0x1C3688u;
            goto label_1c3688;
        }
    }
    ctx->pc = 0x1C35C4u;
    // 0x1c35c4: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x1c35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1c35c8: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C35C8u;
    {
        const bool branch_taken_0x1c35c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C35CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35C8u;
        // 0x1c35cc: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35c8) {
            ctx->pc = 0x1C3680u;
            goto label_1c3680;
        }
    }
    ctx->pc = 0x1C35D0u;
    // 0x1c35d0: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1c35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1c35d4: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C35D4u;
    {
        const bool branch_taken_0x1c35d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C35D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35D4u;
        // 0x1c35d8: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35d4) {
            ctx->pc = 0x1C367Cu;
            goto label_1c367c;
        }
    }
    ctx->pc = 0x1C35DCu;
    // 0x1c35dc: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1C35DCu;
    {
        const bool branch_taken_0x1c35dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c35dc) {
            ctx->pc = 0x1C367Cu;
            goto label_1c367c;
        }
    }
    ctx->pc = 0x1C35E4u;
    // 0x1c35e4: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1c35e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c35e8: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C35E8u;
    {
        const bool branch_taken_0x1c35e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C35ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35E8u;
        // 0x1c35ec: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35e8) {
            ctx->pc = 0x1C367Cu;
            goto label_1c367c;
        }
    }
    ctx->pc = 0x1C35F0u;
    // 0x1c35f0: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C35F0u;
    {
        const bool branch_taken_0x1c35f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c35f0) {
            ctx->pc = 0x1C367Cu;
            goto label_1c367c;
        }
    }
    ctx->pc = 0x1C35F8u;
    // 0x1c35f8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1c35f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c35fc: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C35FCu;
    {
        const bool branch_taken_0x1c35fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35FCu;
        // 0x1c3600: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35fc) {
            ctx->pc = 0x1C3674u;
            goto label_1c3674;
        }
    }
    ctx->pc = 0x1C3604u;
    // 0x1c3604: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c3604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c3608: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C3608u;
    {
        const bool branch_taken_0x1c3608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3608u;
        // 0x1c360c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3608) {
            ctx->pc = 0x1C3670u;
            goto label_1c3670;
        }
    }
    ctx->pc = 0x1C3610u;
    // 0x1c3610: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C3610u;
    {
        const bool branch_taken_0x1c3610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3610) {
            ctx->pc = 0x1C3670u;
            goto label_1c3670;
        }
    }
    ctx->pc = 0x1C3618u;
    // 0x1c3618: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1c3618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1c361c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C361Cu;
    {
        const bool branch_taken_0x1c361c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C361Cu;
        // 0x1c3620: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c361c) {
            ctx->pc = 0x1C3670u;
            goto label_1c3670;
        }
    }
    ctx->pc = 0x1C3624u;
    // 0x1c3624: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C3624u;
    {
        const bool branch_taken_0x1c3624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3624) {
            ctx->pc = 0x1C3670u;
            goto label_1c3670;
        }
    }
    ctx->pc = 0x1C362Cu;
    // 0x1c362c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c3630: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C3630u;
    {
        const bool branch_taken_0x1c3630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3630u;
        // 0x1c3634: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3630) {
            ctx->pc = 0x1C3668u;
            goto label_1c3668;
        }
    }
    ctx->pc = 0x1C3638u;
    // 0x1c3638: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c363c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C363Cu;
    {
        const bool branch_taken_0x1c363c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C363Cu;
        // 0x1c3640: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c363c) {
            ctx->pc = 0x1C3660u;
            goto label_1c3660;
        }
    }
    ctx->pc = 0x1C3644u;
    // 0x1c3644: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3648: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3648u;
    {
        const bool branch_taken_0x1c3648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3648u;
        // 0x1c364c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3648) {
            ctx->pc = 0x1C3658u;
            goto label_1c3658;
        }
    }
    ctx->pc = 0x1C3650u;
    // 0x1c3650: 0x1000036d  b           . + 4 + (0x36D << 2)
    ctx->pc = 0x1C3650u;
    {
        const bool branch_taken_0x1c3650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3650) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3658u;
label_1c3658:
    // 0x1c3658: 0x1000036b  b           . + 4 + (0x36B << 2)
    ctx->pc = 0x1C3658u;
    {
        const bool branch_taken_0x1c3658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3658u;
        // 0x1c365c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3658) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3660u;
label_1c3660:
    // 0x1c3660: 0x10000369  b           . + 4 + (0x369 << 2)
    ctx->pc = 0x1C3660u;
    {
        const bool branch_taken_0x1c3660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3660u;
        // 0x1c3664: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3660) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3668u;
label_1c3668:
    // 0x1c3668: 0x10000367  b           . + 4 + (0x367 << 2)
    ctx->pc = 0x1C3668u;
    {
        const bool branch_taken_0x1c3668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3668u;
        // 0x1c366c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3668) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3670u;
label_1c3670:
    // 0x1c3670: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c3670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c3674:
    // 0x1c3674: 0x10000364  b           . + 4 + (0x364 << 2)
    ctx->pc = 0x1C3674u;
    {
        const bool branch_taken_0x1c3674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3674u;
        // 0x1c3678: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3674) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C367Cu;
label_1c367c:
    // 0x1c367c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1c367cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_1c3680:
    // 0x1c3680: 0x10000361  b           . + 4 + (0x361 << 2)
    ctx->pc = 0x1C3680u;
    {
        const bool branch_taken_0x1c3680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3680u;
        // 0x1c3684: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3680) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3688u;
label_1c3688:
    // 0x1c3688: 0x1000035f  b           . + 4 + (0x35F << 2)
    ctx->pc = 0x1C3688u;
    {
        const bool branch_taken_0x1c3688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3688u;
        // 0x1c368c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3688) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3690u;
label_1c3690:
    // 0x1c3690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3694: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3694u;
    SET_GPR_U32(ctx, 31, 0x1C369Cu);
    ctx->pc = 0x1C3698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3694u;
    // 0x1c3698: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3694u, 0x1C369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C369Cu;
label_1c369c:
    // 0x1c369c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c369cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36a0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C36A0u;
    SET_GPR_U32(ctx, 31, 0x1C36A8u);
    ctx->pc = 0x1C36A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C36A0u;
    // 0x1c36a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C36A0u, 0x1C36A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36A8u;
label_1c36a8:
    // 0x1c36a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c36a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36ac: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C36ACu;
    SET_GPR_U32(ctx, 31, 0x1C36B4u);
    ctx->pc = 0x1C36B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C36ACu;
    // 0x1c36b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C36ACu, 0x1C36B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36B4u;
label_1c36b4:
    // 0x1c36b4: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C36B4u;
    SET_GPR_U32(ctx, 31, 0x1C36BCu);
    ctx->pc = 0x1C36B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C36B4u;
    // 0x1c36b8: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C36B4u, 0x1C36BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36BCu;
label_1c36bc:
    // 0x1c36bc: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x1c36bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1c36c0: 0x10000351  b           . + 4 + (0x351 << 2)
    ctx->pc = 0x1C36C0u;
    {
        const bool branch_taken_0x1c36c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C36C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C36C0u;
        // 0x1c36c4: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c36c0) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C36C8u;
label_1c36c8:
    // 0x1c36c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c36c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36cc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C36CCu;
    SET_GPR_U32(ctx, 31, 0x1C36D4u);
    ctx->pc = 0x1C36D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C36CCu;
    // 0x1c36d0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C36CCu, 0x1C36D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36D4u;
label_1c36d4:
    // 0x1c36d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c36d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36d8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C36D8u;
    SET_GPR_U32(ctx, 31, 0x1C36E0u);
    ctx->pc = 0x1C36DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C36D8u;
    // 0x1c36dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C36D8u, 0x1C36E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36E0u;
label_1c36e0:
    // 0x1c36e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c36e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36e4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C36E4u;
    SET_GPR_U32(ctx, 31, 0x1C36ECu);
    ctx->pc = 0x1C36E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C36E4u;
    // 0x1c36e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C36E4u, 0x1C36ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36ECu;
label_1c36ec:
    // 0x1c36ec: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C36ECu;
    SET_GPR_U32(ctx, 31, 0x1C36F4u);
    ctx->pc = 0x1C36F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C36ECu;
    // 0x1c36f0: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C36ECu, 0x1C36F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36F4u;
label_1c36f4:
    // 0x1c36f4: 0x14400344  bnez        $v0, . + 4 + (0x344 << 2)
    ctx->pc = 0x1C36F4u;
    {
        const bool branch_taken_0x1c36f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c36f4) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C36FCu;
    // 0x1c36fc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1c36fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c3700: 0x10000341  b           . + 4 + (0x341 << 2)
    ctx->pc = 0x1C3700u;
    {
        const bool branch_taken_0x1c3700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3700u;
        // 0x1c3704: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3700) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3708u;
label_1c3708:
    // 0x1c3708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c370c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C370Cu;
    SET_GPR_U32(ctx, 31, 0x1C3714u);
    ctx->pc = 0x1C3710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C370Cu;
    // 0x1c3710: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C370Cu, 0x1C3714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3714u;
label_1c3714:
    // 0x1c3714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3718: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3718u;
    SET_GPR_U32(ctx, 31, 0x1C3720u);
    ctx->pc = 0x1C371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3718u;
    // 0x1c371c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3718u, 0x1C3720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3720u;
label_1c3720:
    // 0x1c3720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3724: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3724u;
    SET_GPR_U32(ctx, 31, 0x1C372Cu);
    ctx->pc = 0x1C3728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3724u;
    // 0x1c3728: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3724u, 0x1C372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C372Cu;
label_1c372c:
    // 0x1c372c: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x1c372cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c3730: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c3730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3734: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3734u;
    {
        const bool branch_taken_0x1c3734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3734u;
        // 0x1c3738: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3734) {
            ctx->pc = 0x1C3748u;
            goto label_1c3748;
        }
    }
    ctx->pc = 0x1C373Cu;
    // 0x1c373c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c3740: 0x10000331  b           . + 4 + (0x331 << 2)
    ctx->pc = 0x1C3740u;
    {
        const bool branch_taken_0x1c3740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3740u;
        // 0x1c3744: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3740) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3748u;
label_1c3748:
    // 0x1c3748: 0x1000032f  b           . + 4 + (0x32F << 2)
    ctx->pc = 0x1C3748u;
    {
        const bool branch_taken_0x1c3748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3748u;
        // 0x1c374c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3748) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3750u;
label_1c3750:
    // 0x1c3750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3754: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3754u;
    SET_GPR_U32(ctx, 31, 0x1C375Cu);
    ctx->pc = 0x1C3758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3754u;
    // 0x1c3758: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3754u, 0x1C375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C375Cu;
label_1c375c:
    // 0x1c375c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c375cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3760: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3760u;
    SET_GPR_U32(ctx, 31, 0x1C3768u);
    ctx->pc = 0x1C3764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3760u;
    // 0x1c3764: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3760u, 0x1C3768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3768u;
label_1c3768:
    // 0x1c3768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c376c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C376Cu;
    SET_GPR_U32(ctx, 31, 0x1C3774u);
    ctx->pc = 0x1C3770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C376Cu;
    // 0x1c3770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C376Cu, 0x1C3774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3774u;
label_1c3774:
    // 0x1c3774: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c3774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c3778: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3778u;
    {
        const bool branch_taken_0x1c3778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3778u;
        // 0x1c377c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3778) {
            ctx->pc = 0x1C378Cu;
            goto label_1c378c;
        }
    }
    ctx->pc = 0x1C3780u;
    // 0x1c3780: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c3780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c3784: 0x10000320  b           . + 4 + (0x320 << 2)
    ctx->pc = 0x1C3784u;
    {
        const bool branch_taken_0x1c3784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3784u;
        // 0x1c3788: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3784) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C378Cu;
label_1c378c:
    // 0x1c378c: 0x1000031e  b           . + 4 + (0x31E << 2)
    ctx->pc = 0x1C378Cu;
    {
        const bool branch_taken_0x1c378c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C378Cu;
        // 0x1c3790: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c378c) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3794u;
label_1c3794:
    // 0x1c3794: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C3794u;
    SET_GPR_U32(ctx, 31, 0x1C379Cu);
    ctx->pc = 0x1C3798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3794u;
    // 0x1c3798: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C3794u, 0x1C379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C379Cu;
label_1c379c:
    // 0x1c379c: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1c379cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c37a0: 0x10000319  b           . + 4 + (0x319 << 2)
    ctx->pc = 0x1C37A0u;
    {
        const bool branch_taken_0x1c37a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37A0u;
        // 0x1c37a4: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37a0) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C37A8u;
label_1c37a8:
    // 0x1c37a8: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C37A8u;
    SET_GPR_U32(ctx, 31, 0x1C37B0u);
    ctx->pc = 0x1C37ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C37A8u;
    // 0x1c37ac: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C37A8u, 0x1C37B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C37B0u;
label_1c37b0:
    // 0x1c37b0: 0x14400315  bnez        $v0, . + 4 + (0x315 << 2)
    ctx->pc = 0x1C37B0u;
    {
        const bool branch_taken_0x1c37b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C37B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37B0u;
        // 0x1c37b4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37b0) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C37B8u;
    // 0x1c37b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c37bc: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x1c37bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x1c37c0: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x1c37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c37c4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C37C4u;
    {
        const bool branch_taken_0x1c37c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C37C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37C4u;
        // 0x1c37c8: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37c4) {
            ctx->pc = 0x1C37D4u;
            goto label_1c37d4;
        }
    }
    ctx->pc = 0x1C37CCu;
    // 0x1c37cc: 0x1000030e  b           . + 4 + (0x30E << 2)
    ctx->pc = 0x1C37CCu;
    {
        const bool branch_taken_0x1c37cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37CCu;
        // 0x1c37d0: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37cc) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C37D4u;
label_1c37d4:
    // 0x1c37d4: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x1c37d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c37d8: 0x1060030b  beqz        $v1, . + 4 + (0x30B << 2)
    ctx->pc = 0x1C37D8u;
    {
        const bool branch_taken_0x1c37d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C37DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37D8u;
        // 0x1c37dc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37d8) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C37E0u;
    // 0x1c37e0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C37E0u;
    {
        const bool branch_taken_0x1c37e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c37e0) {
            ctx->pc = 0x1C382Cu;
            goto label_1c382c;
        }
    }
    ctx->pc = 0x1C37E8u;
    // 0x1c37e8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1c37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1c37ec: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C37ECu;
    {
        const bool branch_taken_0x1c37ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C37F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37ECu;
        // 0x1c37f0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37ec) {
            ctx->pc = 0x1C3824u;
            goto label_1c3824;
        }
    }
    ctx->pc = 0x1C37F4u;
    // 0x1c37f4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1c37f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1c37f8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C37F8u;
    {
        const bool branch_taken_0x1c37f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37F8u;
        // 0x1c37fc: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37f8) {
            ctx->pc = 0x1C3818u;
            goto label_1c3818;
        }
    }
    ctx->pc = 0x1C3800u;
    // 0x1c3800: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c3800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c3804: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3804u;
    {
        const bool branch_taken_0x1c3804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3804) {
            ctx->pc = 0x1C3814u;
            goto label_1c3814;
        }
    }
    ctx->pc = 0x1C380Cu;
    // 0x1c380c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C380Cu;
    {
        const bool branch_taken_0x1c380c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c380c) {
            ctx->pc = 0x1C3820u;
            goto label_1c3820;
        }
    }
    ctx->pc = 0x1C3814u;
label_1c3814:
    // 0x1c3814: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1c3814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1c3818:
    // 0x1c3818: 0x100002fb  b           . + 4 + (0x2FB << 2)
    ctx->pc = 0x1C3818u;
    {
        const bool branch_taken_0x1c3818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3818u;
        // 0x1c381c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3818) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3820u;
label_1c3820:
    // 0x1c3820: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c3820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c3824:
    // 0x1c3824: 0x100002f8  b           . + 4 + (0x2F8 << 2)
    ctx->pc = 0x1C3824u;
    {
        const bool branch_taken_0x1c3824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3824u;
        // 0x1c3828: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3824) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C382Cu;
label_1c382c:
    // 0x1c382c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c382cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c3830: 0x100002f5  b           . + 4 + (0x2F5 << 2)
    ctx->pc = 0x1C3830u;
    {
        const bool branch_taken_0x1c3830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3830u;
        // 0x1c3834: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3830) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3838u;
label_1c3838:
    // 0x1c3838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c383c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C383Cu;
    SET_GPR_U32(ctx, 31, 0x1C3844u);
    ctx->pc = 0x1C3840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C383Cu;
    // 0x1c3840: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C383Cu, 0x1C3844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3844u;
label_1c3844:
    // 0x1c3844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3848: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3848u;
    SET_GPR_U32(ctx, 31, 0x1C3850u);
    ctx->pc = 0x1C384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3848u;
    // 0x1c384c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3848u, 0x1C3850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3850u;
label_1c3850:
    // 0x1c3850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3854: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3854u;
    SET_GPR_U32(ctx, 31, 0x1C385Cu);
    ctx->pc = 0x1C3858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3854u;
    // 0x1c3858: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3854u, 0x1C385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C385Cu;
label_1c385c:
    // 0x1c385c: 0xc07468c  jal         func_1D1A30
    ctx->pc = 0x1C385Cu;
    SET_GPR_U32(ctx, 31, 0x1C3864u);
    ctx->pc = 0x1C3860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C385Cu;
    // 0x1c3860: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1A30u, 0x1C385Cu, 0x1C3864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3864u;
label_1c3864:
    // 0x1c3864: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1c3864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c3868: 0x100002e7  b           . + 4 + (0x2E7 << 2)
    ctx->pc = 0x1C3868u;
    {
        const bool branch_taken_0x1c3868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3868u;
        // 0x1c386c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3868) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3870u;
label_1c3870:
    // 0x1c3870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3874: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3874u;
    SET_GPR_U32(ctx, 31, 0x1C387Cu);
    ctx->pc = 0x1C3878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3874u;
    // 0x1c3878: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3874u, 0x1C387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C387Cu;
label_1c387c:
    // 0x1c387c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c387cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3880: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3880u;
    SET_GPR_U32(ctx, 31, 0x1C3888u);
    ctx->pc = 0x1C3884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3880u;
    // 0x1c3884: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3880u, 0x1C3888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3888u;
label_1c3888:
    // 0x1c3888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c388c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C388Cu;
    SET_GPR_U32(ctx, 31, 0x1C3894u);
    ctx->pc = 0x1C3890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C388Cu;
    // 0x1c3890: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C388Cu, 0x1C3894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3894u;
label_1c3894:
    // 0x1c3894: 0x8e0301a0  lw          $v1, 0x1A0($s0)
    ctx->pc = 0x1c3894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x1c3898: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c389c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C389Cu;
    {
        const bool branch_taken_0x1c389c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C389Cu;
        // 0x1c38a0: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c389c) {
            ctx->pc = 0x1C38B4u;
            goto label_1c38b4;
        }
    }
    ctx->pc = 0x1C38A4u;
    // 0x1c38a4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1c38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1c38a8: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x1c38a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x1c38ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c38acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c38b0: 0xac22f5f0  sw          $v0, -0xA10($at)
    ctx->pc = 0x1c38b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5F0u, _value); } while (0);
label_1c38b4:
    // 0x1c38b4: 0x8e0301a0  lw          $v1, 0x1A0($s0)
    ctx->pc = 0x1c38b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x1c38b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c38bc: 0x146202d2  bne         $v1, $v0, . + 4 + (0x2D2 << 2)
    ctx->pc = 0x1C38BCu;
    {
        const bool branch_taken_0x1c38bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C38C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38BCu;
        // 0x1c38c0: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38bc) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C38C4u;
    // 0x1c38c4: 0x100002d0  b           . + 4 + (0x2D0 << 2)
    ctx->pc = 0x1C38C4u;
    {
        const bool branch_taken_0x1c38c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C38C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38C4u;
        // 0x1c38c8: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38c4) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C38CCu;
label_1c38cc:
    // 0x1c38cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c38ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38d0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C38D0u;
    SET_GPR_U32(ctx, 31, 0x1C38D8u);
    ctx->pc = 0x1C38D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C38D0u;
    // 0x1c38d4: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C38D0u, 0x1C38D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C38D8u;
label_1c38d8:
    // 0x1c38d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c38d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38dc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C38DCu;
    SET_GPR_U32(ctx, 31, 0x1C38E4u);
    ctx->pc = 0x1C38E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C38DCu;
    // 0x1c38e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C38DCu, 0x1C38E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C38E4u;
label_1c38e4:
    // 0x1c38e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c38e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c38e8: 0x8c22f5f0  lw          $v0, -0xA10($at)
    ctx->pc = 0x1c38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5F0u));
    // 0x1c38ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c38ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c38f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c38f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c38f4: 0xac22f5f0  sw          $v0, -0xA10($at)
    ctx->pc = 0x1c38f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5F0u, _value); } while (0);
    // 0x1c38f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c38f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c38fc: 0x8c22f5f0  lw          $v0, -0xA10($at)
    ctx->pc = 0x1c38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5F0u));
    // 0x1c3900: 0x144002c1  bnez        $v0, . + 4 + (0x2C1 << 2)
    ctx->pc = 0x1C3900u;
    {
        const bool branch_taken_0x1c3900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3900u;
        // 0x1c3904: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3900) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3908u;
    // 0x1c3908: 0x100002bf  b           . + 4 + (0x2BF << 2)
    ctx->pc = 0x1C3908u;
    {
        const bool branch_taken_0x1c3908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3908u;
        // 0x1c390c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3908) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3910u;
label_1c3910:
    // 0x1c3910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3914: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3914u;
    SET_GPR_U32(ctx, 31, 0x1C391Cu);
    ctx->pc = 0x1C3918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3914u;
    // 0x1c3918: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3914u, 0x1C391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C391Cu;
label_1c391c:
    // 0x1c391c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3920: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3920u;
    SET_GPR_U32(ctx, 31, 0x1C3928u);
    ctx->pc = 0x1C3924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3920u;
    // 0x1c3924: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3920u, 0x1C3928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3928u;
label_1c3928:
    // 0x1c3928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c392c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C392Cu;
    SET_GPR_U32(ctx, 31, 0x1C3934u);
    ctx->pc = 0x1C3930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C392Cu;
    // 0x1c3930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C392Cu, 0x1C3934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3934u;
label_1c3934:
    // 0x1c3934: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c3934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c3938: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c3938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c393c: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C393Cu;
    SET_GPR_U32(ctx, 31, 0x1C3944u);
    ctx->pc = 0x1C3940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C393Cu;
    // 0x1c3940: 0x24a51c28  addiu       $a1, $a1, 0x1C28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C393Cu, 0x1C3944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3944u;
label_1c3944:
    // 0x1c3944: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1c3944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c3948: 0x100002af  b           . + 4 + (0x2AF << 2)
    ctx->pc = 0x1C3948u;
    {
        const bool branch_taken_0x1c3948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3948u;
        // 0x1c394c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3948) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3950u;
label_1c3950:
    // 0x1c3950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3954: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3954u;
    SET_GPR_U32(ctx, 31, 0x1C395Cu);
    ctx->pc = 0x1C3958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3954u;
    // 0x1c3958: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3954u, 0x1C395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C395Cu;
label_1c395c:
    // 0x1c395c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c395cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3960: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3960u;
    SET_GPR_U32(ctx, 31, 0x1C3968u);
    ctx->pc = 0x1C3964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3960u;
    // 0x1c3964: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3960u, 0x1C3968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3968u;
label_1c3968:
    // 0x1c3968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c396c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C396Cu;
    SET_GPR_U32(ctx, 31, 0x1C3974u);
    ctx->pc = 0x1C3970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C396Cu;
    // 0x1c3970: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C396Cu, 0x1C3974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3974u;
label_1c3974:
    // 0x1c3974: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c3974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c3978: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c397c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C397Cu;
    {
        const bool branch_taken_0x1c397c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c397c) {
            ctx->pc = 0x1C39A4u;
            goto label_1c39a4;
        }
    }
    ctx->pc = 0x1C3984u;
    // 0x1c3984: 0x8e030204  lw          $v1, 0x204($s0)
    ctx->pc = 0x1c3984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x1c3988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c398c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C398Cu;
    {
        const bool branch_taken_0x1c398c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C398Cu;
        // 0x1c3990: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c398c) {
            ctx->pc = 0x1C39A0u;
            goto label_1c39a0;
        }
    }
    ctx->pc = 0x1C3994u;
    // 0x1c3994: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1c3994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c3998: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3998u;
    {
        const bool branch_taken_0x1c3998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3998u;
        // 0x1c399c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3998) {
            ctx->pc = 0x1C39A4u;
            goto label_1c39a4;
        }
    }
    ctx->pc = 0x1C39A0u;
label_1c39a0:
    // 0x1c39a0: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c39a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_1c39a4:
    // 0x1c39a4: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c39a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c39a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c39ac: 0x14620296  bne         $v1, $v0, . + 4 + (0x296 << 2)
    ctx->pc = 0x1C39ACu;
    {
        const bool branch_taken_0x1c39ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C39B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39ACu;
        // 0x1c39b0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39ac) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C39B4u;
    // 0x1c39b4: 0x10000294  b           . + 4 + (0x294 << 2)
    ctx->pc = 0x1C39B4u;
    {
        const bool branch_taken_0x1c39b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C39B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39B4u;
        // 0x1c39b8: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39b4) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C39BCu;
label_1c39bc:
    // 0x1c39bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c39bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39c0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C39C0u;
    SET_GPR_U32(ctx, 31, 0x1C39C8u);
    ctx->pc = 0x1C39C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39C0u;
    // 0x1c39c4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C39C0u, 0x1C39C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39C8u;
label_1c39c8:
    // 0x1c39c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c39c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39cc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C39CCu;
    SET_GPR_U32(ctx, 31, 0x1C39D4u);
    ctx->pc = 0x1C39D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39CCu;
    // 0x1c39d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C39CCu, 0x1C39D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39D4u;
label_1c39d4:
    // 0x1c39d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c39d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39d8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C39D8u;
    SET_GPR_U32(ctx, 31, 0x1C39E0u);
    ctx->pc = 0x1C39DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39D8u;
    // 0x1c39dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C39D8u, 0x1C39E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39E0u;
label_1c39e0:
    // 0x1c39e0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c39e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c39e4: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c39e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c39e8: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C39E8u;
    SET_GPR_U32(ctx, 31, 0x1C39F0u);
    ctx->pc = 0x1C39ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39E8u;
    // 0x1c39ec: 0x24a51c40  addiu       $a1, $a1, 0x1C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C39E8u, 0x1C39F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39F0u;
label_1c39f0:
    // 0x1c39f0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1c39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c39f4: 0x10000284  b           . + 4 + (0x284 << 2)
    ctx->pc = 0x1C39F4u;
    {
        const bool branch_taken_0x1c39f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C39F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39F4u;
        // 0x1c39f8: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39f4) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C39FCu;
label_1c39fc:
    // 0x1c39fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c39fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a00: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3A00u;
    SET_GPR_U32(ctx, 31, 0x1C3A08u);
    ctx->pc = 0x1C3A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A00u;
    // 0x1c3a04: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3A00u, 0x1C3A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A08u;
label_1c3a08:
    // 0x1c3a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a0c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3A0Cu;
    SET_GPR_U32(ctx, 31, 0x1C3A14u);
    ctx->pc = 0x1C3A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A0Cu;
    // 0x1c3a10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3A0Cu, 0x1C3A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A14u;
label_1c3a14:
    // 0x1c3a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a18: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3A18u;
    SET_GPR_U32(ctx, 31, 0x1C3A20u);
    ctx->pc = 0x1C3A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A18u;
    // 0x1c3a1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3A18u, 0x1C3A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A20u;
label_1c3a20:
    // 0x1c3a20: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c3a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c3a24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3a28: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3A28u;
    {
        const bool branch_taken_0x1c3a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3a28) {
            ctx->pc = 0x1C3A50u;
            goto label_1c3a50;
        }
    }
    ctx->pc = 0x1C3A30u;
    // 0x1c3a30: 0x8e030204  lw          $v1, 0x204($s0)
    ctx->pc = 0x1c3a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x1c3a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3a38: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3A38u;
    {
        const bool branch_taken_0x1c3a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A38u;
        // 0x1c3a3c: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a38) {
            ctx->pc = 0x1C3A4Cu;
            goto label_1c3a4c;
        }
    }
    ctx->pc = 0x1C3A40u;
    // 0x1c3a40: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1c3a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1c3a44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3A44u;
    {
        const bool branch_taken_0x1c3a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A44u;
        // 0x1c3a48: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a44) {
            ctx->pc = 0x1C3A50u;
            goto label_1c3a50;
        }
    }
    ctx->pc = 0x1C3A4Cu;
label_1c3a4c:
    // 0x1c3a4c: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_1c3a50:
    // 0x1c3a50: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c3a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c3a54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3a58: 0x1462026b  bne         $v1, $v0, . + 4 + (0x26B << 2)
    ctx->pc = 0x1C3A58u;
    {
        const bool branch_taken_0x1c3a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A58u;
        // 0x1c3a5c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a58) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3A60u;
    // 0x1c3a60: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3a64: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c3a68: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c3a6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c3a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3a70: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3a74: 0xac22f5e8  sw          $v0, -0xA18($at)
    ctx->pc = 0x1c3a74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5E8u, _value); } while (0);
    // 0x1c3a78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3a7c: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c3a80: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c3a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c3a84: 0x14400260  bnez        $v0, . + 4 + (0x260 << 2)
    ctx->pc = 0x1C3A84u;
    {
        const bool branch_taken_0x1c3a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a84) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3A8Cu;
    // 0x1c3a8c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c3a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c3a90: 0x1000025d  b           . + 4 + (0x25D << 2)
    ctx->pc = 0x1C3A90u;
    {
        const bool branch_taken_0x1c3a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A90u;
        // 0x1c3a94: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a90) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3A98u;
label_1c3a98:
    // 0x1c3a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a9c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3A9Cu;
    SET_GPR_U32(ctx, 31, 0x1C3AA4u);
    ctx->pc = 0x1C3AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A9Cu;
    // 0x1c3aa0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3A9Cu, 0x1C3AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AA4u;
label_1c3aa4:
    // 0x1c3aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3aa8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3AA8u;
    SET_GPR_U32(ctx, 31, 0x1C3AB0u);
    ctx->pc = 0x1C3AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3AA8u;
    // 0x1c3aac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3AA8u, 0x1C3AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AB0u;
label_1c3ab0:
    // 0x1c3ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ab4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3AB4u;
    SET_GPR_U32(ctx, 31, 0x1C3ABCu);
    ctx->pc = 0x1C3AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3AB4u;
    // 0x1c3ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3AB4u, 0x1C3ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3ABCu;
label_1c3abc:
    // 0x1c3abc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c3abcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c3ac0: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c3ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c3ac4: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C3AC4u;
    SET_GPR_U32(ctx, 31, 0x1C3ACCu);
    ctx->pc = 0x1C3AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3AC4u;
    // 0x1c3ac8: 0x24a51c40  addiu       $a1, $a1, 0x1C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C3AC4u, 0x1C3ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3ACCu;
label_1c3acc:
    // 0x1c3acc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1c3accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c3ad0: 0x1000024d  b           . + 4 + (0x24D << 2)
    ctx->pc = 0x1C3AD0u;
    {
        const bool branch_taken_0x1c3ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3AD0u;
        // 0x1c3ad4: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ad0) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3AD8u;
label_1c3ad8:
    // 0x1c3ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3adc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3ADCu;
    SET_GPR_U32(ctx, 31, 0x1C3AE4u);
    ctx->pc = 0x1C3AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3ADCu;
    // 0x1c3ae0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3ADCu, 0x1C3AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AE4u;
label_1c3ae4:
    // 0x1c3ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ae8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3AE8u;
    SET_GPR_U32(ctx, 31, 0x1C3AF0u);
    ctx->pc = 0x1C3AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3AE8u;
    // 0x1c3aec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3AE8u, 0x1C3AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AF0u;
label_1c3af0:
    // 0x1c3af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3af4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3AF4u;
    SET_GPR_U32(ctx, 31, 0x1C3AFCu);
    ctx->pc = 0x1C3AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3AF4u;
    // 0x1c3af8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3AF4u, 0x1C3AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AFCu;
label_1c3afc:
    // 0x1c3afc: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1c3afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1c3b00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3b04: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3B04u;
    {
        const bool branch_taken_0x1c3b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3b04) {
            ctx->pc = 0x1C3B2Cu;
            goto label_1c3b2c;
        }
    }
    ctx->pc = 0x1C3B0Cu;
    // 0x1c3b0c: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x1c3b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x1c3b10: 0x240203c4  addiu       $v0, $zero, 0x3C4
    ctx->pc = 0x1c3b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x1c3b14: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3B14u;
    {
        const bool branch_taken_0x1c3b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B14u;
        // 0x1c3b18: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b14) {
            ctx->pc = 0x1C3B28u;
            goto label_1c3b28;
        }
    }
    ctx->pc = 0x1C3B1Cu;
    // 0x1c3b1c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1c3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1c3b20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3B20u;
    {
        const bool branch_taken_0x1c3b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B20u;
        // 0x1c3b24: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b20) {
            ctx->pc = 0x1C3B2Cu;
            goto label_1c3b2c;
        }
    }
    ctx->pc = 0x1C3B28u;
label_1c3b28:
    // 0x1c3b28: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_1c3b2c:
    // 0x1c3b2c: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1c3b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1c3b30: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3b34: 0x14620234  bne         $v1, $v0, . + 4 + (0x234 << 2)
    ctx->pc = 0x1C3B34u;
    {
        const bool branch_taken_0x1c3b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B34u;
        // 0x1c3b38: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b34) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3B3Cu;
    // 0x1c3b3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3b40: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c3b44: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c3b44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c3b48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3b4c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3b50: 0xac22f5e8  sw          $v0, -0xA18($at)
    ctx->pc = 0x1c3b50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5E8u, _value); } while (0);
    // 0x1c3b54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3b58: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c3b58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c3b5c: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c3b5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c3b60: 0x14400229  bnez        $v0, . + 4 + (0x229 << 2)
    ctx->pc = 0x1C3B60u;
    {
        const bool branch_taken_0x1c3b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3b60) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3B68u;
    // 0x1c3b68: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c3b6c: 0x10000226  b           . + 4 + (0x226 << 2)
    ctx->pc = 0x1C3B6Cu;
    {
        const bool branch_taken_0x1c3b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B6Cu;
        // 0x1c3b70: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b6c) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3B74u;
label_1c3b74:
    // 0x1c3b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b78: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3B78u;
    SET_GPR_U32(ctx, 31, 0x1C3B80u);
    ctx->pc = 0x1C3B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B78u;
    // 0x1c3b7c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3B78u, 0x1C3B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B80u;
label_1c3b80:
    // 0x1c3b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b84: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3B84u;
    SET_GPR_U32(ctx, 31, 0x1C3B8Cu);
    ctx->pc = 0x1C3B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B84u;
    // 0x1c3b88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3B84u, 0x1C3B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B8Cu;
label_1c3b8c:
    // 0x1c3b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b90: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3B90u;
    SET_GPR_U32(ctx, 31, 0x1C3B98u);
    ctx->pc = 0x1C3B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B90u;
    // 0x1c3b94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3B90u, 0x1C3B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B98u;
label_1c3b98:
    // 0x1c3b98: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c3b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c3b9c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c3b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c3ba0: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C3BA0u;
    SET_GPR_U32(ctx, 31, 0x1C3BA8u);
    ctx->pc = 0x1C3BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3BA0u;
    // 0x1c3ba4: 0x24a51c60  addiu       $a1, $a1, 0x1C60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C3BA0u, 0x1C3BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BA8u;
label_1c3ba8:
    // 0x1c3ba8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c3bac: 0x10000216  b           . + 4 + (0x216 << 2)
    ctx->pc = 0x1C3BACu;
    {
        const bool branch_taken_0x1c3bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3BACu;
        // 0x1c3bb0: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bac) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3BB4u;
label_1c3bb4:
    // 0x1c3bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3bb8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3BB8u;
    SET_GPR_U32(ctx, 31, 0x1C3BC0u);
    ctx->pc = 0x1C3BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3BB8u;
    // 0x1c3bbc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3BB8u, 0x1C3BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BC0u;
label_1c3bc0:
    // 0x1c3bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3bc4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3BC4u;
    SET_GPR_U32(ctx, 31, 0x1C3BCCu);
    ctx->pc = 0x1C3BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3BC4u;
    // 0x1c3bc8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3BC4u, 0x1C3BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BCCu;
label_1c3bcc:
    // 0x1c3bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3bd0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3BD0u;
    SET_GPR_U32(ctx, 31, 0x1C3BD8u);
    ctx->pc = 0x1C3BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3BD0u;
    // 0x1c3bd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3BD0u, 0x1C3BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BD8u;
label_1c3bd8:
    // 0x1c3bd8: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c3bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c3bdc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3be0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3BE0u;
    {
        const bool branch_taken_0x1c3be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3be0) {
            ctx->pc = 0x1C3C08u;
            goto label_1c3c08;
        }
    }
    ctx->pc = 0x1C3BE8u;
    // 0x1c3be8: 0x8e030204  lw          $v1, 0x204($s0)
    ctx->pc = 0x1c3be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x1c3bec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3bf0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3BF0u;
    {
        const bool branch_taken_0x1c3bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3BF0u;
        // 0x1c3bf4: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bf0) {
            ctx->pc = 0x1C3C04u;
            goto label_1c3c04;
        }
    }
    ctx->pc = 0x1C3BF8u;
    // 0x1c3bf8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1c3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c3bfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3BFCu;
    {
        const bool branch_taken_0x1c3bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3BFCu;
        // 0x1c3c00: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bfc) {
            ctx->pc = 0x1C3C08u;
            goto label_1c3c08;
        }
    }
    ctx->pc = 0x1C3C04u;
label_1c3c04:
    // 0x1c3c04: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_1c3c08:
    // 0x1c3c08: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c3c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c3c0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3c10: 0x146201fd  bne         $v1, $v0, . + 4 + (0x1FD << 2)
    ctx->pc = 0x1C3C10u;
    {
        const bool branch_taken_0x1c3c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C10u;
        // 0x1c3c14: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c10) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3C18u;
    // 0x1c3c18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3c1c: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c3c20: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c3c20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c3c24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c3c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3c28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3c2c: 0xac22f5e8  sw          $v0, -0xA18($at)
    ctx->pc = 0x1c3c2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5E8u, _value); } while (0);
    // 0x1c3c30: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3c34: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c3c38: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c3c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c3c3c: 0x144001f2  bnez        $v0, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x1C3C3Cu;
    {
        const bool branch_taken_0x1c3c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c3c) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3C44u;
    // 0x1c3c44: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c3c48: 0x100001ef  b           . + 4 + (0x1EF << 2)
    ctx->pc = 0x1C3C48u;
    {
        const bool branch_taken_0x1c3c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C48u;
        // 0x1c3c4c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c48) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3C50u;
label_1c3c50:
    // 0x1c3c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c54: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3C54u;
    SET_GPR_U32(ctx, 31, 0x1C3C5Cu);
    ctx->pc = 0x1C3C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C54u;
    // 0x1c3c58: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3C54u, 0x1C3C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C5Cu;
label_1c3c5c:
    // 0x1c3c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c60: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3C60u;
    SET_GPR_U32(ctx, 31, 0x1C3C68u);
    ctx->pc = 0x1C3C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C60u;
    // 0x1c3c64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3C60u, 0x1C3C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C68u;
label_1c3c68:
    // 0x1c3c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c6c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3C6Cu;
    SET_GPR_U32(ctx, 31, 0x1C3C74u);
    ctx->pc = 0x1C3C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C6Cu;
    // 0x1c3c70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3C6Cu, 0x1C3C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C74u;
label_1c3c74:
    // 0x1c3c74: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c3c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c3c78: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c3c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c3c7c: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C3C7Cu;
    SET_GPR_U32(ctx, 31, 0x1C3C84u);
    ctx->pc = 0x1C3C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C7Cu;
    // 0x1c3c80: 0x24a51c60  addiu       $a1, $a1, 0x1C60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C3C7Cu, 0x1C3C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C84u;
label_1c3c84:
    // 0x1c3c84: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1c3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1c3c88: 0x100001df  b           . + 4 + (0x1DF << 2)
    ctx->pc = 0x1C3C88u;
    {
        const bool branch_taken_0x1c3c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C88u;
        // 0x1c3c8c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c88) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3C90u;
label_1c3c90:
    // 0x1c3c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c94: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3C94u;
    SET_GPR_U32(ctx, 31, 0x1C3C9Cu);
    ctx->pc = 0x1C3C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C94u;
    // 0x1c3c98: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3C94u, 0x1C3C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C9Cu;
label_1c3c9c:
    // 0x1c3c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ca0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3CA0u;
    SET_GPR_U32(ctx, 31, 0x1C3CA8u);
    ctx->pc = 0x1C3CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3CA0u;
    // 0x1c3ca4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3CA0u, 0x1C3CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3CA8u;
label_1c3ca8:
    // 0x1c3ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3cac: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3CACu;
    SET_GPR_U32(ctx, 31, 0x1C3CB4u);
    ctx->pc = 0x1C3CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3CACu;
    // 0x1c3cb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3CACu, 0x1C3CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3CB4u;
label_1c3cb4:
    // 0x1c3cb4: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1c3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1c3cb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3cbc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3CBCu;
    {
        const bool branch_taken_0x1c3cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3cbc) {
            ctx->pc = 0x1C3CE4u;
            goto label_1c3ce4;
        }
    }
    ctx->pc = 0x1C3CC4u;
    // 0x1c3cc4: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x1c3cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x1c3cc8: 0x240235e0  addiu       $v0, $zero, 0x35E0
    ctx->pc = 0x1c3cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13792));
    // 0x1c3ccc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3CCCu;
    {
        const bool branch_taken_0x1c3ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CCCu;
        // 0x1c3cd0: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ccc) {
            ctx->pc = 0x1C3CE0u;
            goto label_1c3ce0;
        }
    }
    ctx->pc = 0x1C3CD4u;
    // 0x1c3cd4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1c3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c3cd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3CD8u;
    {
        const bool branch_taken_0x1c3cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CD8u;
        // 0x1c3cdc: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3cd8) {
            ctx->pc = 0x1C3CE4u;
            goto label_1c3ce4;
        }
    }
    ctx->pc = 0x1C3CE0u;
label_1c3ce0:
    // 0x1c3ce0: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_1c3ce4:
    // 0x1c3ce4: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1c3ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1c3ce8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3cec: 0x146201c6  bne         $v1, $v0, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x1C3CECu;
    {
        const bool branch_taken_0x1c3cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CECu;
        // 0x1c3cf0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3cec) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3CF4u;
    // 0x1c3cf4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3cf8: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c3cfc: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c3cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c3d00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3d04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3d08: 0xac22f5e8  sw          $v0, -0xA18($at)
    ctx->pc = 0x1c3d08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5E8u, _value); } while (0);
    // 0x1c3d0c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3d10: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c3d10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c3d14: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c3d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c3d18: 0x144001bb  bnez        $v0, . + 4 + (0x1BB << 2)
    ctx->pc = 0x1C3D18u;
    {
        const bool branch_taken_0x1c3d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d18) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3D20u;
    // 0x1c3d20: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c3d24: 0x100001b8  b           . + 4 + (0x1B8 << 2)
    ctx->pc = 0x1C3D24u;
    {
        const bool branch_taken_0x1c3d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D24u;
        // 0x1c3d28: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d24) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3D2Cu;
label_1c3d2c:
    // 0x1c3d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d30: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3D30u;
    SET_GPR_U32(ctx, 31, 0x1C3D38u);
    ctx->pc = 0x1C3D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D30u;
    // 0x1c3d34: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3D30u, 0x1C3D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D38u;
label_1c3d38:
    // 0x1c3d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d3c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3D3Cu;
    SET_GPR_U32(ctx, 31, 0x1C3D44u);
    ctx->pc = 0x1C3D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D3Cu;
    // 0x1c3d40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3D3Cu, 0x1C3D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D44u;
label_1c3d44:
    // 0x1c3d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d48: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3D48u;
    SET_GPR_U32(ctx, 31, 0x1C3D50u);
    ctx->pc = 0x1C3D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D48u;
    // 0x1c3d4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3D48u, 0x1C3D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D50u;
label_1c3d50:
    // 0x1c3d50: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x1c3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1c3d54: 0x2841001d  slti        $at, $v0, 0x1D
    ctx->pc = 0x1c3d54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1c3d58: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3D58u;
    {
        const bool branch_taken_0x1c3d58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D58u;
        // 0x1c3d5c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d58) {
            ctx->pc = 0x1C3D6Cu;
            goto label_1c3d6c;
        }
    }
    ctx->pc = 0x1C3D60u;
    // 0x1c3d60: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c3d64: 0x100001a8  b           . + 4 + (0x1A8 << 2)
    ctx->pc = 0x1C3D64u;
    {
        const bool branch_taken_0x1c3d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D64u;
        // 0x1c3d68: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d64) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3D6Cu;
label_1c3d6c:
    // 0x1c3d6c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c3d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c3d70: 0xc0747ec  jal         func_1D1FB0
    ctx->pc = 0x1C3D70u;
    SET_GPR_U32(ctx, 31, 0x1C3D78u);
    ctx->pc = 0x1C3D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D70u;
    // 0x1c3d74: 0x24a51c28  addiu       $a1, $a1, 0x1C28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1FB0u, 0x1C3D70u, 0x1C3D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D78u;
label_1c3d78:
    // 0x1c3d78: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1c3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1c3d7c: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x1C3D7Cu;
    {
        const bool branch_taken_0x1c3d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D7Cu;
        // 0x1c3d80: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d7c) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3D84u;
label_1c3d84:
    // 0x1c3d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d88: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3D88u;
    SET_GPR_U32(ctx, 31, 0x1C3D90u);
    ctx->pc = 0x1C3D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D88u;
    // 0x1c3d8c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3D88u, 0x1C3D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D90u;
label_1c3d90:
    // 0x1c3d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d94: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3D94u;
    SET_GPR_U32(ctx, 31, 0x1C3D9Cu);
    ctx->pc = 0x1C3D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D94u;
    // 0x1c3d98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3D94u, 0x1C3D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D9Cu;
label_1c3d9c:
    // 0x1c3d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3da0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3DA0u;
    SET_GPR_U32(ctx, 31, 0x1C3DA8u);
    ctx->pc = 0x1C3DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3DA0u;
    // 0x1c3da4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3DA0u, 0x1C3DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3DA8u;
label_1c3da8:
    // 0x1c3da8: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x1c3da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x1c3dac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3db0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3DB0u;
    {
        const bool branch_taken_0x1c3db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DB0u;
        // 0x1c3db4: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3db0) {
            ctx->pc = 0x1C3DBCu;
            goto label_1c3dbc;
        }
    }
    ctx->pc = 0x1C3DB8u;
    // 0x1c3db8: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_1c3dbc:
    // 0x1c3dbc: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x1c3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x1c3dc0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3dc4: 0x14620190  bne         $v1, $v0, . + 4 + (0x190 << 2)
    ctx->pc = 0x1C3DC4u;
    {
        const bool branch_taken_0x1c3dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DC4u;
        // 0x1c3dc8: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3dc4) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3DCCu;
    // 0x1c3dcc: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x1C3DCCu;
    {
        const bool branch_taken_0x1c3dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DCCu;
        // 0x1c3dd0: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3dcc) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3DD4u;
label_1c3dd4:
    // 0x1c3dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3dd8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3DD8u;
    SET_GPR_U32(ctx, 31, 0x1C3DE0u);
    ctx->pc = 0x1C3DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3DD8u;
    // 0x1c3ddc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3DD8u, 0x1C3DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3DE0u;
label_1c3de0:
    // 0x1c3de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3de4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3DE4u;
    SET_GPR_U32(ctx, 31, 0x1C3DECu);
    ctx->pc = 0x1C3DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3DE4u;
    // 0x1c3de8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3DE4u, 0x1C3DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3DECu;
label_1c3dec:
    // 0x1c3dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3df0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3DF0u;
    SET_GPR_U32(ctx, 31, 0x1C3DF8u);
    ctx->pc = 0x1C3DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3DF0u;
    // 0x1c3df4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3DF0u, 0x1C3DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3DF8u;
label_1c3df8:
    // 0x1c3df8: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x1c3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1c3dfc: 0x2841001d  slti        $at, $v0, 0x1D
    ctx->pc = 0x1c3dfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1c3e00: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3E00u;
    {
        const bool branch_taken_0x1c3e00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E00u;
        // 0x1c3e04: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e00) {
            ctx->pc = 0x1C3E14u;
            goto label_1c3e14;
        }
    }
    ctx->pc = 0x1C3E08u;
    // 0x1c3e08: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c3e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c3e0c: 0x1000017e  b           . + 4 + (0x17E << 2)
    ctx->pc = 0x1C3E0Cu;
    {
        const bool branch_taken_0x1c3e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E0Cu;
        // 0x1c3e10: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e0c) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3E14u;
label_1c3e14:
    // 0x1c3e14: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c3e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c3e18: 0xc0748c8  jal         func_1D2320
    ctx->pc = 0x1C3E18u;
    SET_GPR_U32(ctx, 31, 0x1C3E20u);
    ctx->pc = 0x1C3E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E18u;
    // 0x1c3e1c: 0x24a51c28  addiu       $a1, $a1, 0x1C28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2320u, 0x1C3E18u, 0x1C3E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E20u;
label_1c3e20:
    // 0x1c3e20: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1c3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1c3e24: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x1C3E24u;
    {
        const bool branch_taken_0x1c3e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E24u;
        // 0x1c3e28: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e24) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3E2Cu;
label_1c3e2c:
    // 0x1c3e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e30: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3E30u;
    SET_GPR_U32(ctx, 31, 0x1C3E38u);
    ctx->pc = 0x1C3E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E30u;
    // 0x1c3e34: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3E30u, 0x1C3E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E38u;
label_1c3e38:
    // 0x1c3e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e3c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3E3Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E44u);
    ctx->pc = 0x1C3E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E3Cu;
    // 0x1c3e40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3E3Cu, 0x1C3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E44u;
label_1c3e44:
    // 0x1c3e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e48: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3E48u;
    SET_GPR_U32(ctx, 31, 0x1C3E50u);
    ctx->pc = 0x1C3E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E48u;
    // 0x1c3e4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3E48u, 0x1C3E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E50u;
label_1c3e50:
    // 0x1c3e50: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x1c3e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1c3e54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3e58: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3E58u;
    {
        const bool branch_taken_0x1c3e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E58u;
        // 0x1c3e5c: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e58) {
            ctx->pc = 0x1C3E64u;
            goto label_1c3e64;
        }
    }
    ctx->pc = 0x1C3E60u;
    // 0x1c3e60: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_1c3e64:
    // 0x1c3e64: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x1c3e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1c3e68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3e6c: 0x14620166  bne         $v1, $v0, . + 4 + (0x166 << 2)
    ctx->pc = 0x1C3E6Cu;
    {
        const bool branch_taken_0x1c3e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E6Cu;
        // 0x1c3e70: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e6c) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3E74u;
    // 0x1c3e74: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x1C3E74u;
    {
        const bool branch_taken_0x1c3e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E74u;
        // 0x1c3e78: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e74) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3E7Cu;
label_1c3e7c:
    // 0x1c3e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e80: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3E80u;
    SET_GPR_U32(ctx, 31, 0x1C3E88u);
    ctx->pc = 0x1C3E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E80u;
    // 0x1c3e84: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3E80u, 0x1C3E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E88u;
label_1c3e88:
    // 0x1c3e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e8c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E94u);
    ctx->pc = 0x1C3E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E8Cu;
    // 0x1c3e90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3E8Cu, 0x1C3E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E94u;
label_1c3e94:
    // 0x1c3e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e98: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3E98u;
    SET_GPR_U32(ctx, 31, 0x1C3EA0u);
    ctx->pc = 0x1C3E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E98u;
    // 0x1c3e9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3E98u, 0x1C3EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3EA0u;
label_1c3ea0:
    // 0x1c3ea0: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x1c3ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1c3ea4: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x1c3ea4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1c3ea8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3EA8u;
    {
        const bool branch_taken_0x1c3ea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EA8u;
        // 0x1c3eac: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ea8) {
            ctx->pc = 0x1C3EBCu;
            goto label_1c3ebc;
        }
    }
    ctx->pc = 0x1C3EB0u;
    // 0x1c3eb0: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c3eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c3eb4: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x1C3EB4u;
    {
        const bool branch_taken_0x1c3eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EB4u;
        // 0x1c3eb8: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3eb4) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3EBCu;
label_1c3ebc:
    // 0x1c3ebc: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x1C3EBCu;
    {
        const bool branch_taken_0x1c3ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EBCu;
        // 0x1c3ec0: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ebc) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3EC4u;
label_1c3ec4:
    // 0x1c3ec4: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C3EC4u;
    SET_GPR_U32(ctx, 31, 0x1C3ECCu);
    ctx->pc = 0x1C3EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3EC4u;
    // 0x1c3ec8: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C3EC4u, 0x1C3ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3ECCu;
label_1c3ecc:
    // 0x1c3ecc: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x1c3eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c3ed0: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x1C3ED0u;
    {
        const bool branch_taken_0x1c3ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3ED0u;
        // 0x1c3ed4: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ed0) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3ED8u;
label_1c3ed8:
    // 0x1c3ed8: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C3ED8u;
    SET_GPR_U32(ctx, 31, 0x1C3EE0u);
    ctx->pc = 0x1C3EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3ED8u;
    // 0x1c3edc: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C3ED8u, 0x1C3EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3EE0u;
label_1c3ee0:
    // 0x1c3ee0: 0x14400149  bnez        $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x1C3EE0u;
    {
        const bool branch_taken_0x1c3ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3ee0) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3EE8u;
    // 0x1c3ee8: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x1c3ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c3eec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c3eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3ef0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3EF0u;
    {
        const bool branch_taken_0x1c3ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EF0u;
        // 0x1c3ef4: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ef0) {
            ctx->pc = 0x1C3F04u;
            goto label_1c3f04;
        }
    }
    ctx->pc = 0x1C3EF8u;
    // 0x1c3ef8: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1c3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1c3efc: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x1C3EFCu;
    {
        const bool branch_taken_0x1c3efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EFCu;
        // 0x1c3f00: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3efc) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3F04u;
label_1c3f04:
    // 0x1c3f04: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c3f08: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x1c3f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c3f0c: 0x1060013e  beqz        $v1, . + 4 + (0x13E << 2)
    ctx->pc = 0x1C3F0Cu;
    {
        const bool branch_taken_0x1c3f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f0c) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3F14u;
    // 0x1c3f14: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1c3f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1c3f18: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C3F18u;
    {
        const bool branch_taken_0x1c3f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F18u;
        // 0x1c3f1c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f18) {
            ctx->pc = 0x1C3F50u;
            goto label_1c3f50;
        }
    }
    ctx->pc = 0x1C3F20u;
    // 0x1c3f20: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1c3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1c3f24: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3F24u;
    {
        const bool branch_taken_0x1c3f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F24u;
        // 0x1c3f28: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f24) {
            ctx->pc = 0x1C3F44u;
            goto label_1c3f44;
        }
    }
    ctx->pc = 0x1C3F2Cu;
    // 0x1c3f2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c3f30: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3F30u;
    {
        const bool branch_taken_0x1c3f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3f30) {
            ctx->pc = 0x1C3F40u;
            goto label_1c3f40;
        }
    }
    ctx->pc = 0x1C3F38u;
    // 0x1c3f38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3F38u;
    {
        const bool branch_taken_0x1c3f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f38) {
            ctx->pc = 0x1C3F4Cu;
            goto label_1c3f4c;
        }
    }
    ctx->pc = 0x1C3F40u;
label_1c3f40:
    // 0x1c3f40: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1c3f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1c3f44:
    // 0x1c3f44: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x1C3F44u;
    {
        const bool branch_taken_0x1c3f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F44u;
        // 0x1c3f48: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f44) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3F4Cu;
label_1c3f4c:
    // 0x1c3f4c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c3f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c3f50:
    // 0x1c3f50: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x1C3F50u;
    {
        const bool branch_taken_0x1c3f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F50u;
        // 0x1c3f54: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f50) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3F58u;
label_1c3f58:
    // 0x1c3f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f5c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3F5Cu;
    SET_GPR_U32(ctx, 31, 0x1C3F64u);
    ctx->pc = 0x1C3F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F5Cu;
    // 0x1c3f60: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3F5Cu, 0x1C3F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F64u;
label_1c3f64:
    // 0x1c3f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f68: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3F68u;
    SET_GPR_U32(ctx, 31, 0x1C3F70u);
    ctx->pc = 0x1C3F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F68u;
    // 0x1c3f6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3F68u, 0x1C3F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F70u;
label_1c3f70:
    // 0x1c3f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f74: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3F74u;
    SET_GPR_U32(ctx, 31, 0x1C3F7Cu);
    ctx->pc = 0x1C3F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F74u;
    // 0x1c3f78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3F74u, 0x1C3F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F7Cu;
label_1c3f7c:
    // 0x1c3f7c: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c3f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c3f80: 0xc06d000  jal         func_1B4000
    ctx->pc = 0x1C3F80u;
    SET_GPR_U32(ctx, 31, 0x1C3F88u);
    ctx->pc = 0x1C3F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F80u;
    // 0x1c3f84: 0x8c24ca84  lw          $a0, -0x357C($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4000u, 0x1C3F80u, 0x1C3F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F88u;
label_1c3f88:
    // 0x1c3f88: 0xc07318c  jal         func_1CC630
    ctx->pc = 0x1C3F88u;
    SET_GPR_U32(ctx, 31, 0x1C3F90u);
    ctx->pc = 0x1CC630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC630u, 0x1C3F88u, 0x1C3F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F90u;
label_1c3f90:
    // 0x1c3f90: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c3f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c3f94: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c3f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c3f98: 0x8c26ca84  lw          $a2, -0x357C($at)
    ctx->pc = 0x1c3f98u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c3f9c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c3f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c3fa0: 0x24a51c80  addiu       $a1, $a1, 0x1C80
    ctx->pc = 0x1c3fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7296));
    // 0x1c3fa4: 0xc074ad4  jal         func_1D2B50
    ctx->pc = 0x1C3FA4u;
    SET_GPR_U32(ctx, 31, 0x1C3FACu);
    ctx->pc = 0x1C3FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FA4u;
    // 0x1c3fa8: 0x24072780  addiu       $a3, $zero, 0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2B50u, 0x1C3FA4u, 0x1C3FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FACu;
label_1c3fac:
    // 0x1c3fac: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1c3facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c3fb0: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x1C3FB0u;
    {
        const bool branch_taken_0x1c3fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FB0u;
        // 0x1c3fb4: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3fb0) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C3FB8u;
label_1c3fb8:
    // 0x1c3fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fbc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3FBCu;
    SET_GPR_U32(ctx, 31, 0x1C3FC4u);
    ctx->pc = 0x1C3FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FBCu;
    // 0x1c3fc0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3FBCu, 0x1C3FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FC4u;
label_1c3fc4:
    // 0x1c3fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fc8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3FC8u;
    SET_GPR_U32(ctx, 31, 0x1C3FD0u);
    ctx->pc = 0x1C3FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FC8u;
    // 0x1c3fcc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3FC8u, 0x1C3FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FD0u;
label_1c3fd0:
    // 0x1c3fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fd4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3FD4u;
    SET_GPR_U32(ctx, 31, 0x1C3FDCu);
    ctx->pc = 0x1C3FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FD4u;
    // 0x1c3fd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3FD4u, 0x1C3FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FDCu;
label_1c3fdc:
    // 0x1c3fdc: 0x8e030240  lw          $v1, 0x240($s0)
    ctx->pc = 0x1c3fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x1c3fe0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3fe4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3FE4u;
    {
        const bool branch_taken_0x1c3fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FE4u;
        // 0x1c3fe8: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3fe4) {
            ctx->pc = 0x1C3FF0u;
            goto label_1c3ff0;
        }
    }
    ctx->pc = 0x1C3FECu;
    // 0x1c3fec: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_1c3ff0:
    // 0x1c3ff0: 0x8e030240  lw          $v1, 0x240($s0)
    ctx->pc = 0x1c3ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x1c3ff4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3ff8: 0x14620103  bne         $v1, $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x1C3FF8u;
    {
        const bool branch_taken_0x1c3ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FF8u;
        // 0x1c3ffc: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ff8) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C4000u;
    // 0x1c4000: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x1C4000u;
    {
        const bool branch_taken_0x1c4000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4000u;
        // 0x1c4004: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4000) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C4008u;
label_1c4008:
    // 0x1c4008: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c4008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c400c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c400cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4010: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c4010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c4014: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C4014u;
    SET_GPR_U32(ctx, 31, 0x1C401Cu);
    ctx->pc = 0x1C4018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4014u;
    // 0x1c4018: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C4014u, 0x1C401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C401Cu;
label_1c401c:
    // 0x1c401c: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x1C401Cu;
    {
        const bool branch_taken_0x1c401c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c401c) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C4024u;
label_1c4024:
    // 0x1c4024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4028: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4028u;
    SET_GPR_U32(ctx, 31, 0x1C4030u);
    ctx->pc = 0x1C402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4028u;
    // 0x1c402c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4028u, 0x1C4030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4030u;
label_1c4030:
    // 0x1c4030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4034: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4034u;
    SET_GPR_U32(ctx, 31, 0x1C403Cu);
    ctx->pc = 0x1C4038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4034u;
    // 0x1c4038: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4034u, 0x1C403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C403Cu;
label_1c403c:
    // 0x1c403c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c403cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4040: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4040u;
    SET_GPR_U32(ctx, 31, 0x1C4048u);
    ctx->pc = 0x1C4044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4040u;
    // 0x1c4044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4040u, 0x1C4048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4048u;
label_1c4048:
    // 0x1c4048: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c404c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c404cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c4050: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C4050u;
    SET_GPR_U32(ctx, 31, 0x1C4058u);
    ctx->pc = 0x1C4054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4050u;
    // 0x1c4054: 0xac20f5e0  sw          $zero, -0xA20($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964704), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C4050u, 0x1C4058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4058u;
label_1c4058:
    // 0x1c4058: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x1c4058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1c405c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x1C405Cu;
    {
        const bool branch_taken_0x1c405c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C405Cu;
        // 0x1c4060: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c405c) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C4064u;
label_1c4064:
    // 0x1c4064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4068: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4068u;
    SET_GPR_U32(ctx, 31, 0x1C4070u);
    ctx->pc = 0x1C406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4068u;
    // 0x1c406c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4068u, 0x1C4070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4070u;
label_1c4070:
    // 0x1c4070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4074: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4074u;
    SET_GPR_U32(ctx, 31, 0x1C407Cu);
    ctx->pc = 0x1C4078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4074u;
    // 0x1c4078: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4074u, 0x1C407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C407Cu;
label_1c407c:
    // 0x1c407c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c407cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4080: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4080u;
    SET_GPR_U32(ctx, 31, 0x1C4088u);
    ctx->pc = 0x1C4084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4080u;
    // 0x1c4084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4080u, 0x1C4088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4088u;
label_1c4088:
    // 0x1c4088: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C4088u;
    SET_GPR_U32(ctx, 31, 0x1C4090u);
    ctx->pc = 0x1C408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4088u;
    // 0x1c408c: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C4088u, 0x1C4090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4090u;
label_1c4090:
    // 0x1c4090: 0x144000dd  bnez        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x1C4090u;
    {
        const bool branch_taken_0x1c4090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4090) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C4098u;
    // 0x1c4098: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1c4098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1c409c: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x1C409Cu;
    {
        const bool branch_taken_0x1c409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C409Cu;
        // 0x1c40a0: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c409c) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C40A4u;
label_1c40a4:
    // 0x1c40a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c40a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c40a8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C40A8u;
    SET_GPR_U32(ctx, 31, 0x1C40B0u);
    ctx->pc = 0x1C40ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40A8u;
    // 0x1c40ac: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C40A8u, 0x1C40B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40B0u;
label_1c40b0:
    // 0x1c40b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c40b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c40b4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C40B4u;
    SET_GPR_U32(ctx, 31, 0x1C40BCu);
    ctx->pc = 0x1C40B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40B4u;
    // 0x1c40b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C40B4u, 0x1C40BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40BCu;
label_1c40bc:
    // 0x1c40bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c40bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c40c0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C40C0u;
    SET_GPR_U32(ctx, 31, 0x1C40C8u);
    ctx->pc = 0x1C40C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40C0u;
    // 0x1c40c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C40C0u, 0x1C40C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40C8u;
label_1c40c8:
    // 0x1c40c8: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x1c40c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c40cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c40ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c40d0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C40D0u;
    {
        const bool branch_taken_0x1c40d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C40D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40D0u;
        // 0x1c40d4: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40d0) {
            ctx->pc = 0x1C40E4u;
            goto label_1c40e4;
        }
    }
    ctx->pc = 0x1C40D8u;
    // 0x1c40d8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1c40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1c40dc: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x1C40DCu;
    {
        const bool branch_taken_0x1c40dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40DCu;
        // 0x1c40e0: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40dc) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C40E4u;
label_1c40e4:
    // 0x1c40e4: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x1C40E4u;
    {
        const bool branch_taken_0x1c40e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40E4u;
        // 0x1c40e8: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40e4) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C40ECu;
label_1c40ec:
    // 0x1c40ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c40ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c40f0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C40F0u;
    SET_GPR_U32(ctx, 31, 0x1C40F8u);
    ctx->pc = 0x1C40F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40F0u;
    // 0x1c40f4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C40F0u, 0x1C40F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40F8u;
label_1c40f8:
    // 0x1c40f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c40f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c40fc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C40FCu;
    SET_GPR_U32(ctx, 31, 0x1C4104u);
    ctx->pc = 0x1C4100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40FCu;
    // 0x1c4100: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C40FCu, 0x1C4104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4104u;
label_1c4104:
    // 0x1c4104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4108: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4108u;
    SET_GPR_U32(ctx, 31, 0x1C4110u);
    ctx->pc = 0x1C410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4108u;
    // 0x1c410c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4108u, 0x1C4110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4110u;
label_1c4110:
    // 0x1c4110: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c4110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c4114: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4114u;
    {
        const bool branch_taken_0x1c4114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4114u;
        // 0x1c4118: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4114) {
            ctx->pc = 0x1C4128u;
            goto label_1c4128;
        }
    }
    ctx->pc = 0x1C411Cu;
    // 0x1c411c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1c411cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c4120: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x1C4120u;
    {
        const bool branch_taken_0x1c4120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4120u;
        // 0x1c4124: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4120) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C4128u;
label_1c4128:
    // 0x1c4128: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1C4128u;
    {
        const bool branch_taken_0x1c4128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4128u;
        // 0x1c412c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4128) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C4130u;
label_1c4130:
    // 0x1c4130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4134: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4134u;
    SET_GPR_U32(ctx, 31, 0x1C413Cu);
    ctx->pc = 0x1C4138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4134u;
    // 0x1c4138: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4134u, 0x1C413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C413Cu;
label_1c413c:
    // 0x1c413c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c413cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4140: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4140u;
    SET_GPR_U32(ctx, 31, 0x1C4148u);
    ctx->pc = 0x1C4144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4140u;
    // 0x1c4144: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4140u, 0x1C4148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4148u;
label_1c4148:
    // 0x1c4148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c414c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C414Cu;
    SET_GPR_U32(ctx, 31, 0x1C4154u);
    ctx->pc = 0x1C4150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C414Cu;
    // 0x1c4150: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C414Cu, 0x1C4154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4154u;
label_1c4154:
    // 0x1c4154: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c4154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c4158: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c4158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c415c: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C415Cu;
    SET_GPR_U32(ctx, 31, 0x1C4164u);
    ctx->pc = 0x1C4160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C415Cu;
    // 0x1c4160: 0x24a51c28  addiu       $a1, $a1, 0x1C28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C415Cu, 0x1C4164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4164u;
label_1c4164:
    // 0x1c4164: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1c4164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1c4168: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1C4168u;
    {
        const bool branch_taken_0x1c4168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4168u;
        // 0x1c416c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4168) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C4170u;
label_1c4170:
    // 0x1c4170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4174: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4174u;
    SET_GPR_U32(ctx, 31, 0x1C417Cu);
    ctx->pc = 0x1C4178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4174u;
    // 0x1c4178: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4174u, 0x1C417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C417Cu;
label_1c417c:
    // 0x1c417c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c417cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4180: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4180u;
    SET_GPR_U32(ctx, 31, 0x1C4188u);
    ctx->pc = 0x1C4184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4180u;
    // 0x1c4184: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4180u, 0x1C4188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4188u;
label_1c4188:
    // 0x1c4188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c418c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C418Cu;
    SET_GPR_U32(ctx, 31, 0x1C4194u);
    ctx->pc = 0x1C4190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C418Cu;
    // 0x1c4190: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C418Cu, 0x1C4194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4194u;
label_1c4194:
    // 0x1c4194: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c4194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c4198: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c4198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c419c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C419Cu;
    {
        const bool branch_taken_0x1c419c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c419c) {
            ctx->pc = 0x1C41C4u;
            goto label_1c41c4;
        }
    }
    ctx->pc = 0x1C41A4u;
    // 0x1c41a4: 0x8e030204  lw          $v1, 0x204($s0)
    ctx->pc = 0x1c41a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x1c41a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c41ac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C41ACu;
    {
        const bool branch_taken_0x1c41ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41ACu;
        // 0x1c41b0: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41ac) {
            ctx->pc = 0x1C41C0u;
            goto label_1c41c0;
        }
    }
    ctx->pc = 0x1C41B4u;
    // 0x1c41b4: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1c41b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1c41b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C41B8u;
    {
        const bool branch_taken_0x1c41b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C41BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41B8u;
        // 0x1c41bc: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41b8) {
            ctx->pc = 0x1C41C4u;
            goto label_1c41c4;
        }
    }
    ctx->pc = 0x1C41C0u;
label_1c41c0:
    // 0x1c41c0: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c41c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_1c41c4:
    // 0x1c41c4: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c41c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c41c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c41cc: 0x1462008e  bne         $v1, $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x1C41CCu;
    {
        const bool branch_taken_0x1c41cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C41D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41CCu;
        // 0x1c41d0: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41cc) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C41D4u;
    // 0x1c41d4: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x1C41D4u;
    {
        const bool branch_taken_0x1c41d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C41D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41D4u;
        // 0x1c41d8: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41d4) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C41DCu;
label_1c41dc:
    // 0x1c41dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c41dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c41e0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C41E0u;
    SET_GPR_U32(ctx, 31, 0x1C41E8u);
    ctx->pc = 0x1C41E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C41E0u;
    // 0x1c41e4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C41E0u, 0x1C41E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C41E8u;
label_1c41e8:
    // 0x1c41e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c41e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c41ec: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C41ECu;
    SET_GPR_U32(ctx, 31, 0x1C41F4u);
    ctx->pc = 0x1C41F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C41ECu;
    // 0x1c41f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C41ECu, 0x1C41F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C41F4u;
label_1c41f4:
    // 0x1c41f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c41f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c41f8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C41F8u;
    SET_GPR_U32(ctx, 31, 0x1C4200u);
    ctx->pc = 0x1C41FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C41F8u;
    // 0x1c41fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C41F8u, 0x1C4200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4200u;
label_1c4200:
    // 0x1c4200: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c4200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c4204: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c4204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c4208: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C4208u;
    SET_GPR_U32(ctx, 31, 0x1C4210u);
    ctx->pc = 0x1C420Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4208u;
    // 0x1c420c: 0x24a51c40  addiu       $a1, $a1, 0x1C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C4208u, 0x1C4210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4210u;
label_1c4210:
    // 0x1c4210: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x1c4210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1c4214: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1C4214u;
    {
        const bool branch_taken_0x1c4214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4214u;
        // 0x1c4218: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4214) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C421Cu;
label_1c421c:
    // 0x1c421c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4220: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4220u;
    SET_GPR_U32(ctx, 31, 0x1C4228u);
    ctx->pc = 0x1C4224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4220u;
    // 0x1c4224: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4220u, 0x1C4228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4228u;
label_1c4228:
    // 0x1c4228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c422c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C422Cu;
    SET_GPR_U32(ctx, 31, 0x1C4234u);
    ctx->pc = 0x1C4230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C422Cu;
    // 0x1c4230: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C422Cu, 0x1C4234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4234u;
label_1c4234:
    // 0x1c4234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4238: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4238u;
    SET_GPR_U32(ctx, 31, 0x1C4240u);
    ctx->pc = 0x1C423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4238u;
    // 0x1c423c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4238u, 0x1C4240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4240u;
label_1c4240:
    // 0x1c4240: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c4240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c4244: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c4244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4248: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4248u;
    {
        const bool branch_taken_0x1c4248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c4248) {
            ctx->pc = 0x1C4270u;
            goto label_1c4270;
        }
    }
    ctx->pc = 0x1C4250u;
    // 0x1c4250: 0x8e030204  lw          $v1, 0x204($s0)
    ctx->pc = 0x1c4250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x1c4254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4258: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4258u;
    {
        const bool branch_taken_0x1c4258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4258u;
        // 0x1c425c: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4258) {
            ctx->pc = 0x1C426Cu;
            goto label_1c426c;
        }
    }
    ctx->pc = 0x1C4260u;
    // 0x1c4260: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x1c4260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1c4264: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4264u;
    {
        const bool branch_taken_0x1c4264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4264u;
        // 0x1c4268: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4264) {
            ctx->pc = 0x1C4270u;
            goto label_1c4270;
        }
    }
    ctx->pc = 0x1C426Cu;
label_1c426c:
    // 0x1c426c: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c426cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_1c4270:
    // 0x1c4270: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c4270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c4274: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c4274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c4278: 0x14620063  bne         $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1C4278u;
    {
        const bool branch_taken_0x1c4278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4278u;
        // 0x1c427c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4278) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C4280u;
    // 0x1c4280: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4284: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c4284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c4288: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c4288u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c428c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c4290: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4294: 0xac22f5e8  sw          $v0, -0xA18($at)
    ctx->pc = 0x1c4294u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5E8u, _value); } while (0);
    // 0x1c4298: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c429c: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c429cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c42a0: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c42a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c42a4: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1C42A4u;
    {
        const bool branch_taken_0x1c42a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c42a4) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C42ACu;
    // 0x1c42ac: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x1c42acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1c42b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c42b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c42b4: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c42b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c42b8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1C42B8u;
    {
        const bool branch_taken_0x1c42b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C42BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42B8u;
        // 0x1c42bc: 0xac20f5e8  sw          $zero, -0xA18($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c42b8) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C42C0u;
label_1c42c0:
    // 0x1c42c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c42c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c42c4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C42C4u;
    SET_GPR_U32(ctx, 31, 0x1C42CCu);
    ctx->pc = 0x1C42C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C42C4u;
    // 0x1c42c8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C42C4u, 0x1C42CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C42CCu;
label_1c42cc:
    // 0x1c42cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c42ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c42d0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C42D0u;
    SET_GPR_U32(ctx, 31, 0x1C42D8u);
    ctx->pc = 0x1C42D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C42D0u;
    // 0x1c42d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C42D0u, 0x1C42D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C42D8u;
label_1c42d8:
    // 0x1c42d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c42d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c42dc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C42DCu;
    SET_GPR_U32(ctx, 31, 0x1C42E4u);
    ctx->pc = 0x1C42E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C42DCu;
    // 0x1c42e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C42DCu, 0x1C42E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C42E4u;
label_1c42e4:
    // 0x1c42e4: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1C42E4u;
    SET_GPR_U32(ctx, 31, 0x1C42ECu);
    ctx->pc = 0x1C42E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C42E4u;
    // 0x1c42e8: 0x24042780  addiu       $a0, $zero, 0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1C42E4u, 0x1C42ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C42ECu;
label_1c42ec:
    // 0x1c42ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c42ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c42f0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c42f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c42f4: 0xac22f5e0  sw          $v0, -0xA20($at)
    ctx->pc = 0x1c42f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5E0u, _value); } while (0);
    // 0x1c42f8: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c42f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c42fc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c42fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4300: 0x24a51c80  addiu       $a1, $a1, 0x1C80
    ctx->pc = 0x1c4300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7296));
    // 0x1c4304: 0x8c26f5e0  lw          $a2, -0xA20($at)
    ctx->pc = 0x1c4304u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36F5E0u));
    // 0x1c4308: 0xc074a3c  jal         func_1D28F0
    ctx->pc = 0x1C4308u;
    SET_GPR_U32(ctx, 31, 0x1C4310u);
    ctx->pc = 0x1C430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4308u;
    // 0x1c430c: 0x24072780  addiu       $a3, $zero, 0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D28F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D28F0u, 0x1C4308u, 0x1C4310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4310u;
label_1c4310:
    // 0x1c4310: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1c4310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1c4314: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1C4314u;
    {
        const bool branch_taken_0x1c4314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4314u;
        // 0x1c4318: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4314) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C431Cu;
label_1c431c:
    // 0x1c431c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c431cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4320: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4320u;
    SET_GPR_U32(ctx, 31, 0x1C4328u);
    ctx->pc = 0x1C4324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4320u;
    // 0x1c4324: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4320u, 0x1C4328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4328u;
label_1c4328:
    // 0x1c4328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c432c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C432Cu;
    SET_GPR_U32(ctx, 31, 0x1C4334u);
    ctx->pc = 0x1C4330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C432Cu;
    // 0x1c4330: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C432Cu, 0x1C4334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4334u;
label_1c4334:
    // 0x1c4334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4338: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4338u;
    SET_GPR_U32(ctx, 31, 0x1C4340u);
    ctx->pc = 0x1C433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4338u;
    // 0x1c433c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4338u, 0x1C4340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4340u;
label_1c4340:
    // 0x1c4340: 0x8e030230  lw          $v1, 0x230($s0)
    ctx->pc = 0x1c4340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x1c4344: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c4344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4348: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4348u;
    {
        const bool branch_taken_0x1c4348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4348u;
        // 0x1c434c: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4348) {
            ctx->pc = 0x1C4354u;
            goto label_1c4354;
        }
    }
    ctx->pc = 0x1C4350u;
    // 0x1c4350: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c4350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_1c4354:
    // 0x1c4354: 0x8e030230  lw          $v1, 0x230($s0)
    ctx->pc = 0x1c4354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x1c4358: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c4358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c435c: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C435Cu;
    {
        const bool branch_taken_0x1c435c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C435Cu;
        // 0x1c4360: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c435c) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C4364u;
    // 0x1c4364: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C4364u;
    SET_GPR_U32(ctx, 31, 0x1C436Cu);
    ctx->pc = 0x1C4368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4364u;
    // 0x1c4368: 0x8c24f5e0  lw          $a0, -0xA20($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C4364u, 0x1C436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C436Cu;
label_1c436c:
    // 0x1c436c: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1c436cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1c4370: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1C4370u;
    {
        const bool branch_taken_0x1c4370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4370u;
        // 0x1c4374: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4370) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C4378u;
label_1c4378:
    // 0x1c4378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c437c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C437Cu;
    SET_GPR_U32(ctx, 31, 0x1C4384u);
    ctx->pc = 0x1C4380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C437Cu;
    // 0x1c4380: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C437Cu, 0x1C4384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4384u;
label_1c4384:
    // 0x1c4384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4388: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4388u;
    SET_GPR_U32(ctx, 31, 0x1C4390u);
    ctx->pc = 0x1C438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4388u;
    // 0x1c438c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4388u, 0x1C4390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4390u;
label_1c4390:
    // 0x1c4390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4394: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4394u;
    SET_GPR_U32(ctx, 31, 0x1C439Cu);
    ctx->pc = 0x1C4398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4394u;
    // 0x1c4398: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4394u, 0x1C439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C439Cu;
label_1c439c:
    // 0x1c439c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c439cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c43a0: 0xc0731a0  jal         func_1CC680
    ctx->pc = 0x1C43A0u;
    SET_GPR_U32(ctx, 31, 0x1C43A8u);
    ctx->pc = 0x1C43A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43A0u;
    // 0x1c43a4: 0x8c24f5e0  lw          $a0, -0xA20($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC680u, 0x1C43A0u, 0x1C43A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43A8u;
label_1c43a8:
    // 0x1c43a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c43a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c43ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C43ACu;
    {
        const bool branch_taken_0x1c43ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43ACu;
        // 0x1c43b0: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43ac) {
            ctx->pc = 0x1C43CCu;
            goto label_1c43cc;
        }
    }
    ctx->pc = 0x1C43B4u;
    // 0x1c43b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c43b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c43b8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C43B8u;
    SET_GPR_U32(ctx, 31, 0x1C43C0u);
    ctx->pc = 0x1C43BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43B8u;
    // 0x1c43bc: 0x8c24f5e0  lw          $a0, -0xA20($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C43B8u, 0x1C43C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43C0u;
label_1c43c0:
    // 0x1c43c0: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x1c43c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1c43c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C43C4u;
    {
        const bool branch_taken_0x1c43c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43C4u;
        // 0x1c43c8: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43c4) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C43CCu;
label_1c43cc:
    // 0x1c43cc: 0x8c24ca84  lw          $a0, -0x357C($at)
    ctx->pc = 0x1c43ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1c43d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c43d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c43d4: 0xc06d024  jal         func_1B4090
    ctx->pc = 0x1C43D4u;
    SET_GPR_U32(ctx, 31, 0x1C43DCu);
    ctx->pc = 0x1C43D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43D4u;
    // 0x1c43d8: 0x8c25f5e0  lw          $a1, -0xA20($at) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4090u, 0x1C43D4u, 0x1C43DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43DCu;
label_1c43dc:
    // 0x1c43dc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1c43dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c43e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C43E0u;
    {
        const bool branch_taken_0x1c43e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43E0u;
        // 0x1c43e4: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43e0) {
            ctx->pc = 0x1C4408u;
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C43E8u;
label_1c43e8:
    // 0x1c43e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c43e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c43ec: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C43ECu;
    SET_GPR_U32(ctx, 31, 0x1C43F4u);
    ctx->pc = 0x1C43F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43ECu;
    // 0x1c43f0: 0x8c24f5e0  lw          $a0, -0xA20($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C43ECu, 0x1C43F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43F4u;
label_1c43f4:
    // 0x1c43f4: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x1c43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1c43f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c43f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43fc: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c43fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c4400: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C4400u;
    SET_GPR_U32(ctx, 31, 0x1C4408u);
    ctx->pc = 0x1C4404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4400u;
    // 0x1c4404: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C4400u, 0x1C4408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4408u;
label_1c4408:
    // 0x1c4408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c440c:
    // 0x1c440c: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1C440Cu;
    SET_GPR_U32(ctx, 31, 0x1C4414u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1C440Cu, 0x1C4414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4414u;
label_1c4414:
    // 0x1c4414: 0xc07460c  jal         func_1D1830
    ctx->pc = 0x1C4414u;
    SET_GPR_U32(ctx, 31, 0x1C441Cu);
    ctx->pc = 0x1C4418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4414u;
    // 0x1c4418: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1830u, 0x1C4414u, 0x1C441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C441Cu;
label_1c441c:
    // 0x1c441c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c441cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4424: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4424u;
        // 0x1c4428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C442Cu;
}
