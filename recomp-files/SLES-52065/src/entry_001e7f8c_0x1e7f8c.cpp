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

// Function: entry_001e7f8c
// Address: 0x1e7f8c - 0x1e7fa8
void entry_001e7f8c_0x1e7f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7f8c_0x1e7f8c");
#endif

    ctx->pc = 0x1e7f8cu;

    // 0x1e7f8c: 0x0  nop
    ctx->pc = 0x1e7f8cu;
    // NOP
    // 0x1e7f90: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x1e7f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e7f94: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e7f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e7f98: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x1e7f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1e7f9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e7f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e7fa0: 0x1620fff1  bnez        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1E7FA0u;
    {
        const bool branch_taken_0x1e7fa0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FA0u;
        // 0x1e7fa4: 0xaea60000  sw          $a2, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7fa0) {
            ctx->pc = 0x1E7F68u;
            return;
        }
    }
    ctx->pc = 0x1E7FA8u;
}
