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

// Function: entry_001bc4dc
// Address: 0x1bc4dc - 0x1bc4e8
void entry_001bc4dc_0x1bc4dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc4dc_0x1bc4dc");
#endif

    ctx->pc = 0x1bc4dcu;

    // 0x1bc4dc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1bc4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1bc4e0: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1BC4E0u;
    SET_GPR_U32(ctx, 31, 0x1BC4E8u);
    ctx->pc = 0x1BC4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC4E0u;
    // 0x1bc4e4: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1BC4E0u, 0x1BC4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4E8u;
}
