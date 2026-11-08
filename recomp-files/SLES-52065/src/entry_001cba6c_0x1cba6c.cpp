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

// Function: entry_001cba6c
// Address: 0x1cba6c - 0x1cba80
void entry_001cba6c_0x1cba6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cba6c_0x1cba6c");
#endif

    ctx->pc = 0x1cba6cu;

    // 0x1cba6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cba70: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBA70u;
    {
        const bool branch_taken_0x1cba70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CBA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA70u;
        // 0x1cba74: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba70) {
            ctx->pc = 0x1CBA80u;
            return;
        }
    }
    ctx->pc = 0x1CBA78u;
    // 0x1cba78: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CBA78u;
    {
        const bool branch_taken_0x1cba78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cba78) {
            ctx->pc = 0x1CBAB0u;
            return;
        }
    }
    ctx->pc = 0x1CBA80u;
}
