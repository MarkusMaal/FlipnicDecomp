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

// Function: entry_002058f0
// Address: 0x2058f0 - 0x205918
void entry_002058f0_0x2058f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002058f0_0x2058f0");
#endif

    ctx->pc = 0x2058f0u;

    // 0x2058f0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2058f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2058f4: 0x2403015c  addiu       $v1, $zero, 0x15C
    ctx->pc = 0x2058f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x2058f8: 0x2e82015d  sltiu       $v0, $s4, 0x15D
    ctx->pc = 0x2058f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
    // 0x2058fc: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x2058fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x205900: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x205900u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    // 0x205904: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x205904u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x205908: 0x12800052  beqz        $s4, . + 4 + (0x52 << 2)
    ctx->pc = 0x205908u;
    {
        const bool branch_taken_0x205908 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x20590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205908u;
        // 0x20590c: 0x367302c0  ori         $s3, $s3, 0x2C0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)704);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205908) {
            ctx->pc = 0x205A54u;
            return;
        }
    }
    ctx->pc = 0x205910u;
    // 0x205910: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x205910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x205914: 0x0  nop
    ctx->pc = 0x205914u;
    // NOP
    ctx->pc = 0x205918u;
}
