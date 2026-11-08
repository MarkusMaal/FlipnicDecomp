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

// Function: entry_0012f6bc
// Address: 0x12f6bc - 0x12f6fc
void entry_0012f6bc_0x12f6bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f6bc_0x12f6bc");
#endif

    switch (ctx->pc) {
        case 0x12f6d0u: goto label_12f6d0;
        case 0x12f6ecu: goto label_12f6ec;
        default: break;
    }

    ctx->pc = 0x12f6bcu;

label_12f6bc:
    // 0x12f6bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x12f6bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12f6c0:
    // 0x12f6c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f6c4:
    // 0x12f6c4: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x12f6c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_12f6c8:
    // 0x12f6c8: 0x320f809  jalr        $t9
label_12f6cc:
    if (ctx->pc == 0x12F6CCu) {
        ctx->pc = 0x12F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6C8u;
        // 0x12f6cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F6D0u;
        goto label_12f6d0;
    }
    ctx->pc = 0x12F6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12F6D0u);
        ctx->pc = 0x12F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6C8u;
        // 0x12f6cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F6C8u, 0x12F6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F6D0u;
label_12f6d0:
    // 0x12f6d0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x12f6d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12f6d4:
    // 0x12f6d4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_12f6d8:
    // 0x12f6d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f6dc:
    // 0x12f6dc: 0x24a5ed50  addiu       $a1, $a1, -0x12B0
    ctx->pc = 0x12f6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962512));
label_12f6e0:
    // 0x12f6e0: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x12f6e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_12f6e4:
    // 0x12f6e4: 0x320f809  jalr        $t9
label_12f6e8:
    if (ctx->pc == 0x12F6E8u) {
        ctx->pc = 0x12F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6E4u;
        // 0x12f6e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F6ECu;
        goto label_12f6ec;
    }
    ctx->pc = 0x12F6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12F6ECu);
        ctx->pc = 0x12F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6E4u;
        // 0x12f6e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F6E4u, 0x12F6ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F6ECu;
label_12f6ec:
    // 0x12f6ec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12f6ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_12f6f0:
    // 0x12f6f0: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x12f6f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_12f6f4:
    // 0x12f6f4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_12f6f8:
    if (ctx->pc == 0x12F6F8u) {
        ctx->pc = 0x12F6FCu;
        goto label_fallthrough_0x12f6f4;
    }
    ctx->pc = 0x12F6F4u;
    {
        const bool branch_taken_0x12f6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f6f4) {
            ctx->pc = 0x12F6BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f6bc;
        }
    }
label_fallthrough_0x12f6f4:
    ctx->pc = 0x12F6FCu;
}
