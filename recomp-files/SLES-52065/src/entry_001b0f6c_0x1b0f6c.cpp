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

// Function: entry_001b0f6c
// Address: 0x1b0f6c - 0x1b0fac
void entry_001b0f6c_0x1b0f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0f6c_0x1b0f6c");
#endif

    switch (ctx->pc) {
        case 0x1b0f7cu: goto label_1b0f7c;
        default: break;
    }

    ctx->pc = 0x1b0f6cu;

    // 0x1b0f6c: 0x0  nop
    ctx->pc = 0x1b0f6cu;
    // NOP
    // 0x1b0f70: 0x8fb301f8  lw          $s3, 0x1F8($sp)
    ctx->pc = 0x1b0f70u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1b0f74: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B0F74u;
    SET_GPR_U32(ctx, 31, 0x1B0F7Cu);
    ctx->pc = 0x1B0F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F74u;
    // 0x1b0f78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B0F74u, 0x1B0F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F7Cu;
label_1b0f7c:
    // 0x1b0f7c: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B0F7Cu;
    {
        const bool branch_taken_0x1b0f7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f7c) {
            ctx->pc = 0x1B0FD0u;
            return;
        }
    }
    ctx->pc = 0x1B0F84u;
    // 0x1b0f84: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b0f88: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b0f8c: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b0f90: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0f94: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b0f98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0F98u;
    {
        const bool branch_taken_0x1b0f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f98) {
            ctx->pc = 0x1B0FACu;
            return;
        }
    }
    ctx->pc = 0x1B0FA0u;
    // 0x1b0fa0: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1b0fa4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0fa8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0fa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0facu;
}
