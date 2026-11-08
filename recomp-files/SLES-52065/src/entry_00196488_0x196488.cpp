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

// Function: entry_00196488
// Address: 0x196488 - 0x1964c8
void entry_00196488_0x196488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196488_0x196488");
#endif

    switch (ctx->pc) {
        case 0x1964c0u: goto label_1964c0;
        default: break;
    }

    ctx->pc = 0x196488u;

    // 0x196488: 0x8e630320  lw          $v1, 0x320($s3)
    ctx->pc = 0x196488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 800)));
    // 0x19648c: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x19648Cu;
    {
        const bool branch_taken_0x19648c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19648c) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x196494u;
    // 0x196494: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x196494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x196498: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x196498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x19649c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x19649cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1964a0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1964a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1964a4: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x1964A4u;
    {
        const bool branch_taken_0x1964a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1964a4) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x1964ACu;
    // 0x1964ac: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x1964acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1964b0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1964B0u;
    {
        const bool branch_taken_0x1964b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1964b0) {
            ctx->pc = 0x1964C8u;
            return;
        }
    }
    ctx->pc = 0x1964B8u;
    // 0x1964b8: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1964B8u;
    SET_GPR_U32(ctx, 31, 0x1964C0u);
    ctx->pc = 0x1964BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1964B8u;
    // 0x1964bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1964B8u, 0x1964C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1964C0u;
label_1964c0:
    // 0x1964c0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1964C0u;
    {
        const bool branch_taken_0x1964c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1964c0) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x1964C8u;
}
