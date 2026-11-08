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

// Function: entry_0020420c
// Address: 0x20420c - 0x204220
void entry_0020420c_0x20420c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020420c_0x20420c");
#endif

    ctx->pc = 0x20420cu;

    // 0x20420c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20420Cu;
    {
        const bool branch_taken_0x20420c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x204210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20420Cu;
        // 0x204210: 0x27b301bc  addiu       $s3, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20420c) {
            ctx->pc = 0x204220u;
            return;
        }
    }
    ctx->pc = 0x204214u;
    // 0x204214: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x204214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x204218: 0x10a0004d  beqz        $a1, . + 4 + (0x4D << 2)
    ctx->pc = 0x204218u;
    {
        const bool branch_taken_0x204218 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204218u;
        // 0x20421c: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204218) {
            ctx->pc = 0x204350u;
            return;
        }
    }
    ctx->pc = 0x204220u;
}
