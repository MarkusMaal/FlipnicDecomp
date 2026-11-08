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

// Function: entry_0011fefc
// Address: 0x11fefc - 0x11ff1c
void entry_0011fefc_0x11fefc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fefc_0x11fefc");
#endif

    ctx->pc = 0x11fefcu;

    // 0x11fefc: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FEFCu;
    {
        const bool branch_taken_0x11fefc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEFCu;
        // 0x11ff00: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fefc) {
            ctx->pc = 0x11FF20u;
            return;
        }
    }
    ctx->pc = 0x11FF04u;
    // 0x11ff04: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11ff08: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FF08u;
    {
        const bool branch_taken_0x11ff08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ff08) {
            ctx->pc = 0x11FF1Cu;
            return;
        }
    }
    ctx->pc = 0x11FF10u;
    // 0x11ff10: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11ff14: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11ff18: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11ff1cu;
}
