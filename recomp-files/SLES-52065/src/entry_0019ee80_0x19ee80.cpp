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

// Function: entry_0019ee80
// Address: 0x19ee80 - 0x19ee9c
void entry_0019ee80_0x19ee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ee80_0x19ee80");
#endif

    ctx->pc = 0x19ee80u;

    // 0x19ee80: 0x8f878714  lw          $a3, -0x78EC($gp)
    ctx->pc = 0x19ee80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19ee84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19ee84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee88: 0x24e510c8  addiu       $a1, $a3, 0x10C8
    ctx->pc = 0x19ee88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4296));
    // 0x19ee8c: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x19ee8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19ee90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19EE90u;
    {
        const bool branch_taken_0x19ee90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE90u;
        // 0x19ee94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee90) {
            ctx->pc = 0x19EEB4u;
            return;
        }
    }
    ctx->pc = 0x19EE98u;
    // 0x19ee98: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x19ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    ctx->pc = 0x19ee9cu;
}
