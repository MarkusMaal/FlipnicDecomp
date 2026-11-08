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

// Function: FUN_0017b2b0
// Address: 0x17b2b0 - 0x17b73c
void FUN_0017b2b0_0x17b2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017b2b0_0x17b2b0");
#endif

    switch (ctx->pc) {
        case 0x17b2b0u: goto label_17b2b0;
        case 0x17b2b4u: goto label_17b2b4;
        case 0x17b2b8u: goto label_17b2b8;
        case 0x17b2bcu: goto label_17b2bc;
        case 0x17b2c0u: goto label_17b2c0;
        case 0x17b2c4u: goto label_17b2c4;
        case 0x17b2c8u: goto label_17b2c8;
        case 0x17b2ccu: goto label_17b2cc;
        case 0x17b2d0u: goto label_17b2d0;
        case 0x17b2d4u: goto label_17b2d4;
        case 0x17b2d8u: goto label_17b2d8;
        case 0x17b2dcu: goto label_17b2dc;
        case 0x17b2e0u: goto label_17b2e0;
        case 0x17b2e4u: goto label_17b2e4;
        case 0x17b2e8u: goto label_17b2e8;
        case 0x17b2ecu: goto label_17b2ec;
        case 0x17b2f0u: goto label_17b2f0;
        case 0x17b2f4u: goto label_17b2f4;
        case 0x17b2f8u: goto label_17b2f8;
        case 0x17b2fcu: goto label_17b2fc;
        case 0x17b300u: goto label_17b300;
        case 0x17b304u: goto label_17b304;
        case 0x17b308u: goto label_17b308;
        case 0x17b30cu: goto label_17b30c;
        case 0x17b310u: goto label_17b310;
        case 0x17b314u: goto label_17b314;
        case 0x17b318u: goto label_17b318;
        case 0x17b31cu: goto label_17b31c;
        case 0x17b320u: goto label_17b320;
        case 0x17b324u: goto label_17b324;
        case 0x17b328u: goto label_17b328;
        case 0x17b32cu: goto label_17b32c;
        case 0x17b330u: goto label_17b330;
        case 0x17b334u: goto label_17b334;
        case 0x17b338u: goto label_17b338;
        case 0x17b33cu: goto label_17b33c;
        case 0x17b340u: goto label_17b340;
        case 0x17b344u: goto label_17b344;
        case 0x17b348u: goto label_17b348;
        case 0x17b34cu: goto label_17b34c;
        case 0x17b350u: goto label_17b350;
        case 0x17b354u: goto label_17b354;
        case 0x17b358u: goto label_17b358;
        case 0x17b35cu: goto label_17b35c;
        case 0x17b360u: goto label_17b360;
        case 0x17b364u: goto label_17b364;
        case 0x17b368u: goto label_17b368;
        case 0x17b36cu: goto label_17b36c;
        case 0x17b370u: goto label_17b370;
        case 0x17b374u: goto label_17b374;
        case 0x17b378u: goto label_17b378;
        case 0x17b37cu: goto label_17b37c;
        case 0x17b380u: goto label_17b380;
        case 0x17b384u: goto label_17b384;
        case 0x17b388u: goto label_17b388;
        case 0x17b38cu: goto label_17b38c;
        case 0x17b390u: goto label_17b390;
        case 0x17b394u: goto label_17b394;
        case 0x17b398u: goto label_17b398;
        case 0x17b39cu: goto label_17b39c;
        case 0x17b3a0u: goto label_17b3a0;
        case 0x17b3a4u: goto label_17b3a4;
        case 0x17b3a8u: goto label_17b3a8;
        case 0x17b3acu: goto label_17b3ac;
        case 0x17b3b0u: goto label_17b3b0;
        case 0x17b3b4u: goto label_17b3b4;
        case 0x17b3b8u: goto label_17b3b8;
        case 0x17b3bcu: goto label_17b3bc;
        case 0x17b3c0u: goto label_17b3c0;
        case 0x17b3c4u: goto label_17b3c4;
        case 0x17b3c8u: goto label_17b3c8;
        case 0x17b3ccu: goto label_17b3cc;
        case 0x17b3d0u: goto label_17b3d0;
        case 0x17b3d4u: goto label_17b3d4;
        case 0x17b3d8u: goto label_17b3d8;
        case 0x17b3dcu: goto label_17b3dc;
        case 0x17b3e0u: goto label_17b3e0;
        case 0x17b3e4u: goto label_17b3e4;
        case 0x17b3e8u: goto label_17b3e8;
        case 0x17b3ecu: goto label_17b3ec;
        case 0x17b3f0u: goto label_17b3f0;
        case 0x17b3f4u: goto label_17b3f4;
        case 0x17b3f8u: goto label_17b3f8;
        case 0x17b3fcu: goto label_17b3fc;
        case 0x17b400u: goto label_17b400;
        case 0x17b404u: goto label_17b404;
        case 0x17b408u: goto label_17b408;
        case 0x17b40cu: goto label_17b40c;
        case 0x17b410u: goto label_17b410;
        case 0x17b414u: goto label_17b414;
        case 0x17b418u: goto label_17b418;
        case 0x17b41cu: goto label_17b41c;
        case 0x17b420u: goto label_17b420;
        case 0x17b424u: goto label_17b424;
        case 0x17b428u: goto label_17b428;
        case 0x17b42cu: goto label_17b42c;
        case 0x17b430u: goto label_17b430;
        case 0x17b434u: goto label_17b434;
        case 0x17b438u: goto label_17b438;
        case 0x17b43cu: goto label_17b43c;
        case 0x17b440u: goto label_17b440;
        case 0x17b444u: goto label_17b444;
        case 0x17b448u: goto label_17b448;
        case 0x17b44cu: goto label_17b44c;
        case 0x17b450u: goto label_17b450;
        case 0x17b454u: goto label_17b454;
        case 0x17b458u: goto label_17b458;
        case 0x17b45cu: goto label_17b45c;
        case 0x17b460u: goto label_17b460;
        case 0x17b464u: goto label_17b464;
        case 0x17b468u: goto label_17b468;
        case 0x17b46cu: goto label_17b46c;
        case 0x17b470u: goto label_17b470;
        case 0x17b474u: goto label_17b474;
        case 0x17b478u: goto label_17b478;
        case 0x17b47cu: goto label_17b47c;
        case 0x17b480u: goto label_17b480;
        case 0x17b484u: goto label_17b484;
        case 0x17b488u: goto label_17b488;
        case 0x17b48cu: goto label_17b48c;
        case 0x17b490u: goto label_17b490;
        case 0x17b494u: goto label_17b494;
        case 0x17b498u: goto label_17b498;
        case 0x17b49cu: goto label_17b49c;
        case 0x17b4a0u: goto label_17b4a0;
        case 0x17b4a4u: goto label_17b4a4;
        case 0x17b4a8u: goto label_17b4a8;
        case 0x17b4acu: goto label_17b4ac;
        case 0x17b4b0u: goto label_17b4b0;
        case 0x17b4b4u: goto label_17b4b4;
        case 0x17b4b8u: goto label_17b4b8;
        case 0x17b4bcu: goto label_17b4bc;
        case 0x17b4c0u: goto label_17b4c0;
        case 0x17b4c4u: goto label_17b4c4;
        case 0x17b4c8u: goto label_17b4c8;
        case 0x17b4ccu: goto label_17b4cc;
        case 0x17b4d0u: goto label_17b4d0;
        case 0x17b4d4u: goto label_17b4d4;
        case 0x17b4d8u: goto label_17b4d8;
        case 0x17b4dcu: goto label_17b4dc;
        case 0x17b4e0u: goto label_17b4e0;
        case 0x17b4e4u: goto label_17b4e4;
        case 0x17b4e8u: goto label_17b4e8;
        case 0x17b4ecu: goto label_17b4ec;
        case 0x17b4f0u: goto label_17b4f0;
        case 0x17b4f4u: goto label_17b4f4;
        case 0x17b4f8u: goto label_17b4f8;
        case 0x17b4fcu: goto label_17b4fc;
        case 0x17b500u: goto label_17b500;
        case 0x17b504u: goto label_17b504;
        case 0x17b508u: goto label_17b508;
        case 0x17b50cu: goto label_17b50c;
        case 0x17b510u: goto label_17b510;
        case 0x17b514u: goto label_17b514;
        case 0x17b518u: goto label_17b518;
        case 0x17b51cu: goto label_17b51c;
        case 0x17b520u: goto label_17b520;
        case 0x17b524u: goto label_17b524;
        case 0x17b528u: goto label_17b528;
        case 0x17b52cu: goto label_17b52c;
        case 0x17b530u: goto label_17b530;
        case 0x17b534u: goto label_17b534;
        case 0x17b538u: goto label_17b538;
        case 0x17b53cu: goto label_17b53c;
        case 0x17b540u: goto label_17b540;
        case 0x17b544u: goto label_17b544;
        case 0x17b548u: goto label_17b548;
        case 0x17b54cu: goto label_17b54c;
        case 0x17b550u: goto label_17b550;
        case 0x17b554u: goto label_17b554;
        case 0x17b558u: goto label_17b558;
        case 0x17b55cu: goto label_17b55c;
        case 0x17b560u: goto label_17b560;
        case 0x17b564u: goto label_17b564;
        case 0x17b568u: goto label_17b568;
        case 0x17b56cu: goto label_17b56c;
        case 0x17b570u: goto label_17b570;
        case 0x17b574u: goto label_17b574;
        case 0x17b578u: goto label_17b578;
        case 0x17b57cu: goto label_17b57c;
        case 0x17b580u: goto label_17b580;
        case 0x17b584u: goto label_17b584;
        case 0x17b588u: goto label_17b588;
        case 0x17b58cu: goto label_17b58c;
        case 0x17b590u: goto label_17b590;
        case 0x17b594u: goto label_17b594;
        case 0x17b598u: goto label_17b598;
        case 0x17b59cu: goto label_17b59c;
        case 0x17b5a0u: goto label_17b5a0;
        case 0x17b5a4u: goto label_17b5a4;
        case 0x17b5a8u: goto label_17b5a8;
        case 0x17b5acu: goto label_17b5ac;
        case 0x17b5b0u: goto label_17b5b0;
        case 0x17b5b4u: goto label_17b5b4;
        case 0x17b5b8u: goto label_17b5b8;
        case 0x17b5bcu: goto label_17b5bc;
        case 0x17b5c0u: goto label_17b5c0;
        case 0x17b5c4u: goto label_17b5c4;
        case 0x17b5c8u: goto label_17b5c8;
        case 0x17b5ccu: goto label_17b5cc;
        case 0x17b5d0u: goto label_17b5d0;
        case 0x17b5d4u: goto label_17b5d4;
        case 0x17b5d8u: goto label_17b5d8;
        case 0x17b5dcu: goto label_17b5dc;
        case 0x17b5e0u: goto label_17b5e0;
        case 0x17b5e4u: goto label_17b5e4;
        case 0x17b5e8u: goto label_17b5e8;
        case 0x17b5ecu: goto label_17b5ec;
        case 0x17b5f0u: goto label_17b5f0;
        case 0x17b5f4u: goto label_17b5f4;
        case 0x17b5f8u: goto label_17b5f8;
        case 0x17b5fcu: goto label_17b5fc;
        case 0x17b600u: goto label_17b600;
        case 0x17b604u: goto label_17b604;
        case 0x17b608u: goto label_17b608;
        case 0x17b60cu: goto label_17b60c;
        case 0x17b610u: goto label_17b610;
        case 0x17b614u: goto label_17b614;
        case 0x17b618u: goto label_17b618;
        case 0x17b61cu: goto label_17b61c;
        case 0x17b620u: goto label_17b620;
        case 0x17b624u: goto label_17b624;
        case 0x17b628u: goto label_17b628;
        case 0x17b62cu: goto label_17b62c;
        case 0x17b630u: goto label_17b630;
        case 0x17b634u: goto label_17b634;
        case 0x17b638u: goto label_17b638;
        case 0x17b63cu: goto label_17b63c;
        case 0x17b640u: goto label_17b640;
        case 0x17b644u: goto label_17b644;
        case 0x17b648u: goto label_17b648;
        case 0x17b64cu: goto label_17b64c;
        case 0x17b650u: goto label_17b650;
        case 0x17b654u: goto label_17b654;
        case 0x17b658u: goto label_17b658;
        case 0x17b65cu: goto label_17b65c;
        case 0x17b660u: goto label_17b660;
        case 0x17b664u: goto label_17b664;
        case 0x17b668u: goto label_17b668;
        case 0x17b66cu: goto label_17b66c;
        case 0x17b670u: goto label_17b670;
        case 0x17b674u: goto label_17b674;
        case 0x17b678u: goto label_17b678;
        case 0x17b67cu: goto label_17b67c;
        case 0x17b680u: goto label_17b680;
        case 0x17b684u: goto label_17b684;
        case 0x17b688u: goto label_17b688;
        case 0x17b68cu: goto label_17b68c;
        case 0x17b690u: goto label_17b690;
        case 0x17b694u: goto label_17b694;
        case 0x17b698u: goto label_17b698;
        case 0x17b69cu: goto label_17b69c;
        case 0x17b6a0u: goto label_17b6a0;
        case 0x17b6a4u: goto label_17b6a4;
        case 0x17b6a8u: goto label_17b6a8;
        case 0x17b6acu: goto label_17b6ac;
        case 0x17b6b0u: goto label_17b6b0;
        case 0x17b6b4u: goto label_17b6b4;
        case 0x17b6b8u: goto label_17b6b8;
        case 0x17b6bcu: goto label_17b6bc;
        case 0x17b6c0u: goto label_17b6c0;
        case 0x17b6c4u: goto label_17b6c4;
        case 0x17b6c8u: goto label_17b6c8;
        case 0x17b6ccu: goto label_17b6cc;
        case 0x17b6d0u: goto label_17b6d0;
        case 0x17b6d4u: goto label_17b6d4;
        case 0x17b6d8u: goto label_17b6d8;
        case 0x17b6dcu: goto label_17b6dc;
        case 0x17b6e0u: goto label_17b6e0;
        case 0x17b6e4u: goto label_17b6e4;
        case 0x17b6e8u: goto label_17b6e8;
        case 0x17b6ecu: goto label_17b6ec;
        case 0x17b6f0u: goto label_17b6f0;
        case 0x17b6f4u: goto label_17b6f4;
        case 0x17b6f8u: goto label_17b6f8;
        case 0x17b6fcu: goto label_17b6fc;
        case 0x17b700u: goto label_17b700;
        case 0x17b704u: goto label_17b704;
        case 0x17b708u: goto label_17b708;
        case 0x17b70cu: goto label_17b70c;
        case 0x17b710u: goto label_17b710;
        case 0x17b714u: goto label_17b714;
        case 0x17b718u: goto label_17b718;
        case 0x17b71cu: goto label_17b71c;
        case 0x17b720u: goto label_17b720;
        case 0x17b724u: goto label_17b724;
        case 0x17b728u: goto label_17b728;
        case 0x17b72cu: goto label_17b72c;
        case 0x17b730u: goto label_17b730;
        case 0x17b734u: goto label_17b734;
        case 0x17b738u: goto label_17b738;
        default: break;
    }

    ctx->pc = 0x17b2b0u;

