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

// Function: entry_0011fe90
// Address: 0x11fe90 - 0x11feb0
void entry_0011fe90_0x11fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fe90_0x11fe90");
#endif

    ctx->pc = 0x11fe90u;

    // 0x11fe90: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FE90u;
    {
        const bool branch_taken_0x11fe90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE90u;
        // 0x11fe94: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe90) {
            ctx->pc = 0x11FEB4u;
            return;
        }
    }
    ctx->pc = 0x11FE98u;
    // 0x11fe98: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11fe9c: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FE9Cu;
    {
        const bool branch_taken_0x11fe9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fe9c) {
            ctx->pc = 0x11FEB0u;
            return;
        }
    }
    ctx->pc = 0x11FEA4u;
    // 0x11fea4: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11fea8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11feac: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11feacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11feb0u;
}
