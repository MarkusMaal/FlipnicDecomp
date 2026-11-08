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

// Function: FUN_001b6310
// Address: 0x1b6310 - 0x1b63c8
void FUN_001b6310_0x1b6310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b6310_0x1b6310");
#endif

    switch (ctx->pc) {
        case 0x1b6310u: goto label_1b6310;
        case 0x1b6314u: goto label_1b6314;
        case 0x1b6318u: goto label_1b6318;
        case 0x1b631cu: goto label_1b631c;
        case 0x1b6320u: goto label_1b6320;
        case 0x1b6324u: goto label_1b6324;
        case 0x1b6328u: goto label_1b6328;
        case 0x1b632cu: goto label_1b632c;
        case 0x1b6330u: goto label_1b6330;
        case 0x1b6334u: goto label_1b6334;
        case 0x1b6338u: goto label_1b6338;
        case 0x1b633cu: goto label_1b633c;
        case 0x1b6340u: goto label_1b6340;
        case 0x1b6344u: goto label_1b6344;
        case 0x1b6348u: goto label_1b6348;
        case 0x1b634cu: goto label_1b634c;
        case 0x1b6350u: goto label_1b6350;
        case 0x1b6354u: goto label_1b6354;
        case 0x1b6358u: goto label_1b6358;
        case 0x1b635cu: goto label_1b635c;
        case 0x1b6360u: goto label_1b6360;
        case 0x1b6364u: goto label_1b6364;
        case 0x1b6368u: goto label_1b6368;
        case 0x1b636cu: goto label_1b636c;
        case 0x1b6370u: goto label_1b6370;
        case 0x1b6374u: goto label_1b6374;
        case 0x1b6378u: goto label_1b6378;
        case 0x1b637cu: goto label_1b637c;
        case 0x1b6380u: goto label_1b6380;
        case 0x1b6384u: goto label_1b6384;
        case 0x1b6388u: goto label_1b6388;
        case 0x1b638cu: goto label_1b638c;
        case 0x1b6390u: goto label_1b6390;
        case 0x1b6394u: goto label_1b6394;
        case 0x1b6398u: goto label_1b6398;
        case 0x1b639cu: goto label_1b639c;
        case 0x1b63a0u: goto label_1b63a0;
        case 0x1b63a4u: goto label_1b63a4;
        case 0x1b63a8u: goto label_1b63a8;
        case 0x1b63acu: goto label_1b63ac;
        case 0x1b63b0u: goto label_1b63b0;
        case 0x1b63b4u: goto label_1b63b4;
        case 0x1b63b8u: goto label_1b63b8;
        case 0x1b63bcu: goto label_1b63bc;
        case 0x1b63c0u: goto label_1b63c0;
        case 0x1b63c4u: goto label_1b63c4;
        default: break;
    }

    ctx->pc = 0x1b6310u;

label_1b6310:
    // 0x1b6310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b6310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b6314:
    // 0x1b6314: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b6314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b6318:
    // 0x1b6318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b631c:
    // 0x1b631c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b631cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b6320:
    // 0x1b6320: 0xc06da58  jal         func_1B6960
label_1b6324:
    if (ctx->pc == 0x1B6324u) {
        ctx->pc = 0x1B6324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6320u;
        // 0x1b6324: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6328u;
        goto label_1b6328;
    }
    ctx->pc = 0x1B6320u;
    SET_GPR_U32(ctx, 31, 0x1B6328u);
    ctx->pc = 0x1B6324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6320u;
    // 0x1b6324: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6960u, 0x1B6320u, 0x1B6328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6328u;
label_1b6328:
    // 0x1b6328: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1b6328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b632c:
    // 0x1b632c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_1b6330:
    if (ctx->pc == 0x1B6330u) {
        ctx->pc = 0x1B6330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B632Cu;
        // 0x1b6330: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6334u;
        goto label_1b6334;
    }
    ctx->pc = 0x1B632Cu;
    {
        const bool branch_taken_0x1b632c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B632Cu;
        // 0x1b6330: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b632c) {
            ctx->pc = 0x1B633Cu;
            goto label_1b633c;
        }
    }
    ctx->pc = 0x1B6334u;
label_1b6334:
    // 0x1b6334: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1b6338:
    if (ctx->pc == 0x1B6338u) {
        ctx->pc = 0x1B6338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6334u;
        // 0x1b6338: 0xa2030034  sb          $v1, 0x34($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B633Cu;
        goto label_1b633c;
    }
    ctx->pc = 0x1B6334u;
    {
        const bool branch_taken_0x1b6334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6334u;
        // 0x1b6338: 0xa2030034  sb          $v1, 0x34($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6334) {
            ctx->pc = 0x1B63B4u;
            goto label_1b63b4;
        }
    }
    ctx->pc = 0x1B633Cu;