label_17b2b0:
    // 0x17b2b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17b2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_17b2b4:
    // 0x17b2b4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x17b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_17b2b8:
    // 0x17b2b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17b2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17b2bc:
    // 0x17b2bc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x17b2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_17b2c0:
    // 0x17b2c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17b2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_17b2c4:
    // 0x17b2c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17b2c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_17b2c8:
    // 0x17b2c8: 0x8c8303d0  lw          $v1, 0x3D0($a0)
    ctx->pc = 0x17b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 976)));
label_17b2cc:
    // 0x17b2cc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x17b2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_17b2d0:
    // 0x17b2d0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_17b2d4:
    if (ctx->pc == 0x17B2D4u) {
        ctx->pc = 0x17B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2D0u;
        // 0x17b2d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B2D8u;
        goto label_17b2d8;
    }
    ctx->pc = 0x17B2D0u;
    {
        const bool branch_taken_0x17b2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2D0u;
        // 0x17b2d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2d0) {
            ctx->pc = 0x17B2E0u;
            goto label_17b2e0;
        }
    }
    ctx->pc = 0x17B2D8u;
label_17b2d8:
    // 0x17b2d8: 0x10000113  b           . + 4 + (0x113 << 2)
label_17b2dc:
    if (ctx->pc == 0x17B2DCu) {
        ctx->pc = 0x17B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2D8u;
        // 0x17b2dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B2E0u;
        goto label_17b2e0;
    }
    ctx->pc = 0x17B2D8u;
    {
        const bool branch_taken_0x17b2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2D8u;
        // 0x17b2dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2d8) {
            ctx->pc = 0x17B728u;
            goto label_17b728;
        }
    }
    ctx->pc = 0x17B2E0u;
