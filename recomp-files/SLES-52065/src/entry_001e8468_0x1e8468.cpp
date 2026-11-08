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

// Function: entry_001e8468
// Address: 0x1e8468 - 0x1e8474
void entry_001e8468_0x1e8468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8468_0x1e8468");
#endif

    ctx->pc = 0x1e8468u;

    // 0x1e8468: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1E8468u;
    {
        const bool branch_taken_0x1e8468 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8468u;
        // 0x1e846c: 0x3c021fff  lui         $v0, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8468) {
            ctx->pc = 0x1E84A4u;
            return;
        }
    }
    ctx->pc = 0x1E8470u;
    // 0x1e8470: 0x3c010fff  lui         $at, 0xFFF
    ctx->pc = 0x1e8470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4095 << 16));
    ctx->pc = 0x1e8474u;
}
