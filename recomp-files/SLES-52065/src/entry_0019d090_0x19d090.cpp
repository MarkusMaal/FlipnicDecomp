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

// Function: entry_0019d090
// Address: 0x19d090 - 0x19d0a0
void entry_0019d090_0x19d090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d090_0x19d090");
#endif

    ctx->pc = 0x19d090u;

    // 0x19d090: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x19d090u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x19d094: 0x2de182a  slt         $v1, $s6, $fp
    ctx->pc = 0x19d094u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x19d098: 0x1460ff69  bnez        $v1, . + 4 + (-0x97 << 2)
    ctx->pc = 0x19D098u;
    {
        const bool branch_taken_0x19d098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D098u;
        // 0x19d09c: 0x26b50018  addiu       $s5, $s5, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d098) {
            ctx->pc = 0x19CE40u;
            return;
        }
    }
    ctx->pc = 0x19D0A0u;
}