label_17b2e0:
    // 0x17b2e0: 0xc055ac0  jal         func_156B00
label_17b2e4:
    if (ctx->pc == 0x17B2E4u) {
        ctx->pc = 0x17B2E8u;
        goto label_17b2e8;
    }
    ctx->pc = 0x17B2E0u;
    SET_GPR_U32(ctx, 31, 0x17B2E8u);
    ctx->pc = 0x156B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156B00u, 0x17B2E0u, 0x17B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2E8u;
label_17b2e8:
    // 0x17b2e8: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x17b2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_17b2ec:
    // 0x17b2ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17b2f0:
    // 0x17b2f0: 0x1062007c  beq         $v1, $v0, . + 4 + (0x7C << 2)
label_17b2f4:
    if (ctx->pc == 0x17B2F4u) {
        ctx->pc = 0x17B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2F0u;
        // 0x17b2f4: 0x260203e0  addiu       $v0, $s0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B2F8u;
        goto label_17b2f8;
    }
    ctx->pc = 0x17B2F0u;
    {
        const bool branch_taken_0x17b2f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2F0u;
        // 0x17b2f4: 0x260203e0  addiu       $v0, $s0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2f0) {
            ctx->pc = 0x17B4E4u;
            goto label_17b4e4;
        }
    }
    ctx->pc = 0x17B2F8u;
label_17b2f8:
    // 0x17b2f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17b2fc:
    // 0x17b2fc: 0x10620078  beq         $v1, $v0, . + 4 + (0x78 << 2)
label_17b300:
    if (ctx->pc == 0x17B300u) {
        ctx->pc = 0x17B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2FCu;
        // 0x17b300: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B304u;
        goto label_17b304;
    }
    ctx->pc = 0x17B2FCu;
    {
        const bool branch_taken_0x17b2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2FCu;
        // 0x17b300: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2fc) {
            ctx->pc = 0x17B4E0u;
            goto label_17b4e0;
        }
    }
    ctx->pc = 0x17B304u;
label_17b304:
    // 0x17b304: 0x10620089  beq         $v1, $v0, . + 4 + (0x89 << 2)
label_17b308:
    if (ctx->pc == 0x17B308u) {
        ctx->pc = 0x17B30Cu;
        goto label_17b30c;
    }
    ctx->pc = 0x17B304u;
    {
        const bool branch_taken_0x17b304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b304) {
            ctx->pc = 0x17B52Cu;
            goto label_17b52c;
        }
    }
    ctx->pc = 0x17B30Cu;
label_17b30c:
    // 0x17b30c: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
label_17b310:
    if (ctx->pc == 0x17B310u) {
        ctx->pc = 0x17B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B30Cu;
        // 0x17b310: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B314u;
        goto label_17b314;
    }
    ctx->pc = 0x17B30Cu;
    {
        const bool branch_taken_0x17b30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B30Cu;
        // 0x17b310: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b30c) {
            ctx->pc = 0x17B49Cu;
            goto label_17b49c;
        }
    }
    ctx->pc = 0x17B314u;
label_17b314:
    // 0x17b314: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_17b318:
    if (ctx->pc == 0x17B318u) {
        ctx->pc = 0x17B31Cu;
        goto label_17b31c;
    }
    ctx->pc = 0x17B314u;
    {
        const bool branch_taken_0x17b314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b314) {
            ctx->pc = 0x17B324u;
            goto label_17b324;
        }
    }
    ctx->pc = 0x17B31Cu;
label_17b31c:
    // 0x17b31c: 0x10000084  b           . + 4 + (0x84 << 2)
label_17b320:
    if (ctx->pc == 0x17B320u) {
        ctx->pc = 0x17B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B31Cu;
        // 0x17b320: 0x8e04041c  lw          $a0, 0x41C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B324u;
        goto label_17b324;
    }
    ctx->pc = 0x17B31Cu;
    {
        const bool branch_taken_0x17b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B31Cu;
        // 0x17b320: 0x8e04041c  lw          $a0, 0x41C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b31c) {
            ctx->pc = 0x17B530u;
            goto label_17b530;
        }
    }
    ctx->pc = 0x17B324u;
