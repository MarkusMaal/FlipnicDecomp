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

// Function: entry_0017066c
// Address: 0x17066c - 0x170694
void entry_0017066c_0x17066c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017066c_0x17066c");
#endif

    ctx->pc = 0x17066cu;

    // 0x17066c: 0x8c830234  lw          $v1, 0x234($a0)
    ctx->pc = 0x17066cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x170670: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x170670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x170674: 0xac830234  sw          $v1, 0x234($a0)
    ctx->pc = 0x170674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 564), GPR_U32(ctx, 3));
    // 0x170678: 0x8c830238  lw          $v1, 0x238($a0)
    ctx->pc = 0x170678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 568)));
    // 0x17067c: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17067Cu;
    {
        const bool branch_taken_0x17067c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x17067c) {
            ctx->pc = 0x170694u;
            return;
        }
    }
    ctx->pc = 0x170684u;
    // 0x170684: 0x18a00006  blez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x170684u;
    {
        const bool branch_taken_0x170684 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x170684) {
            ctx->pc = 0x1706A0u;
            return;
        }
    }
    ctx->pc = 0x17068Cu;
    // 0x17068c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17068Cu;
    {
        const bool branch_taken_0x17068c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17068Cu;
        // 0x170690: 0xac800238  sw          $zero, 0x238($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17068c) {
            ctx->pc = 0x1706A0u;
            return;
        }
    }
    ctx->pc = 0x170694u;
}
