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

// Function: entry_001422c8
// Address: 0x1422c8 - 0x142304
void entry_001422c8_0x1422c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001422c8_0x1422c8");
#endif

    switch (ctx->pc) {
        case 0x1422f4u: goto label_1422f4;
        default: break;
    }

    ctx->pc = 0x1422c8u;

    // 0x1422c8: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1422c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1422cc: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1422ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1422d0: 0x2d01821  addu        $v1, $s6, $s0
    ctx->pc = 0x1422d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x1422d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1422d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1422d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1422d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1422dc: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x1422dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1422e0: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x1422e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1422e4: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x1422e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1422e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1422e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1422ec: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x1422ECu;
    SET_GPR_U32(ctx, 31, 0x1422F4u);
    ctx->pc = 0x1422F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1422ECu;
    // 0x1422f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x1422ECu, 0x1422F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1422F4u;
label_1422f4:
    // 0x1422f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1422f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1422f8: 0x217182b  sltu        $v1, $s0, $s7
    ctx->pc = 0x1422f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1422fc: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1422FCu;
    {
        const bool branch_taken_0x1422fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x142300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1422FCu;
        // 0x142300: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1422fc) {
            ctx->pc = 0x1422BCu;
            return;
        }
    }
    ctx->pc = 0x142304u;
}
