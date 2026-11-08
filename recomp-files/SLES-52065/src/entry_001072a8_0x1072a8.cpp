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

// Function: entry_001072a8
// Address: 0x1072a8 - 0x1072cc
void entry_001072a8_0x1072a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001072a8_0x1072a8");
#endif

    switch (ctx->pc) {
        case 0x1072b8u: goto label_1072b8;
        case 0x1072c4u: goto label_1072c4;
        default: break;
    }

    ctx->pc = 0x1072a8u;

label_1072a8:
    // 0x1072a8: 0x8e790008  lw          $t9, 0x8($s3)
    ctx->pc = 0x1072a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1072ac:
    // 0x1072ac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1072acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1072b0:
    // 0x1072b0: 0x320f809  jalr        $t9
label_1072b4:
    if (ctx->pc == 0x1072B4u) {
        ctx->pc = 0x1072B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072B0u;
        // 0x1072b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1072B8u;
        goto label_1072b8;
    }
    ctx->pc = 0x1072B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1072B8u);
        ctx->pc = 0x1072B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072B0u;
        // 0x1072b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1072B0u, 0x1072B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1072B8u;
label_1072b8:
    // 0x1072b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1072b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1072bc:
    // 0x1072bc: 0xc042118  jal         func_108460
label_1072c0:
    if (ctx->pc == 0x1072C0u) {
        ctx->pc = 0x1072C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072BCu;
        // 0x1072c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1072C4u;
        goto label_1072c4;
    }
    ctx->pc = 0x1072BCu;
    SET_GPR_U32(ctx, 31, 0x1072C4u);
    ctx->pc = 0x1072C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1072BCu;
    // 0x1072c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1072BCu, 0x1072C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072C4u;
label_1072c4:
    // 0x1072c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1072c8:
    if (ctx->pc == 0x1072C8u) {
        ctx->pc = 0x1072C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072C4u;
        // 0x1072c8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1072CCu;
        goto label_fallthrough_0x1072c4;
    }
    ctx->pc = 0x1072C4u;
    {
        const bool branch_taken_0x1072c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1072C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072C4u;
        // 0x1072c8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072c4) {
            ctx->pc = 0x1072D8u;
            return;
        }
    }
label_fallthrough_0x1072c4:
    ctx->pc = 0x1072CCu;
}
