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

// Function: entry_0011fdd4
// Address: 0x11fdd4 - 0x11fdf4
void entry_0011fdd4_0x11fdd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fdd4_0x11fdd4");
#endif

    ctx->pc = 0x11fdd4u;

    // 0x11fdd4: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FDD4u;
    {
        const bool branch_taken_0x11fdd4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDD4u;
        // 0x11fdd8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fdd4) {
            ctx->pc = 0x11FDF8u;
            return;
        }
    }
    ctx->pc = 0x11FDDCu;
    // 0x11fddc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11fde0: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FDE0u;
    {
        const bool branch_taken_0x11fde0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fde0) {
            ctx->pc = 0x11FDF4u;
            return;
        }
    }
    ctx->pc = 0x11FDE8u;
    // 0x11fde8: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11fdec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11fdf0: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11fdf4u;
}
