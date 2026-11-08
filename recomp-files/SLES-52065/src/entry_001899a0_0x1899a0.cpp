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

// Function: entry_001899a0
// Address: 0x1899a0 - 0x1899e4
void entry_001899a0_0x1899a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001899a0_0x1899a0");
#endif

    switch (ctx->pc) {
        case 0x1899b4u: goto label_1899b4;
        default: break;
    }

    ctx->pc = 0x1899a0u;

    // 0x1899a0: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1899A0u;
    {
        const bool branch_taken_0x1899a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1899a0) {
            ctx->pc = 0x189A84u;
            return;
        }
    }
    ctx->pc = 0x1899A8u;
    // 0x1899a8: 0x8fb10078  lw          $s1, 0x78($sp)
    ctx->pc = 0x1899a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1899ac: 0xc06d080  jal         func_1B4200
    ctx->pc = 0x1899ACu;
    SET_GPR_U32(ctx, 31, 0x1899B4u);
    ctx->pc = 0x1899B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1899ACu;
    // 0x1899b0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4200u, 0x1899ACu, 0x1899B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1899B4u;
label_1899b4:
    // 0x1899b4: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x1899b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1899b8: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1899B8u;
    {
        const bool branch_taken_0x1899b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899B8u;
        // 0x1899bc: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899b8) {
            ctx->pc = 0x189A08u;
            return;
        }
    }
    ctx->pc = 0x1899C0u;
    // 0x1899c0: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1899c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1899c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1899c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1899c8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1899c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1899cc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1899ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1899d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1899D0u;
    {
        const bool branch_taken_0x1899d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899D0u;
        // 0x1899d4: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899d0) {
            ctx->pc = 0x1899E4u;
            return;
        }
    }
    ctx->pc = 0x1899D8u;
    // 0x1899d8: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1899d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1899dc: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1899dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1899e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1899e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1899e4u;
}
