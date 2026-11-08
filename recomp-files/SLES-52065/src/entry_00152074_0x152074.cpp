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

// Function: entry_00152074
// Address: 0x152074 - 0x152080
void entry_00152074_0x152074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152074_0x152074");
#endif

    ctx->pc = 0x152074u;

    // 0x152074: 0xa38285f0  sb          $v0, -0x7A10($gp)
    ctx->pc = 0x152074u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936048), (uint8_t)GPR_U32(ctx, 2));
    // 0x152078: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x152078u;
    {
        const bool branch_taken_0x152078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152078u;
        // 0x15207c: 0x938285f0  lbu         $v0, -0x7A10($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152078) {
            ctx->pc = 0x15209Cu;
            return;
        }
    }
    ctx->pc = 0x152080u;
}
