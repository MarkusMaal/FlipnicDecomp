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

// Function: entry_00108f78
// Address: 0x108f78 - 0x108f98
void entry_00108f78_0x108f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108f78_0x108f78");
#endif

    ctx->pc = 0x108f78u;

    // 0x108f78: 0x845201ec  lh          $s2, 0x1EC($v0)
    ctx->pc = 0x108f78u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 492)));
    // 0x108f7c: 0x64000e9  bltz        $s2, . + 4 + (0xE9 << 2)
    ctx->pc = 0x108F7Cu;
    {
        const bool branch_taken_0x108f7c = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x108f7c) {
            ctx->pc = 0x109324u;
            return;
        }
    }
    ctx->pc = 0x108F84u;
    // 0x108f84: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x108f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x108f88: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108F88u;
    {
        const bool branch_taken_0x108f88 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x108F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F88u;
        // 0x108f8c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f88) {
            ctx->pc = 0x108F98u;
            return;
        }
    }
    ctx->pc = 0x108F90u;
    // 0x108f90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x108F90u;
    {
        const bool branch_taken_0x108f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F90u;
        // 0x108f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f90) {
            ctx->pc = 0x108FB0u;
            return;
        }
    }
    ctx->pc = 0x108F98u;
}
