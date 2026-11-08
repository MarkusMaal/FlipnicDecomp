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

// Function: caseD_17
// Address: 0x1c2900 - 0x1c292c
void caseD_17_0x1c2900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_17_0x1c2900");
#endif

    ctx->pc = 0x1c2900u;

    // 0x1c2900: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c2900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c2904: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2908: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2908u;
    {
        const bool branch_taken_0x1c2908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c2908) {
            ctx->pc = 0x1C2930u;
            return;
        }
    }
    ctx->pc = 0x1C2910u;
    // 0x1c2910: 0x8e230238  lw          $v1, 0x238($s1)
    ctx->pc = 0x1c2910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x1c2914: 0x240235e0  addiu       $v0, $zero, 0x35E0
    ctx->pc = 0x1c2914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13792));
    // 0x1c2918: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2918u;
    {
        const bool branch_taken_0x1c2918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2918u;
        // 0x1c291c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2918) {
            ctx->pc = 0x1C292Cu;
            return;
        }
    }
    ctx->pc = 0x1C2920u;
    // 0x1c2920: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1c2920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c2924: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2924u;
    {
        const bool branch_taken_0x1c2924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2924u;
        // 0x1c2928: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2924) {
            ctx->pc = 0x1C2930u;
            return;
        }
    }
    ctx->pc = 0x1C292Cu;
}
