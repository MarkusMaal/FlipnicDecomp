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

// Function: entry_0013475c
// Address: 0x13475c - 0x134780
void entry_0013475c_0x13475c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013475c_0x13475c");
#endif

    switch (ctx->pc) {
        case 0x13476cu: goto label_13476c;
        case 0x13477cu: goto label_13477c;
        default: break;
    }

    ctx->pc = 0x13475cu;

    // 0x13475c: 0x13c0000a  beqz        $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x13475Cu;
    {
        const bool branch_taken_0x13475c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x134760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13475Cu;
        // 0x134760: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13475c) {
            ctx->pc = 0x134788u;
            return;
        }
    }
    ctx->pc = 0x134764u;
    // 0x134764: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x134764u;
    SET_GPR_U32(ctx, 31, 0x13476Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x134764u, 0x13476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13476Cu;
label_13476c:
    // 0x13476c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13476Cu;
    {
        const bool branch_taken_0x13476c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13476Cu;
        // 0x134770: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13476c) {
            ctx->pc = 0x134780u;
            return;
        }
    }
    ctx->pc = 0x134774u;
    // 0x134774: 0xc0544f0  jal         func_1513C0
    ctx->pc = 0x134774u;
    SET_GPR_U32(ctx, 31, 0x13477Cu);
    ctx->pc = 0x134778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134774u;
    // 0x134778: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1513C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1513C0u, 0x134774u, 0x13477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13477Cu;
label_13477c:
    // 0x13477c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13477cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x134780u;
}
