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

// Function: entry_001658d8
// Address: 0x1658d8 - 0x1658f4
void entry_001658d8_0x1658d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001658d8_0x1658d8");
#endif

    ctx->pc = 0x1658d8u;

    // 0x1658d8: 0x86220226  lh          $v0, 0x226($s1)
    ctx->pc = 0x1658d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 550)));
    // 0x1658dc: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1658DCu;
    {
        const bool branch_taken_0x1658dc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1658E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1658DCu;
        // 0x1658e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1658dc) {
            ctx->pc = 0x1658F4u;
            return;
        }
    }
    ctx->pc = 0x1658E4u;
    // 0x1658e4: 0x86220222  lh          $v0, 0x222($s1)
    ctx->pc = 0x1658e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
    // 0x1658e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1658E8u;
    {
        const bool branch_taken_0x1658e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1658e8) {
            ctx->pc = 0x1658FCu;
            return;
        }
    }
    ctx->pc = 0x1658F0u;
    // 0x1658f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1658f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1658f4u;
}
