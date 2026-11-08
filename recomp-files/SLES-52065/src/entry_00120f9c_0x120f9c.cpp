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

// Function: entry_00120f9c
// Address: 0x120f9c - 0x120fd8
void entry_00120f9c_0x120f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120f9c_0x120f9c");
#endif

    ctx->pc = 0x120f9cu;

label_120f9c:
    // 0x120f9c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x120f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_120fa0:
    // 0x120fa0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x120fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_120fa4:
    // 0x120fa4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x120fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_120fa8:
    // 0x120fa8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_120fac:
    if (ctx->pc == 0x120FACu) {
        ctx->pc = 0x120FB0u;
        goto label_120fb0;
    }
    ctx->pc = 0x120FA8u;
    {
        const bool branch_taken_0x120fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x120fa8) {
            ctx->pc = 0x120FD8u;
            return;
        }
    }
    ctx->pc = 0x120FB0u;
label_120fb0:
    // 0x120fb0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x120fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_120fb4:
    // 0x120fb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x120fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_120fb8:
    // 0x120fb8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x120fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_120fbc:
    // 0x120fbc: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x120fbcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_120fc0:
    // 0x120fc0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_120fc4:
    if (ctx->pc == 0x120FC4u) {
        ctx->pc = 0x120FC8u;
        goto label_120fc8;
    }
    ctx->pc = 0x120FC0u;
    {
        const bool branch_taken_0x120fc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x120fc0) {
            ctx->pc = 0x120FD8u;
            return;
        }
    }
    ctx->pc = 0x120FC8u;
label_120fc8:
    // 0x120fc8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x120fc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_120fcc:
    // 0x120fcc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x120fccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_120fd0:
    // 0x120fd0: 0x320f809  jalr        $t9
label_120fd4:
    if (ctx->pc == 0x120FD4u) {
        ctx->pc = 0x120FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FD0u;
        // 0x120fd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120FD8u;
        goto label_fallthrough_0x120fd0;
    }
    ctx->pc = 0x120FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x120FD8u);
        ctx->pc = 0x120FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FD0u;
        // 0x120fd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120FD0u, 0x120FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x120fd0:
    ctx->pc = 0x120FD8u;
}
