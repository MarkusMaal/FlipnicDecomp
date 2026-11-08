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

// Function: entry_001ed5c8
// Address: 0x1ed5c8 - 0x1ed5f0
void entry_001ed5c8_0x1ed5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed5c8_0x1ed5c8");
#endif

    switch (ctx->pc) {
        case 0x1ed5dcu: goto label_1ed5dc;
        default: break;
    }

    ctx->pc = 0x1ed5c8u;

label_1ed5c8:
    // 0x1ed5c8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1ed5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1ed5cc:
    // 0x1ed5cc: 0x8ea3a3c4  lw          $v1, -0x5C3C($s5)
    ctx->pc = 0x1ed5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed5d0:
    // 0x1ed5d0: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1ed5d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1ed5d4:
    // 0x1ed5d4: 0x60f809  jalr        $v1
label_1ed5d8:
    if (ctx->pc == 0x1ED5D8u) {
        ctx->pc = 0x1ED5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5D4u;
        // 0x1ed5d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED5DCu;
        goto label_1ed5dc;
    }
    ctx->pc = 0x1ED5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ED5DCu);
        ctx->pc = 0x1ED5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5D4u;
        // 0x1ed5d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED5D4u, 0x1ED5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED5DCu;
label_1ed5dc:
    // 0x1ed5dc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ed5dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed5e0:
    // 0x1ed5e0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1ed5e4:
    if (ctx->pc == 0x1ED5E4u) {
        ctx->pc = 0x1ED5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5E0u;
        // 0x1ed5e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED5E8u;
        goto label_1ed5e8;
    }
    ctx->pc = 0x1ED5E0u;
    {
        const bool branch_taken_0x1ed5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5E0u;
        // 0x1ed5e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed5e0) {
            ctx->pc = 0x1ED5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed5c8;
        }
    }
    ctx->pc = 0x1ED5E8u;
label_1ed5e8:
    // 0x1ed5e8: 0x10000015  b           . + 4 + (0x15 << 2)
label_1ed5ec:
    if (ctx->pc == 0x1ED5ECu) {
        ctx->pc = 0x1ED5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5E8u;
        // 0x1ed5ec: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED5F0u;
        goto label_fallthrough_0x1ed5e8;
    }
    ctx->pc = 0x1ED5E8u;
    {
        const bool branch_taken_0x1ed5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5E8u;
        // 0x1ed5ec: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed5e8) {
            ctx->pc = 0x1ED640u;
            return;
        }
    }
label_fallthrough_0x1ed5e8:
    ctx->pc = 0x1ED5F0u;
}
