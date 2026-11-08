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

// Function: entry_0011fff4
// Address: 0x11fff4 - 0x120014
void entry_0011fff4_0x11fff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fff4_0x11fff4");
#endif

    ctx->pc = 0x11fff4u;

    // 0x11fff4: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FFF4u;
    {
        const bool branch_taken_0x11fff4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFF4u;
        // 0x11fff8: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fff4) {
            ctx->pc = 0x120018u;
            return;
        }
    }
    ctx->pc = 0x11FFFCu;
    // 0x11fffc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x120000: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120000u;
    {
        const bool branch_taken_0x120000 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x120000) {
            ctx->pc = 0x120014u;
            return;
        }
    }
    ctx->pc = 0x120008u;
    // 0x120008: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x120008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x12000c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12000cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x120010: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x120010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x120014u;
}
