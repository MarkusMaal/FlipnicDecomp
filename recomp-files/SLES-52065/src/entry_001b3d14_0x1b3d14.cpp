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

// Function: entry_001b3d14
// Address: 0x1b3d14 - 0x1b3d44
void entry_001b3d14_0x1b3d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3d14_0x1b3d14");
#endif

    switch (ctx->pc) {
        case 0x1b3d34u: goto label_1b3d34;
        default: break;
    }

    ctx->pc = 0x1b3d14u;

    // 0x1b3d14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b3d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3d18: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1b3d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b3d1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b3d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b3d20: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1b3d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3d24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d28: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1b3d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b3d2c: 0xc080796  jal         func_201E58
    ctx->pc = 0x1B3D2Cu;
    SET_GPR_U32(ctx, 31, 0x1B3D34u);
    ctx->pc = 0x201E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E58u, 0x1B3D2Cu, 0x1B3D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D34u;
label_1b3d34:
    // 0x1b3d34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3D34u;
    {
        const bool branch_taken_0x1b3d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d34) {
            ctx->pc = 0x1B3D44u;
            return;
        }
    }
    ctx->pc = 0x1B3D3Cu;
    // 0x1b3d3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3D3Cu;
    {
        const bool branch_taken_0x1b3d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d3c) {
            ctx->pc = 0x1B3D58u;
            return;
        }
    }
    ctx->pc = 0x1B3D44u;
}
