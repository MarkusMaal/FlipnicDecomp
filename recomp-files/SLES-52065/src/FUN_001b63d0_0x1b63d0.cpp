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

// Function: FUN_001b63d0
// Address: 0x1b63d0 - 0x1b6450
void FUN_001b63d0_0x1b63d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b63d0_0x1b63d0");
#endif

    switch (ctx->pc) {
        case 0x1b63d0u: goto label_1b63d0;
        case 0x1b63d4u: goto label_1b63d4;
        case 0x1b63d8u: goto label_1b63d8;
        case 0x1b63dcu: goto label_1b63dc;
        case 0x1b63e0u: goto label_1b63e0;
        case 0x1b63e4u: goto label_1b63e4;
        case 0x1b63e8u: goto label_1b63e8;
        case 0x1b63ecu: goto label_1b63ec;
        case 0x1b63f0u: goto label_1b63f0;
        case 0x1b63f4u: goto label_1b63f4;
        case 0x1b63f8u: goto label_1b63f8;
        case 0x1b63fcu: goto label_1b63fc;
        case 0x1b6400u: goto label_1b6400;
        case 0x1b6404u: goto label_1b6404;
        case 0x1b6408u: goto label_1b6408;
        case 0x1b640cu: goto label_1b640c;
        case 0x1b6410u: goto label_1b6410;
        case 0x1b6414u: goto label_1b6414;
        case 0x1b6418u: goto label_1b6418;
        case 0x1b641cu: goto label_1b641c;
        case 0x1b6420u: goto label_1b6420;
        case 0x1b6424u: goto label_1b6424;
        case 0x1b6428u: goto label_1b6428;
        case 0x1b642cu: goto label_1b642c;
        case 0x1b6430u: goto label_1b6430;
        case 0x1b6434u: goto label_1b6434;
        case 0x1b6438u: goto label_1b6438;
        case 0x1b643cu: goto label_1b643c;
        case 0x1b6440u: goto label_1b6440;
        case 0x1b6444u: goto label_1b6444;
        case 0x1b6448u: goto label_1b6448;
        case 0x1b644cu: goto label_1b644c;
        default: break;
    }

    ctx->pc = 0x1b63d0u;

label_1b63d0:
    // 0x1b63d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b63d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b63d4:
    // 0x1b63d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b63d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b63d8:
    // 0x1b63d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b63d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b63dc:
    // 0x1b63dc: 0xc0731bc  jal         func_1CC6F0
label_1b63e0:
    if (ctx->pc == 0x1B63E0u) {
        ctx->pc = 0x1B63E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B63DCu;
        // 0x1b63e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B63E4u;
        goto label_1b63e4;
    }
    ctx->pc = 0x1B63DCu;
    SET_GPR_U32(ctx, 31, 0x1B63E4u);
    ctx->pc = 0x1B63E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B63DCu;
    // 0x1b63e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC6F0u, 0x1B63DCu, 0x1B63E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63E4u;
label_1b63e4:
    // 0x1b63e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b63e8:
    if (ctx->pc == 0x1B63E8u) {
        ctx->pc = 0x1B63ECu;
        goto label_1b63ec;
    }
    ctx->pc = 0x1B63E4u;
    {
        const bool branch_taken_0x1b63e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b63e4) {
            ctx->pc = 0x1B63F4u;
            goto label_1b63f4;
        }
    }
    ctx->pc = 0x1B63ECu;
label_1b63ec:
    // 0x1b63ec: 0xc06da58  jal         func_1B6960
label_1b63f0:
    if (ctx->pc == 0x1B63F0u) {
        ctx->pc = 0x1B63F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B63ECu;
        // 0x1b63f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B63F4u;
        goto label_1b63f4;
    }
    ctx->pc = 0x1B63ECu;
    SET_GPR_U32(ctx, 31, 0x1B63F4u);
    ctx->pc = 0x1B63F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B63ECu;
    // 0x1b63f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6960u, 0x1B63ECu, 0x1B63F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63F4u;
