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

// Function: entry_001200a8
// Address: 0x1200a8 - 0x1200c8
void entry_001200a8_0x1200a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001200a8_0x1200a8");
#endif

    ctx->pc = 0x1200a8u;

    // 0x1200a8: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1200A8u;
    {
        const bool branch_taken_0x1200a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1200ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200A8u;
        // 0x1200ac: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200a8) {
            ctx->pc = 0x1200CCu;
            return;
        }
    }
    ctx->pc = 0x1200B0u;
    // 0x1200b0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1200b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1200b4: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1200B4u;
    {
        const bool branch_taken_0x1200b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1200b4) {
            ctx->pc = 0x1200C8u;
            return;
        }
    }
    ctx->pc = 0x1200BCu;
    // 0x1200bc: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x1200bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1200c0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1200c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1200c4: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x1200c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x1200c8u;
}