label_17b324:
    // 0x17b324: 0x260203f0  addiu       $v0, $s0, 0x3F0
    ctx->pc = 0x17b324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
label_17b328:
    // 0x17b328: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17b328u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17b32c:
    // 0x17b32c: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x17b32cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_17b330:
    // 0x17b330: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x17b330u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b334:
    // 0x17b334: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x17b334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b338:
    // 0x17b338: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x17b338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b33c:
    // 0x17b33c: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x17b33cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b340:
    // 0x17b340: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x17b340u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
label_17b344:
    // 0x17b344: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17b344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17b348:
    // 0x17b348: 0xc082520  jal         func_209480
label_17b34c:
    if (ctx->pc == 0x17B34Cu) {
        ctx->pc = 0x17B350u;
        goto label_17b350;
    }
    ctx->pc = 0x17B348u;
    SET_GPR_U32(ctx, 31, 0x17B350u);
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x17B348u, 0x17B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B350u;
label_17b350:
    // 0x17b350: 0x3c034062  lui         $v1, 0x4062
    ctx->pc = 0x17b350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16482 << 16));
label_17b354:
    // 0x17b354: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17b354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17b358:
    // 0x17b358: 0xc0400f4  jal         func_1003D0
label_17b35c:
    if (ctx->pc == 0x17B35Cu) {
        ctx->pc = 0x17B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B358u;
        // 0x17b35c: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B360u;
        goto label_17b360;
    }
    ctx->pc = 0x17B358u;
    SET_GPR_U32(ctx, 31, 0x17B360u);
    ctx->pc = 0x17B35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B358u;
    // 0x17b35c: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003D0u, 0x17B358u, 0x17B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B360u;
label_17b360:
    // 0x17b360: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_17b364:
    if (ctx->pc == 0x17B364u) {
        ctx->pc = 0x17B368u;
        goto label_17b368;
    }
    ctx->pc = 0x17B360u;
    {
        const bool branch_taken_0x17b360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b360) {
            ctx->pc = 0x17B38Cu;
            goto label_17b38c;
        }
    }
    ctx->pc = 0x17B368u;
label_17b368:
    // 0x17b368: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x17b368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b36c:
    // 0x17b36c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17b370:
    // 0x17b370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b374:
    // 0x17b374: 0xc60203f4  lwc1        $f2, 0x3F4($s0)
    ctx->pc = 0x17b374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17b378:
    // 0x17b378: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17b378u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17b37c:
    // 0x17b37c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x17b37cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b380:
    // 0x17b380: 0x0  nop
    ctx->pc = 0x17b380u;
    // NOP
label_17b384:
    // 0x17b384: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_17b388:
    if (ctx->pc == 0x17B388u) {
        ctx->pc = 0x17B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B384u;
        // 0x17b388: 0x260203f0  addiu       $v0, $s0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B38Cu;
        goto label_17b38c;
    }
    ctx->pc = 0x17B384u;
    {
        const bool branch_taken_0x17b384 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B384u;
        // 0x17b388: 0x260203f0  addiu       $v0, $s0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b384) {
            ctx->pc = 0x17B3FCu;
            goto label_17b3fc;
        }
    }
    ctx->pc = 0x17B38Cu;
label_17b38c:
    // 0x17b38c: 0x260203f0  addiu       $v0, $s0, 0x3F0
    ctx->pc = 0x17b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
label_17b390:
    // 0x17b390: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x17b390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_17b394:
    // 0x17b394: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17b394u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17b398:
    // 0x17b398: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x17b398u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_17b39c:
    // 0x17b39c: 0x4a200180  vaddx.w     $vf6, $vf0, $vf0x
    ctx->pc = 0x17b39cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b3a0:
    // 0x17b3a0: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x17b3a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b3a4:
    // 0x17b3a4: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x17b3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_17b3a8:
    // 0x17b3a8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17b3a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17b3ac:
    // 0x17b3ac: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x17b3acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17b3b0:
    // 0x17b3b0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x17b3b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17b3b4:
    // 0x17b3b4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x17b3b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17b3b8:
    // 0x17b3b8: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17b3b8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_17b3bc:
    // 0x17b3bc: 0x4a0003bf  vwaitq
    ctx->pc = 0x17b3bcu;
    // VWAITQ (Q already resolved in this runtime)
label_17b3c0:
    // 0x17b3c0: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x17b3c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17b3c4:
    // 0x17b3c4: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x17b3c4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
label_17b3c8:
    // 0x17b3c8: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x17b3c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b3cc:
    // 0x17b3cc: 0x4a0003bf  vwaitq
    ctx->pc = 0x17b3ccu;
    // VWAITQ (Q already resolved in this runtime)
label_17b3d0:
    // 0x17b3d0: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x17b3d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b3d4:
    // 0x17b3d4: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x17b3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_17b3d8:
    // 0x17b3d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17b3dc:
    // 0x17b3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b3e0:
    // 0x17b3e0: 0xc055b04  jal         func_156C10
label_17b3e4:
    if (ctx->pc == 0x17B3E4u) {
        ctx->pc = 0x17B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3E0u;
        // 0x17b3e4: 0xae020418  sw          $v0, 0x418($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B3E8u;
        goto label_17b3e8;
    }
    ctx->pc = 0x17B3E0u;
    SET_GPR_U32(ctx, 31, 0x17B3E8u);
    ctx->pc = 0x17B3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B3E0u;
    // 0x17b3e4: 0xae020418  sw          $v0, 0x418($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156C10u, 0x17B3E0u, 0x17B3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B3E8u;
label_17b3e8:
    // 0x17b3e8: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x17b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_17b3ec:
    // 0x17b3ec: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x17b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_17b3f0:
    // 0x17b3f0: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x17b3f0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17b3f4:
    // 0x17b3f4: 0x1000004d  b           . + 4 + (0x4D << 2)
label_17b3f8:
    if (ctx->pc == 0x17B3F8u) {
        ctx->pc = 0x17B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3F4u;
        // 0x17b3f8: 0x7e060290  sq          $a2, 0x290($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 656), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B3FCu;
        goto label_17b3fc;
    }
    ctx->pc = 0x17B3F4u;
    {
        const bool branch_taken_0x17b3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3F4u;
        // 0x17b3f8: 0x7e060290  sq          $a2, 0x290($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 656), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3f4) {
            ctx->pc = 0x17B52Cu;
            goto label_17b52c;
        }
    }
    ctx->pc = 0x17B3FCu;
label_17b3fc:
    // 0x17b3fc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x17b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17b400:
    // 0x17b400: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17b400u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17b404:
    // 0x17b404: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x17b404u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_17b408:
    // 0x17b408: 0x4a200180  vaddx.w     $vf6, $vf0, $vf0x
    ctx->pc = 0x17b408u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b40c:
    // 0x17b40c: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x17b40cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b410:
    // 0x17b410: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x17b410u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_17b414:
    // 0x17b414: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17b414u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17b418:
    // 0x17b418: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x17b418u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17b41c:
    // 0x17b41c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x17b41cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17b420:
    // 0x17b420: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x17b420u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17b424:
    // 0x17b424: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17b424u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_17b428:
    // 0x17b428: 0x4a0003bf  vwaitq
    ctx->pc = 0x17b428u;
    // VWAITQ (Q already resolved in this runtime)
