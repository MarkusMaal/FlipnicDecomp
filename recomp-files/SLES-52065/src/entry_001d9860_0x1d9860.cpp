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

// Function: entry_001d9860
// Address: 0x1d9860 - 0x1d9880
void entry_001d9860_0x1d9860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9860_0x1d9860");
#endif

    ctx->pc = 0x1d9860u;

    // 0x1d9860: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d9860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d9864: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d9864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d9868: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d9868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d986c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1d986cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1d9870: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1d9870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d9874: 0x8c8466d0  lw          $a0, 0x66D0($a0)
    ctx->pc = 0x1d9874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 26320)));
    // 0x1d9878: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1D9878u;
    SET_GPR_U32(ctx, 31, 0x1D9880u);
    ctx->pc = 0x1D987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9878u;
    // 0x1d987c: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1D9878u, 0x1D9880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9880u;
}
