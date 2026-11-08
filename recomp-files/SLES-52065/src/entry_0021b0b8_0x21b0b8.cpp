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

// Function: entry_0021b0b8
// Address: 0x21b0b8 - 0x21b0e0
void entry_0021b0b8_0x21b0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b0b8_0x21b0b8");
#endif

    switch (ctx->pc) {
        case 0x21b0d0u: goto label_21b0d0;
        default: break;
    }

    ctx->pc = 0x21b0b8u;

label_21b0b8:
    // 0x21b0b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x21b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_21b0bc:
    // 0x21b0bc: 0x8e224770  lw          $v0, 0x4770($s1)
    ctx->pc = 0x21b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18288)));
label_21b0c0:
    // 0x21b0c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21b0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21b0c4:
    // 0x21b0c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21b0c8:
    // 0x21b0c8: 0x40f809  jalr        $v0
label_21b0cc:
    if (ctx->pc == 0x21B0CCu) {
        ctx->pc = 0x21B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0C8u;
        // 0x21b0cc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B0D0u;
        goto label_21b0d0;
    }
    ctx->pc = 0x21B0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B0D0u);
        ctx->pc = 0x21B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0C8u;
        // 0x21b0cc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B0C8u, 0x21B0D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B0D0u;
label_21b0d0:
    // 0x21b0d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21b0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b0d4:
    // 0x21b0d4: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x21b0d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_21b0d8:
    // 0x21b0d8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_21b0dc:
    if (ctx->pc == 0x21B0DCu) {
        ctx->pc = 0x21B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0D8u;
        // 0x21b0dc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B0E0u;
        goto label_fallthrough_0x21b0d8;
    }
    ctx->pc = 0x21B0D8u;
    {
        const bool branch_taken_0x21b0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0D8u;
        // 0x21b0dc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b0d8) {
            ctx->pc = 0x21B0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b0b8;
        }
    }
label_fallthrough_0x21b0d8:
    ctx->pc = 0x21B0E0u;
}
