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

// Function: entry_001efe6c
// Address: 0x1efe6c - 0x1efe80
void entry_001efe6c_0x1efe6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efe6c_0x1efe6c");
#endif

    ctx->pc = 0x1efe6cu;

    // 0x1efe6c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFE6Cu;
    {
        const bool branch_taken_0x1efe6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efe6c) {
            ctx->pc = 0x1EFE80u;
            return;
        }
    }
    ctx->pc = 0x1EFE74u;
    // 0x1efe74: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x1efe74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1efe78: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFE78u;
    {
        const bool branch_taken_0x1efe78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efe78) {
            ctx->pc = 0x1EFE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFE78u;
            // 0x1efe7c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFE90u;
            return;
        }
    }
    ctx->pc = 0x1EFE80u;
}
