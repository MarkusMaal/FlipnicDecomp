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

// Function: entry_0011fd44
// Address: 0x11fd44 - 0x11fd64
void entry_0011fd44_0x11fd44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fd44_0x11fd44");
#endif

    ctx->pc = 0x11fd44u;

    // 0x11fd44: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FD44u;
    {
        const bool branch_taken_0x11fd44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD44u;
        // 0x11fd48: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd44) {
            ctx->pc = 0x11FD68u;
            return;
        }
    }
    ctx->pc = 0x11FD4Cu;
    // 0x11fd4c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x11fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11fd50: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FD50u;
    {
        const bool branch_taken_0x11fd50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fd50) {
            ctx->pc = 0x11FD64u;
            return;
        }
    }
    ctx->pc = 0x11FD58u;
    // 0x11fd58: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11fd5c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11fd60: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fd60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11fd64u;
}
