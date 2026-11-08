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

// Function: entry_001cbb9c
// Address: 0x1cbb9c - 0x1cbbac
void entry_001cbb9c_0x1cbb9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbb9c_0x1cbb9c");
#endif

    ctx->pc = 0x1cbb9cu;

    // 0x1cbb9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cbb9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cbba0: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1cbba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1cbba4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1CBBA4u;
    {
        const bool branch_taken_0x1cbba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBA4u;
        // 0x1cbba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbba4) {
            ctx->pc = 0x1CBB7Cu;
            return;
        }
    }
    ctx->pc = 0x1CBBACu;
}
