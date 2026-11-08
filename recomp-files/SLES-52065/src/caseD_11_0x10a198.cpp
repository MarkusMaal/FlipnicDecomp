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

// Function: caseD_11
// Address: 0x10a198 - 0x10a1d4
void caseD_11_0x10a198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x10a198");
#endif

    switch (ctx->pc) {
        case 0x10a1b0u: goto label_10a1b0;
        default: break;
    }

    ctx->pc = 0x10a198u;

    // 0x10a198: 0x86300002  lh          $s0, 0x2($s1)
    ctx->pc = 0x10a198u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x10a19c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10a19cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x10a1a0: 0x24a5e1f8  addiu       $a1, $a1, -0x1E08
    ctx->pc = 0x10a1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959608));
    // 0x10a1a4: 0x8f918388  lw          $s1, -0x7C78($gp)
    ctx->pc = 0x10a1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x10a1a8: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x10A1A8u;
    SET_GPR_U32(ctx, 31, 0x10A1B0u);
    ctx->pc = 0x10A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A1A8u;
    // 0x10a1ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x10A1A8u, 0x10A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A1B0u;
label_10a1b0:
    // 0x10a1b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10a1b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10a1b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10a1bc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x10a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10a1c0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10a1c4: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x10a1c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x10a1c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10a1cc: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x10a1ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10a1d0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x10a1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x10a1d4u;
}
