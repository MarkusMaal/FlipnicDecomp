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

// Function: entry_00189bac
// Address: 0x189bac - 0x189bd4
void entry_00189bac_0x189bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189bac_0x189bac");
#endif

    ctx->pc = 0x189bacu;

    // 0x189bac: 0x0  nop
    ctx->pc = 0x189bacu;
    // NOP
    // 0x189bb0: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x189bb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x189bb4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x189bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x189bb8: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x189BB8u;
    {
        const bool branch_taken_0x189bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x189BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189BB8u;
        // 0x189bbc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189bb8) {
            ctx->pc = 0x189BDCu;
            return;
        }
    }
    ctx->pc = 0x189BC0u;
    // 0x189bc0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x189bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x189bc4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189BC4u;
    {
        const bool branch_taken_0x189bc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x189bc4) {
            ctx->pc = 0x189BD4u;
            return;
        }
    }
    ctx->pc = 0x189BCCu;
    // 0x189bcc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x189BCCu;
    {
        const bool branch_taken_0x189bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189bcc) {
            ctx->pc = 0x189C0Cu;
            return;
        }
    }
    ctx->pc = 0x189BD4u;
}
