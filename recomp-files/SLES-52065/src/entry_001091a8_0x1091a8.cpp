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

// Function: entry_001091a8
// Address: 0x1091a8 - 0x1091c4
void entry_001091a8_0x1091a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001091a8_0x1091a8");
#endif

    ctx->pc = 0x1091a8u;

    // 0x1091a8: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x1091a8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1091ac: 0x7c460050  sq          $a2, 0x50($v0)
    ctx->pc = 0x1091acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), GPR_VEC(ctx, 6));
    // 0x1091b0: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x1091b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x1091b4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1091B4u;
    {
        const bool branch_taken_0x1091b4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1091b4) {
            ctx->pc = 0x1091C4u;
            return;
        }
    }
    ctx->pc = 0x1091BCu;
    // 0x1091bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1091BCu;
    {
        const bool branch_taken_0x1091bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1091C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091BCu;
        // 0x1091c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091bc) {
            ctx->pc = 0x1091E0u;
            return;
        }
    }
    ctx->pc = 0x1091C4u;
}
