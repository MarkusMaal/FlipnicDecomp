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

// Function: entry_0020322c
// Address: 0x20322c - 0x20323c
void entry_0020322c_0x20322c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020322c_0x20322c");
#endif

    ctx->pc = 0x20322cu;

    // 0x20322c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x20322Cu;
    {
        const bool branch_taken_0x20322c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x203230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20322Cu;
        // 0x203230: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20322c) {
            ctx->pc = 0x20323Cu;
            return;
        }
    }
    ctx->pc = 0x203234u;
    // 0x203234: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x203234u;
    {
        const bool branch_taken_0x203234 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x203234) {
            ctx->pc = 0x203268u;
            return;
        }
    }
    ctx->pc = 0x20323Cu;
}
