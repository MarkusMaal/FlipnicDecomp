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

// Function: entry_001c4efc
// Address: 0x1c4efc - 0x1c4f0c
void entry_001c4efc_0x1c4efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4efc_0x1c4efc");
#endif

    ctx->pc = 0x1c4efcu;

    // 0x1c4efc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4EFCu;
    {
        const bool branch_taken_0x1c4efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4efc) {
            ctx->pc = 0x1C4F0Cu;
            return;
        }
    }
    ctx->pc = 0x1C4F04u;
    // 0x1c4f04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4F04u;
    {
        const bool branch_taken_0x1c4f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F04u;
        // 0x1c4f08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f04) {
            ctx->pc = 0x1C4F20u;
            return;
        }
    }
    ctx->pc = 0x1C4F0Cu;
}
