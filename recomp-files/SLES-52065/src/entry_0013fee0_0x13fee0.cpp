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

// Function: entry_0013fee0
// Address: 0x13fee0 - 0x13fef0
void entry_0013fee0_0x13fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fee0_0x13fee0");
#endif

    ctx->pc = 0x13fee0u;

    // 0x13fee0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13fee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fee4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x13fee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13fee8: 0xc050250  jal         func_140940
    ctx->pc = 0x13FEE8u;
    SET_GPR_U32(ctx, 31, 0x13FEF0u);
    ctx->pc = 0x13FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FEE8u;
    // 0x13feec: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140940u, 0x13FEE8u, 0x13FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FEF0u;
}
