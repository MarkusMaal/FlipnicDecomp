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

// Function: entry_0016b4b0
// Address: 0x16b4b0 - 0x16b4c0
void entry_0016b4b0_0x16b4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b4b0_0x16b4b0");
#endif

    ctx->pc = 0x16b4b0u;

    // 0x16b4b0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B4B0u;
    {
        const bool branch_taken_0x16b4b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4B0u;
        // 0x16b4b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4b0) {
            ctx->pc = 0x16B4C0u;
            return;
        }
    }
    ctx->pc = 0x16B4B8u;
    // 0x16b4b8: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x16B4B8u;
    {
        const bool branch_taken_0x16b4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4B8u;
        // 0x16b4bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4b8) {
            ctx->pc = 0x16B830u;
            return;
        }
    }
    ctx->pc = 0x16B4C0u;
}
