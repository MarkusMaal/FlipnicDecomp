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

// Function: entry_001ce404
// Address: 0x1ce404 - 0x1ce424
void entry_001ce404_0x1ce404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce404_0x1ce404");
#endif

    switch (ctx->pc) {
        case 0x1ce40cu: goto label_1ce40c;
        case 0x1ce420u: goto label_1ce420;
        default: break;
    }

    ctx->pc = 0x1ce404u;

    // 0x1ce404: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CE404u;
    SET_GPR_U32(ctx, 31, 0x1CE40Cu);
    ctx->pc = 0x1CE408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE404u;
    // 0x1ce408: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CE404u, 0x1CE40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE40Cu;
label_1ce40c:
    // 0x1ce40c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE40Cu;
    {
        const bool branch_taken_0x1ce40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE40Cu;
        // 0x1ce410: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce40c) {
            ctx->pc = 0x1CE424u;
            return;
        }
    }
    ctx->pc = 0x1CE414u;
    // 0x1ce414: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce418: 0xc073944  jal         func_1CE510
    ctx->pc = 0x1CE418u;
    SET_GPR_U32(ctx, 31, 0x1CE420u);
    ctx->pc = 0x1CE41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE418u;
    // 0x1ce41c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE510u, 0x1CE418u, 0x1CE420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE420u;
label_1ce420:
    // 0x1ce420: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ce424u;
}
