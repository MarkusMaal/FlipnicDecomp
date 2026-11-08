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

// Function: FUN_0010a210
// Address: 0x10a210 - 0x10a448
void FUN_0010a210_0x10a210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010a210_0x10a210");
#endif

    switch (ctx->pc) {
        case 0x10a210u: goto label_10a210;
        case 0x10a214u: goto label_10a214;
        case 0x10a218u: goto label_10a218;
        case 0x10a21cu: goto label_10a21c;
        case 0x10a220u: goto label_10a220;
        case 0x10a224u: goto label_10a224;
        case 0x10a228u: goto label_10a228;
        case 0x10a22cu: goto label_10a22c;
        case 0x10a230u: goto label_10a230;
        case 0x10a234u: goto label_10a234;
        case 0x10a238u: goto label_10a238;
        case 0x10a23cu: goto label_10a23c;
        case 0x10a240u: goto label_10a240;
        case 0x10a244u: goto label_10a244;
        case 0x10a248u: goto label_10a248;
        case 0x10a24cu: goto label_10a24c;
        case 0x10a250u: goto label_10a250;
        case 0x10a254u: goto label_10a254;
        case 0x10a258u: goto label_10a258;
        case 0x10a25cu: goto label_10a25c;
        case 0x10a260u: goto label_10a260;
        case 0x10a264u: goto label_10a264;
        case 0x10a268u: goto label_10a268;
        case 0x10a26cu: goto label_10a26c;
        case 0x10a270u: goto label_10a270;
        case 0x10a274u: goto label_10a274;
        case 0x10a278u: goto label_10a278;
        case 0x10a27cu: goto label_10a27c;
        case 0x10a280u: goto label_10a280;
        case 0x10a284u: goto label_10a284;
        case 0x10a288u: goto label_10a288;
        case 0x10a28cu: goto label_10a28c;
        case 0x10a290u: goto label_10a290;
        case 0x10a294u: goto label_10a294;
        case 0x10a298u: goto label_10a298;
        case 0x10a29cu: goto label_10a29c;
        case 0x10a2a0u: goto label_10a2a0;
        case 0x10a2a4u: goto label_10a2a4;
        case 0x10a2a8u: goto label_10a2a8;
        case 0x10a2acu: goto label_10a2ac;
        case 0x10a2b0u: goto label_10a2b0;
        case 0x10a2b4u: goto label_10a2b4;
        case 0x10a2b8u: goto label_10a2b8;
        case 0x10a2bcu: goto label_10a2bc;
        case 0x10a2c0u: goto label_10a2c0;
        case 0x10a2c4u: goto label_10a2c4;
        case 0x10a2c8u: goto label_10a2c8;
        case 0x10a2ccu: goto label_10a2cc;
        case 0x10a2d0u: goto label_10a2d0;
        case 0x10a2d4u: goto label_10a2d4;
        case 0x10a2d8u: goto label_10a2d8;
        case 0x10a2dcu: goto label_10a2dc;
        case 0x10a2e0u: goto label_10a2e0;
        case 0x10a2e4u: goto label_10a2e4;
        case 0x10a2e8u: goto label_10a2e8;
        case 0x10a2ecu: goto label_10a2ec;
        case 0x10a2f0u: goto label_10a2f0;
        case 0x10a2f4u: goto label_10a2f4;
        case 0x10a2f8u: goto label_10a2f8;
        case 0x10a2fcu: goto label_10a2fc;
        case 0x10a300u: goto label_10a300;
        case 0x10a304u: goto label_10a304;
        case 0x10a308u: goto label_10a308;
        case 0x10a30cu: goto label_10a30c;
        case 0x10a310u: goto label_10a310;
        case 0x10a314u: goto label_10a314;
        case 0x10a318u: goto label_10a318;
        case 0x10a31cu: goto label_10a31c;
        case 0x10a320u: goto label_10a320;
        case 0x10a324u: goto label_10a324;
        case 0x10a328u: goto label_10a328;
        case 0x10a32cu: goto label_10a32c;
        case 0x10a330u: goto label_10a330;
        case 0x10a334u: goto label_10a334;
        case 0x10a338u: goto label_10a338;
        case 0x10a33cu: goto label_10a33c;
        case 0x10a340u: goto label_10a340;
        case 0x10a344u: goto label_10a344;
        case 0x10a348u: goto label_10a348;
        case 0x10a34cu: goto label_10a34c;
        case 0x10a350u: goto label_10a350;
        case 0x10a354u: goto label_10a354;
        case 0x10a358u: goto label_10a358;
        case 0x10a35cu: goto label_10a35c;
        case 0x10a360u: goto label_10a360;
        case 0x10a364u: goto label_10a364;
        case 0x10a368u: goto label_10a368;
        case 0x10a36cu: goto label_10a36c;
        case 0x10a370u: goto label_10a370;
        case 0x10a374u: goto label_10a374;
        case 0x10a378u: goto label_10a378;
        case 0x10a37cu: goto label_10a37c;
        case 0x10a380u: goto label_10a380;
        case 0x10a384u: goto label_10a384;
        case 0x10a388u: goto label_10a388;
        case 0x10a38cu: goto label_10a38c;
        case 0x10a390u: goto label_10a390;
        case 0x10a394u: goto label_10a394;
        case 0x10a398u: goto label_10a398;
        case 0x10a39cu: goto label_10a39c;
        case 0x10a3a0u: goto label_10a3a0;
        case 0x10a3a4u: goto label_10a3a4;
        case 0x10a3a8u: goto label_10a3a8;
        case 0x10a3acu: goto label_10a3ac;
        case 0x10a3b0u: goto label_10a3b0;
        case 0x10a3b4u: goto label_10a3b4;
        case 0x10a3b8u: goto label_10a3b8;
        case 0x10a3bcu: goto label_10a3bc;
        case 0x10a3c0u: goto label_10a3c0;
        case 0x10a3c4u: goto label_10a3c4;
        case 0x10a3c8u: goto label_10a3c8;
        case 0x10a3ccu: goto label_10a3cc;
        case 0x10a3d0u: goto label_10a3d0;
        case 0x10a3d4u: goto label_10a3d4;
        case 0x10a3d8u: goto label_10a3d8;
        case 0x10a3dcu: goto label_10a3dc;
        case 0x10a3e0u: goto label_10a3e0;
        case 0x10a3e4u: goto label_10a3e4;
        case 0x10a3e8u: goto label_10a3e8;
        case 0x10a3ecu: goto label_10a3ec;
        case 0x10a3f0u: goto label_10a3f0;
        case 0x10a3f4u: goto label_10a3f4;
        case 0x10a3f8u: goto label_10a3f8;
        case 0x10a3fcu: goto label_10a3fc;
        case 0x10a400u: goto label_10a400;
        case 0x10a404u: goto label_10a404;
        case 0x10a408u: goto label_10a408;
        case 0x10a40cu: goto label_10a40c;
        case 0x10a410u: goto label_10a410;
        case 0x10a414u: goto label_10a414;
        case 0x10a418u: goto label_10a418;
        case 0x10a41cu: goto label_10a41c;
        case 0x10a420u: goto label_10a420;
        case 0x10a424u: goto label_10a424;
        case 0x10a428u: goto label_10a428;
        case 0x10a42cu: goto label_10a42c;
        case 0x10a430u: goto label_10a430;
        case 0x10a434u: goto label_10a434;
        case 0x10a438u: goto label_10a438;
        case 0x10a43cu: goto label_10a43c;
        case 0x10a440u: goto label_10a440;
        case 0x10a444u: goto label_10a444;
        default: break;
    }

    ctx->pc = 0x10a210u;

