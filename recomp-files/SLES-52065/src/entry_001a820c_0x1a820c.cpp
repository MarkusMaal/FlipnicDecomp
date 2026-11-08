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

// Function: entry_001a820c
// Address: 0x1a820c - 0x1a821c
void entry_001a820c_0x1a820c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a820c_0x1a820c");
#endif

    ctx->pc = 0x1a820cu;

    // 0x1a820c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a820cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a8210: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x1a8210u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a8214: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1A8214u;
    {
        const bool branch_taken_0x1a8214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8214u;
        // 0x1a8218: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8214) {
            ctx->pc = 0x1A81C8u;
            return;
        }
    }
    ctx->pc = 0x1A821Cu;
}
