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

// Function: entry_00199940
// Address: 0x199940 - 0x19994c
void entry_00199940_0x199940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199940_0x199940");
#endif

    ctx->pc = 0x199940u;

    // 0x199940: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x199940u;
    {
        const bool branch_taken_0x199940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199940u;
        // 0x199944: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199940) {
            ctx->pc = 0x199BB0u;
            return;
        }
    }
    ctx->pc = 0x199948u;
    // 0x199948: 0x296a821  addu        $s5, $s4, $s6
    ctx->pc = 0x199948u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    ctx->pc = 0x19994cu;
}