label_10a210:
    // 0x10a210: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10a210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_10a214:
    // 0x10a214: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10a214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_10a218:
    // 0x10a218: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x10a218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_10a21c:
    // 0x10a21c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10a21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_10a220:
    // 0x10a220: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10a220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10a224:
    // 0x10a224: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10a224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10a228:
    // 0x10a228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10a228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10a22c:
    // 0x10a22c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10a22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10a230:
    // 0x10a230: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10a230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10a234:
    // 0x10a234: 0x8f858388  lw          $a1, -0x7C78($gp)
    ctx->pc = 0x10a234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_10a238:
    // 0x10a238: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x10a238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10a23c:
    // 0x10a23c: 0xc064078  jal         func_1901E0
label_10a240:
    if (ctx->pc == 0x10A240u) {
        ctx->pc = 0x10A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A23Cu;
        // 0x10a240: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A244u;
        goto label_10a244;
    }
    ctx->pc = 0x10A23Cu;
    SET_GPR_U32(ctx, 31, 0x10A244u);
    ctx->pc = 0x10A240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A23Cu;
    // 0x10a240: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1901E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1901E0u, 0x10A23Cu, 0x10A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A244u;
label_10a244:
    // 0x10a244: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x10a244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10a248:
    // 0x10a248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10a24c:
    // 0x10a24c: 0x8c623dd8  lw          $v0, 0x3DD8($v1)
    ctx->pc = 0x10a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15832)));
