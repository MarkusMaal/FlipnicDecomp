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

// Function: entry_001ed4d8
// Address: 0x1ed4d8 - 0x1ed500
void entry_001ed4d8_0x1ed4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed4d8_0x1ed4d8");
#endif

    switch (ctx->pc) {
        case 0x1ed4ecu: goto label_1ed4ec;
        default: break;
    }

    ctx->pc = 0x1ed4d8u;

label_1ed4d8:
    // 0x1ed4d8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1ed4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1ed4dc:
    // 0x1ed4dc: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed4e0:
    // 0x1ed4e0: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1ed4e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1ed4e4:
    // 0x1ed4e4: 0x40f809  jalr        $v0
label_1ed4e8:
    if (ctx->pc == 0x1ED4E8u) {
        ctx->pc = 0x1ED4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4E4u;
        // 0x1ed4e8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED4ECu;
        goto label_1ed4ec;
    }
    ctx->pc = 0x1ED4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED4ECu);
        ctx->pc = 0x1ED4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4E4u;
        // 0x1ed4e8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED4E4u, 0x1ED4ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED4ECu;
label_1ed4ec:
    // 0x1ed4ec: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ed4ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed4f0:
    // 0x1ed4f0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1ed4f4:
    if (ctx->pc == 0x1ED4F4u) {
        ctx->pc = 0x1ED4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4F0u;
        // 0x1ed4f4: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED4F8u;
        goto label_1ed4f8;
    }
    ctx->pc = 0x1ED4F0u;
    {
        const bool branch_taken_0x1ed4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4F0u;
        // 0x1ed4f4: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4f0) {
            ctx->pc = 0x1ED4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed4d8;
        }
    }
    ctx->pc = 0x1ED4F8u;
label_1ed4f8:
    // 0x1ed4f8: 0x10000051  b           . + 4 + (0x51 << 2)
label_1ed4fc:
    if (ctx->pc == 0x1ED4FCu) {
        ctx->pc = 0x1ED4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4F8u;
        // 0x1ed4fc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED500u;
        goto label_fallthrough_0x1ed4f8;
    }
    ctx->pc = 0x1ED4F8u;
    {
        const bool branch_taken_0x1ed4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4F8u;
        // 0x1ed4fc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4f8) {
            ctx->pc = 0x1ED640u;
            return;
        }
    }
label_fallthrough_0x1ed4f8:
    ctx->pc = 0x1ED500u;
}
