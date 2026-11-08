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

// Function: entry_0019202c
// Address: 0x19202c - 0x192040
void entry_0019202c_0x19202c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019202c_0x19202c");
#endif

    ctx->pc = 0x19202cu;

    // 0x19202c: 0x0  nop
    ctx->pc = 0x19202cu;
    // NOP
    // 0x192030: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192030u;
    {
        const bool branch_taken_0x192030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192030) {
            ctx->pc = 0x192040u;
            return;
        }
    }
    ctx->pc = 0x192038u;
    // 0x192038: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x192038u;
    {
        const bool branch_taken_0x192038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192038u;
        // 0x19203c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192038) {
            ctx->pc = 0x192054u;
            return;
        }
    }
    ctx->pc = 0x192040u;
}