label_10a250:
    // 0x10a250: 0xc041d3c  jal         func_1074F0
label_10a254:
    if (ctx->pc == 0x10A254u) {
        ctx->pc = 0x10A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A250u;
        // 0x10a254: 0xac623ddc  sw          $v0, 0x3DDC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 15836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A258u;
        goto label_10a258;
    }
    ctx->pc = 0x10A250u;
    SET_GPR_U32(ctx, 31, 0x10A258u);
    ctx->pc = 0x10A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A250u;
    // 0x10a254: 0xac623ddc  sw          $v0, 0x3DDC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 15836), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1074F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1074F0u, 0x10A250u, 0x10A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A258u;
label_10a258:
    // 0x10a258: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10a258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_10a25c:
    // 0x10a25c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a260:
    // 0x10a260: 0xc06cf0c  jal         func_1B3C30
label_10a264:
    if (ctx->pc == 0x10A264u) {
        ctx->pc = 0x10A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A260u;
        // 0x10a264: 0x24a5e278  addiu       $a1, $a1, -0x1D88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A268u;
        goto label_10a268;
    }
    ctx->pc = 0x10A260u;
    SET_GPR_U32(ctx, 31, 0x10A268u);
    ctx->pc = 0x10A264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A260u;
    // 0x10a264: 0x24a5e278  addiu       $a1, $a1, -0x1D88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x10A260u, 0x10A268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A268u;
label_10a268:
    // 0x10a268: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10a268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a26c:
    // 0x10a26c: 0x620005c  bltz        $s1, . + 4 + (0x5C << 2)
label_10a270:
    if (ctx->pc == 0x10A270u) {
        ctx->pc = 0x10A274u;
        goto label_10a274;
    }
    ctx->pc = 0x10A26Cu;
    {
        const bool branch_taken_0x10a26c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x10a26c) {
            ctx->pc = 0x10A3E0u;
            goto label_10a3e0;
        }
    }
    ctx->pc = 0x10A274u;
label_10a274:
    // 0x10a274: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_10a278:
    if (ctx->pc == 0x10A278u) {
        ctx->pc = 0x10A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A274u;
        // 0x10a278: 0x8f828388  lw          $v0, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A27Cu;
        goto label_10a27c;
    }
    ctx->pc = 0x10A274u;
    {
        const bool branch_taken_0x10a274 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x10A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A274u;
        // 0x10a278: 0x8f828388  lw          $v0, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a274) {
            ctx->pc = 0x10A284u;
            goto label_10a284;
        }
    }
    ctx->pc = 0x10A27Cu;
label_10a27c:
    // 0x10a27c: 0x10000007  b           . + 4 + (0x7 << 2)
