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

// Function: entry_0019df50
// Address: 0x19df50 - 0x19df74
void entry_0019df50_0x19df50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019df50_0x19df50");
#endif

    switch (ctx->pc) {
        case 0x19df68u: goto label_19df68;
        default: break;
    }

    ctx->pc = 0x19df50u;

    // 0x19df50: 0x2b61021  addu        $v0, $s5, $s6
    ctx->pc = 0x19df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x19df54: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x19df54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19df58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19df58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df5c: 0x8e450684  lw          $a1, 0x684($s2)
    ctx->pc = 0x19df5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1668)));
    // 0x19df60: 0xc064d78  jal         func_1935E0
    ctx->pc = 0x19DF60u;
    SET_GPR_U32(ctx, 31, 0x19DF68u);
    ctx->pc = 0x19DF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF60u;
    // 0x19df64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1935E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1935E0u, 0x19DF60u, 0x19DF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DF68u;
label_19df68:
    // 0x19df68: 0xae400784  sw          $zero, 0x784($s2)
    ctx->pc = 0x19df68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1924), GPR_U32(ctx, 0));
    // 0x19df6c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x19df6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x19df70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19df70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x19df74u;
}
