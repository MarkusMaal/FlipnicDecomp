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

// Function: entry_001cbaa8
// Address: 0x1cbaa8 - 0x1cbab0
void entry_001cbaa8_0x1cbaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbaa8_0x1cbaa8");
#endif

    ctx->pc = 0x1cbaa8u;

    // 0x1cbaa8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CBAA8u;
    {
        const bool branch_taken_0x1cbaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAA8u;
        // 0x1cbaac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbaa8) {
            ctx->pc = 0x1CBADCu;
            return;
        }
    }
    ctx->pc = 0x1CBAB0u;
}
