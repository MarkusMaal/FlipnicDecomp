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

// Function: entry_001ed1f0
// Address: 0x1ed1f0 - 0x1ed210
void entry_001ed1f0_0x1ed1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed1f0_0x1ed1f0");
#endif

    ctx->pc = 0x1ed1f0u;

    // 0x1ed1f0: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x1ed1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x1ed1f4: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED1F4u;
    {
        const bool branch_taken_0x1ed1f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1F4u;
        // 0x1ed1f8: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1f4) {
            ctx->pc = 0x1ED210u;
            return;
        }
    }
    ctx->pc = 0x1ED1FCu;
    // 0x1ed1fc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1ed1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ed200: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x1ed200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
    // 0x1ed204: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x1ed204u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ed208: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1ED208u;
    {
        const bool branch_taken_0x1ed208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED208u;
        // 0x1ed20c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed208) {
            ctx->pc = 0x1ED238u;
            return;
        }
    }
    ctx->pc = 0x1ED210u;
}
