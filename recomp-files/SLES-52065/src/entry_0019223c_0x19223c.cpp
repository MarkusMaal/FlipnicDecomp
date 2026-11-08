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

// Function: entry_0019223c
// Address: 0x19223c - 0x192250
void entry_0019223c_0x19223c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019223c_0x19223c");
#endif

    ctx->pc = 0x19223cu;

    // 0x19223c: 0x0  nop
    ctx->pc = 0x19223cu;
    // NOP
    // 0x192240: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192240u;
    {
        const bool branch_taken_0x192240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192240) {
            ctx->pc = 0x192250u;
            return;
        }
    }
    ctx->pc = 0x192248u;
    // 0x192248: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x192248u;
    {
        const bool branch_taken_0x192248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192248u;
        // 0x19224c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192248) {
            ctx->pc = 0x192254u;
            return;
        }
    }
    ctx->pc = 0x192250u;
}
