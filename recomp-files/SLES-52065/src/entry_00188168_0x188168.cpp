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

// Function: entry_00188168
// Address: 0x188168 - 0x188174
void entry_00188168_0x188168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188168_0x188168");
#endif

    ctx->pc = 0x188168u;

    // 0x188168: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x188168u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x18816c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18816Cu;
    {
        const bool branch_taken_0x18816c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18816Cu;
        // 0x188170: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18816c) {
            ctx->pc = 0x188180u;
            return;
        }
    }
    ctx->pc = 0x188174u;
}
