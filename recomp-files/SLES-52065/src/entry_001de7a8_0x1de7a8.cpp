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

// Function: entry_001de7a8
// Address: 0x1de7a8 - 0x1de7bc
void entry_001de7a8_0x1de7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de7a8_0x1de7a8");
#endif

    ctx->pc = 0x1de7a8u;

    // 0x1de7a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1de7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de7ac: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1de7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1de7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7b4: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1DE7B4u;
    SET_GPR_U32(ctx, 31, 0x1DE7BCu);
    ctx->pc = 0x1DE7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7B4u;
    // 0x1de7b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1DE7B4u, 0x1DE7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7BCu;
}
