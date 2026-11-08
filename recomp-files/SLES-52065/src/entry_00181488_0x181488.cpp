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

// Function: entry_00181488
// Address: 0x181488 - 0x1814a0
void entry_00181488_0x181488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181488_0x181488");
#endif

    ctx->pc = 0x181488u;

    // 0x181488: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x181488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x18148c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x18148cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x181490: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181490u;
    {
        const bool branch_taken_0x181490 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x181494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181490u;
        // 0x181494: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181490) {
            ctx->pc = 0x1814A0u;
            return;
        }
    }
    ctx->pc = 0x181498u;
    // 0x181498: 0x1000021b  b           . + 4 + (0x21B << 2)
    ctx->pc = 0x181498u;
    {
        const bool branch_taken_0x181498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181498u;
        // 0x18149c: 0xaf83865c  sw          $v1, -0x79A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181498) {
            ctx->pc = 0x181D08u;
            return;
        }
    }
    ctx->pc = 0x1814A0u;
}
