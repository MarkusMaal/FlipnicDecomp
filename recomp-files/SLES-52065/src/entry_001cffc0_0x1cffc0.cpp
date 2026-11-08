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

// Function: entry_001cffc0
// Address: 0x1cffc0 - 0x1cffd0
void entry_001cffc0_0x1cffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cffc0_0x1cffc0");
#endif

    ctx->pc = 0x1cffc0u;

    // 0x1cffc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cffc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cffc4: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x1cffc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cffc8: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1CFFC8u;
    {
        const bool branch_taken_0x1cffc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFC8u;
        // 0x1cffcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cffc8) {
            ctx->pc = 0x1CFF38u;
            return;
        }
    }
    ctx->pc = 0x1CFFD0u;
}
