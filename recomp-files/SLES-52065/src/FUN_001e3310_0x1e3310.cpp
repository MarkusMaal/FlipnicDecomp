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

// Function: FUN_001e3310
// Address: 0x1e3310 - 0x1e33f8
void FUN_001e3310_0x1e3310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e3310_0x1e3310");
#endif

    switch (ctx->pc) {
        case 0x1e3310u: goto label_1e3310;
        case 0x1e3314u: goto label_1e3314;
        case 0x1e3318u: goto label_1e3318;
        case 0x1e331cu: goto label_1e331c;
        case 0x1e3320u: goto label_1e3320;
        case 0x1e3324u: goto label_1e3324;
        case 0x1e3328u: goto label_1e3328;
        case 0x1e332cu: goto label_1e332c;
        case 0x1e3330u: goto label_1e3330;
        case 0x1e3334u: goto label_1e3334;
        case 0x1e3338u: goto label_1e3338;
        case 0x1e333cu: goto label_1e333c;
        case 0x1e3340u: goto label_1e3340;
        case 0x1e3344u: goto label_1e3344;
        case 0x1e3348u: goto label_1e3348;
        case 0x1e334cu: goto label_1e334c;
        case 0x1e3350u: goto label_1e3350;
        case 0x1e3354u: goto label_1e3354;
        case 0x1e3358u: goto label_1e3358;
        case 0x1e335cu: goto label_1e335c;
        case 0x1e3360u: goto label_1e3360;
        case 0x1e3364u: goto label_1e3364;
        case 0x1e3368u: goto label_1e3368;
        case 0x1e336cu: goto label_1e336c;
        case 0x1e3370u: goto label_1e3370;
        case 0x1e3374u: goto label_1e3374;
        case 0x1e3378u: goto label_1e3378;
        case 0x1e337cu: goto label_1e337c;
        case 0x1e3380u: goto label_1e3380;
        case 0x1e3384u: goto label_1e3384;
        case 0x1e3388u: goto label_1e3388;
        case 0x1e338cu: goto label_1e338c;
        case 0x1e3390u: goto label_1e3390;
        case 0x1e3394u: goto label_1e3394;
        case 0x1e3398u: goto label_1e3398;
        case 0x1e339cu: goto label_1e339c;
        case 0x1e33a0u: goto label_1e33a0;
        case 0x1e33a4u: goto label_1e33a4;
        case 0x1e33a8u: goto label_1e33a8;
        case 0x1e33acu: goto label_1e33ac;
        case 0x1e33b0u: goto label_1e33b0;
        case 0x1e33b4u: goto label_1e33b4;
        case 0x1e33b8u: goto label_1e33b8;
        case 0x1e33bcu: goto label_1e33bc;
        case 0x1e33c0u: goto label_1e33c0;
        case 0x1e33c4u: goto label_1e33c4;
        case 0x1e33c8u: goto label_1e33c8;
        case 0x1e33ccu: goto label_1e33cc;
        case 0x1e33d0u: goto label_1e33d0;
        case 0x1e33d4u: goto label_1e33d4;
        case 0x1e33d8u: goto label_1e33d8;
        case 0x1e33dcu: goto label_1e33dc;
        case 0x1e33e0u: goto label_1e33e0;
        case 0x1e33e4u: goto label_1e33e4;
        case 0x1e33e8u: goto label_1e33e8;
        case 0x1e33ecu: goto label_1e33ec;
        case 0x1e33f0u: goto label_1e33f0;
        case 0x1e33f4u: goto label_1e33f4;
        default: break;
    }

    ctx->pc = 0x1e3310u;

label_1e3310:
    // 0x1e3310: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e3310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e3314:
    // 0x1e3314: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e3314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e3318:
    // 0x1e3318: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1e3318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1e331c:
    // 0x1e331c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e331cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e3320:
    // 0x1e3320: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e3320u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
label_1e3324:
    // 0x1e3324: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e3328:
    // 0x1e3328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e332c:
    // 0x1e332c: 0xc07951c  jal         func_1E5470
label_1e3330:
    if (ctx->pc == 0x1E3330u) {
        ctx->pc = 0x1E3330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E332Cu;
        // 0x1e3330: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3334u;
        goto label_1e3334;
    }
    ctx->pc = 0x1E332Cu;
    SET_GPR_U32(ctx, 31, 0x1E3334u);
    ctx->pc = 0x1E3330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E332Cu;
    // 0x1e3330: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5470u, 0x1E332Cu, 0x1E3334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3334u;
