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

// Function: entry_001f3714
// Address: 0x1f3714 - 0x1f3720
void entry_001f3714_0x1f3714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3714_0x1f3714");
#endif

    ctx->pc = 0x1f3714u;

    // 0x1f3714: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f3714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f3718: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3718u;
    {
        const bool branch_taken_0x1f3718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3718u;
        // 0x1f371c: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3718) {
            ctx->pc = 0x1F3728u;
            return;
        }
    }
    ctx->pc = 0x1F3720u;
}
