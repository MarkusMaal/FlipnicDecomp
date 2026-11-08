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

// Function: entry_00189a10
// Address: 0x189a10 - 0x189a48
void entry_00189a10_0x189a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189a10_0x189a10");
#endif

    switch (ctx->pc) {
        case 0x189a18u: goto label_189a18;
        default: break;
    }

    ctx->pc = 0x189a10u;

    // 0x189a10: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x189A10u;
    SET_GPR_U32(ctx, 31, 0x189A18u);
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x189A10u, 0x189A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A18u;
label_189a18:
    // 0x189a18: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x189a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x189a1c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x189A1Cu;
    {
        const bool branch_taken_0x189a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A1Cu;
        // 0x189a20: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a1c) {
            ctx->pc = 0x189A6Cu;
            return;
        }
    }
    ctx->pc = 0x189A24u;
    // 0x189a24: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x189a24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x189a28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x189a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189a2c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x189a30: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x189a34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189A34u;
    {
        const bool branch_taken_0x189a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A34u;
        // 0x189a38: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a34) {
            ctx->pc = 0x189A48u;
            return;
        }
    }
    ctx->pc = 0x189A3Cu;
    // 0x189a3c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x189a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x189a40: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x189a44: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189a44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x189a48u;
}
