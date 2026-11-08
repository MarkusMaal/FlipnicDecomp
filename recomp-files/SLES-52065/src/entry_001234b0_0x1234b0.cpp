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

// Function: entry_001234b0
// Address: 0x1234b0 - 0x1234e4
void entry_001234b0_0x1234b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001234b0_0x1234b0");
#endif

    switch (ctx->pc) {
        case 0x1234dcu: goto label_1234dc;
        default: break;
    }

    ctx->pc = 0x1234b0u;

    // 0x1234b0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1234b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1234b4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1234b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1234b8: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x1234b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1234bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1234bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1234c0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1234c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1234c4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1234c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1234c8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1234c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1234cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1234ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1234d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1234d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1234d4: 0xc048e98  jal         func_123A60
    ctx->pc = 0x1234D4u;
    SET_GPR_U32(ctx, 31, 0x1234DCu);
    ctx->pc = 0x1234D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1234D4u;
    // 0x1234d8: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123A60u, 0x1234D4u, 0x1234DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1234DCu;
label_1234dc:
    // 0x1234dc: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x1234dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1234e0: 0x0  nop
    ctx->pc = 0x1234e0u;
    // NOP
    ctx->pc = 0x1234e4u;
}
