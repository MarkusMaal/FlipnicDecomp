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

// Function: entry_00136480
// Address: 0x136480 - 0x136498
void entry_00136480_0x136480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136480_0x136480");
#endif

    ctx->pc = 0x136480u;

    // 0x136480: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x136480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x136484: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x136484u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x136488: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x136488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13648c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13648cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x136490: 0x1660fff7  bnez        $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x136490u;
    {
        const bool branch_taken_0x136490 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x136494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136490u;
        // 0x136494: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136490) {
            ctx->pc = 0x136470u;
            return;
        }
    }
    ctx->pc = 0x136498u;
}
