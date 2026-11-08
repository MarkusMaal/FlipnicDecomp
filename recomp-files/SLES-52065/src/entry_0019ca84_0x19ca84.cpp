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

// Function: entry_0019ca84
// Address: 0x19ca84 - 0x19caac
void entry_0019ca84_0x19ca84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ca84_0x19ca84");
#endif

    switch (ctx->pc) {
        case 0x19ca9cu: goto label_19ca9c;
        default: break;
    }

    ctx->pc = 0x19ca84u;

    // 0x19ca84: 0x8e440674  lw          $a0, 0x674($s2)
    ctx->pc = 0x19ca84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1652)));
    // 0x19ca88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ca8c: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19CA8Cu;
    {
        const bool branch_taken_0x19ca8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x19CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA8Cu;
        // 0x19ca90: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca8c) {
            ctx->pc = 0x19CAACu;
            return;
        }
    }
    ctx->pc = 0x19CA94u;
    // 0x19ca94: 0xc045ae8  jal         func_116BA0
    ctx->pc = 0x19CA94u;
    SET_GPR_U32(ctx, 31, 0x19CA9Cu);
    ctx->pc = 0x116BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116BA0u, 0x19CA94u, 0x19CA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CA9Cu;
label_19ca9c:
    // 0x19ca9c: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19ca9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x19caa0: 0x24460006  addiu       $a2, $v0, 0x6
    ctx->pc = 0x19caa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x19caa4: 0xc064cac  jal         func_1932B0
    ctx->pc = 0x19CAA4u;
    SET_GPR_U32(ctx, 31, 0x19CAACu);
    ctx->pc = 0x19CAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CAA4u;
    // 0x19caa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932B0u, 0x19CAA4u, 0x19CAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CAACu;
}