label_17b42c:
    // 0x17b42c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x17b42cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17b430:
    // 0x17b430: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x17b430u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
label_17b434:
    // 0x17b434: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x17b434u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b438:
    // 0x17b438: 0x4a0003bf  vwaitq
    ctx->pc = 0x17b438u;
    // VWAITQ (Q already resolved in this runtime)
label_17b43c:
    // 0x17b43c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x17b43cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b440:
    // 0x17b440: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x17b440u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_17b444:
    // 0x17b444: 0x26020290  addiu       $v0, $s0, 0x290
    ctx->pc = 0x17b444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
label_17b448:
    // 0x17b448: 0xd8470000  lqc2        $vf7, 0x0($v0)
    ctx->pc = 0x17b448u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17b44c:
    // 0x17b44c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17b44cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17b450:
    // 0x17b450: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x17b450u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_17b454:
    // 0x17b454: 0x0  nop
    ctx->pc = 0x17b454u;
    // NOP
label_17b458:
    // 0x17b458: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x17b458u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_17b45c:
    // 0x17b45c: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x17b45cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b460:
    // 0x17b460: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x17b460u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17b464:
    // 0x17b464: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x17b464u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_17b468:
    // 0x17b468: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17b468u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17b46c:
    // 0x17b46c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x17b46cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17b470:
    // 0x17b470: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x17b470u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17b474:
    // 0x17b474: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x17b474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17b478:
    // 0x17b478: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17b478u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_17b47c:
    // 0x17b47c: 0x4a0003bf  vwaitq
    ctx->pc = 0x17b47cu;
    // VWAITQ (Q already resolved in this runtime)
label_17b480:
    // 0x17b480: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x17b480u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17b484:
    // 0x17b484: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x17b484u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
label_17b488:
    // 0x17b488: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x17b488u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b48c:
    // 0x17b48c: 0x4a0003bf  vwaitq
    ctx->pc = 0x17b48cu;
    // VWAITQ (Q already resolved in this runtime)
label_17b490:
    // 0x17b490: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x17b490u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b494:
    // 0x17b494: 0x10000025  b           . + 4 + (0x25 << 2)
label_17b498:
    if (ctx->pc == 0x17B498u) {
        ctx->pc = 0x17B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B494u;
        // 0x17b498: 0xf8460000  sqc2        $vf6, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B49Cu;
        goto label_17b49c;
    }
    ctx->pc = 0x17B494u;
    {
        const bool branch_taken_0x17b494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B494u;
        // 0x17b498: 0xf8460000  sqc2        $vf6, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b494) {
            ctx->pc = 0x17B52Cu;
            goto label_17b52c;
        }
    }
    ctx->pc = 0x17B49Cu;
label_17b49c:
    // 0x17b49c: 0xc6010304  lwc1        $f1, 0x304($s0)
    ctx->pc = 0x17b49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b4a0:
    // 0x17b4a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b4a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b4a4:
    // 0x17b4a4: 0x0  nop
    ctx->pc = 0x17b4a4u;
    // NOP
label_17b4a8:
    // 0x17b4a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17b4a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b4ac:
    // 0x17b4ac: 0x0  nop
    ctx->pc = 0x17b4acu;
    // NOP
label_17b4b0:
    // 0x17b4b0: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_17b4b4:
    if (ctx->pc == 0x17B4B4u) {
        ctx->pc = 0x17B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4B0u;
        // 0x17b4b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B4B8u;
        goto label_17b4b8;
    }
    ctx->pc = 0x17B4B0u;
    {
        const bool branch_taken_0x17b4b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4B0u;
        // 0x17b4b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4b0) {
            ctx->pc = 0x17B52Cu;
            goto label_17b52c;
        }
    }
    ctx->pc = 0x17B4B8u;
label_17b4b8:
    // 0x17b4b8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x17b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_17b4bc:
    // 0x17b4bc: 0xae030418  sw          $v1, 0x418($s0)
    ctx->pc = 0x17b4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 3));
label_17b4c0:
    // 0x17b4c0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x17b4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_17b4c4:
    // 0x17b4c4: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x17b4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_17b4c8:
    // 0x17b4c8: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x17b4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b4cc:
    // 0x17b4cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b4d0:
    // 0x17b4d0: 0x0  nop
    ctx->pc = 0x17b4d0u;
    // NOP
label_17b4d4:
    // 0x17b4d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17b4d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17b4d8:
    // 0x17b4d8: 0x10000014  b           . + 4 + (0x14 << 2)
label_17b4dc:
    if (ctx->pc == 0x17B4DCu) {
        ctx->pc = 0x17B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4D8u;
        // 0x17b4dc: 0xe60002a4  swc1        $f0, 0x2A4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B4E0u;
        goto label_17b4e0;
    }
    ctx->pc = 0x17B4D8u;
    {
        const bool branch_taken_0x17b4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4D8u;
        // 0x17b4dc: 0xe60002a4  swc1        $f0, 0x2A4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4d8) {
            ctx->pc = 0x17B52Cu;
            goto label_17b52c;
        }
    }
    ctx->pc = 0x17B4E0u;
label_17b4e0:
    // 0x17b4e0: 0x260203e0  addiu       $v0, $s0, 0x3E0
    ctx->pc = 0x17b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
label_17b4e4:
    // 0x17b4e4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17b4e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17b4e8:
    // 0x17b4e8: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x17b4e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_17b4ec:
    // 0x17b4ec: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x17b4ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b4f0:
    // 0x17b4f0: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x17b4f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b4f4:
    // 0x17b4f4: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x17b4f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b4f8:
    // 0x17b4f8: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x17b4f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b4fc:
    // 0x17b4fc: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x17b4fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
label_17b500:
    // 0x17b500: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17b500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17b504:
    // 0x17b504: 0x3c0246c8  lui         $v0, 0x46C8
    ctx->pc = 0x17b504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18120 << 16));
label_17b508:
    // 0x17b508: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b50c:
    // 0x17b50c: 0x0  nop
    ctx->pc = 0x17b50cu;
    // NOP
label_17b510:
    // 0x17b510: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17b510u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b514:
    // 0x17b514: 0x0  nop
    ctx->pc = 0x17b514u;
    // NOP
label_17b518:
    // 0x17b518: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_17b51c:
    if (ctx->pc == 0x17B51Cu) {
        ctx->pc = 0x17B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B518u;
        // 0x17b51c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B520u;
        goto label_17b520;
    }
    ctx->pc = 0x17B518u;
    {
        const bool branch_taken_0x17b518 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B518u;
        // 0x17b51c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b518) {
            ctx->pc = 0x17B52Cu;
            goto label_17b52c;
        }
    }
    ctx->pc = 0x17B520u;
label_17b520:
    // 0x17b520: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17b524:
    // 0x17b524: 0x10000080  b           . + 4 + (0x80 << 2)
