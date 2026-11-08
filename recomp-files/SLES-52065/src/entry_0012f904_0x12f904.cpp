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

// Function: entry_0012f904
// Address: 0x12f904 - 0x12f928
void entry_0012f904_0x12f904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f904_0x12f904");
#endif

    switch (ctx->pc) {
        case 0x12f90cu: goto label_12f90c;
        default: break;
    }

    ctx->pc = 0x12f904u;

    // 0x12f904: 0xc040168  jal         func_1005A0
    ctx->pc = 0x12F904u;
    SET_GPR_U32(ctx, 31, 0x12F90Cu);
    ctx->pc = 0x12F908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F904u;
    // 0x12f908: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x12F904u, 0x12F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F90Cu;
label_12f90c:
    // 0x12f90c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12f90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x12f910: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x12f910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12f914: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12f914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12f918: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12f918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f91c: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x12F91Cu;
    {
        const bool branch_taken_0x12f91c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F91Cu;
        // 0x12f920: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f91c) {
            ctx->pc = 0x12F94Cu;
            return;
        }
    }
    ctx->pc = 0x12F924u;
    // 0x12f924: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x12f924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x12f928u;
}
