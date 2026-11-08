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

// Function: entry_0011fd8c
// Address: 0x11fd8c - 0x11fdac
void entry_0011fd8c_0x11fd8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fd8c_0x11fd8c");
#endif

    ctx->pc = 0x11fd8cu;

    // 0x11fd8c: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FD8Cu;
    {
        const bool branch_taken_0x11fd8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD8Cu;
        // 0x11fd90: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd8c) {
            ctx->pc = 0x11FDB0u;
            return;
        }
    }
    ctx->pc = 0x11FD94u;
    // 0x11fd94: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11fd98: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FD98u;
    {
        const bool branch_taken_0x11fd98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fd98) {
            ctx->pc = 0x11FDACu;
            return;
        }
    }
    ctx->pc = 0x11FDA0u;
    // 0x11fda0: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11fda4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11fda8: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11fdacu;
}
