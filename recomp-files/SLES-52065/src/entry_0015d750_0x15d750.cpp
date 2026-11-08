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

// Function: entry_0015d750
// Address: 0x15d750 - 0x15d76c
void entry_0015d750_0x15d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d750_0x15d750");
#endif

    ctx->pc = 0x15d750u;

    // 0x15d750: 0x8e033dd8  lw          $v1, 0x3DD8($s0)
    ctx->pc = 0x15d750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15832)));
    // 0x15d754: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15d754u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15d758: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x15D758u;
    {
        const bool branch_taken_0x15d758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D758u;
        // 0x15d75c: 0x2121821  addu        $v1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d758) {
            ctx->pc = 0x15D728u;
            return;
        }
    }
    ctx->pc = 0x15D760u;
    // 0x15d760: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15d760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d764: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15D764u;
    {
        const bool branch_taken_0x15d764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D764u;
        // 0x15d768: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d764) {
            ctx->pc = 0x15D7A0u;
            return;
        }
    }
    ctx->pc = 0x15D76Cu;
}
