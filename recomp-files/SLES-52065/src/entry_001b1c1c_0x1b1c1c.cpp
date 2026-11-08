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

// Function: entry_001b1c1c
// Address: 0x1b1c1c - 0x1b1c54
void entry_001b1c1c_0x1b1c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1c1c_0x1b1c1c");
#endif

    switch (ctx->pc) {
        case 0x1b1c24u: goto label_1b1c24;
        default: break;
    }

    ctx->pc = 0x1b1c1cu;

    // 0x1b1c1c: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B1C1Cu;
    SET_GPR_U32(ctx, 31, 0x1B1C24u);
    ctx->pc = 0x1B1C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C1Cu;
    // 0x1b1c20: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B1C1Cu, 0x1B1C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C24u;
label_1b1c24:
    // 0x1b1c24: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B1C24u;
    {
        const bool branch_taken_0x1b1c24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c24) {
            ctx->pc = 0x1B1C7Cu;
            return;
        }
    }
    ctx->pc = 0x1B1C2Cu;
    // 0x1b1c2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1c30: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b1c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b1c34: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b1c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b1c38: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1c3c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b1c40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1C40u;
    {
        const bool branch_taken_0x1b1c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c40) {
            ctx->pc = 0x1B1C54u;
            return;
        }
    }
    ctx->pc = 0x1B1C48u;
    // 0x1b1c48: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b1c4c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1c50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b1c54u;
}
