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

// Function: entry_001436cc
// Address: 0x1436cc - 0x1436ec
void entry_001436cc_0x1436cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001436cc_0x1436cc");
#endif

    ctx->pc = 0x1436ccu;

    // 0x1436cc: 0x0  nop
    ctx->pc = 0x1436ccu;
    // NOP
    // 0x1436d0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x1436d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1436d4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1436d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1436d8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1436d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1436dc: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x1436dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1436e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1436e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1436e4: 0x1420ffef  bnez        $at, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1436E4u;
    {
        const bool branch_taken_0x1436e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1436E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436E4u;
        // 0x1436e8: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1436e4) {
            ctx->pc = 0x1436A4u;
            return;
        }
    }
    ctx->pc = 0x1436ECu;
}
