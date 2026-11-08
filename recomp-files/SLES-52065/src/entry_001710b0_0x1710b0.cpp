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

// Function: entry_001710b0
// Address: 0x1710b0 - 0x1710c0
void entry_001710b0_0x1710b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001710b0_0x1710b0");
#endif

    switch (ctx->pc) {
        case 0x1710bcu: goto label_1710bc;
        default: break;
    }

    ctx->pc = 0x1710b0u;

    // 0x1710b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1710b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1710b4: 0xc055b20  jal         func_156C80
    ctx->pc = 0x1710B4u;
    SET_GPR_U32(ctx, 31, 0x1710BCu);
    ctx->pc = 0x1710B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1710B4u;
    // 0x1710b8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156C80u, 0x1710B4u, 0x1710BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1710BCu;
label_1710bc:
    // 0x1710bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1710bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1710c0u;
}