label_10a280:
    if (ctx->pc == 0x10A280u) {
        ctx->pc = 0x10A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A27Cu;
        // 0x10a280: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A284u;
        goto label_10a284;
    }
    ctx->pc = 0x10A27Cu;
    {
        const bool branch_taken_0x10a27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A27Cu;
        // 0x10a280: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a27c) {
            ctx->pc = 0x10A29Cu;
            goto label_10a29c;
        }
    }
    ctx->pc = 0x10A284u;
label_10a284:
    // 0x10a284: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10a288:
    // 0x10a288: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x10a288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10a28c:
    // 0x10a28c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10a290:
    // 0x10a290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10a290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10a294:
    // 0x10a294: 0x84550008  lh          $s5, 0x8($v0)
    ctx->pc = 0x10a294u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_10a298:
    // 0x10a298: 0x0  nop
    ctx->pc = 0x10a298u;
    // NOP
label_10a29c:
    // 0x10a29c: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x10a29cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_10a2a0:
    // 0x10a2a0: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
label_10a2a4:
    if (ctx->pc == 0x10A2A4u) {
        ctx->pc = 0x10A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A2A0u;
        // 0x10a2a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A2A8u;
        goto label_10a2a8;
    }
    ctx->pc = 0x10A2A0u;
    {
        const bool branch_taken_0x10a2a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A2A0u;
        // 0x10a2a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a2a0) {
            ctx->pc = 0x10A3E0u;
            goto label_10a3e0;
        }
    }
    ctx->pc = 0x10A2A8u;
label_10a2a8:
    // 0x10a2a8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x10a2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10a2ac:
    // 0x10a2ac: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x10a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10a2b0:
    // 0x10a2b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10a2b4:
    // 0x10a2b4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10a2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_10a2b8:
    // 0x10a2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a2bc:
    // 0x10a2bc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x10a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_10a2c0:
    // 0x10a2c0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_10a2c4:
    // 0x10a2c4: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x10a2c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_10a2c8:
    // 0x10a2c8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x10a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_10a2cc:
    // 0x10a2cc: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x10a2ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_10a2d0:
    // 0x10a2d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10a2d4:
    // 0x10a2d4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x10a2d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10a2d8:
    // 0x10a2d8: 0xc06cf0c  jal         func_1B3C30
label_10a2dc:
    if (ctx->pc == 0x10A2DCu) {
        ctx->pc = 0x10A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A2D8u;
        // 0x10a2dc: 0x24a5e280  addiu       $a1, $a1, -0x1D80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A2E0u;
        goto label_10a2e0;
    }
    ctx->pc = 0x10A2D8u;
    SET_GPR_U32(ctx, 31, 0x10A2E0u);
    ctx->pc = 0x10A2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A2D8u;
    // 0x10a2dc: 0x24a5e280  addiu       $a1, $a1, -0x1D80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x10A2D8u, 0x10A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A2E0u;
label_10a2e0:
    // 0x10a2e0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x10a2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10a2e4:
    // 0x10a2e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10a2e8:
    // 0x10a2e8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x10a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10a2ec:
    // 0x10a2ec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x10a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_10a2f0:
    // 0x10a2f0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x10a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_10a2f4:
    // 0x10a2f4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x10a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_10a2f8:
    // 0x10a2f8: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x10a2f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_10a2fc:
    // 0x10a2fc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x10a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_10a300:
    // 0x10a300: 0x731818  mult        $v1, $v1, $s3
    ctx->pc = 0x10a300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_10a304:
    // 0x10a304: 0x83a021  addu        $s4, $a0, $v1
    ctx->pc = 0x10a304u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_10a308:
    // 0x10a308: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x10a308u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_10a30c:
    // 0x10a30c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_10a310:
    if (ctx->pc == 0x10A310u) {
        ctx->pc = 0x10A314u;
        goto label_10a314;
    }
    ctx->pc = 0x10A30Cu;
    {
        const bool branch_taken_0x10a30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10a30c) {
            ctx->pc = 0x10A388u;
            goto label_10a388;
        }
    }
    ctx->pc = 0x10A314u;
