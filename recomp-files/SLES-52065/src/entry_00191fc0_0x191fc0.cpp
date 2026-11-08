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

// Function: entry_00191fc0
// Address: 0x191fc0 - 0x191fd0
void entry_00191fc0_0x191fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191fc0_0x191fc0");
#endif

    ctx->pc = 0x191fc0u;

    // 0x191fc0: 0x8c460450  lw          $a2, 0x450($v0)
    ctx->pc = 0x191fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x191fc4: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x191fc8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x191FC8u;
    {
        const bool branch_taken_0x191fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FC8u;
        // 0x191fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191fc8) {
            ctx->pc = 0x192044u;
            return;
        }
    }
    ctx->pc = 0x191FD0u;
}
