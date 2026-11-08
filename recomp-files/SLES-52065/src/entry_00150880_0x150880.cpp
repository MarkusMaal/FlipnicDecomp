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

// Function: entry_00150880
// Address: 0x150880 - 0x1508b0
void entry_00150880_0x150880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150880_0x150880");
#endif

    switch (ctx->pc) {
        case 0x15089cu: goto label_15089c;
        default: break;
    }

    ctx->pc = 0x150880u;

    // 0x150880: 0x262401b8  addiu       $a0, $s1, 0x1B8
    ctx->pc = 0x150880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 440));
    // 0x150884: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x150884u;
    {
        const bool branch_taken_0x150884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x150884) {
            ctx->pc = 0x1508B0u;
            return;
        }
    }
    ctx->pc = 0x15088Cu;
    // 0x15088c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15088Cu;
    {
        const bool branch_taken_0x15088c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15088c) {
            ctx->pc = 0x1508B0u;
            return;
        }
    }
    ctx->pc = 0x150894u;
    // 0x150894: 0xc05426c  jal         func_1509B0
    ctx->pc = 0x150894u;
    SET_GPR_U32(ctx, 31, 0x15089Cu);
    ctx->pc = 0x1509B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1509B0u, 0x150894u, 0x15089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15089Cu;
label_15089c:
    // 0x15089c: 0x262401bc  addiu       $a0, $s1, 0x1BC
    ctx->pc = 0x15089cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x1508a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1508A0u;
    {
        const bool branch_taken_0x1508a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1508A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508A0u;
        // 0x1508a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508a0) {
            ctx->pc = 0x1508B0u;
            return;
        }
    }
    ctx->pc = 0x1508A8u;
    // 0x1508a8: 0xc04f118  jal         func_13C460
    ctx->pc = 0x1508A8u;
    SET_GPR_U32(ctx, 31, 0x1508B0u);
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x1508A8u, 0x1508B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508B0u;
}
