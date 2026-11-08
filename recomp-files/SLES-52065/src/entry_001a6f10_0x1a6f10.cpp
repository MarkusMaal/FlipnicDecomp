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

// Function: entry_001a6f10
// Address: 0x1a6f10 - 0x1a6f30
void entry_001a6f10_0x1a6f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6f10_0x1a6f10");
#endif

    switch (ctx->pc) {
        case 0x1a6f20u: goto label_1a6f20;
        default: break;
    }

    ctx->pc = 0x1a6f10u;

label_1a6f10:
    // 0x1a6f10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6f10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6f14:
    // 0x1a6f14: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a6f14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a6f18:
    // 0x1a6f18: 0x320f809  jalr        $t9
label_1a6f1c:
    if (ctx->pc == 0x1A6F1Cu) {
        ctx->pc = 0x1A6F20u;
        goto label_1a6f20;
    }
    ctx->pc = 0x1A6F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6F20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6F18u, 0x1A6F20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6F20u;
label_1a6f20:
    // 0x1a6f20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a6f24:
    // 0x1a6f24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6f28:
    // 0x1a6f28: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a6f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a6f2c:
    // 0x1a6f2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a6f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a6f30u;
}
