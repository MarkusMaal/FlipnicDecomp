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

// Function: entry_001196b4
// Address: 0x1196b4 - 0x1196d4
void entry_001196b4_0x1196b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001196b4_0x1196b4");
#endif

    ctx->pc = 0x1196b4u;

    // 0x1196b4: 0x0  nop
    ctx->pc = 0x1196b4u;
    // NOP
    // 0x1196b8: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1196b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1196bc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1196bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1196c0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1196c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1196c4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1196c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1196c8: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1196C8u;
    {
        const bool branch_taken_0x1196c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1196CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196C8u;
        // 0x1196cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196c8) {
            ctx->pc = 0x11968Cu;
            return;
        }
    }
    ctx->pc = 0x1196D0u;
    // 0x1196d0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1196d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1196d4u;
}
