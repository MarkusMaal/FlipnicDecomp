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

// Function: entry_0014d554
// Address: 0x14d554 - 0x14d574
void entry_0014d554_0x14d554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d554_0x14d554");
#endif

    ctx->pc = 0x14d554u;

    // 0x14d554: 0x0  nop
    ctx->pc = 0x14d554u;
    // NOP
    // 0x14d558: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x14d558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14d55c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14d55cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14d560: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x14d560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x14d564: 0x216182b  sltu        $v1, $s0, $s6
    ctx->pc = 0x14d564u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x14d568: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14d568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14d56c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x14D56Cu;
    {
        const bool branch_taken_0x14d56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D56Cu;
        // 0x14d570: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d56c) {
            ctx->pc = 0x14D544u;
            return;
        }
    }
    ctx->pc = 0x14D574u;
}