label_17b528:
    if (ctx->pc == 0x17B528u) {
        ctx->pc = 0x17B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B524u;
        // 0x17b528: 0xae0303d0  sw          $v1, 0x3D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 976), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B52Cu;
        goto label_17b52c;
    }
    ctx->pc = 0x17B524u;
    {
        const bool branch_taken_0x17b524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B524u;
        // 0x17b528: 0xae0303d0  sw          $v1, 0x3D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 976), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b524) {
            ctx->pc = 0x17B728u;
            goto label_17b728;
        }
    }
    ctx->pc = 0x17B52Cu;
label_17b52c:
    // 0x17b52c: 0x8e04041c  lw          $a0, 0x41C($s0)
    ctx->pc = 0x17b52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
label_17b530:
    // 0x17b530: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x17b530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17b534:
    // 0x17b534: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x17b534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_17b538:
    // 0x17b538: 0x320f809  jalr        $t9
label_17b53c:
    if (ctx->pc == 0x17B53Cu) {
        ctx->pc = 0x17B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B538u;
        // 0x17b53c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B540u;
        goto label_17b540;
    }
    ctx->pc = 0x17B538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17B540u);
        ctx->pc = 0x17B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B538u;
        // 0x17b53c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B538u, 0x17B540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B540u;
label_17b540:
    // 0x17b540: 0x8e04041c  lw          $a0, 0x41C($s0)
    ctx->pc = 0x17b540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
label_17b544:
    // 0x17b544: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x17b544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17b548:
    // 0x17b548: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x17b548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_17b54c:
    // 0x17b54c: 0x320f809  jalr        $t9
label_17b550:
    if (ctx->pc == 0x17B550u) {
        ctx->pc = 0x17B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B54Cu;
        // 0x17b550: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B554u;
        goto label_17b554;
    }
    ctx->pc = 0x17B54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17B554u);
        ctx->pc = 0x17B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B54Cu;
        // 0x17b550: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B54Cu, 0x17B554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B554u;
label_17b554:
    // 0x17b554: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x17b554u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_17b558:
    // 0x17b558: 0x14200068  bnez        $at, . + 4 + (0x68 << 2)
label_17b55c:
    if (ctx->pc == 0x17B55Cu) {
        ctx->pc = 0x17B560u;
        goto label_17b560;
    }
    ctx->pc = 0x17B558u;
    {
        const bool branch_taken_0x17b558 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b558) {
            ctx->pc = 0x17B6FCu;
            goto label_17b6fc;
        }
    }
    ctx->pc = 0x17B560u;
label_17b560:
    // 0x17b560: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x17b560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_17b564:
    // 0x17b564: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17b564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17b568:
    // 0x17b568: 0x10620064  beq         $v1, $v0, . + 4 + (0x64 << 2)
label_17b56c:
    if (ctx->pc == 0x17B56Cu) {
        ctx->pc = 0x17B570u;
        goto label_17b570;
    }
    ctx->pc = 0x17B568u;
    {
        const bool branch_taken_0x17b568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b568) {
            ctx->pc = 0x17B6FCu;
            goto label_17b6fc;
        }
    }
    ctx->pc = 0x17B570u;
label_17b570:
    // 0x17b570: 0x8e04041c  lw          $a0, 0x41C($s0)
    ctx->pc = 0x17b570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
label_17b574:
    // 0x17b574: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x17b574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
label_17b578:
    // 0x17b578: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x17b578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
label_17b57c:
    // 0x17b57c: 0x93828488  lbu         $v0, -0x7B78($gp)
    ctx->pc = 0x17b57cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
label_17b580:
    // 0x17b580: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x17b580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17b584:
    // 0x17b584: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x17b584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_17b588:
    // 0x17b588: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x17b588u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17b58c:
    // 0x17b58c: 0x80c5006c  lb          $a1, 0x6C($a2)
    ctx->pc = 0x17b58cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 108)));
label_17b590:
    // 0x17b590: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17b590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_17b594:
    // 0x17b594: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17b594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17b598:
    // 0x17b598: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_17b59c:
    if (ctx->pc == 0x17B59Cu) {
        ctx->pc = 0x17B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B598u;
        // 0x17b59c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B5A0u;
        goto label_17b5a0;
    }
    ctx->pc = 0x17B598u;
    {
        const bool branch_taken_0x17b598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B598u;
        // 0x17b59c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b598) {
            ctx->pc = 0x17B5B4u;
            goto label_17b5b4;
        }
    }
    ctx->pc = 0x17B5A0u;
label_17b5a0:
    // 0x17b5a0: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x17b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_17b5a4:
    // 0x17b5a4: 0x24422eb0  addiu       $v0, $v0, 0x2EB0
    ctx->pc = 0x17b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
label_17b5a8:
    // 0x17b5a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_17b5ac:
    // 0x17b5ac: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x17b5acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_17b5b0:
    // 0x17b5b0: 0x0  nop
    ctx->pc = 0x17b5b0u;
    // NOP
label_17b5b4:
    // 0x17b5b4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_17b5b8:
    if (ctx->pc == 0x17B5B8u) {
        ctx->pc = 0x17B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5B4u;
        // 0x17b5b8: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B5BCu;
        goto label_17b5bc;
    }
    ctx->pc = 0x17B5B4u;
    {
        const bool branch_taken_0x17b5b4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x17B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5B4u;
        // 0x17b5b8: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5b4) {
            ctx->pc = 0x17B5C4u;
            goto label_17b5c4;
        }
    }
    ctx->pc = 0x17B5BCu;
label_17b5bc:
    // 0x17b5bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_17b5c0:
    if (ctx->pc == 0x17B5C0u) {
        ctx->pc = 0x17B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5BCu;
        // 0x17b5c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B5C4u;
        goto label_17b5c4;
    }
    ctx->pc = 0x17B5BCu;
    {
        const bool branch_taken_0x17b5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5BCu;
        // 0x17b5c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5bc) {
            ctx->pc = 0x17B5D0u;
            goto label_17b5d0;
        }
    }
    ctx->pc = 0x17B5C4u;
label_17b5c4:
    // 0x17b5c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17b5c8:
    // 0x17b5c8: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x17b5c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_17b5cc:
    // 0x17b5cc: 0x0  nop
    ctx->pc = 0x17b5ccu;
    // NOP
label_17b5d0:
    // 0x17b5d0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x17b5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_17b5d4:
    // 0x17b5d4: 0x93828488  lbu         $v0, -0x7B78($gp)
    ctx->pc = 0x17b5d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
label_17b5d8:
    // 0x17b5d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_17b5dc:
    if (ctx->pc == 0x17B5DCu) {
        ctx->pc = 0x17B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5D8u;
        // 0x17b5dc: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B5E0u;
        goto label_17b5e0;
    }
    ctx->pc = 0x17B5D8u;
    {
        const bool branch_taken_0x17b5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5D8u;
        // 0x17b5dc: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5d8) {
            ctx->pc = 0x17B5F4u;
            goto label_17b5f4;
        }
    }
    ctx->pc = 0x17B5E0u;
label_17b5e0:
    // 0x17b5e0: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x17b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_17b5e4:
    // 0x17b5e4: 0x24422eb0  addiu       $v0, $v0, 0x2EB0
    ctx->pc = 0x17b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
