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

// Function: entry_001097a8
// Address: 0x1097a8 - 0x1097c4
void entry_001097a8_0x1097a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001097a8_0x1097a8");
#endif

    ctx->pc = 0x1097a8u;

    // 0x1097a8: 0x11020043  beq         $t0, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1097A8u;
    {
        const bool branch_taken_0x1097a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1097ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097A8u;
        // 0x1097ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097a8) {
            ctx->pc = 0x1098B8u;
            return;
        }
    }
    ctx->pc = 0x1097B0u;
    // 0x1097b0: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x1097b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x1097b4: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1097B4u;
    {
        const bool branch_taken_0x1097b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1097B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097B4u;
        // 0x1097b8: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097b4) {
            ctx->pc = 0x1097C4u;
            return;
        }
    }
    ctx->pc = 0x1097BCu;
    // 0x1097bc: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1097BCu;
    {
        const bool branch_taken_0x1097bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1097C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097BCu;
        // 0x1097c0: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097bc) {
            ctx->pc = 0x10994Cu;
            return;
        }
    }
    ctx->pc = 0x1097C4u;
}
