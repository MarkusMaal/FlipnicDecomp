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

// Function: entry_001a4570
// Address: 0x1a4570 - 0x1a457c
void entry_001a4570_0x1a4570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4570_0x1a4570");
#endif

    switch (ctx->pc) {
        case 0x1a4578u: goto label_1a4578;
        default: break;
    }

    ctx->pc = 0x1a4570u;

    // 0x1a4570: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x1A4570u;
    SET_GPR_U32(ctx, 31, 0x1A4578u);
    ctx->pc = 0x1A4574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4570u;
    // 0x1a4574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x1A4570u, 0x1A4578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4578u;
label_1a4578:
    // 0x1a4578: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1a4578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->pc = 0x1a457cu;
}
