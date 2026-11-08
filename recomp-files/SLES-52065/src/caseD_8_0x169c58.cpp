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

// Function: caseD_8
// Address: 0x169c58 - 0x169c6c
void caseD_8_0x169c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x169c58");
#endif

    switch (ctx->pc) {
        case 0x169c64u: goto label_169c64;
        default: break;
    }

    ctx->pc = 0x169c58u;

    // 0x169c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c5c: 0xc05a7d0  jal         func_169F40
    ctx->pc = 0x169C5Cu;
    SET_GPR_U32(ctx, 31, 0x169C64u);
    ctx->pc = 0x169C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169C5Cu;
    // 0x169c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169F40u, 0x169C5Cu, 0x169C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C64u;
label_169c64:
    // 0x169c64: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x169C64u;
    {
        const bool branch_taken_0x169c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c64) {
            ctx->pc = 0x169E48u;
            return;
        }
    }
    ctx->pc = 0x169C6Cu;
}
