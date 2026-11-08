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

// Function: entry_0011d71c
// Address: 0x11d71c - 0x11d774
void entry_0011d71c_0x11d71c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d71c_0x11d71c");
#endif

    switch (ctx->pc) {
        case 0x11d724u: goto label_11d724;
        case 0x11d748u: goto label_11d748;
        case 0x11d75cu: goto label_11d75c;
        default: break;
    }

    ctx->pc = 0x11d71cu;

    // 0x11d71c: 0xc080664  jal         func_201990
    ctx->pc = 0x11D71Cu;
    SET_GPR_U32(ctx, 31, 0x11D724u);
    ctx->pc = 0x11D720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D71Cu;
    // 0x11d720: 0x27a50370  addiu       $a1, $sp, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11D71Cu, 0x11D724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D724u;
label_11d724:
    // 0x11d724: 0x8e620538  lw          $v0, 0x538($s3)
    ctx->pc = 0x11d724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1336)));
    // 0x11d728: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x11d728u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d72c: 0x14540025  bne         $v0, $s4, . + 4 + (0x25 << 2)
    ctx->pc = 0x11D72Cu;
    {
        const bool branch_taken_0x11d72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x11D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D72Cu;
        // 0x11d730: 0x24150040  addiu       $s5, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d72c) {
            ctx->pc = 0x11D7C4u;
            return;
        }
    }
    ctx->pc = 0x11D734u;
    // 0x11d734: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11d734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d738: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d73c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d73cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d740: 0xc047798  jal         func_11DE60
    ctx->pc = 0x11D740u;
    SET_GPR_U32(ctx, 31, 0x11D748u);
    ctx->pc = 0x11D744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D740u;
    // 0x11d744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE60u, 0x11D740u, 0x11D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D748u;
label_11d748:
    // 0x11d748: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x11d748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x11d74c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11d74cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d750: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x11d750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x11d754: 0xc07bdf0  jal         func_1EF7C0
    ctx->pc = 0x11D754u;
    SET_GPR_U32(ctx, 31, 0x11D75Cu);
    ctx->pc = 0x11D758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D754u;
    // 0x11d758: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF7C0u, 0x11D754u, 0x11D75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D75Cu;
label_11d75c:
    // 0x11d75c: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x11d75cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
    // 0x11d760: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x11d760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x11d764: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D764u;
    {
        const bool branch_taken_0x11d764 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D764u;
        // 0x11d768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d764) {
            ctx->pc = 0x11D774u;
            return;
        }
    }
    ctx->pc = 0x11D76Cu;
    // 0x11d76c: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x11D76Cu;
    {
        const bool branch_taken_0x11d76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D76Cu;
        // 0x11d770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d76c) {
            ctx->pc = 0x11DC78u;
            return;
        }
    }
    ctx->pc = 0x11D774u;
}
