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

// Function: entry_0016d048
// Address: 0x16d048 - 0x16d088
void entry_0016d048_0x16d048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d048_0x16d048");
#endif

    ctx->pc = 0x16d048u;

    // 0x16d048: 0x8e2401d4  lw          $a0, 0x1D4($s1)
    ctx->pc = 0x16d048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x16d04c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x16d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16d050: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x16D050u;
    {
        const bool branch_taken_0x16d050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D050u;
        // 0x16d054: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d050) {
            ctx->pc = 0x16D0ECu;
            return;
        }
    }
    ctx->pc = 0x16D058u;
    // 0x16d058: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x16D058u;
    {
        const bool branch_taken_0x16d058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d058) {
            ctx->pc = 0x16D0B8u;
            return;
        }
    }
    ctx->pc = 0x16D060u;
    // 0x16d060: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x16d060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16d064: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x16D064u;
    {
        const bool branch_taken_0x16d064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D064u;
        // 0x16d068: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d064) {
            ctx->pc = 0x16D0B8u;
            return;
        }
    }
    ctx->pc = 0x16D06Cu;
    // 0x16d06c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16D06Cu;
    {
        const bool branch_taken_0x16d06c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d06c) {
            ctx->pc = 0x16D088u;
            return;
        }
    }
    ctx->pc = 0x16D074u;
    // 0x16d074: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x16d074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16d078: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D078u;
    {
        const bool branch_taken_0x16d078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d078) {
            ctx->pc = 0x16D088u;
            return;
        }
    }
    ctx->pc = 0x16D080u;
    // 0x16d080: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x16D080u;
    {
        const bool branch_taken_0x16d080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D080u;
        // 0x16d084: 0x8e300230  lw          $s0, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d080) {
            ctx->pc = 0x16D0F8u;
            return;
        }
    }
    ctx->pc = 0x16D088u;
}
