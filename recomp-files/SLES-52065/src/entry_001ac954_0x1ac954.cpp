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

// Function: entry_001ac954
// Address: 0x1ac954 - 0x1ac95c
void entry_001ac954_0x1ac954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac954_0x1ac954");
#endif

    ctx->pc = 0x1ac954u;

    // 0x1ac954: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AC954u;
    SET_GPR_U32(ctx, 31, 0x1AC95Cu);
    ctx->pc = 0x1AC958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC954u;
    // 0x1ac958: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AC954u, 0x1AC95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC95Cu;
}
