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

// Function: FUN_001225d0
// Address: 0x1225d0 - 0x122638
void FUN_001225d0_0x1225d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001225d0_0x1225d0");
#endif

    switch (ctx->pc) {
        case 0x1225e8u: goto label_1225e8;
        case 0x12260cu: goto label_12260c;
        default: break;
    }

    ctx->pc = 0x1225d0u;

    // 0x1225d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1225d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1225d4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1225d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1225d8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1225D8u;
    {
        const bool branch_taken_0x1225d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1225d8) {
            ctx->pc = 0x122610u;
            goto label_122610;
        }
    }
    ctx->pc = 0x1225E0u;
    // 0x1225e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1225E0u;
    {
        const bool branch_taken_0x1225e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1225e0) {
            ctx->pc = 0x1225ECu;
            goto label_1225ec;
        }
    }
    ctx->pc = 0x1225E8u;
label_1225e8:
    // 0x1225e8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1225e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1225ec:
    // 0x1225ec: 0x0  nop
    ctx->pc = 0x1225ecu;
    // NOP
    // 0x1225f0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1225f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1225f4: 0x0  nop
    ctx->pc = 0x1225f4u;
    // NOP
    // 0x1225f8: 0x0  nop
    ctx->pc = 0x1225f8u;
    // NOP
    // 0x1225fc: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1225FCu;
    {
        const bool branch_taken_0x1225fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1225fc) {
            ctx->pc = 0x1225E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1225e8;
        }
    }
    ctx->pc = 0x122604u;
    // 0x122604: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x122604u;
    {
        const bool branch_taken_0x122604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122604u;
        // 0x122608: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122604) {
            ctx->pc = 0x122630u;
            goto label_122630;
        }
    }
    ctx->pc = 0x12260Cu;
label_12260c:
    // 0x12260c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x12260cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_122610:
    // 0x122610: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x122610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122614: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x122614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x122618: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x122618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x12261c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x12261cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x122620: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x122620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122624: 0x14c3fff9  bne         $a2, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x122624u;
    {
        const bool branch_taken_0x122624 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x122624) {
            ctx->pc = 0x12260Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12260c;
        }
    }
    ctx->pc = 0x12262Cu;
    // 0x12262c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x12262cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_122630:
    // 0x122630: 0x3e00008  jr          $ra
    ctx->pc = 0x122630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122638u;
}
