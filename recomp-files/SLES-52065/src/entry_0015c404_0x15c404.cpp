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

// Function: entry_0015c404
// Address: 0x15c404 - 0x15c430
void entry_0015c404_0x15c404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c404_0x15c404");
#endif

    switch (ctx->pc) {
        case 0x15c418u: goto label_15c418;
        default: break;
    }

    ctx->pc = 0x15c404u;

label_15c404:
    // 0x15c404: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15c404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c408: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15c408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c40c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15c40cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c410: 0xc0570b4  jal         func_15C2D0
    ctx->pc = 0x15C410u;
    SET_GPR_U32(ctx, 31, 0x15C418u);
    ctx->pc = 0x15C414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C410u;
    // 0x15c414: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C2D0u, 0x15C410u, 0x15C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C418u;
label_15c418:
    // 0x15c418: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15c418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c41c: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C41Cu;
    {
        const bool branch_taken_0x15c41c = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x15c41c) {
            ctx->pc = 0x15C430u;
            return;
        }
    }
    ctx->pc = 0x15C424u;
    // 0x15c424: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15c424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15c428: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x15C428u;
    {
        const bool branch_taken_0x15c428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C428u;
        // 0x15c42c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c428) {
            ctx->pc = 0x15C404u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c404;
        }
    }
    ctx->pc = 0x15C430u;
}