label_1e3334:
    // 0x1e3334: 0x27c40060  addiu       $a0, $fp, 0x60
    ctx->pc = 0x1e3334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
label_1e3338:
    // 0x1e3338: 0xc078d04  jal         func_1E3410
label_1e333c:
    if (ctx->pc == 0x1E333Cu) {
        ctx->pc = 0x1E333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3338u;
        // 0x1e333c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3340u;
        goto label_1e3340;
    }
    ctx->pc = 0x1E3338u;
    SET_GPR_U32(ctx, 31, 0x1E3340u);
    ctx->pc = 0x1E333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3338u;
    // 0x1e333c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3410u, 0x1E3338u, 0x1E3340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3340u;
label_1e3340:
    // 0x1e3340: 0x9382874c  lbu         $v0, -0x78B4($gp)
    ctx->pc = 0x1e3340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936396)));
label_1e3344:
    // 0x1e3344: 0x27c3006c  addiu       $v1, $fp, 0x6C
    ctx->pc = 0x1e3344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 108));
label_1e3348:
    // 0x1e3348: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e3348u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e334c:
    // 0x1e334c: 0x83c5006c  lb          $a1, 0x6C($fp)
    ctx->pc = 0x1e334cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 108)));
label_1e3350:
    // 0x1e3350: 0xc079788  jal         func_1E5E20
label_1e3354:
    if (ctx->pc == 0x1E3354u) {
        ctx->pc = 0x1E3354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3350u;
        // 0x1e3354: 0x27c40060  addiu       $a0, $fp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3358u;
        goto label_1e3358;
    }
    ctx->pc = 0x1E3350u;
    SET_GPR_U32(ctx, 31, 0x1E3358u);
    ctx->pc = 0x1E3354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3350u;
    // 0x1e3354: 0x27c40060  addiu       $a0, $fp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5E20u, 0x1E3350u, 0x1E3358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3358u;
label_1e3358:
    // 0x1e3358: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1e3358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1e335c:
    // 0x1e335c: 0x27d10064  addiu       $s1, $fp, 0x64
    ctx->pc = 0x1e335cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 100));
label_1e3360:
    // 0x1e3360: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e3360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e3364:
    // 0x1e3364: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1e3368:
    if (ctx->pc == 0x1E3368u) {
        ctx->pc = 0x1E336Cu;
        goto label_1e336c;
    }
    ctx->pc = 0x1E3364u;
    {
        const bool branch_taken_0x1e3364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3364) {
            ctx->pc = 0x1E3390u;
            goto label_1e3390;
        }
    }
    ctx->pc = 0x1E336Cu;
label_1e336c:
    // 0x1e336c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e336cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e3370:
    // 0x1e3370: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e3370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e3374:
    // 0x1e3374: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e3378:
    if (ctx->pc == 0x1E3378u) {
        ctx->pc = 0x1E3378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3374u;
        // 0x1e3378: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E337Cu;
        goto label_1e337c;
    }
    ctx->pc = 0x1E3374u;
    {
        const bool branch_taken_0x1e3374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3374u;
        // 0x1e3378: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3374) {
            ctx->pc = 0x1E3390u;
            goto label_1e3390;
        }
    }
    ctx->pc = 0x1E337Cu;
label_1e337c:
    // 0x1e337c: 0x8fc40060  lw          $a0, 0x60($fp)
    ctx->pc = 0x1e337cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
label_1e3380:
    // 0x1e3380: 0xc0483d8  jal         func_120F60
label_1e3384:
    if (ctx->pc == 0x1E3384u) {
        ctx->pc = 0x1E3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3380u;
        // 0x1e3384: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3388u;
        goto label_1e3388;
    }
    ctx->pc = 0x1E3380u;
    SET_GPR_U32(ctx, 31, 0x1E3388u);
    ctx->pc = 0x1E3384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3380u;
    // 0x1e3384: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120F60u, 0x1E3380u, 0x1E3388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3388u;
label_1e3388:
    // 0x1e3388: 0xc0401a4  jal         func_100690
