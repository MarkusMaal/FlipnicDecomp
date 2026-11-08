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

// Function: entry_0013ee90
// Address: 0x13ee90 - 0x13eeb0
void entry_0013ee90_0x13ee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ee90_0x13ee90");
#endif

    ctx->pc = 0x13ee90u;

    // 0x13ee90: 0x8c850124  lw          $a1, 0x124($a0)
    ctx->pc = 0x13ee90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x13ee94: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EE94u;
    {
        const bool branch_taken_0x13ee94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE94u;
        // 0x13ee98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee94) {
            ctx->pc = 0x13EEB0u;
            return;
        }
    }
    ctx->pc = 0x13EE9Cu;
    // 0x13ee9c: 0x8c83017c  lw          $v1, 0x17C($a0)
    ctx->pc = 0x13ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x13eea0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13eea4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13EEA4u;
    {
        const bool branch_taken_0x13eea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13eea4) {
            ctx->pc = 0x13EEB8u;
            return;
        }
    }
    ctx->pc = 0x13EEACu;
    // 0x13eeac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13eeacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13eeb0u;
}
