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

// Function: entry_001a57b8
// Address: 0x1a57b8 - 0x1a57c8
void entry_001a57b8_0x1a57b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a57b8_0x1a57b8");
#endif

    ctx->pc = 0x1a57b8u;

    // 0x1a57b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a57b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a57bc: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x1a57bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1a57c0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A57C0u;
    {
        const bool branch_taken_0x1a57c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57C0u;
        // 0x1a57c4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a57c0) {
            ctx->pc = 0x1A57A0u;
            return;
        }
    }
    ctx->pc = 0x1A57C8u;
}
