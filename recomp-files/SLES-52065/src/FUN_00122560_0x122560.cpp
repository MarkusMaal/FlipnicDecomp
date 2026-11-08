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

// Function: FUN_00122560
// Address: 0x122560 - 0x1225c8
void FUN_00122560_0x122560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122560_0x122560");
#endif

    switch (ctx->pc) {
        case 0x122578u: goto label_122578;
        case 0x12259cu: goto label_12259c;
        default: break;
    }

    ctx->pc = 0x122560u;

    // 0x122560: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x122560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122564: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x122564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122568: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x122568u;
    {
        const bool branch_taken_0x122568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x122568) {
            ctx->pc = 0x1225A0u;
            goto label_1225a0;
        }
    }
    ctx->pc = 0x122570u;
    // 0x122570: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x122570u;
    {
        const bool branch_taken_0x122570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122570) {
            ctx->pc = 0x12257Cu;
            goto label_12257c;
        }
    }
    ctx->pc = 0x122578u;
label_122578:
    // 0x122578: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x122578u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12257c:
    // 0x12257c: 0x0  nop
    ctx->pc = 0x12257cu;
    // NOP
    // 0x122580: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x122580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x122584: 0x0  nop
    ctx->pc = 0x122584u;
    // NOP
    // 0x122588: 0x0  nop
    ctx->pc = 0x122588u;
    // NOP
    // 0x12258c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12258Cu;
    {
        const bool branch_taken_0x12258c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12258c) {
            ctx->pc = 0x122578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122578;
        }
    }
    ctx->pc = 0x122594u;
    // 0x122594: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x122594u;
    {
        const bool branch_taken_0x122594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122594u;
        // 0x122598: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122594) {
            ctx->pc = 0x1225C0u;
            goto label_1225c0;
        }
    }
    ctx->pc = 0x12259Cu;
label_12259c:
    // 0x12259c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x12259cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1225a0:
    // 0x1225a0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1225a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1225a4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1225a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1225a8: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1225a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1225ac: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1225acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1225b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1225b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1225b4: 0x10c3fff9  beq         $a2, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1225B4u;
    {
        const bool branch_taken_0x1225b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1225b4) {
            ctx->pc = 0x12259Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12259c;
        }
    }
    ctx->pc = 0x1225BCu;
    // 0x1225bc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1225bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1225c0:
    // 0x1225c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1225C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1225C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1225C8u;
}
