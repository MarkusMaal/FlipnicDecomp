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

// Function: entry_0014dd34
// Address: 0x14dd34 - 0x14dd40
void entry_0014dd34_0x14dd34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dd34_0x14dd34");
#endif

    ctx->pc = 0x14dd34u;

    // 0x14dd34: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x14dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14dd38: 0xc053a28  jal         func_14E8A0
    ctx->pc = 0x14DD38u;
    SET_GPR_U32(ctx, 31, 0x14DD40u);
    ctx->pc = 0x14DD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DD38u;
    // 0x14dd3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E8A0u, 0x14DD38u, 0x14DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DD40u;
}
