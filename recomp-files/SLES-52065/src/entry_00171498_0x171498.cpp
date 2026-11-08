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

// Function: entry_00171498
// Address: 0x171498 - 0x1714a0
void entry_00171498_0x171498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171498_0x171498");
#endif

    ctx->pc = 0x171498u;

    // 0x171498: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x171498u;
    {
        const bool branch_taken_0x171498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171498u;
        // 0x17149c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171498) {
            ctx->pc = 0x1714A4u;
            return;
        }
    }
    ctx->pc = 0x1714A0u;
}
