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

// Function: entry_0016c7c8
// Address: 0x16c7c8 - 0x16c7f0
void entry_0016c7c8_0x16c7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c7c8_0x16c7c8");
#endif

    switch (ctx->pc) {
        case 0x16c7e8u: goto label_16c7e8;
        default: break;
    }

    ctx->pc = 0x16c7c8u;

label_16c7c8:
    // 0x16c7c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c7cc:
    // 0x16c7cc: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
label_16c7d0:
    if (ctx->pc == 0x16C7D0u) {
        ctx->pc = 0x16C7D4u;
        goto label_16c7d4;
    }
    ctx->pc = 0x16C7CCu;
    {
        const bool branch_taken_0x16c7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x16c7cc) {
            ctx->pc = 0x16C7F0u;
            return;
        }
    }
    ctx->pc = 0x16C7D4u;
label_16c7d4:
    // 0x16c7d4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c7d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c7d8:
    // 0x16c7d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c7dc:
    // 0x16c7dc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16c7dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16c7e0:
    // 0x16c7e0: 0x320f809  jalr        $t9
label_16c7e4:
    if (ctx->pc == 0x16C7E4u) {
        ctx->pc = 0x16C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7E0u;
        // 0x16c7e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C7E8u;
        goto label_16c7e8;
    }
    ctx->pc = 0x16C7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C7E8u);
        ctx->pc = 0x16C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7E0u;
        // 0x16c7e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C7E0u, 0x16C7E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C7E8u;
label_16c7e8:
    // 0x16c7e8: 0x10000019  b           . + 4 + (0x19 << 2)
label_16c7ec:
    if (ctx->pc == 0x16C7ECu) {
        ctx->pc = 0x16C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7E8u;
        // 0x16c7ec: 0x8e2401d4  lw          $a0, 0x1D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C7F0u;
        goto label_fallthrough_0x16c7e8;
    }
    ctx->pc = 0x16C7E8u;
    {
        const bool branch_taken_0x16c7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7E8u;
        // 0x16c7ec: 0x8e2401d4  lw          $a0, 0x1D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c7e8) {
            ctx->pc = 0x16C850u;
            return;
        }
    }
label_fallthrough_0x16c7e8:
    ctx->pc = 0x16C7F0u;
}