label_17b5e8:
    // 0x17b5e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_17b5ec:
    // 0x17b5ec: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x17b5ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_17b5f0:
    // 0x17b5f0: 0x0  nop
    ctx->pc = 0x17b5f0u;
    // NOP
label_17b5f4:
    // 0x17b5f4: 0x4a10001  bgez        $a1, . + 4 + (0x1 << 2)
label_17b5f8:
    if (ctx->pc == 0x17B5F8u) {
        ctx->pc = 0x17B5FCu;
        goto label_17b5fc;
    }
    ctx->pc = 0x17B5F4u;
    {
        const bool branch_taken_0x17b5f4 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x17b5f4) {
            ctx->pc = 0x17B5FCu;
            goto label_17b5fc;
        }
    }
    ctx->pc = 0x17B5FCu;
label_17b5fc:
    // 0x17b5fc: 0x8e03041c  lw          $v1, 0x41C($s0)
    ctx->pc = 0x17b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
label_17b600:
    // 0x17b600: 0x8062021c  lb          $v0, 0x21C($v1)
    ctx->pc = 0x17b600u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 540)));
label_17b604:
    // 0x17b604: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
label_17b608:
    if (ctx->pc == 0x17B608u) {
        ctx->pc = 0x17B60Cu;
        goto label_17b60c;
    }
    ctx->pc = 0x17B604u;
    {
        const bool branch_taken_0x17b604 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17b604) {
            ctx->pc = 0x17B68Cu;
            goto label_17b68c;
        }
    }
    ctx->pc = 0x17B60Cu;
label_17b60c:
    // 0x17b60c: 0x1880001f  blez        $a0, . + 4 + (0x1F << 2)
label_17b610:
    if (ctx->pc == 0x17B610u) {
        ctx->pc = 0x17B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B60Cu;
        // 0x17b610: 0x28810012  slti        $at, $a0, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B614u;
        goto label_17b614;
    }
    ctx->pc = 0x17B60Cu;
    {
        const bool branch_taken_0x17b60c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x17B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B60Cu;
        // 0x17b610: 0x28810012  slti        $at, $a0, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b60c) {
            ctx->pc = 0x17B68Cu;
            goto label_17b68c;
        }
    }
    ctx->pc = 0x17B614u;
label_17b614:
    // 0x17b614: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_17b618:
    if (ctx->pc == 0x17B618u) {
        ctx->pc = 0x17B61Cu;
        goto label_17b61c;
    }
    ctx->pc = 0x17B614u;
    {
        const bool branch_taken_0x17b614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b614) {
            ctx->pc = 0x17B68Cu;
            goto label_17b68c;
        }
    }
    ctx->pc = 0x17B61Cu;
label_17b61c:
    // 0x17b61c: 0x906201f9  lbu         $v0, 0x1F9($v1)
    ctx->pc = 0x17b61cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 505)));
label_17b620:
    // 0x17b620: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_17b624:
    if (ctx->pc == 0x17B624u) {
        ctx->pc = 0x17B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B620u;
        // 0x17b624: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B628u;
        goto label_17b628;
    }
    ctx->pc = 0x17B620u;
    {
        const bool branch_taken_0x17b620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B620u;
        // 0x17b624: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b620) {
            ctx->pc = 0x17B68Cu;
            goto label_17b68c;
        }
    }
    ctx->pc = 0x17B628u;
label_17b628:
    // 0x17b628: 0x26030290  addiu       $v1, $s0, 0x290
    ctx->pc = 0x17b628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
label_17b62c:
    // 0x17b62c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b630:
    // 0x17b630: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17b630u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17b634:
    // 0x17b634: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x17b634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_17b638:
    // 0x17b638: 0x0  nop
    ctx->pc = 0x17b638u;
    // NOP
label_17b63c:
    // 0x17b63c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x17b63cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_17b640:
    // 0x17b640: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x17b640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17b644:
    // 0x17b644: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x17b644u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_17b648:
    // 0x17b648: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17b64c:
    // 0x17b64c: 0xae020418  sw          $v0, 0x418($s0)
    ctx->pc = 0x17b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 2));
label_17b650:
    // 0x17b650: 0x8e04041c  lw          $a0, 0x41C($s0)
    ctx->pc = 0x17b650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
label_17b654:
    // 0x17b654: 0xc042118  jal         func_108460
label_17b658:
    if (ctx->pc == 0x17B658u) {
        ctx->pc = 0x17B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B654u;
        // 0x17b658: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B65Cu;
        goto label_17b65c;
    }
    ctx->pc = 0x17B654u;
    SET_GPR_U32(ctx, 31, 0x17B65Cu);
    ctx->pc = 0x17B658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B654u;
    // 0x17b658: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x17B654u, 0x17B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B65Cu;
label_17b65c:
    // 0x17b65c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x17b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_17b660:
    // 0x17b660: 0xc046458  jal         func_119160
label_17b664:
    if (ctx->pc == 0x17B664u) {
        ctx->pc = 0x17B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B660u;
        // 0x17b664: 0x2484f8a0  addiu       $a0, $a0, -0x760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B668u;
        goto label_17b668;
    }
    ctx->pc = 0x17B660u;
    SET_GPR_U32(ctx, 31, 0x17B668u);
    ctx->pc = 0x17B664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B660u;
    // 0x17b664: 0x2484f8a0  addiu       $a0, $a0, -0x760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x17B660u, 0x17B668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B668u;
label_17b668:
    // 0x17b668: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
label_17b66c:
    if (ctx->pc == 0x17B66Cu) {
        ctx->pc = 0x17B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B668u;
        // 0x17b66c: 0x21900  sll         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B670u;
        goto label_17b670;
    }
    ctx->pc = 0x17B668u;
    {
        const bool branch_taken_0x17b668 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B668u;
        // 0x17b66c: 0x21900  sll         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b668) {
            ctx->pc = 0x17B6FCu;
            goto label_17b6fc;
        }
    }
    ctx->pc = 0x17B670u;
label_17b670:
    // 0x17b670: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x17b670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_17b674:
    // 0x17b674: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17b674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_17b678:
    // 0x17b678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b67c:
    // 0x17b67c: 0xc0465f0  jal         func_1197C0
label_17b680:
    if (ctx->pc == 0x17B680u) {
        ctx->pc = 0x17B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B67Cu;
        // 0x17b680: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B684u;
        goto label_17b684;
    }
    ctx->pc = 0x17B67Cu;
    SET_GPR_U32(ctx, 31, 0x17B684u);
    ctx->pc = 0x17B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B67Cu;
    // 0x17b680: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x17B67Cu, 0x17B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B684u;
label_17b684:
    // 0x17b684: 0x1000001e  b           . + 4 + (0x1E << 2)
label_17b688:
    if (ctx->pc == 0x17B688u) {
        ctx->pc = 0x17B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B684u;
        // 0x17b688: 0x8e04041c  lw          $a0, 0x41C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B68Cu;
        goto label_17b68c;
    }
    ctx->pc = 0x17B684u;
    {
        const bool branch_taken_0x17b684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B684u;
        // 0x17b688: 0x8e04041c  lw          $a0, 0x41C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b684) {
            ctx->pc = 0x17B700u;
            goto label_17b700;
        }
    }
    ctx->pc = 0x17B68Cu;