label_1b633c:
    // 0x1b633c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1b633cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b6340:
    // 0x1b6340: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b6340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6344:
    // 0x1b6344: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b6344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b6348:
    // 0x1b6348: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x1b6348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b634c:
    // 0x1b634c: 0x222001b  divu        $zero, $s1, $v0
    ctx->pc = 0x1b634cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_1b6350:
    // 0x1b6350: 0x0  nop
    ctx->pc = 0x1b6350u;
    // NOP
label_1b6354:
    // 0x1b6354: 0x0  nop
    ctx->pc = 0x1b6354u;
    // NOP
label_1b6358:
    // 0x1b6358: 0x2812  mflo        $a1
    ctx->pc = 0x1b6358u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_1b635c:
    // 0x1b635c: 0xc04fc44  jal         func_13F110
label_1b6360:
    if (ctx->pc == 0x1B6360u) {
        ctx->pc = 0x1B6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B635Cu;
        // 0x1b6360: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6364u;
        goto label_1b6364;
    }
    ctx->pc = 0x1B635Cu;
    SET_GPR_U32(ctx, 31, 0x1B6364u);
    ctx->pc = 0x1B6360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B635Cu;
    // 0x1b6360: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x1B635Cu, 0x1B6364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6364u;
label_1b6364:
    // 0x1b6364: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b6364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6368:
    // 0x1b6368: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b6368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b636c:
    // 0x1b636c: 0x223001b  divu        $zero, $s1, $v1
    ctx->pc = 0x1b636cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_1b6370:
    // 0x1b6370: 0x0  nop
    ctx->pc = 0x1b6370u;
    // NOP
label_1b6374:
    // 0x1b6374: 0x0  nop
    ctx->pc = 0x1b6374u;
    // NOP
label_1b6378:
    // 0x1b6378: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6378u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b637c:
    // 0x1b637c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b637cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b6380:
    // 0x1b6380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b6384:
    // 0x1b6384: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b6384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b6388:
    // 0x1b6388: 0xc06da14  jal         func_1B6850
label_1b638c:
    if (ctx->pc == 0x1B638Cu) {
        ctx->pc = 0x1B638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6388u;
        // 0x1b638c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6390u;
        goto label_1b6390;
    }
    ctx->pc = 0x1B6388u;
    SET_GPR_U32(ctx, 31, 0x1B6390u);
    ctx->pc = 0x1B638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6388u;
    // 0x1b638c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6850u, 0x1B6388u, 0x1B6390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6390u;
label_1b6390:
    // 0x1b6390: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6394:
    // 0x1b6394: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_1b6398:
    if (ctx->pc == 0x1B6398u) {
        ctx->pc = 0x1B6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6394u;
        // 0x1b6398: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B639Cu;
        goto label_1b639c;
    }
    ctx->pc = 0x1B6394u;
    {
        const bool branch_taken_0x1b6394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6394u;
        // 0x1b6398: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6394) {
            ctx->pc = 0x1B63A4u;
            goto label_1b63a4;
        }
    }
    ctx->pc = 0x1B639Cu;
label_1b639c:
    // 0x1b639c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b63a0:
    if (ctx->pc == 0x1B63A0u) {
        ctx->pc = 0x1B63A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B639Cu;
        // 0x1b63a0: 0xa2030034  sb          $v1, 0x34($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B63A4u;
        goto label_1b63a4;
    }
    ctx->pc = 0x1B639Cu;
    {
        const bool branch_taken_0x1b639c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B63A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B639Cu;
        // 0x1b63a0: 0xa2030034  sb          $v1, 0x34($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b639c) {
            ctx->pc = 0x1B63B4u;
            goto label_1b63b4;
        }
    }
    ctx->pc = 0x1B63A4u;
label_1b63a4:
    // 0x1b63a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b63a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b63a8:
    // 0x1b63a8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b63a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b63ac:
    // 0x1b63ac: 0x320f809  jalr        $t9
label_1b63b0:
    if (ctx->pc == 0x1B63B0u) {
        ctx->pc = 0x1B63B4u;
        goto label_1b63b4;
    }
    ctx->pc = 0x1B63ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B63B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B63ACu, 0x1B63B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B63B4u;
label_1b63b4:
    // 0x1b63b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b63b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b63b8:
    // 0x1b63b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b63b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b63bc:
    // 0x1b63bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b63bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b63c0:
    // 0x1b63c0: 0x3e00008  jr          $ra
label_1b63c4:
    if (ctx->pc == 0x1B63C4u) {
        ctx->pc = 0x1B63C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B63C0u;
        // 0x1b63c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B63C8u;
        goto label_fallthrough_0x1b63c0;
    }
    ctx->pc = 0x1B63C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B63C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B63C0u;
        // 0x1b63c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B63C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b63c0:
    ctx->pc = 0x1B63C8u;
}
