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

// Function: entry_0019df98
// Address: 0x19df98 - 0x19dfc0
void entry_0019df98_0x19df98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019df98_0x19df98");
#endif

    switch (ctx->pc) {
        case 0x19dfb4u: goto label_19dfb4;
        default: break;
    }

    ctx->pc = 0x19df98u;

    // 0x19df98: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19df98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19df9c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x19df9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19dfa0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x19DFA0u;
    {
        const bool branch_taken_0x19dfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFA0u;
        // 0x19dfa4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dfa0) {
            ctx->pc = 0x19DF48u;
            return;
        }
    }
    ctx->pc = 0x19DFA8u;
    // 0x19dfa8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19dfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfac: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19DFACu;
    SET_GPR_U32(ctx, 31, 0x19DFB4u);
    ctx->pc = 0x19DFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DFACu;
    // 0x19dfb0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19DFACu, 0x19DFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DFB4u;
label_19dfb4:
    // 0x19dfb4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x19DFB4u;
    {
        const bool branch_taken_0x19dfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dfb4) {
            ctx->pc = 0x19E09Cu;
            return;
        }
    }
    ctx->pc = 0x19DFBCu;
    // 0x19dfbc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x19dfbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19dfc0u;
}