label_17b68c:
    // 0x17b68c: 0x8e03041c  lw          $v1, 0x41C($s0)
    ctx->pc = 0x17b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
label_17b690:
    // 0x17b690: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x17b690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_17b694:
    // 0x17b694: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17b694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17b698:
    // 0x17b698: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b69c:
    // 0x17b69c: 0x26060300  addiu       $a2, $s0, 0x300
    ctx->pc = 0x17b69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_17b6a0:
    // 0x17b6a0: 0xc4600200  lwc1        $f0, 0x200($v1)
    ctx->pc = 0x17b6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b6a4:
    // 0x17b6a4: 0x246401e0  addiu       $a0, $v1, 0x1E0
    ctx->pc = 0x17b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
label_17b6a8:
    // 0x17b6a8: 0xc054d0c  jal         func_153430
label_17b6ac:
    if (ctx->pc == 0x17B6ACu) {
        ctx->pc = 0x17B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6A8u;
        // 0x17b6ac: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B6B0u;
        goto label_17b6b0;
    }
    ctx->pc = 0x17B6A8u;
    SET_GPR_U32(ctx, 31, 0x17B6B0u);
    ctx->pc = 0x17B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B6A8u;
    // 0x17b6ac: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153430u, 0x17B6A8u, 0x17B6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6B0u;
label_17b6b0:
    // 0x17b6b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17b6b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17b6b4:
    // 0x17b6b4: 0x0  nop
    ctx->pc = 0x17b6b4u;
    // NOP
label_17b6b8:
    // 0x17b6b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17b6b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b6bc:
    // 0x17b6bc: 0x0  nop
    ctx->pc = 0x17b6bcu;
    // NOP
label_17b6c0:
    // 0x17b6c0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_17b6c4:
    if (ctx->pc == 0x17B6C4u) {
        ctx->pc = 0x17B6C8u;
        goto label_17b6c8;
    }
    ctx->pc = 0x17B6C0u;
    {
        const bool branch_taken_0x17b6c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b6c0) {
            ctx->pc = 0x17B6FCu;
            goto label_17b6fc;
        }
    }
    ctx->pc = 0x17B6C8u;
label_17b6c8:
    // 0x17b6c8: 0x8e04041c  lw          $a0, 0x41C($s0)
    ctx->pc = 0x17b6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
label_17b6cc:
    // 0x17b6cc: 0xc05efc8  jal         func_17BF20
label_17b6d0:
    if (ctx->pc == 0x17B6D0u) {
        ctx->pc = 0x17B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6CCu;
        // 0x17b6d0: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B6D4u;
        goto label_17b6d4;
    }
    ctx->pc = 0x17B6CCu;
    SET_GPR_U32(ctx, 31, 0x17B6D4u);
    ctx->pc = 0x17B6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B6CCu;
    // 0x17b6d0: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BF20u, 0x17B6CCu, 0x17B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6D4u;
label_17b6d4:
    // 0x17b6d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17b6d8:
    // 0x17b6d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b6dc:
    // 0x17b6dc: 0xae0203d0  sw          $v0, 0x3D0($s0)
    ctx->pc = 0x17b6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 976), GPR_U32(ctx, 2));
label_17b6e0:
    // 0x17b6e0: 0x8e04041c  lw          $a0, 0x41C($s0)
    ctx->pc = 0x17b6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
label_17b6e4:
    // 0x17b6e4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x17b6e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17b6e8:
    // 0x17b6e8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x17b6e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_17b6ec:
    // 0x17b6ec: 0x320f809  jalr        $t9
label_17b6f0:
    if (ctx->pc == 0x17B6F0u) {
        ctx->pc = 0x17B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6ECu;
        // 0x17b6f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B6F4u;
        goto label_17b6f4;
    }
    ctx->pc = 0x17B6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17B6F4u);
        ctx->pc = 0x17B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6ECu;
        // 0x17b6f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B6ECu, 0x17B6F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B6F4u;
label_17b6f4:
    // 0x17b6f4: 0x1000000c  b           . + 4 + (0xC << 2)
label_17b6f8:
    if (ctx->pc == 0x17B6F8u) {
        ctx->pc = 0x17B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6F4u;
        // 0x17b6f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B6FCu;
        goto label_17b6fc;
    }
    ctx->pc = 0x17B6F4u;
    {
        const bool branch_taken_0x17b6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6F4u;
        // 0x17b6f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b6f4) {
            ctx->pc = 0x17B728u;
            goto label_17b728;
        }
    }
    ctx->pc = 0x17B6FCu;
label_17b6fc:
    // 0x17b6fc: 0x8e04041c  lw          $a0, 0x41C($s0)
    ctx->pc = 0x17b6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
label_17b700:
    // 0x17b700: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b704:
    // 0x17b704: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x17b704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17b708:
    // 0x17b708: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x17b708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_17b70c:
    // 0x17b70c: 0x320f809  jalr        $t9
label_17b710:
    if (ctx->pc == 0x17B710u) {
        ctx->pc = 0x17B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B70Cu;
        // 0x17b710: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B714u;
        goto label_17b714;
    }
    ctx->pc = 0x17B70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17B714u);
        ctx->pc = 0x17B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B70Cu;
        // 0x17b710: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B70Cu, 0x17B714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B714u;
label_17b714:
    // 0x17b714: 0xc055dd8  jal         func_157760
label_17b718:
    if (ctx->pc == 0x17B718u) {
        ctx->pc = 0x17B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B714u;
        // 0x17b718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B71Cu;
        goto label_17b71c;
    }
    ctx->pc = 0x17B714u;
    SET_GPR_U32(ctx, 31, 0x17B71Cu);
    ctx->pc = 0x17B718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B714u;
    // 0x17b718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157760u, 0x17B714u, 0x17B71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B71Cu;
label_17b71c:
    // 0x17b71c: 0xc055d98  jal         func_157660
label_17b720:
    if (ctx->pc == 0x17B720u) {
        ctx->pc = 0x17B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B71Cu;
        // 0x17b720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B724u;
        goto label_17b724;
    }
    ctx->pc = 0x17B71Cu;
    SET_GPR_U32(ctx, 31, 0x17B724u);
    ctx->pc = 0x17B720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B71Cu;
    // 0x17b720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157660u, 0x17B71Cu, 0x17B724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B724u;
label_17b724:
    // 0x17b724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17b724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b728:
    // 0x17b728: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17b728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17b72c:
    // 0x17b72c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17b72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17b730:
    // 0x17b730: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17b730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17b734:
    // 0x17b734: 0x3e00008  jr          $ra
label_17b738:
    if (ctx->pc == 0x17B738u) {
        ctx->pc = 0x17B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B734u;
        // 0x17b738: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B73Cu;
        goto label_fallthrough_0x17b734;
    }
    ctx->pc = 0x17B734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B734u;
        // 0x17b738: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17b734:
    ctx->pc = 0x17B73Cu;
}
