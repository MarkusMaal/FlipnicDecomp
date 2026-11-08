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

// Function: entry_001bb844
// Address: 0x1bb844 - 0x1bb870
void entry_001bb844_0x1bb844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb844_0x1bb844");
#endif

    switch (ctx->pc) {
        case 0x1bb858u: goto label_1bb858;
        default: break;
    }

    ctx->pc = 0x1bb844u;

    // 0x1bb844: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1bb844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb848: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bb848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb84c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1bb84cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb850: 0xc06f06c  jal         func_1BC1B0
    ctx->pc = 0x1BB850u;
    SET_GPR_U32(ctx, 31, 0x1BB858u);
    ctx->pc = 0x1BB854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB850u;
    // 0x1bb854: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC1B0u, 0x1BB850u, 0x1BB858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB858u;
label_1bb858:
    // 0x1bb858: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1bb858u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1bb85c: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1bb85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1bb860: 0x90233000  lbu         $v1, 0x3000($at)
    ctx->pc = 0x1bb860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x213000u));
    // 0x1bb864: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1bb864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb868: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB868u;
    {
        const bool branch_taken_0x1bb868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB868u;
        // 0x1bb86c: 0xa2c30004  sb          $v1, 0x4($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb868) {
            ctx->pc = 0x1BB884u;
            return;
        }
    }
    ctx->pc = 0x1BB870u;
}
