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

// Function: entry_0011ffd0
// Address: 0x11ffd0 - 0x11fff0
void entry_0011ffd0_0x11ffd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ffd0_0x11ffd0");
#endif

    ctx->pc = 0x11ffd0u;

    // 0x11ffd0: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FFD0u;
    {
        const bool branch_taken_0x11ffd0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFD0u;
        // 0x11ffd4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ffd0) {
            ctx->pc = 0x11FFF4u;
            return;
        }
    }
    ctx->pc = 0x11FFD8u;
    // 0x11ffd8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x11ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11ffdc: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FFDCu;
    {
        const bool branch_taken_0x11ffdc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ffdc) {
            ctx->pc = 0x11FFF0u;
            return;
        }
    }
    ctx->pc = 0x11FFE4u;
    // 0x11ffe4: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11ffe8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11ffec: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11fff0u;
}
