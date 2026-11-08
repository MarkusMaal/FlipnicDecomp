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

// Function: entry_001e59f8
// Address: 0x1e59f8 - 0x1e5a08
void entry_001e59f8_0x1e59f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e59f8_0x1e59f8");
#endif

    ctx->pc = 0x1e59f8u;

    // 0x1e59f8: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E59F8u;
    {
        const bool branch_taken_0x1e59f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E59FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59F8u;
        // 0x1e59fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e59f8) {
            ctx->pc = 0x1E5A08u;
            return;
        }
    }
    ctx->pc = 0x1E5A00u;
    // 0x1e5a00: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1E5A00u;
    {
        const bool branch_taken_0x1e5a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A00u;
        // 0x1e5a04: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a00) {
            ctx->pc = 0x1E5B54u;
            return;
        }
    }
    ctx->pc = 0x1E5A08u;
}
