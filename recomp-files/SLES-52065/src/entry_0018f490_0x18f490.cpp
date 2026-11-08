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

// Function: entry_0018f490
// Address: 0x18f490 - 0x18f4cc
void entry_0018f490_0x18f490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f490_0x18f490");
#endif

    switch (ctx->pc) {
        case 0x18f4a4u: goto label_18f4a4;
        default: break;
    }

    ctx->pc = 0x18f490u;

label_18f490:
    // 0x18f490: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x18f490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_18f494:
    // 0x18f494: 0x8c99040c  lw          $t9, 0x40C($a0)
    ctx->pc = 0x18f494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1036)));
label_18f498:
    // 0x18f498: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x18f498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_18f49c:
    // 0x18f49c: 0x320f809  jalr        $t9
label_18f4a0:
    if (ctx->pc == 0x18F4A0u) {
        ctx->pc = 0x18F4A4u;
        goto label_18f4a4;
    }
    ctx->pc = 0x18F49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18F4A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F49Cu, 0x18F4A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F4A4u;
label_18f4a4:
    // 0x18f4a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18f4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18f4a8:
    // 0x18f4a8: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x18f4a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_18f4ac:
    // 0x18f4ac: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_18f4b0:
    if (ctx->pc == 0x18F4B0u) {
        ctx->pc = 0x18F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4ACu;
        // 0x18f4b0: 0x26310420  addiu       $s1, $s1, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F4B4u;
        goto label_18f4b4;
    }
    ctx->pc = 0x18F4ACu;
    {
        const bool branch_taken_0x18f4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4ACu;
        // 0x18f4b0: 0x26310420  addiu       $s1, $s1, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f4ac) {
            ctx->pc = 0x18F490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f490;
        }
    }
    ctx->pc = 0x18F4B4u;
label_18f4b4:
    // 0x18f4b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18f4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18f4b8:
    // 0x18f4b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f4b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18f4bc:
    // 0x18f4bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f4bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18f4c0:
    // 0x18f4c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18f4c4:
    // 0x18f4c4: 0x3e00008  jr          $ra
label_18f4c8:
    if (ctx->pc == 0x18F4C8u) {
        ctx->pc = 0x18F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4C4u;
        // 0x18f4c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F4CCu;
        goto label_fallthrough_0x18f4c4;
    }
    ctx->pc = 0x18F4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4C4u;
        // 0x18f4c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18f4c4:
    ctx->pc = 0x18F4CCu;
}
