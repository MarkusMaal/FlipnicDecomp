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

// Function: entry_0013b668
// Address: 0x13b668 - 0x13b680
void entry_0013b668_0x13b668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b668_0x13b668");
#endif

    ctx->pc = 0x13b668u;

    // 0x13b668: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x13b668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13b66c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13b66cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13b670: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x13b670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x13b674: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13b674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13b678: 0x1660ffed  bnez        $s3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x13B678u;
    {
        const bool branch_taken_0x13b678 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B678u;
        // 0x13b67c: 0xae250000  sw          $a1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b678) {
            ctx->pc = 0x13B630u;
            return;
        }
    }
    ctx->pc = 0x13B680u;
}
