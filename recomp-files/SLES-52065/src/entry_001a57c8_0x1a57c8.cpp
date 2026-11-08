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

// Function: entry_001a57c8
// Address: 0x1a57c8 - 0x1a57e0
void entry_001a57c8_0x1a57c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a57c8_0x1a57c8");
#endif

    ctx->pc = 0x1a57c8u;

    // 0x1a57c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a57c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a57cc: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x1a57ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1a57d0: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1A57D0u;
    {
        const bool branch_taken_0x1a57d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A57D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57D0u;
        // 0x1a57d4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a57d0) {
            ctx->pc = 0x1A5780u;
            return;
        }
    }
    ctx->pc = 0x1A57D8u;
    // 0x1a57d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a57d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a57dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a57dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a57e0u;
}
