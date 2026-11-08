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

// Function: entry_00143498
// Address: 0x143498 - 0x1434a8
void entry_00143498_0x143498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143498_0x143498");
#endif

    ctx->pc = 0x143498u;

    // 0x143498: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x143498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14349c: 0x29030007  slti        $v1, $t0, 0x7
    ctx->pc = 0x14349cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1434a0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1434A0u;
    {
        const bool branch_taken_0x1434a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1434A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434A0u;
        // 0x1434a4: 0x883821  addu        $a3, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1434a0) {
            ctx->pc = 0x14347Cu;
            return;
        }
    }
    ctx->pc = 0x1434A8u;
}
