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

// Function: entry_001933dc
// Address: 0x1933dc - 0x193418
void entry_001933dc_0x1933dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001933dc_0x1933dc");
#endif

    switch (ctx->pc) {
        case 0x193414u: goto label_193414;
        default: break;
    }

    ctx->pc = 0x1933dcu;

    // 0x1933dc: 0x8f838384  lw          $v1, -0x7C7C($gp)
    ctx->pc = 0x1933dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x1933e0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1933e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1933e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1933e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1933e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933ec: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1933ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1933f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1933f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1933f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1933f8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1933f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1933fc: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1933fcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x193400: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x193400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193404: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x193404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x193408: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x193408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x19340c: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x19340Cu;
    SET_GPR_U32(ctx, 31, 0x193414u);
    ctx->pc = 0x193410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19340Cu;
    // 0x193410: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x19340Cu, 0x193414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193414u;
label_193414:
    // 0x193414: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x193414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x193418u;
}
