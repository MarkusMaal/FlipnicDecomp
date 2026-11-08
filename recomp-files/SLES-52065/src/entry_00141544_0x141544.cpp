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

// Function: entry_00141544
// Address: 0x141544 - 0x141560
void entry_00141544_0x141544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141544_0x141544");
#endif

    ctx->pc = 0x141544u;

label_141544:
    // 0x141544: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x141544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x141548: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x141548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x14154c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14154cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x141550: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x141550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x141554: 0x0  nop
    ctx->pc = 0x141554u;
    // NOP
    // 0x141558: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x141558u;
    {
        const bool branch_taken_0x141558 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x141558) {
            ctx->pc = 0x141544u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141544;
        }
    }
    ctx->pc = 0x141560u;
}
