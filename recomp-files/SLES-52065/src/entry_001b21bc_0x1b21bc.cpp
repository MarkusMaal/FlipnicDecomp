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

// Function: entry_001b21bc
// Address: 0x1b21bc - 0x1b21f4
void entry_001b21bc_0x1b21bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b21bc_0x1b21bc");
#endif

    switch (ctx->pc) {
        case 0x1b21c4u: goto label_1b21c4;
        default: break;
    }

    ctx->pc = 0x1b21bcu;

    // 0x1b21bc: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B21BCu;
    SET_GPR_U32(ctx, 31, 0x1B21C4u);
    ctx->pc = 0x1B21C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B21BCu;
    // 0x1b21c0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B21BCu, 0x1B21C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B21C4u;
label_1b21c4:
    // 0x1b21c4: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B21C4u;
    {
        const bool branch_taken_0x1b21c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b21c4) {
            ctx->pc = 0x1B221Cu;
            return;
        }
    }
    ctx->pc = 0x1B21CCu;
    // 0x1b21cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b21ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b21d0: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b21d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b21d4: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b21d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b21d8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b21d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b21dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b21dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b21e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B21E0u;
    {
        const bool branch_taken_0x1b21e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b21e0) {
            ctx->pc = 0x1B21F4u;
            return;
        }
    }
    ctx->pc = 0x1B21E8u;
    // 0x1b21e8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b21e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b21ec: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b21ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b21f0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b21f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b21f4u;
}
