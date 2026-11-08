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

// Function: entry_0010dffc
// Address: 0x10dffc - 0x10e018
void entry_0010dffc_0x10dffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dffc_0x10dffc");
#endif

    ctx->pc = 0x10dffcu;

    // 0x10dffc: 0x0  nop
    ctx->pc = 0x10dffcu;
    // NOP
    // 0x10e000: 0x8e030224  lw          $v1, 0x224($s0)
    ctx->pc = 0x10e000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x10e004: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x10e004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10e008: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x10E008u;
    {
        const bool branch_taken_0x10e008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e008) {
            ctx->pc = 0x10DF80u;
            return;
        }
    }
    ctx->pc = 0x10E010u;
    // 0x10e010: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x10E010u;
    {
        const bool branch_taken_0x10e010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E010u;
        // 0x10e014: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e010) {
            ctx->pc = 0x10E0ACu;
            return;
        }
    }
    ctx->pc = 0x10E018u;
}
