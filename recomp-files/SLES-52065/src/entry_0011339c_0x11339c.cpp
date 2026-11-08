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

// Function: entry_0011339c
// Address: 0x11339c - 0x1133dc
void entry_0011339c_0x11339c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011339c_0x11339c");
#endif

    switch (ctx->pc) {
        case 0x1133ccu: goto label_1133cc;
        default: break;
    }

    ctx->pc = 0x11339cu;

label_11339c:
    // 0x11339c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x11339cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1133a0:
    // 0x1133a0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1133a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1133a4:
    // 0x1133a4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1133a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1133a8:
    // 0x1133a8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1133a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1133ac:
    // 0x1133ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1133acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1133b0:
    // 0x1133b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1133b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1133b4:
    // 0x1133b4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1133b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1133b8:
    // 0x1133b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1133b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1133bc:
    // 0x1133bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1133bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1133c0:
    // 0x1133c0: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1133c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1133c4:
    // 0x1133c4: 0x320f809  jalr        $t9
label_1133c8:
    if (ctx->pc == 0x1133C8u) {
        ctx->pc = 0x1133C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133C4u;
        // 0x1133c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133CCu;
        goto label_1133cc;
    }
    ctx->pc = 0x1133C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1133CCu);
        ctx->pc = 0x1133C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133C4u;
        // 0x1133c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1133C4u, 0x1133CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1133CCu;
label_1133cc:
    // 0x1133cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1133ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1133d0:
    // 0x1133d0: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x1133d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1133d4:
    // 0x1133d4: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1133d8:
    if (ctx->pc == 0x1133D8u) {
        ctx->pc = 0x1133D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133D4u;
        // 0x1133d8: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133DCu;
        goto label_fallthrough_0x1133d4;
    }
    ctx->pc = 0x1133D4u;
    {
        const bool branch_taken_0x1133d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1133D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133D4u;
        // 0x1133d8: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133d4) {
            ctx->pc = 0x11339Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11339c;
        }
    }
label_fallthrough_0x1133d4:
    ctx->pc = 0x1133DCu;
}
