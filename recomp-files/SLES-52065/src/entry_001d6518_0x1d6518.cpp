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

// Function: entry_001d6518
// Address: 0x1d6518 - 0x1d6528
void entry_001d6518_0x1d6518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6518_0x1d6518");
#endif

    switch (ctx->pc) {
        case 0x1d6524u: goto label_1d6524;
        default: break;
    }

    ctx->pc = 0x1d6518u;

    // 0x1d6518: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d651c: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D651Cu;
    SET_GPR_U32(ctx, 31, 0x1D6524u);
    ctx->pc = 0x1D6520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D651Cu;
    // 0x1d6520: 0x26053740  addiu       $a1, $s0, 0x3740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 14144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D651Cu, 0x1D6524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6524u;
label_1d6524:
    // 0x1d6524: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d6524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d6528u;
}