label_10a314:
    // 0x10a314: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_10a318:
    if (ctx->pc == 0x10A318u) {
        ctx->pc = 0x10A31Cu;
        goto label_10a31c;
    }
    ctx->pc = 0x10A314u;
    {
        const bool branch_taken_0x10a314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a314) {
            ctx->pc = 0x10A324u;
            goto label_10a324;
        }
    }
    ctx->pc = 0x10A31Cu;
label_10a31c:
    // 0x10a31c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_10a320:
    if (ctx->pc == 0x10A320u) {
        ctx->pc = 0x10A324u;
        goto label_10a324;
    }
    ctx->pc = 0x10A31Cu;
    {
        const bool branch_taken_0x10a31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a31c) {
            ctx->pc = 0x10A3D0u;
            goto label_10a3d0;
        }
    }
    ctx->pc = 0x10A324u;
label_10a324:
    // 0x10a324: 0x0  nop
    ctx->pc = 0x10a324u;
    // NOP
label_10a328:
    // 0x10a328: 0xc0401bc  jal         func_1006F0
label_10a32c:
    if (ctx->pc == 0x10A32Cu) {
        ctx->pc = 0x10A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A328u;
        // 0x10a32c: 0x24040320  addiu       $a0, $zero, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A330u;
        goto label_10a330;
    }
    ctx->pc = 0x10A328u;
    SET_GPR_U32(ctx, 31, 0x10A330u);
    ctx->pc = 0x10A32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A328u;
    // 0x10a32c: 0x24040320  addiu       $a0, $zero, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x10A328u, 0x10A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A330u;
label_10a330:
    // 0x10a330: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_10a334:
    if (ctx->pc == 0x10A334u) {
        ctx->pc = 0x10A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A330u;
        // 0x10a334: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A338u;
        goto label_10a338;
    }
    ctx->pc = 0x10A330u;
    {
        const bool branch_taken_0x10a330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A330u;
        // 0x10a334: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a330) {
            ctx->pc = 0x10A380u;
            goto label_10a380;
        }
    }
    ctx->pc = 0x10A338u;
label_10a338:
    // 0x10a338: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10a338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10a33c:
    // 0x10a33c: 0xc056360  jal         func_158D80
label_10a340:
    if (ctx->pc == 0x10A340u) {
        ctx->pc = 0x10A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A33Cu;
        // 0x10a340: 0xafb3007c  sw          $s3, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A344u;
        goto label_10a344;
    }
    ctx->pc = 0x10A33Cu;
    SET_GPR_U32(ctx, 31, 0x10A344u);
    ctx->pc = 0x10A340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A33Cu;
    // 0x10a340: 0xafb3007c  sw          $s3, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10A33Cu, 0x10A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A344u;
label_10a344:
    // 0x10a344: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x10a344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_10a348:
    // 0x10a348: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x10a348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_10a34c:
    // 0x10a34c: 0x24427a50  addiu       $v0, $v0, 0x7A50
    ctx->pc = 0x10a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31312));
label_10a350:
    // 0x10a350: 0x2463aa30  addiu       $v1, $v1, -0x55D0
    ctx->pc = 0x10a350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945328));
label_10a354:
    // 0x10a354: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x10a354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_10a358:
    // 0x10a358: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x10a358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_10a35c:
    // 0x10a35c: 0xae600210  sw          $zero, 0x210($s3)
    ctx->pc = 0x10a35cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 528), GPR_U32(ctx, 0));
label_10a360:
    // 0x10a360: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x10a360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
label_10a364:
    // 0x10a364: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x10a364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_10a368:
    // 0x10a368: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x10a368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_10a36c:
    // 0x10a36c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x10a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_10a370:
    // 0x10a370: 0xc0621c0  jal         func_188700
