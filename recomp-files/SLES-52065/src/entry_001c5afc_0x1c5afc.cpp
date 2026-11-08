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

// Function: entry_001c5afc
// Address: 0x1c5afc - 0x1c5b0c
void entry_001c5afc_0x1c5afc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5afc_0x1c5afc");
#endif

    ctx->pc = 0x1c5afcu;

    // 0x1c5afc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5AFCu;
    {
        const bool branch_taken_0x1c5afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5afc) {
            ctx->pc = 0x1C5B0Cu;
            return;
        }
    }
    ctx->pc = 0x1C5B04u;
    // 0x1c5b04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5B04u;
    {
        const bool branch_taken_0x1c5b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B04u;
        // 0x1c5b08: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b04) {
            ctx->pc = 0x1C5B14u;
            return;
        }
    }
    ctx->pc = 0x1C5B0Cu;
}
