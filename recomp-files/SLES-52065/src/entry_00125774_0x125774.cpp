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

// Function: entry_00125774
// Address: 0x125774 - 0x125798
void entry_00125774_0x125774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125774_0x125774");
#endif

    ctx->pc = 0x125774u;

    // 0x125774: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x125774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x125778: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x125778u;
    {
        const bool branch_taken_0x125778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125778) {
            ctx->pc = 0x12588Cu;
            return;
        }
    }
    ctx->pc = 0x125780u;
    // 0x125780: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x125780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x125784: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x125784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x125788: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x125788u;
    {
        const bool branch_taken_0x125788 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125788u;
        // 0x12578c: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125788) {
            ctx->pc = 0x125798u;
            return;
        }
    }
    ctx->pc = 0x125790u;
    // 0x125790: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x125790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x125794: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x125794u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    ctx->pc = 0x125798u;
}
