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

// Function: entry_001bcfe4
// Address: 0x1bcfe4 - 0x1bd000
void entry_001bcfe4_0x1bcfe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcfe4_0x1bcfe4");
#endif

    ctx->pc = 0x1bcfe4u;

    // 0x1bcfe4: 0x0  nop
    ctx->pc = 0x1bcfe4u;
    // NOP
    // 0x1bcfe8: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1bcfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1bcfec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcff0: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BCFF0u;
    {
        const bool branch_taken_0x1bcff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bcff0) {
            ctx->pc = 0x1BCFDCu;
            return;
        }
    }
    ctx->pc = 0x1BCFF8u;
    // 0x1bcff8: 0xc06f490  jal         func_1BD240
    ctx->pc = 0x1BCFF8u;
    SET_GPR_U32(ctx, 31, 0x1BD000u);
    ctx->pc = 0x1BCFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCFF8u;
    // 0x1bcffc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD240u, 0x1BCFF8u, 0x1BD000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD000u;
}