label_1b63f4:
    // 0x1b63f4: 0x0  nop
    ctx->pc = 0x1b63f4u;
    // NOP
label_1b63f8:
    // 0x1b63f8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1b63f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b63fc:
    // 0x1b63fc: 0x0  nop
    ctx->pc = 0x1b63fcu;
    // NOP
label_1b6400:
    // 0x1b6400: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_1b6404:
    if (ctx->pc == 0x1B6404u) {
        ctx->pc = 0x1B6408u;
        goto label_1b6408;
    }
    ctx->pc = 0x1B6400u;
    {
        const bool branch_taken_0x1b6400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6400) {
            ctx->pc = 0x1B63ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b63ec;
        }
    }
    ctx->pc = 0x1B6408u;
label_1b6408:
    // 0x1b6408: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1b6408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_1b640c:
    // 0x1b640c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b640cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6410:
    // 0x1b6410: 0xc04fd04  jal         func_13F410
label_1b6414:
    if (ctx->pc == 0x1B6414u) {
        ctx->pc = 0x1B6414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6410u;
        // 0x1b6414: 0x24a52eb0  addiu       $a1, $a1, 0x2EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6418u;
        goto label_1b6418;
    }
    ctx->pc = 0x1B6410u;
    SET_GPR_U32(ctx, 31, 0x1B6418u);
    ctx->pc = 0x1B6414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6410u;
    // 0x1b6414: 0x24a52eb0  addiu       $a1, $a1, 0x2EB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F410u, 0x1B6410u, 0x1B6418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6418u;
label_1b6418:
    // 0x1b6418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b641c:
    // 0x1b641c: 0xc06da14  jal         func_1B6850
label_1b6420:
    if (ctx->pc == 0x1B6420u) {
        ctx->pc = 0x1B6420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B641Cu;
        // 0x1b6420: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6424u;
        goto label_1b6424;
    }
    ctx->pc = 0x1B641Cu;
    SET_GPR_U32(ctx, 31, 0x1B6424u);
    ctx->pc = 0x1B6420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B641Cu;
    // 0x1b6420: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6850u, 0x1B641Cu, 0x1B6424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6424u;
label_1b6424:
    // 0x1b6424: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b6424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6428:
    // 0x1b6428: 0xc060894  jal         func_182250
label_1b642c:
    if (ctx->pc == 0x1B642Cu) {
        ctx->pc = 0x1B642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6428u;
        // 0x1b642c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6430u;
        goto label_1b6430;
    }
    ctx->pc = 0x1B6428u;
    SET_GPR_U32(ctx, 31, 0x1B6430u);
    ctx->pc = 0x1B642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6428u;
    // 0x1b642c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182250u, 0x1B6428u, 0x1B6430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6430u;
label_1b6430:
    // 0x1b6430: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b6430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6434:
    // 0x1b6434: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b6434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b6438:
    // 0x1b6438: 0x320f809  jalr        $t9
label_1b643c:
    if (ctx->pc == 0x1B643Cu) {
        ctx->pc = 0x1B643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6438u;
        // 0x1b643c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6440u;
        goto label_1b6440;
    }
    ctx->pc = 0x1B6438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B6440u);
        ctx->pc = 0x1B643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6438u;
        // 0x1b643c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6438u, 0x1B6440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6440u;
label_1b6440:
    // 0x1b6440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6444:
    // 0x1b6444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b6448:
    // 0x1b6448: 0x3e00008  jr          $ra
label_1b644c:
    if (ctx->pc == 0x1B644Cu) {
        ctx->pc = 0x1B644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6448u;
        // 0x1b644c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6450u;
        goto label_fallthrough_0x1b6448;
    }
    ctx->pc = 0x1B6448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6448u;
        // 0x1b644c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b6448:
    ctx->pc = 0x1B6450u;
}
