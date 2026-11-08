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

// Function: entry_001cfd58
// Address: 0x1cfd58 - 0x1cfd64
void entry_001cfd58_0x1cfd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfd58_0x1cfd58");
#endif

    ctx->pc = 0x1cfd58u;

    // 0x1cfd58: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfd5c: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1CFD5Cu;
    SET_GPR_U32(ctx, 31, 0x1CFD64u);
    ctx->pc = 0x1CFD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFD5Cu;
    // 0x1cfd60: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1CFD5Cu, 0x1CFD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD64u;
}
