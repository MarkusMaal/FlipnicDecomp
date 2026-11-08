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

// Function: entry_002034b0
// Address: 0x2034b0 - 0x2034d0
void entry_002034b0_0x2034b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002034b0_0x2034b0");
#endif

    ctx->pc = 0x2034b0u;

    // 0x2034b0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2034b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2034b4: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2034B4u;
    {
        const bool branch_taken_0x2034b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2034B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034B4u;
        // 0x2034b8: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034b4) {
            ctx->pc = 0x2034DCu;
            return;
        }
    }
    ctx->pc = 0x2034BCu;
    // 0x2034bc: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x2034bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2034c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2034C0u;
    {
        const bool branch_taken_0x2034c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2034C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034C0u;
        // 0x2034c4: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034c0) {
            ctx->pc = 0x2034D0u;
            return;
        }
    }
    ctx->pc = 0x2034C8u;
    // 0x2034c8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2034C8u;
    {
        const bool branch_taken_0x2034c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2034c8) {
            ctx->pc = 0x2034DCu;
            return;
        }
    }
    ctx->pc = 0x2034D0u;
}
