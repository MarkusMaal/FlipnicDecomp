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

// Function: entry_00152080
// Address: 0x152080 - 0x152090
void entry_00152080_0x152080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152080_0x152080");
#endif

    ctx->pc = 0x152080u;

    // 0x152080: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152080u;
    {
        const bool branch_taken_0x152080 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x152080) {
            ctx->pc = 0x152090u;
            return;
        }
    }
    ctx->pc = 0x152088u;
    // 0x152088: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x152088u;
    {
        const bool branch_taken_0x152088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152088u;
        // 0x15208c: 0x938285f0  lbu         $v0, -0x7A10($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152088) {
            ctx->pc = 0x15209Cu;
            return;
        }
    }
    ctx->pc = 0x152090u;
}
