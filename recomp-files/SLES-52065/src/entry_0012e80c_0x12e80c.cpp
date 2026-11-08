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

// Function: entry_0012e80c
// Address: 0x12e80c - 0x12e81c
void entry_0012e80c_0x12e80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e80c_0x12e80c");
#endif

    ctx->pc = 0x12e80cu;

    // 0x12e80c: 0x2083023  subu        $a2, $s0, $t0
    ctx->pc = 0x12e80cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x12e810: 0xd0082b  sltu        $at, $a2, $s0
    ctx->pc = 0x12e810u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12e814: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x12E814u;
    {
        const bool branch_taken_0x12e814 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E814u;
        // 0x12e818: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e814) {
            ctx->pc = 0x12E884u;
            return;
        }
    }
    ctx->pc = 0x12E81Cu;
}
