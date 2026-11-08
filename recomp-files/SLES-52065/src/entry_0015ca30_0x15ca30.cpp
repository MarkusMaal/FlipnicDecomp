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

// Function: entry_0015ca30
// Address: 0x15ca30 - 0x15ca3c
void entry_0015ca30_0x15ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ca30_0x15ca30");
#endif

    ctx->pc = 0x15ca30u;

    // 0x15ca30: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x15ca30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x15ca34: 0x601fff2  bgez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x15CA34u;
    {
        const bool branch_taken_0x15ca34 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x15CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA34u;
        // 0x15ca38: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca34) {
            ctx->pc = 0x15CA00u;
            return;
        }
    }
    ctx->pc = 0x15CA3Cu;
}
