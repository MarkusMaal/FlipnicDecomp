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

// Function: entry_001fa7b0
// Address: 0x1fa7b0 - 0x1fa7c0
void entry_001fa7b0_0x1fa7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa7b0_0x1fa7b0");
#endif

    ctx->pc = 0x1fa7b0u;

    // 0x1fa7b0: 0x15000021  bnez        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1FA7B0u;
    {
        const bool branch_taken_0x1fa7b0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7B0u;
        // 0x1fa7b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7b0) {
            ctx->pc = 0x1FA838u;
            return;
        }
    }
    ctx->pc = 0x1FA7B8u;
    // 0x1fa7b8: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x1fa7b8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1fa7bc: 0x0  nop
    ctx->pc = 0x1fa7bcu;
    // NOP
    ctx->pc = 0x1fa7c0u;
}
