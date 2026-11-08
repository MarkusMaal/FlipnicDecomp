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

// Function: entry_0013543c
// Address: 0x13543c - 0x135464
void entry_0013543c_0x13543c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013543c_0x13543c");
#endif

    switch (ctx->pc) {
        case 0x13545cu: goto label_13545c;
        default: break;
    }

    ctx->pc = 0x13543cu;

label_13543c:
    // 0x13543c: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x13543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_135440:
    // 0x135440: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x135440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_135444:
    // 0x135444: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x135444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
label_135448:
    // 0x135448: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x135448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_13544c:
    // 0x13544c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13544cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135450:
    // 0x135450: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x135450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_135454:
    // 0x135454: 0x320f809  jalr        $t9
label_135458:
    if (ctx->pc == 0x135458u) {
        ctx->pc = 0x135458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135454u;
        // 0x135458: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13545Cu;
        goto label_13545c;
    }
    ctx->pc = 0x135454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13545Cu);
        ctx->pc = 0x135458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135454u;
        // 0x135458: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135454u, 0x13545Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13545Cu;
label_13545c:
    // 0x13545c: 0x10000004  b           . + 4 + (0x4 << 2)
label_135460:
    if (ctx->pc == 0x135460u) {
        ctx->pc = 0x135464u;
        goto label_fallthrough_0x13545c;
    }
    ctx->pc = 0x13545Cu;
    {
        const bool branch_taken_0x13545c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13545c) {
            ctx->pc = 0x135470u;
            return;
        }
    }
label_fallthrough_0x13545c:
    ctx->pc = 0x135464u;
}
