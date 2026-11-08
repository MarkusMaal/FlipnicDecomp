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

// Function: entry_0019b1b8
// Address: 0x19b1b8 - 0x19b1c4
void entry_0019b1b8_0x19b1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b1b8_0x19b1b8");
#endif

    ctx->pc = 0x19b1b8u;

    // 0x19b1b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x19B1B8u;
    {
        const bool branch_taken_0x19b1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1B8u;
        // 0x19b1bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b1b8) {
            ctx->pc = 0x19B228u;
            return;
        }
    }
    ctx->pc = 0x19B1C0u;
    // 0x19b1c0: 0x2332021  addu        $a0, $s1, $s3
    ctx->pc = 0x19b1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    ctx->pc = 0x19b1c4u;
}
