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

// Function: entry_0013650c
// Address: 0x13650c - 0x136518
void entry_0013650c_0x13650c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013650c_0x13650c");
#endif

    ctx->pc = 0x13650cu;

    // 0x13650c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13650cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x136510: 0xc04d95c  jal         func_136570
    ctx->pc = 0x136510u;
    SET_GPR_U32(ctx, 31, 0x136518u);
    ctx->pc = 0x136514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136510u;
    // 0x136514: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136570u, 0x136510u, 0x136518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136518u;
}
