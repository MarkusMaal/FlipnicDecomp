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

// Function: entry_0011ffa8
// Address: 0x11ffa8 - 0x11ffcc
void entry_0011ffa8_0x11ffa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ffa8_0x11ffa8");
#endif

    ctx->pc = 0x11ffa8u;

    // 0x11ffa8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11ffac: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FFACu;
    {
        const bool branch_taken_0x11ffac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFACu;
        // 0x11ffb0: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ffac) {
            ctx->pc = 0x11FFD0u;
            return;
        }
    }
    ctx->pc = 0x11FFB4u;
    // 0x11ffb4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11ffb8: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FFB8u;
    {
        const bool branch_taken_0x11ffb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ffb8) {
            ctx->pc = 0x11FFCCu;
            return;
        }
    }
    ctx->pc = 0x11FFC0u;
    // 0x11ffc0: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11ffc4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11ffc8: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11ffccu;
}
