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

// Function: entry_00203e78
// Address: 0x203e78 - 0x203e88
void entry_00203e78_0x203e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203e78_0x203e78");
#endif

    ctx->pc = 0x203e78u;

    // 0x203e78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203E78u;
    {
        const bool branch_taken_0x203e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E78u;
        // 0x203e7c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e78) {
            ctx->pc = 0x203E88u;
            return;
        }
    }
    ctx->pc = 0x203E80u;
    // 0x203e80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x203E80u;
    {
        const bool branch_taken_0x203e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E80u;
        // 0x203e84: 0x8690fff8  lh          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e80) {
            ctx->pc = 0x203E8Cu;
            return;
        }
    }
    ctx->pc = 0x203E88u;
}
