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

// Function: entry_00109024
// Address: 0x109024 - 0x109048
void entry_00109024_0x109024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109024_0x109024");
#endif

    ctx->pc = 0x109024u;

    // 0x109024: 0x844301ea  lh          $v1, 0x1EA($v0)
    ctx->pc = 0x109024u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 490)));
    // 0x109028: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x109028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x10902c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10902Cu;
    {
        const bool branch_taken_0x10902c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10902c) {
            ctx->pc = 0x109064u;
            return;
        }
    }
    ctx->pc = 0x109034u;
    // 0x109034: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x109034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x109038: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x109038u;
    {
        const bool branch_taken_0x109038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x109038) {
            ctx->pc = 0x109048u;
            return;
        }
    }
    ctx->pc = 0x109040u;
    // 0x109040: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x109040u;
    {
        const bool branch_taken_0x109040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109040u;
        // 0x109044: 0x8e632cd0  lw          $v1, 0x2CD0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109040) {
            ctx->pc = 0x1092A0u;
            return;
        }
    }
    ctx->pc = 0x109048u;
}
