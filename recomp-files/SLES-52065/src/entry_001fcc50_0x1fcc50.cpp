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

// Function: entry_001fcc50
// Address: 0x1fcc50 - 0x1fcc90
void entry_001fcc50_0x1fcc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcc50_0x1fcc50");
#endif

    ctx->pc = 0x1fcc50u;

    // 0x1fcc50: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1fcc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1fcc54: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x1fcc54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fcc58: 0x8fb2001c  lw          $s2, 0x1C($sp)
    ctx->pc = 0x1fcc58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1fcc5c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x1fcc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x1fcc60: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1FCC60u;
    {
        const bool branch_taken_0x1fcc60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC60u;
        // 0x1fcc64: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc60) {
            ctx->pc = 0x1FCD10u;
            return;
        }
    }
    ctx->pc = 0x1FCC68u;
    // 0x1fcc68: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1fcc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fcc6c: 0x28570002  slti        $s7, $v0, 0x2
    ctx->pc = 0x1fcc6cu;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fcc70: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCC70u;
    {
        const bool branch_taken_0x1fcc70 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC70u;
        // 0x1fcc74: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc70) {
            ctx->pc = 0x1FCC90u;
            return;
        }
    }
    ctx->pc = 0x1FCC78u;
    // 0x1fcc78: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FCC78u;
    {
        const bool branch_taken_0x1fcc78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC78u;
        // 0x1fcc7c: 0x24740433  addiu       $s4, $v1, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc78) {
            ctx->pc = 0x1FCCE4u;
            return;
        }
    }
    ctx->pc = 0x1FCC80u;
    // 0x1fcc80: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1fcc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fcc84: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x1fcc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1fcc88: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1FCC88u;
    {
        const bool branch_taken_0x1fcc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC88u;
        // 0x1fcc8c: 0x43a023  subu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc88) {
            ctx->pc = 0x1FCCE4u;
            return;
        }
    }
    ctx->pc = 0x1FCC90u;
}
