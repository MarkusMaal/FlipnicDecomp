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

// Function: entry_001a4614
// Address: 0x1a4614 - 0x1a4648
void entry_001a4614_0x1a4614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4614_0x1a4614");
#endif

    ctx->pc = 0x1a4614u;

    // 0x1a4614: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a4614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a4618: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x1a4618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a461c: 0x8ca3097c  lw          $v1, 0x97C($a1)
    ctx->pc = 0x1a461cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2428)));
    // 0x1a4620: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1a4620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1a4624: 0x10820025  beq         $a0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A4624u;
    {
        const bool branch_taken_0x1a4624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4624u;
        // 0x1a4628: 0x24b4097c  addiu       $s4, $a1, 0x97C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 2428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4624) {
            ctx->pc = 0x1A46BCu;
            return;
        }
    }
    ctx->pc = 0x1A462Cu;
    // 0x1a462c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a462cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4630: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A4630u;
    {
        const bool branch_taken_0x1a4630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a4630) {
            ctx->pc = 0x1A4690u;
            return;
        }
    }
    ctx->pc = 0x1A4638u;
    // 0x1a4638: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4638u;
    {
        const bool branch_taken_0x1a4638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4638) {
            ctx->pc = 0x1A4648u;
            return;
        }
    }
    ctx->pc = 0x1A4640u;
    // 0x1a4640: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1A4640u;
    {
        const bool branch_taken_0x1a4640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4640) {
            ctx->pc = 0x1A4794u;
            return;
        }
    }
    ctx->pc = 0x1A4648u;
}
