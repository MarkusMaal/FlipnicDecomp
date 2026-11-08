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

// Function: entry_00143784
// Address: 0x143784 - 0x1437a4
void entry_00143784_0x143784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143784_0x143784");
#endif

    ctx->pc = 0x143784u;

    // 0x143784: 0x0  nop
    ctx->pc = 0x143784u;
    // NOP
    // 0x143788: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x143788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14378c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x14378cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x143790: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x143790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x143794: 0xe3202b  sltu        $a0, $a3, $v1
    ctx->pc = 0x143794u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x143798: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x143798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14379c: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x14379Cu;
    {
        const bool branch_taken_0x14379c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1437A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14379Cu;
        // 0x1437a0: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14379c) {
            ctx->pc = 0x14375Cu;
            return;
        }
    }
    ctx->pc = 0x1437A4u;
}
