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

// Function: entry_0019dec0
// Address: 0x19dec0 - 0x19dee4
void entry_0019dec0_0x19dec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dec0_0x19dec0");
#endif

    switch (ctx->pc) {
        case 0x19dee0u: goto label_19dee0;
        default: break;
    }

    ctx->pc = 0x19dec0u;

    // 0x19dec0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19DEC0u;
    {
        const bool branch_taken_0x19dec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19dec0) {
            ctx->pc = 0x19DEE4u;
            return;
        }
    }
    ctx->pc = 0x19DEC8u;
    // 0x19dec8: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x19dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x19decc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19deccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ded0: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x19ded0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19ded4: 0x8e650684  lw          $a1, 0x684($s3)
    ctx->pc = 0x19ded4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1668)));
    // 0x19ded8: 0xc064d78  jal         func_1935E0
    ctx->pc = 0x19DED8u;
    SET_GPR_U32(ctx, 31, 0x19DEE0u);
    ctx->pc = 0x19DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DED8u;
    // 0x19dedc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1935E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1935E0u, 0x19DED8u, 0x19DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DEE0u;
label_19dee0:
    // 0x19dee0: 0xae600784  sw          $zero, 0x784($s3)
    ctx->pc = 0x19dee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1924), GPR_U32(ctx, 0));
    ctx->pc = 0x19dee4u;
}
