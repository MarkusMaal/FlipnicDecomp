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

// Function: entry_00180b18
// Address: 0x180b18 - 0x180b30
void entry_00180b18_0x180b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180b18_0x180b18");
#endif

    ctx->pc = 0x180b18u;

    // 0x180b18: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x180b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x180b1c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x180b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x180b20: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180B20u;
    {
        const bool branch_taken_0x180b20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x180B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B20u;
        // 0x180b24: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b20) {
            ctx->pc = 0x180B30u;
            return;
        }
    }
    ctx->pc = 0x180B28u;
    // 0x180b28: 0x10000217  b           . + 4 + (0x217 << 2)
    ctx->pc = 0x180B28u;
    {
        const bool branch_taken_0x180b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B28u;
        // 0x180b2c: 0xaf83865c  sw          $v1, -0x79A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b28) {
            ctx->pc = 0x181388u;
            return;
        }
    }
    ctx->pc = 0x180B30u;
}
