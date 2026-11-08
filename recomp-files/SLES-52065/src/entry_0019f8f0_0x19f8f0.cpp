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

// Function: entry_0019f8f0
// Address: 0x19f8f0 - 0x19f920
void entry_0019f8f0_0x19f8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f8f0_0x19f8f0");
#endif

    ctx->pc = 0x19f8f0u;

    // 0x19f8f0: 0x8f848714  lw          $a0, -0x78EC($gp)
    ctx->pc = 0x19f8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f8f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f8f8: 0x8c832830  lw          $v1, 0x2830($a0)
    ctx->pc = 0x19f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10288)));
    // 0x19f8fc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19F8FCu;
    {
        const bool branch_taken_0x19f8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f8fc) {
            ctx->pc = 0x19F940u;
            return;
        }
    }
    ctx->pc = 0x19F904u;
    // 0x19f904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f908: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F908u;
    {
        const bool branch_taken_0x19f908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f908) {
            ctx->pc = 0x19F930u;
            return;
        }
    }
    ctx->pc = 0x19F910u;
    // 0x19f910: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F910u;
    {
        const bool branch_taken_0x19f910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f910) {
            ctx->pc = 0x19F920u;
            return;
        }
    }
    ctx->pc = 0x19F918u;
    // 0x19f918: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19F918u;
    {
        const bool branch_taken_0x19f918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F918u;
        // 0x19f91c: 0x8e83068c  lw          $v1, 0x68C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f918) {
            ctx->pc = 0x19F950u;
            return;
        }
    }
    ctx->pc = 0x19F920u;
}
