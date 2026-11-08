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

// Function: entry_0011ff44
// Address: 0x11ff44 - 0x11ff64
void entry_0011ff44_0x11ff44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ff44_0x11ff44");
#endif

    ctx->pc = 0x11ff44u;

    // 0x11ff44: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FF44u;
    {
        const bool branch_taken_0x11ff44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF44u;
        // 0x11ff48: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff44) {
            ctx->pc = 0x11FF68u;
            return;
        }
    }
    ctx->pc = 0x11FF4Cu;
    // 0x11ff4c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x11ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11ff50: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FF50u;
    {
        const bool branch_taken_0x11ff50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ff50) {
            ctx->pc = 0x11FF64u;
            return;
        }
    }
    ctx->pc = 0x11FF58u;
    // 0x11ff58: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11ff5c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11ff60: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11ff60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11ff64u;
}
