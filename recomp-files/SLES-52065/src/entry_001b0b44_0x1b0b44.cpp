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

// Function: entry_001b0b44
// Address: 0x1b0b44 - 0x1b0b84
void entry_001b0b44_0x1b0b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0b44_0x1b0b44");
#endif

    switch (ctx->pc) {
        case 0x1b0b54u: goto label_1b0b54;
        default: break;
    }

    ctx->pc = 0x1b0b44u;

    // 0x1b0b44: 0x0  nop
    ctx->pc = 0x1b0b44u;
    // NOP
    // 0x1b0b48: 0x8fb301b8  lw          $s3, 0x1B8($sp)
    ctx->pc = 0x1b0b48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1b0b4c: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B0B4Cu;
    SET_GPR_U32(ctx, 31, 0x1B0B54u);
    ctx->pc = 0x1B0B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0B4Cu;
    // 0x1b0b50: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B0B4Cu, 0x1B0B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B54u;
label_1b0b54:
    // 0x1b0b54: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B0B54u;
    {
        const bool branch_taken_0x1b0b54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0b54) {
            ctx->pc = 0x1B0BA8u;
            return;
        }
    }
    ctx->pc = 0x1B0B5Cu;
    // 0x1b0b5c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b0b60: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b0b64: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b0b68: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0b6c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0b6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b0b70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0B70u;
    {
        const bool branch_taken_0x1b0b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0b70) {
            ctx->pc = 0x1B0B84u;
            return;
        }
    }
    ctx->pc = 0x1B0B78u;
    // 0x1b0b78: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1b0b7c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0b80: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0b80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0b84u;
}
