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

// Function: entry_001b8f28
// Address: 0x1b8f28 - 0x1b8f68
void entry_001b8f28_0x1b8f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8f28_0x1b8f28");
#endif

    switch (ctx->pc) {
        case 0x1b8f30u: goto label_1b8f30;
        default: break;
    }

    ctx->pc = 0x1b8f28u;

    // 0x1b8f28: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B8F28u;
    SET_GPR_U32(ctx, 31, 0x1B8F30u);
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B8F28u, 0x1B8F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8F30u;
label_1b8f30:
    // 0x1b8f30: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b8f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1b8f34: 0x8c24c6c0  lw          $a0, -0x3940($at)
    ctx->pc = 0x1b8f34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22C6C0u));
    // 0x1b8f38: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B8F38u;
    {
        const bool branch_taken_0x1b8f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F38u;
        // 0x1b8f3c: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f38) {
            ctx->pc = 0x1B8F8Cu;
            return;
        }
    }
    ctx->pc = 0x1B8F40u;
    // 0x1b8f40: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b8f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1b8f44: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1b8f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1b8f48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b8f4c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b8f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1b8f50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8f50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b8f54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8F54u;
    {
        const bool branch_taken_0x1b8f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F54u;
        // 0x1b8f58: 0x8c23c6c4  lw          $v1, -0x393C($at) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f54) {
            ctx->pc = 0x1B8F68u;
            return;
        }
    }
    ctx->pc = 0x1B8F5Cu;
    // 0x1b8f5c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1b8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1b8f60: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b8f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1b8f64: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8f64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b8f68u;
}
