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

// Function: entry_00203c30
// Address: 0x203c30 - 0x203c5c
void entry_00203c30_0x203c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203c30_0x203c30");
#endif

    ctx->pc = 0x203c30u;

    // 0x203c30: 0x1a0004c9  blez        $s0, . + 4 + (0x4C9 << 2)
    ctx->pc = 0x203C30u;
    {
        const bool branch_taken_0x203c30 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x203C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C30u;
        // 0x203c34: 0x8fa601ec  lw          $a2, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c30) {
            ctx->pc = 0x204F58u;
            return;
        }
    }
    ctx->pc = 0x203C38u;
    // 0x203c38: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x203c38u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c3c: 0xafa0020c  sw          $zero, 0x20C($sp)
    ctx->pc = 0x203c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
    // 0x203c40: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x203c40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203c44: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x203c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x203c48: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x203c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
    // 0x203c4c: 0xafa601ec  sw          $a2, 0x1EC($sp)
    ctx->pc = 0x203c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
    // 0x203c50: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x203c50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x203c54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x203C54u;
    {
        const bool branch_taken_0x203c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C54u;
        // 0x203c58: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c54) {
            ctx->pc = 0x203C6Cu;
            return;
        }
    }
    ctx->pc = 0x203C5Cu;
}