label_10a374:
    if (ctx->pc == 0x10A374u) {
        ctx->pc = 0x10A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A370u;
        // 0x10a374: 0x24440280  addiu       $a0, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A378u;
        goto label_10a378;
    }
    ctx->pc = 0x10A370u;
    SET_GPR_U32(ctx, 31, 0x10A378u);
    ctx->pc = 0x10A374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A370u;
    // 0x10a374: 0x24440280  addiu       $a0, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x10A370u, 0x10A378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A378u;
label_10a378:
    // 0x10a378: 0x8fb3007c  lw          $s3, 0x7C($sp)
    ctx->pc = 0x10a378u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_10a37c:
    // 0x10a37c: 0x0  nop
    ctx->pc = 0x10a37cu;
    // NOP
label_10a380:
    // 0x10a380: 0x1000000f  b           . + 4 + (0xF << 2)
label_10a384:
    if (ctx->pc == 0x10A384u) {
        ctx->pc = 0x10A388u;
        goto label_10a388;
    }
    ctx->pc = 0x10A380u;
    {
        const bool branch_taken_0x10a380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a380) {
            ctx->pc = 0x10A3C0u;
            goto label_10a3c0;
        }
    }
    ctx->pc = 0x10A388u;
label_10a388:
    // 0x10a388: 0xc0401bc  jal         func_1006F0
label_10a38c:
    if (ctx->pc == 0x10A38Cu) {
        ctx->pc = 0x10A38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A388u;
        // 0x10a38c: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A390u;
        goto label_10a390;
    }
    ctx->pc = 0x10A388u;
    SET_GPR_U32(ctx, 31, 0x10A390u);
    ctx->pc = 0x10A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A388u;
    // 0x10a38c: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x10A388u, 0x10A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A390u;
label_10a390:
    // 0x10a390: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_10a394:
    if (ctx->pc == 0x10A394u) {
        ctx->pc = 0x10A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A390u;
        // 0x10a394: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A398u;
        goto label_10a398;
    }
    ctx->pc = 0x10A390u;
    {
        const bool branch_taken_0x10a390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A390u;
        // 0x10a394: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a390) {
            ctx->pc = 0x10A3BCu;
            goto label_10a3bc;
        }
    }
    ctx->pc = 0x10A398u;
label_10a398:
    // 0x10a398: 0xc056360  jal         func_158D80
label_10a39c:
    if (ctx->pc == 0x10A39Cu) {
        ctx->pc = 0x10A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A398u;
        // 0x10a39c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A3A0u;
        goto label_10a3a0;
    }
    ctx->pc = 0x10A398u;
    SET_GPR_U32(ctx, 31, 0x10A3A0u);
    ctx->pc = 0x10A39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A398u;
    // 0x10a39c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10A398u, 0x10A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3A0u;
label_10a3a0:
    // 0x10a3a0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x10a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_10a3a4:
    // 0x10a3a4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_10a3a8:
    // 0x10a3a8: 0x24637a50  addiu       $v1, $v1, 0x7A50
    ctx->pc = 0x10a3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31312));
label_10a3ac:
    // 0x10a3ac: 0x244282f0  addiu       $v0, $v0, -0x7D10
    ctx->pc = 0x10a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935280));
label_10a3b0:
    // 0x10a3b0: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x10a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_10a3b4:
    // 0x10a3b4: 0xae600210  sw          $zero, 0x210($s3)
    ctx->pc = 0x10a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 528), GPR_U32(ctx, 0));
label_10a3b8:
    // 0x10a3b8: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x10a3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_10a3bc:
    // 0x10a3bc: 0x0  nop
    ctx->pc = 0x10a3bcu;
    // NOP
label_10a3c0:
    // 0x10a3c0: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x10a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
label_10a3c4:
    // 0x10a3c4: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x10a3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10a3c8:
    // 0x10a3c8: 0xc057424  jal         func_15D090
