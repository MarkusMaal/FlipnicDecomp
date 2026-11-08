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

// Function: FUN_001eee58
// Address: 0x1eee58 - 0x1eee98
void FUN_001eee58_0x1eee58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eee58_0x1eee58");
#endif

    switch (ctx->pc) {
        case 0x1eee70u: goto label_1eee70;
        case 0x1eee78u: goto label_1eee78;
        case 0x1eee80u: goto label_1eee80;
        case 0x1eee90u: goto label_1eee90;
        default: break;
    }

    ctx->pc = 0x1eee58u;

    // 0x1eee58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eee58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eee5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eee5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eee60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eee60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1eee64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEE64u;
    {
        const bool branch_taken_0x1eee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE64u;
        // 0x1eee68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee64) {
            ctx->pc = 0x1EEE78u;
            goto label_1eee78;
        }
    }
    ctx->pc = 0x1EEE6Cu;
    // 0x1eee6c: 0x0  nop
    ctx->pc = 0x1eee6cu;
    // NOP
label_1eee70:
    // 0x1eee70: 0xc07bb24  jal         func_1EEC90
    ctx->pc = 0x1EEE70u;
    SET_GPR_U32(ctx, 31, 0x1EEE78u);
    ctx->pc = 0x1EEC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEC90u, 0x1EEE70u, 0x1EEE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE78u;
label_1eee78:
    // 0x1eee78: 0xc07bb0e  jal         func_1EEC38
    ctx->pc = 0x1EEE78u;
    SET_GPR_U32(ctx, 31, 0x1EEE80u);
    ctx->pc = 0x1EEE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEE78u;
    // 0x1eee7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEC38u, 0x1EEE78u, 0x1EEE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE80u;
label_1eee80:
    // 0x1eee80: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1EEE80u;
    {
        const bool branch_taken_0x1eee80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE80u;
        // 0x1eee84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee80) {
            ctx->pc = 0x1EEE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eee70;
        }
    }
    ctx->pc = 0x1EEE88u;
    // 0x1eee88: 0xc07ad50  jal         func_1EB540
    ctx->pc = 0x1EEE88u;
    SET_GPR_U32(ctx, 31, 0x1EEE90u);
    ctx->pc = 0x1EB540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB540u, 0x1EEE88u, 0x1EEE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE90u;
label_1eee90:
    // 0x1eee90: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EEE90u;
    {
        const bool branch_taken_0x1eee90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eee90) {
            ctx->pc = 0x1EEE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eee78;
        }
    }
    ctx->pc = 0x1EEE98u;
}
