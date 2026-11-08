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

// Function: entry_0017b700
// Address: 0x17b700 - 0x17b728
void entry_0017b700_0x17b700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b700_0x17b700");
#endif

    switch (ctx->pc) {
        case 0x17b714u: goto label_17b714;
        case 0x17b71cu: goto label_17b71c;
        case 0x17b724u: goto label_17b724;
        default: break;
    }

    ctx->pc = 0x17b700u;

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
    ctx->pc = 0x17b728u;
}