label_10a3cc:
    if (ctx->pc == 0x10A3CCu) {
        ctx->pc = 0x10A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3C8u;
        // 0x10a3cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A3D0u;
        goto label_10a3d0;
    }
    ctx->pc = 0x10A3C8u;
    SET_GPR_U32(ctx, 31, 0x10A3D0u);
    ctx->pc = 0x10A3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3C8u;
    // 0x10a3cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D090u, 0x10A3C8u, 0x10A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3D0u;
label_10a3d0:
    // 0x10a3d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10a3d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10a3d4:
    // 0x10a3d4: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x10a3d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_10a3d8:
    // 0x10a3d8: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_10a3dc:
    if (ctx->pc == 0x10A3DCu) {
        ctx->pc = 0x10A3E0u;
        goto label_10a3e0;
    }
    ctx->pc = 0x10A3D8u;
    {
        const bool branch_taken_0x10a3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a3d8) {
            ctx->pc = 0x10A2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a2a8;
        }
    }
    ctx->pc = 0x10A3E0u;
label_10a3e0:
    // 0x10a3e0: 0xc057594  jal         func_15D650
label_10a3e4:
    if (ctx->pc == 0x10A3E4u) {
        ctx->pc = 0x10A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3E0u;
        // 0x10a3e4: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A3E8u;
        goto label_10a3e8;
    }
    ctx->pc = 0x10A3E0u;
    SET_GPR_U32(ctx, 31, 0x10A3E8u);
    ctx->pc = 0x10A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3E0u;
    // 0x10a3e4: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D650u, 0x10A3E0u, 0x10A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3E8u;
label_10a3e8:
    // 0x10a3e8: 0xc057548  jal         func_15D520
label_10a3ec:
    if (ctx->pc == 0x10A3ECu) {
        ctx->pc = 0x10A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3E8u;
        // 0x10a3ec: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A3F0u;
        goto label_10a3f0;
    }
    ctx->pc = 0x10A3E8u;
    SET_GPR_U32(ctx, 31, 0x10A3F0u);
    ctx->pc = 0x10A3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3E8u;
    // 0x10a3ec: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D520u, 0x10A3E8u, 0x10A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3F0u;
label_10a3f0:
    // 0x10a3f0: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x10a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10a3f4:
    // 0x10a3f4: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x10a3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_10a3f8:
    // 0x10a3f8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10a3f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10a3fc:
    // 0x10a3fc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x10a3fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_10a400:
    // 0x10a400: 0x320f809  jalr        $t9
label_10a404:
    if (ctx->pc == 0x10A404u) {
        ctx->pc = 0x10A408u;
        goto label_10a408;
    }
    ctx->pc = 0x10A400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10A408u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A400u, 0x10A408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A408u;
label_10a408:
    // 0x10a408: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x10a408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10a40c:
    // 0x10a40c: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x10a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_10a410:
    // 0x10a410: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10a410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10a414:
    // 0x10a414: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x10a414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_10a418:
    // 0x10a418: 0x320f809  jalr        $t9
label_10a41c:
    if (ctx->pc == 0x10A41Cu) {
        ctx->pc = 0x10A420u;
        goto label_10a420;
    }
    ctx->pc = 0x10A418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10A420u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A418u, 0x10A420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A420u;
label_10a420:
    // 0x10a420: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10a420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10a424:
    // 0x10a424: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10a424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a428:
    // 0x10a428: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x10a428u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10a42c:
    // 0x10a42c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10a42cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10a430:
    // 0x10a430: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10a430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10a434:
    // 0x10a434: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10a434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10a438:
    // 0x10a438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10a438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10a43c:
    // 0x10a43c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10a43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10a440:
    // 0x10a440: 0x3e00008  jr          $ra
label_10a444:
    if (ctx->pc == 0x10A444u) {
        ctx->pc = 0x10A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A440u;
        // 0x10a444: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A448u;
        goto label_fallthrough_0x10a440;
    }
    ctx->pc = 0x10A440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A440u;
        // 0x10a444: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10a440:
    ctx->pc = 0x10A448u;
}
