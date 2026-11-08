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

// Function: entry_001f4a68
// Address: 0x1f4a68 - 0x1f4a78
void entry_001f4a68_0x1f4a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4a68_0x1f4a68");
#endif

    ctx->pc = 0x1f4a68u;

    // 0x1f4a68: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x1f4a68u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x1f4a6c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1F4A6Cu;
    {
        const bool branch_taken_0x1f4a6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A6Cu;
        // 0x1f4a70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a6c) {
            ctx->pc = 0x1F4A98u;
            return;
        }
    }
    ctx->pc = 0x1F4A74u;
    // 0x1f4a74: 0x0  nop
    ctx->pc = 0x1f4a74u;
    // NOP
    ctx->pc = 0x1f4a78u;
}
