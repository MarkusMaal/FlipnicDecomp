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

// Function: entry_001dcca0
// Address: 0x1dcca0 - 0x1dcce4
void entry_001dcca0_0x1dcca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcca0_0x1dcca0");
#endif

    ctx->pc = 0x1dcca0u;

    // 0x1dcca0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dcca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dcca4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dcca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dcca8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1DCCA8u;
    {
        const bool branch_taken_0x1dcca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcca8) {
            ctx->pc = 0x1DCCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCCA8u;
            // 0x1dccac: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCCE4u;
            return;
        }
    }
    ctx->pc = 0x1DCCB0u;
    // 0x1dccb0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1dccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1dccb4: 0x5445000b  bnel        $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DCCB4u;
    {
        const bool branch_taken_0x1dccb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1dccb4) {
            ctx->pc = 0x1DCCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCCB4u;
            // 0x1dccb8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCCE4u;
            return;
        }
    }
    ctx->pc = 0x1DCCBCu;
    // 0x1dccbc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1dccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1dccc0: 0x54460008  bnel        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCCC0u;
    {
        const bool branch_taken_0x1dccc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1dccc0) {
            ctx->pc = 0x1DCCC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCCC0u;
            // 0x1dccc4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCCE4u;
            return;
        }
    }
    ctx->pc = 0x1DCCC8u;
    // 0x1dccc8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1dccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1dcccc: 0x54470005  bnel        $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCCCCu;
    {
        const bool branch_taken_0x1dcccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1dcccc) {
            ctx->pc = 0x1DCCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCCCCu;
            // 0x1dccd0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCCE4u;
            return;
        }
    }
    ctx->pc = 0x1DCCD4u;
    // 0x1dccd4: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1dccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1dccd8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1dccdc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1dccdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1dcce0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dcce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    ctx->pc = 0x1dcce4u;
}
