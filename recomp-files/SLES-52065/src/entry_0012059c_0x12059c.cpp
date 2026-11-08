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

// Function: entry_0012059c
// Address: 0x12059c - 0x1205d4
void entry_0012059c_0x12059c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012059c_0x12059c");
#endif

    switch (ctx->pc) {
        case 0x1205bcu: goto label_1205bc;
        default: break;
    }

    ctx->pc = 0x12059cu;

    // 0x12059c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x12059cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1205a0: 0x8f908780  lw          $s0, -0x7880($gp)
    ctx->pc = 0x1205a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1205a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1205a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1205a8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1205a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1205ac: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1205ACu;
    {
        const bool branch_taken_0x1205ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1205ac) {
            ctx->pc = 0x1205D4u;
            return;
        }
    }
    ctx->pc = 0x1205B4u;
    // 0x1205b4: 0xc048194  jal         func_120650
    ctx->pc = 0x1205B4u;
    SET_GPR_U32(ctx, 31, 0x1205BCu);
    ctx->pc = 0x120650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120650u, 0x1205B4u, 0x1205BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1205BCu;
label_1205bc:
    // 0x1205bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1205bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1205c0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1205c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1205c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1205c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1205c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1205c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1205cc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1205CCu;
    {
        const bool branch_taken_0x1205cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1205cc) {
            ctx->pc = 0x120638u;
            return;
        }
    }
    ctx->pc = 0x1205D4u;
}
