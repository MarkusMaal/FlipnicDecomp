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

// Function: entry_001fe2c8
// Address: 0x1fe2c8 - 0x1fe2f0
void entry_001fe2c8_0x1fe2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe2c8_0x1fe2c8");
#endif

    ctx->pc = 0x1fe2c8u;

    // 0x1fe2c8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1fe2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1fe2cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE2CCu;
    {
        const bool branch_taken_0x1fe2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2CCu;
        // 0x1fe2d0: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2cc) {
            ctx->pc = 0x1FE2F0u;
            return;
        }
    }
    ctx->pc = 0x1FE2D4u;
    // 0x1fe2d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fe2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fe2d8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1fe2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1fe2dc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FE2DCu;
    {
        const bool branch_taken_0x1fe2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2DCu;
        // 0x1fe2e0: 0xa2282f  dsubu       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2dc) {
            ctx->pc = 0x1FE310u;
            return;
        }
    }
    ctx->pc = 0x1FE2E4u;
    // 0x1fe2e4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1fe2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1fe2e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE2E8u;
    {
        const bool branch_taken_0x1fe2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2E8u;
        // 0x1fe2ec: 0xa2282f  dsubu       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2e8) {
            ctx->pc = 0x1FE310u;
            return;
        }
    }
    ctx->pc = 0x1FE2F0u;
}
