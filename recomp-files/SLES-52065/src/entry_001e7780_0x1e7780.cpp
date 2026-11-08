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

// Function: entry_001e7780
// Address: 0x1e7780 - 0x1e7790
void entry_001e7780_0x1e7780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7780_0x1e7780");
#endif

    ctx->pc = 0x1e7780u;

    // 0x1e7780: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7780u;
    {
        const bool branch_taken_0x1e7780 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7780u;
        // 0x1e7784: 0x380c3  sra         $s0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7780) {
            ctx->pc = 0x1E7790u;
            return;
        }
    }
    ctx->pc = 0x1E7788u;
    // 0x1e7788: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x1e7788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1e778c: 0x380c3  sra         $s0, $v1, 3
    ctx->pc = 0x1e778cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
    ctx->pc = 0x1e7790u;
}
