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

// Function: entry_0011ff68
// Address: 0x11ff68 - 0x11ff88
void entry_0011ff68_0x11ff68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ff68_0x11ff68");
#endif

    ctx->pc = 0x11ff68u;

    // 0x11ff68: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FF68u;
    {
        const bool branch_taken_0x11ff68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF68u;
        // 0x11ff6c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff68) {
            ctx->pc = 0x11FF8Cu;
            return;
        }
    }
    ctx->pc = 0x11FF70u;
    // 0x11ff70: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11ff74: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FF74u;
    {
        const bool branch_taken_0x11ff74 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ff74) {
            ctx->pc = 0x11FF88u;
            return;
        }
    }
    ctx->pc = 0x11FF7Cu;
    // 0x11ff7c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11ff80: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11ff84: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11ff84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11ff88u;
}
