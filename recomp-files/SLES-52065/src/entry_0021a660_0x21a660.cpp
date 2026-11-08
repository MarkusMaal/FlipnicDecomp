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

// Function: entry_0021a660
// Address: 0x21a660 - 0x21a668
void entry_0021a660_0x21a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a660_0x21a660");
#endif

    ctx->pc = 0x21a660u;

    // 0x21a660: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x21A660u;
    {
        const bool branch_taken_0x21a660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A660u;
        // 0x21a664: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a660) {
            ctx->pc = 0x21A750u;
            return;
        }
    }
    ctx->pc = 0x21A668u;
}
