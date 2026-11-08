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

// Function: entry_00110f6c
// Address: 0x110f6c - 0x110f7c
void entry_00110f6c_0x110f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110f6c_0x110f6c");
#endif

    ctx->pc = 0x110f6cu;

    // 0x110f6c: 0x0  nop
    ctx->pc = 0x110f6cu;
    // NOP
    // 0x110f70: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x110f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x110f74: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x110F74u;
    SET_GPR_U32(ctx, 31, 0x110F7Cu);
    ctx->pc = 0x110F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F74u;
    // 0x110f78: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x110F74u, 0x110F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F7Cu;
}
