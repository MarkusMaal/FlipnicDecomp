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

// Function: entry_001b3d98
// Address: 0x1b3d98 - 0x1b3de0
void entry_001b3d98_0x1b3d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3d98_0x1b3d98");
#endif

    switch (ctx->pc) {
        case 0x1b3dccu: goto label_1b3dcc;
        default: break;
    }

    ctx->pc = 0x1b3d98u;

    // 0x1b3d98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b3d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3d9c: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1b3d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b3da0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b3da4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1b3da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3da8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1b3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b3dac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b3dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3db0: 0x8482000a  lh          $v0, 0xA($a0)
    ctx->pc = 0x1b3db0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1b3db4: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x1b3db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b3db8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1b3db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3dbc: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x1b3dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x1b3dc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b3dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3dc4: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x1B3DC4u;
    SET_GPR_U32(ctx, 31, 0x1B3DCCu);
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x1B3DC4u, 0x1B3DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3DCCu;
label_1b3dcc:
    // 0x1b3dcc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3DCCu;
    {
        const bool branch_taken_0x1b3dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3dcc) {
            ctx->pc = 0x1B3DE0u;
            return;
        }
    }
    ctx->pc = 0x1B3DD4u;
    // 0x1b3dd4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b3dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3dd8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B3DD8u;
    {
        const bool branch_taken_0x1b3dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3dd8) {
            ctx->pc = 0x1B3E04u;
            return;
        }
    }
    ctx->pc = 0x1B3DE0u;
}
