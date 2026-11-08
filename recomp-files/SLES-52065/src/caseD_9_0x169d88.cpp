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

// Function: caseD_9
// Address: 0x169d88 - 0x169d9c
void caseD_9_0x169d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x169d88");
#endif

    switch (ctx->pc) {
        case 0x169d94u: goto label_169d94;
        default: break;
    }

    ctx->pc = 0x169d88u;

    // 0x169d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d8c: 0xc05a810  jal         func_16A040
    ctx->pc = 0x169D8Cu;
    SET_GPR_U32(ctx, 31, 0x169D94u);
    ctx->pc = 0x169D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D8Cu;
    // 0x169d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A040u, 0x169D8Cu, 0x169D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D94u;
label_169d94:
    // 0x169d94: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x169D94u;
    {
        const bool branch_taken_0x169d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d94) {
            ctx->pc = 0x169E48u;
            return;
        }
    }
    ctx->pc = 0x169D9Cu;
}
