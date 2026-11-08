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

// Function: entry_001b5ac4
// Address: 0x1b5ac4 - 0x1b5ad0
void entry_001b5ac4_0x1b5ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5ac4_0x1b5ac4");
#endif

    ctx->pc = 0x1b5ac4u;

    // 0x1b5ac4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b5ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b5ac8: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x1B5AC8u;
    {
        const bool branch_taken_0x1b5ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AC8u;
        // 0x1b5acc: 0xa020f258  sb          $zero, -0xDA8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294963800), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ac8) {
            ctx->pc = 0x1B5D40u;
            return;
        }
    }
    ctx->pc = 0x1B5AD0u;
}
