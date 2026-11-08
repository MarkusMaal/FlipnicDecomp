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

// Function: entry_0019b414
// Address: 0x19b414 - 0x19b430
void entry_0019b414_0x19b414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b414_0x19b414");
#endif

    ctx->pc = 0x19b414u;

    // 0x19b414: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19b414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x19b418: 0x29020007  slti        $v0, $t0, 0x7
    ctx->pc = 0x19b418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x19b41c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19B41Cu;
    {
        const bool branch_taken_0x19b41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B41Cu;
        // 0x19b420: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b41c) {
            ctx->pc = 0x19B3F4u;
            return;
        }
    }
    ctx->pc = 0x19B424u;
    // 0x19b424: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19B424u;
    {
        const bool branch_taken_0x19b424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b424) {
            ctx->pc = 0x19B430u;
            return;
        }
    }
    ctx->pc = 0x19B42Cu;
    // 0x19b42c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19b42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19b430u;
}
