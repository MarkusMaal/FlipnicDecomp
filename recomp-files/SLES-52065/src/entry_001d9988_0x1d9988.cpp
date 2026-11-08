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

// Function: entry_001d9988
// Address: 0x1d9988 - 0x1d99a0
void entry_001d9988_0x1d9988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9988_0x1d9988");
#endif

    switch (ctx->pc) {
        case 0x1d9990u: goto label_1d9990;
        default: break;
    }

    ctx->pc = 0x1d9988u;

    // 0x1d9988: 0xc078448  jal         func_1E1120
    ctx->pc = 0x1D9988u;
    SET_GPR_U32(ctx, 31, 0x1D9990u);
    ctx->pc = 0x1D998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9988u;
    // 0x1d998c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1120u, 0x1D9988u, 0x1D9990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9990u;
label_1d9990:
    // 0x1d9990: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1d9990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1d9994: 0x247066c0  addiu       $s0, $v1, 0x66C0
    ctx->pc = 0x1d9994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26304));
    // 0x1d9998: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1d9998u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d999c: 0x0  nop
    ctx->pc = 0x1d999cu;
    // NOP
    ctx->pc = 0x1d99a0u;
}
