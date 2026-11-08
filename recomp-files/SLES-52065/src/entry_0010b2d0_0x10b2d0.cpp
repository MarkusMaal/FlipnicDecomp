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

// Function: entry_0010b2d0
// Address: 0x10b2d0 - 0x10b314
void entry_0010b2d0_0x10b2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b2d0_0x10b2d0");
#endif

    switch (ctx->pc) {
        case 0x10b30cu: goto label_10b30c;
        default: break;
    }

    ctx->pc = 0x10b2d0u;

label_10b2d0:
    // 0x10b2d0: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x10b2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_10b2d4:
    // 0x10b2d4: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x10b2d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_10b2d8:
    // 0x10b2d8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_10b2dc:
    if (ctx->pc == 0x10B2DCu) {
        ctx->pc = 0x10B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2D8u;
        // 0x10b2dc: 0x28610007  slti        $at, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B2E0u;
        goto label_10b2e0;
    }
    ctx->pc = 0x10B2D8u;
    {
        const bool branch_taken_0x10b2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2D8u;
        // 0x10b2dc: 0x28610007  slti        $at, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2d8) {
            ctx->pc = 0x10B314u;
            return;
        }
    }
    ctx->pc = 0x10B2E0u;
label_10b2e0:
    // 0x10b2e0: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_10b2e4:
    if (ctx->pc == 0x10B2E4u) {
        ctx->pc = 0x10B2E8u;
        goto label_10b2e8;
    }
    ctx->pc = 0x10B2E0u;
    {
        const bool branch_taken_0x10b2e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b2e0) {
            ctx->pc = 0x10B314u;
            return;
        }
    }
    ctx->pc = 0x10B2E8u;
label_10b2e8:
    // 0x10b2e8: 0x8e03231c  lw          $v1, 0x231C($s0)
    ctx->pc = 0x10b2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
label_10b2ec:
    // 0x10b2ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b2f0:
    // 0x10b2f0: 0x846301e8  lh          $v1, 0x1E8($v1)
    ctx->pc = 0x10b2f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_10b2f4:
    // 0x10b2f4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_10b2f8:
    if (ctx->pc == 0x10B2F8u) {
        ctx->pc = 0x10B2FCu;
        goto label_10b2fc;
    }
    ctx->pc = 0x10B2F4u;
    {
        const bool branch_taken_0x10b2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10b2f4) {
            ctx->pc = 0x10B314u;
            return;
        }
    }
    ctx->pc = 0x10B2FCu;
label_10b2fc:
    // 0x10b2fc: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b2fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b300:
    // 0x10b300: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x10b300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_10b304:
    // 0x10b304: 0x320f809  jalr        $t9
label_10b308:
    if (ctx->pc == 0x10B308u) {
        ctx->pc = 0x10B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B304u;
        // 0x10b308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B30Cu;
        goto label_10b30c;
    }
    ctx->pc = 0x10B304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B30Cu);
        ctx->pc = 0x10B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B304u;
        // 0x10b308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B304u, 0x10B30Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B30Cu;
label_10b30c:
    // 0x10b30c: 0x1000025d  b           . + 4 + (0x25D << 2)
label_10b310:
    if (ctx->pc == 0x10B310u) {
        ctx->pc = 0x10B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B30Cu;
        // 0x10b310: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B314u;
        goto label_fallthrough_0x10b30c;
    }
    ctx->pc = 0x10B30Cu;
    {
        const bool branch_taken_0x10b30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B30Cu;
        // 0x10b310: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b30c) {
            ctx->pc = 0x10BC84u;
            return;
        }
    }
label_fallthrough_0x10b30c:
    ctx->pc = 0x10B314u;
}
