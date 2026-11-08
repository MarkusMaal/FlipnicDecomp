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

// Function: entry_001690a8
// Address: 0x1690a8 - 0x1690b0
void entry_001690a8_0x1690a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001690a8_0x1690a8");
#endif

    ctx->pc = 0x1690a8u;

    // 0x1690a8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1690A8u;
    {
        const bool branch_taken_0x1690a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1690ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690A8u;
        // 0x1690ac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690a8) {
            ctx->pc = 0x1691A0u;
            return;
        }
    }
    ctx->pc = 0x1690B0u;
}
