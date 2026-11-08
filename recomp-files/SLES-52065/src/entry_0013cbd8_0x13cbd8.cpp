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

// Function: entry_0013cbd8
// Address: 0x13cbd8 - 0x13cc0c
void entry_0013cbd8_0x13cbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cbd8_0x13cbd8");
#endif

    switch (ctx->pc) {
        case 0x13cbfcu: goto label_13cbfc;
        default: break;
    }

    ctx->pc = 0x13cbd8u;

label_13cbd8:
    // 0x13cbd8: 0x8ea2011c  lw          $v0, 0x11C($s5)
    ctx->pc = 0x13cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 284)));
label_13cbdc:
    // 0x13cbdc: 0x2142826  xor         $a1, $s0, $s4
    ctx->pc = 0x13cbdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 20));
label_13cbe0:
    // 0x13cbe0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x13cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13cbe4:
    // 0x13cbe4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_13cbe8:
    // 0x13cbe8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13cbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13cbec:
    // 0x13cbec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13cbecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13cbf0:
    // 0x13cbf0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x13cbf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_13cbf4:
    // 0x13cbf4: 0x320f809  jalr        $t9
label_13cbf8:
    if (ctx->pc == 0x13CBF8u) {
        ctx->pc = 0x13CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBF4u;
        // 0x13cbf8: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CBFCu;
        goto label_13cbfc;
    }
    ctx->pc = 0x13CBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13CBFCu);
        ctx->pc = 0x13CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBF4u;
        // 0x13cbf8: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CBF4u, 0x13CBFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CBFCu;
label_13cbfc:
    // 0x13cbfc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13cbfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13cc00:
    // 0x13cc00: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x13cc00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_13cc04:
    // 0x13cc04: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_13cc08:
    if (ctx->pc == 0x13CC08u) {
        ctx->pc = 0x13CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC04u;
        // 0x13cc08: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC0Cu;
        goto label_fallthrough_0x13cc04;
    }
    ctx->pc = 0x13CC04u;
    {
        const bool branch_taken_0x13cc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC04u;
        // 0x13cc08: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc04) {
            ctx->pc = 0x13CBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13cbd8;
        }
    }
label_fallthrough_0x13cc04:
    ctx->pc = 0x13CC0Cu;
}
