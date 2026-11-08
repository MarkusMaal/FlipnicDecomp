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

// Function: entry_0011feb4
// Address: 0x11feb4 - 0x11fed4
void entry_0011feb4_0x11feb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011feb4_0x11feb4");
#endif

    ctx->pc = 0x11feb4u;

    // 0x11feb4: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FEB4u;
    {
        const bool branch_taken_0x11feb4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEB4u;
        // 0x11feb8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11feb4) {
            ctx->pc = 0x11FED8u;
            return;
        }
    }
    ctx->pc = 0x11FEBCu;
    // 0x11febc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x11febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11fec0: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FEC0u;
    {
        const bool branch_taken_0x11fec0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fec0) {
            ctx->pc = 0x11FED4u;
            return;
        }
    }
    ctx->pc = 0x11FEC8u;
    // 0x11fec8: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11fecc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x11feccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x11fed0: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11fed4u;
}
