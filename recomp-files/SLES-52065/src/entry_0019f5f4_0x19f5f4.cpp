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

// Function: entry_0019f5f4
// Address: 0x19f5f4 - 0x19f610
void entry_0019f5f4_0x19f5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f5f4_0x19f5f4");
#endif

    ctx->pc = 0x19f5f4u;

    // 0x19f5f4: 0x8e820674  lw          $v0, 0x674($s4)
    ctx->pc = 0x19f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1652)));
    // 0x19f5f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F5F8u;
    {
        const bool branch_taken_0x19f5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5F8u;
        // 0x19f5fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5f8) {
            ctx->pc = 0x19F610u;
            return;
        }
    }
    ctx->pc = 0x19F600u;
    // 0x19f600: 0x8c420320  lw          $v0, 0x320($v0)
    ctx->pc = 0x19f600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x19f604: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F604u;
    {
        const bool branch_taken_0x19f604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f604) {
            ctx->pc = 0x19F610u;
            return;
        }
    }
    ctx->pc = 0x19F60Cu;
    // 0x19f60c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19f60cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f610u;
}
