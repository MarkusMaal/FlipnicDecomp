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

// Function: entry_001dc164
// Address: 0x1dc164 - 0x1dc170
void entry_001dc164_0x1dc164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc164_0x1dc164");
#endif

    ctx->pc = 0x1dc164u;

    // 0x1dc164: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1dc164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1dc168: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1DC168u;
    {
        const bool branch_taken_0x1dc168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC168u;
        // 0x1dc16c: 0x246300e8  addiu       $v1, $v1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc168) {
            ctx->pc = 0x1DC130u;
            return;
        }
    }
    ctx->pc = 0x1DC170u;
}
