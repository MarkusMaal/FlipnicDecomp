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

// Function: entry_001dc5d8
// Address: 0x1dc5d8 - 0x1dc5e4
void entry_001dc5d8_0x1dc5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc5d8_0x1dc5d8");
#endif

    ctx->pc = 0x1dc5d8u;

    // 0x1dc5d8: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1dc5d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1dc5dc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DC5DCu;
    {
        const bool branch_taken_0x1dc5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5DCu;
        // 0x1dc5e0: 0x248400e8  addiu       $a0, $a0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc5dc) {
            ctx->pc = 0x1DC5B0u;
            return;
        }
    }
    ctx->pc = 0x1DC5E4u;
}
