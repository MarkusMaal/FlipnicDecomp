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

// Function: entry_0014e39c
// Address: 0x14e39c - 0x14e3bc
void entry_0014e39c_0x14e39c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e39c_0x14e39c");
#endif

    ctx->pc = 0x14e39cu;

    // 0x14e39c: 0x0  nop
    ctx->pc = 0x14e39cu;
    // NOP
    // 0x14e3a0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x14e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14e3a4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14e3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14e3a8: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x14e3a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x14e3ac: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x14e3acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14e3b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14e3b4: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14E3B4u;
    {
        const bool branch_taken_0x14e3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3B4u;
        // 0x14e3b8: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e3b4) {
            ctx->pc = 0x14E34Cu;
            return;
        }
    }
    ctx->pc = 0x14E3BCu;
}
