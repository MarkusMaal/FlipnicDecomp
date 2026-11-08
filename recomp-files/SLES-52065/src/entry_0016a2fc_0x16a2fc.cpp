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

// Function: entry_0016a2fc
// Address: 0x16a2fc - 0x16a30c
void entry_0016a2fc_0x16a2fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a2fc_0x16a2fc");
#endif

    ctx->pc = 0x16a2fcu;

    // 0x16a2fc: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A2FCu;
    {
        const bool branch_taken_0x16a2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x16a2fc) {
            ctx->pc = 0x16A30Cu;
            return;
        }
    }
    ctx->pc = 0x16A304u;
    // 0x16a304: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16A304u;
    {
        const bool branch_taken_0x16a304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A304u;
        // 0x16a308: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a304) {
            ctx->pc = 0x16A35Cu;
            return;
        }
    }
    ctx->pc = 0x16A30Cu;
}
