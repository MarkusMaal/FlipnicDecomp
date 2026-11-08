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

// Function: entry_0014b1b0
// Address: 0x14b1b0 - 0x14b1e4
void entry_0014b1b0_0x14b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b1b0_0x14b1b0");
#endif

    ctx->pc = 0x14b1b0u;

    // 0x14b1b0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14b1b4: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x14b1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14b1b8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x14b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14b1bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b1c0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x14b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x14b1c4: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14b1c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14b1c8: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x14B1C8u;
    {
        const bool branch_taken_0x14b1c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b1c8) {
            ctx->pc = 0x14B180u;
            return;
        }
    }
    ctx->pc = 0x14B1D0u;
    // 0x14b1d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14b1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14b1d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B1D4u;
    {
        const bool branch_taken_0x14b1d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b1d4) {
            ctx->pc = 0x14B1E4u;
            return;
        }
    }
    ctx->pc = 0x14B1DCu;
    // 0x14b1dc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14B1DCu;
    SET_GPR_U32(ctx, 31, 0x14B1E4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14B1DCu, 0x14B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1E4u;
}
