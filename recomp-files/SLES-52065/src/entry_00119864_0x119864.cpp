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

// Function: entry_00119864
// Address: 0x119864 - 0x119884
void entry_00119864_0x119864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119864_0x119864");
#endif

    ctx->pc = 0x119864u;

    // 0x119864: 0x0  nop
    ctx->pc = 0x119864u;
    // NOP
    // 0x119868: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x119868u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11986c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x11986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x119870: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x119870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119874: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x119874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119878: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x119878u;
    {
        const bool branch_taken_0x119878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119878u;
        // 0x11987c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119878) {
            ctx->pc = 0x11983Cu;
            return;
        }
    }
    ctx->pc = 0x119880u;
    // 0x119880: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x119880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x119884u;
}
