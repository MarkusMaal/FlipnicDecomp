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

// Function: entry_0012eac0
// Address: 0x12eac0 - 0x12ead8
void entry_0012eac0_0x12eac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012eac0_0x12eac0");
#endif

    ctx->pc = 0x12eac0u;

    // 0x12eac0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12eac4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12eac4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12eac8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x12eac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x12eacc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ead0: 0x1660ffe9  bnez        $s3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x12EAD0u;
    {
        const bool branch_taken_0x12ead0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EAD0u;
        // 0x12ead4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ead0) {
            ctx->pc = 0x12EA78u;
            return;
        }
    }
    ctx->pc = 0x12EAD8u;
}