label_1e338c:
    if (ctx->pc == 0x1E338Cu) {
        ctx->pc = 0x1E338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3388u;
        // 0x1e338c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3390u;
        goto label_1e3390;
    }
    ctx->pc = 0x1E3388u;
    SET_GPR_U32(ctx, 31, 0x1E3390u);
    ctx->pc = 0x1E338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3388u;
    // 0x1e338c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E3388u, 0x1E3390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3390u;
label_1e3390:
    // 0x1e3390: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1e3390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1e3394:
    // 0x1e3394: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e3394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3398:
    // 0x1e3398: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e3398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e339c:
    // 0x1e339c: 0x320f809  jalr        $t9
label_1e33a0:
    if (ctx->pc == 0x1E33A0u) {
        ctx->pc = 0x1E33A4u;
        goto label_1e33a4;
    }
    ctx->pc = 0x1E339Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E33A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E339Cu, 0x1E33A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E33A4u;
label_1e33a4:
    // 0x1e33a4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e33a8:
    if (ctx->pc == 0x1E33A8u) {
        ctx->pc = 0x1E33A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33A4u;
        // 0x1e33a8: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E33ACu;
        goto label_1e33ac;
    }
    ctx->pc = 0x1E33A4u;
    {
        const bool branch_taken_0x1e33a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E33A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33A4u;
        // 0x1e33a8: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33a4) {
            ctx->pc = 0x1E33D4u;
            goto label_1e33d4;
        }
    }
    ctx->pc = 0x1E33ACu;
label_1e33ac:
    // 0x1e33ac: 0xc07a704  jal         func_1E9C10
label_1e33b0:
    if (ctx->pc == 0x1E33B0u) {
        ctx->pc = 0x1E33B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33ACu;
        // 0x1e33b0: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E33B4u;
        goto label_1e33b4;
    }
    ctx->pc = 0x1E33ACu;
    SET_GPR_U32(ctx, 31, 0x1E33B4u);
    ctx->pc = 0x1E33B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E33ACu;
    // 0x1e33b0: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E33ACu, 0x1E33B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E33B4u;
label_1e33b4:
    // 0x1e33b4: 0x0  nop
    ctx->pc = 0x1e33b4u;
    // NOP
label_1e33b8:
    // 0x1e33b8: 0x0  nop
    ctx->pc = 0x1e33b8u;
    // NOP
label_1e33bc:
    // 0x1e33bc: 0x0  nop
    ctx->pc = 0x1e33bcu;
    // NOP
label_1e33c0:
    // 0x1e33c0: 0x0  nop
    ctx->pc = 0x1e33c0u;
    // NOP
label_1e33c4:
    // 0x1e33c4: 0x0  nop
    ctx->pc = 0x1e33c4u;
    // NOP
label_1e33c8:
    // 0x1e33c8: 0x0  nop
    ctx->pc = 0x1e33c8u;
    // NOP
label_1e33cc:
    // 0x1e33cc: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e33d0:
    if (ctx->pc == 0x1E33D0u) {
        ctx->pc = 0x1E33D4u;
        goto label_1e33d4;
    }
    ctx->pc = 0x1E33CCu;
    {
        const bool branch_taken_0x1e33cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e33cc) {
            ctx->pc = 0x1E33B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e33b4;
        }
    }
    ctx->pc = 0x1E33D4u;
label_1e33d4:
    // 0x1e33d4: 0x0  nop
    ctx->pc = 0x1e33d4u;
    // NOP
label_1e33d8:
    // 0x1e33d8: 0xa2030041  sb          $v1, 0x41($s0)
    ctx->pc = 0x1e33d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 3));
label_1e33dc:
    // 0x1e33dc: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e33dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e33e0:
    // 0x1e33e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e33e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e33e4:
    // 0x1e33e4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1e33e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e33e8:
    // 0x1e33e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e33e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e33ec:
    // 0x1e33ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e33ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e33f0:
    // 0x1e33f0: 0x3e00008  jr          $ra
label_1e33f4:
    if (ctx->pc == 0x1E33F4u) {
        ctx->pc = 0x1E33F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33F0u;
        // 0x1e33f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E33F8u;
        goto label_fallthrough_0x1e33f0;
    }
    ctx->pc = 0x1E33F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E33F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33F0u;
        // 0x1e33f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E33F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e33f0:
    ctx->pc = 0x1E33F8u;
}
