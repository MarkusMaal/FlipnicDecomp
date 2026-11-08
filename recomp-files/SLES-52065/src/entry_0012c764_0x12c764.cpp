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

// Function: entry_0012c764
// Address: 0x12c764 - 0x12c784
void entry_0012c764_0x12c764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c764_0x12c764");
#endif

    ctx->pc = 0x12c764u;

    // 0x12c764: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12C764u;
    {
        const bool branch_taken_0x12c764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x12c764) {
            ctx->pc = 0x12C784u;
            return;
        }
    }
    ctx->pc = 0x12C76Cu;
    // 0x12c76c: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x12c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x12c770: 0xa046006c  sb          $a2, 0x6C($v0)
    ctx->pc = 0x12c770u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 108), (uint8_t)GPR_U32(ctx, 6));
    // 0x12c774: 0x80e40067  lb          $a0, 0x67($a3)
    ctx->pc = 0x12c774u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 103)));
    // 0x12c778: 0x80e50068  lb          $a1, 0x68($a3)
    ctx->pc = 0x12c778u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 104)));
    // 0x12c77c: 0xc07d97a  jal         func_1F65E8
    ctx->pc = 0x12C77Cu;
    SET_GPR_U32(ctx, 31, 0x12C784u);
    ctx->pc = 0x12C780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C77Cu;
    // 0x12c780: 0x24e6006c  addiu       $a2, $a3, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F65E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F65E8u, 0x12C77Cu, 0x12C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C784u;
}
