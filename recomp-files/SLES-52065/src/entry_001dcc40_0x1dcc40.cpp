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

// Function: entry_001dcc40
// Address: 0x1dcc40 - 0x1dcc78
void entry_001dcc40_0x1dcc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcc40_0x1dcc40");
#endif

    ctx->pc = 0x1dcc40u;

    // 0x1dcc40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dcc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dcc44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dcc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dcc48: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1DCC48u;
    {
        const bool branch_taken_0x1dcc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcc48) {
            ctx->pc = 0x1DCC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCC48u;
            // 0x1dcc4c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCC78u;
            return;
        }
    }
    ctx->pc = 0x1DCC50u;
    // 0x1dcc50: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1dcc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1dcc54: 0x54450008  bnel        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCC54u;
    {
        const bool branch_taken_0x1dcc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1dcc54) {
            ctx->pc = 0x1DCC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCC54u;
            // 0x1dcc58: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCC78u;
            return;
        }
    }
    ctx->pc = 0x1DCC5Cu;
    // 0x1dcc5c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1dcc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1dcc60: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCC60u;
    {
        const bool branch_taken_0x1dcc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1dcc60) {
            ctx->pc = 0x1DCC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCC60u;
            // 0x1dcc64: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCC78u;
            return;
        }
    }
    ctx->pc = 0x1DCC68u;
    // 0x1dcc68: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x1dcc68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x1dcc6c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dcc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1dcc70: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dcc70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1dcc74: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1dcc74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x1dcc78u;
}
