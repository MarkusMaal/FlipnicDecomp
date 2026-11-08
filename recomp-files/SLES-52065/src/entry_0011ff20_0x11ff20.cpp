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

// Function: entry_0011ff20
// Address: 0x11ff20 - 0x11ff40
void entry_0011ff20_0x11ff20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ff20_0x11ff20");
#endif

    ctx->pc = 0x11ff20u;

    // 0x11ff20: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FF20u;
    {
        const bool branch_taken_0x11ff20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF20u;
        // 0x11ff24: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff20) {
            ctx->pc = 0x11FF44u;
            return;
        }
    }
    ctx->pc = 0x11FF28u;
    // 0x11ff28: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11ff2c: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FF2Cu;
    {
        const bool branch_taken_0x11ff2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ff2c) {
            ctx->pc = 0x11FF40u;
            return;
        }
    }
    ctx->pc = 0x11FF34u;
    // 0x11ff34: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11ff38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11ff3c: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11ff40u;
}
