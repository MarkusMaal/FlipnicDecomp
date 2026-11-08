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

// Function: entry_0018f99c
// Address: 0x18f99c - 0x18f9b0
void entry_0018f99c_0x18f99c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f99c_0x18f99c");
#endif

    ctx->pc = 0x18f99cu;

    // 0x18f99c: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x18f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x18f9a0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18f9a4: 0x8c440280  lw          $a0, 0x280($v0)
    ctx->pc = 0x18f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x18f9a8: 0xc07a564  jal         func_1E9590
    ctx->pc = 0x18F9A8u;
    SET_GPR_U32(ctx, 31, 0x18F9B0u);
    ctx->pc = 0x18F9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F9A8u;
    // 0x18f9ac: 0x24590274  addiu       $t9, $v0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9590u, 0x18F9A8u, 0x18F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F9B0u;
}
