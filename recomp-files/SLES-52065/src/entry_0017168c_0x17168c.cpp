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

// Function: entry_0017168c
// Address: 0x17168c - 0x1716b8
void entry_0017168c_0x17168c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017168c_0x17168c");
#endif

    switch (ctx->pc) {
        case 0x1716a0u: goto label_1716a0;
        default: break;
    }

    ctx->pc = 0x17168cu;

label_17168c:
    // 0x17168c: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x17168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x171690: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x171690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x171694: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x171694u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x171698: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x171698u;
    SET_GPR_U32(ctx, 31, 0x1716A0u);
    ctx->pc = 0x17169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171698u;
    // 0x17169c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x171698u, 0x1716A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1716A0u;
label_1716a0:
    // 0x1716a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1716a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1716a4: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x1716a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1716a8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1716A8u;
    {
        const bool branch_taken_0x1716a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1716ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1716A8u;
        // 0x1716ac: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1716a8) {
            ctx->pc = 0x17168Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17168c;
        }
    }
    ctx->pc = 0x1716B0u;
    // 0x1716b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1716b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1716b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1716b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1716b8u;
}
