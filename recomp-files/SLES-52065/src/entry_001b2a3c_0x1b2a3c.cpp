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

// Function: entry_001b2a3c
// Address: 0x1b2a3c - 0x1b2a74
void entry_001b2a3c_0x1b2a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2a3c_0x1b2a3c");
#endif

    switch (ctx->pc) {
        case 0x1b2a44u: goto label_1b2a44;
        default: break;
    }

    ctx->pc = 0x1b2a3cu;

    // 0x1b2a3c: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B2A3Cu;
    SET_GPR_U32(ctx, 31, 0x1B2A44u);
    ctx->pc = 0x1B2A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A3Cu;
    // 0x1b2a40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B2A3Cu, 0x1B2A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A44u;
label_1b2a44:
    // 0x1b2a44: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B2A44u;
    {
        const bool branch_taken_0x1b2a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a44) {
            ctx->pc = 0x1B2A9Cu;
            return;
        }
    }
    ctx->pc = 0x1B2A4Cu;
    // 0x1b2a4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2a50: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b2a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b2a54: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b2a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b2a58: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2a5c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b2a60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2A60u;
    {
        const bool branch_taken_0x1b2a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a60) {
            ctx->pc = 0x1B2A74u;
            return;
        }
    }
    ctx->pc = 0x1B2A68u;
    // 0x1b2a68: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b2a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b2a6c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2a70: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b2a74u;
}
