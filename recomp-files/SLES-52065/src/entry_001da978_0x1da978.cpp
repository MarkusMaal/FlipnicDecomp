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

// Function: entry_001da978
// Address: 0x1da978 - 0x1da98c
void entry_001da978_0x1da978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da978_0x1da978");
#endif

    ctx->pc = 0x1da978u;

    // 0x1da978: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1da978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1da97c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1da97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1da980: 0x8c447320  lw          $a0, 0x7320($v0)
    ctx->pc = 0x1da980u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387320u));
    // 0x1da984: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DA984u;
    {
        const bool branch_taken_0x1da984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da984) {
            ctx->pc = 0x1DA988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA984u;
            // 0x1da988: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA98Cu;
            return;
        }
    }
    ctx->pc = 0x1DA98Cu;
}
