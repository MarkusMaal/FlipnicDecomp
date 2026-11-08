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

// Function: entry_00188cac
// Address: 0x188cac - 0x188cb4
void entry_00188cac_0x188cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188cac_0x188cac");
#endif

    ctx->pc = 0x188cacu;

    // 0x188cac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x188CACu;
    {
        const bool branch_taken_0x188cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CACu;
        // 0x188cb0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188cac) {
            ctx->pc = 0x188CBCu;
            return;
        }
    }
    ctx->pc = 0x188CB4u;
}
