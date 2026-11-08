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

// Function: entry_0015d5b8
// Address: 0x15d5b8 - 0x15d5c8
void entry_0015d5b8_0x15d5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d5b8_0x15d5b8");
#endif

    ctx->pc = 0x15d5b8u;

    // 0x15d5b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15d5b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x15d5bc: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x15d5bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x15d5c0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x15D5C0u;
    {
        const bool branch_taken_0x15d5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5C0u;
        // 0x15d5c4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5c0) {
            ctx->pc = 0x15D58Cu;
            return;
        }
    }
    ctx->pc = 0x15D5C8u;
}
