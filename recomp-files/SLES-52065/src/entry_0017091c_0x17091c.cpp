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

// Function: entry_0017091c
// Address: 0x17091c - 0x17092c
void entry_0017091c_0x17091c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017091c_0x17091c");
#endif

    ctx->pc = 0x17091cu;

    // 0x17091c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17091cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x170920: 0x26040280  addiu       $a0, $s0, 0x280
    ctx->pc = 0x170920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x170924: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x170924u;
    SET_GPR_U32(ctx, 31, 0x17092Cu);
    ctx->pc = 0x170928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170924u;
    // 0x170928: 0x24a5f510  addiu       $a1, $a1, -0xAF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x170924u, 0x17092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17092Cu;
}
