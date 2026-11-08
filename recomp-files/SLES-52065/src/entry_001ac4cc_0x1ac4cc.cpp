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

// Function: entry_001ac4cc
// Address: 0x1ac4cc - 0x1ac4e4
void entry_001ac4cc_0x1ac4cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac4cc_0x1ac4cc");
#endif

    ctx->pc = 0x1ac4ccu;

    // 0x1ac4cc: 0x8e2406ec  lw          $a0, 0x6EC($s1)
    ctx->pc = 0x1ac4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
    // 0x1ac4d0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC4D0u;
    {
        const bool branch_taken_0x1ac4d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4D0u;
        // 0x1ac4d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac4d0) {
            ctx->pc = 0x1AC4E4u;
            return;
        }
    }
    ctx->pc = 0x1AC4D8u;
    // 0x1ac4d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac4dc: 0xac830320  sw          $v1, 0x320($a0)
    ctx->pc = 0x1ac4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 3));
    // 0x1ac4e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1ac4e4u;
}
