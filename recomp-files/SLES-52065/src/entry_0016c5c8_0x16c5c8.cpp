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

// Function: entry_0016c5c8
// Address: 0x16c5c8 - 0x16c5f4
void entry_0016c5c8_0x16c5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c5c8_0x16c5c8");
#endif

    ctx->pc = 0x16c5c8u;

label_16c5c8:
    // 0x16c5c8: 0x86230222  lh          $v1, 0x222($s1)
    ctx->pc = 0x16c5c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
label_16c5cc:
    // 0x16c5cc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_16c5d0:
    if (ctx->pc == 0x16C5D0u) {
        ctx->pc = 0x16C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5CCu;
        // 0x16c5d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5D4u;
        goto label_16c5d4;
    }
    ctx->pc = 0x16C5CCu;
    {
        const bool branch_taken_0x16c5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5CCu;
        // 0x16c5d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5cc) {
            ctx->pc = 0x16C5F8u;
            return;
        }
    }
    ctx->pc = 0x16C5D4u;
label_16c5d4:
    // 0x16c5d4: 0x86220220  lh          $v0, 0x220($s1)
    ctx->pc = 0x16c5d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
label_16c5d8:
    // 0x16c5d8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x16c5d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_16c5dc:
    // 0x16c5dc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_16c5e0:
    if (ctx->pc == 0x16C5E0u) {
        ctx->pc = 0x16C5E4u;
        goto label_16c5e4;
    }
    ctx->pc = 0x16C5DCu;
    {
        const bool branch_taken_0x16c5dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c5dc) {
            ctx->pc = 0x16C5F4u;
            return;
        }
    }
    ctx->pc = 0x16C5E4u;
label_16c5e4:
    // 0x16c5e4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c5e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c5e8:
    // 0x16c5e8: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x16c5e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_16c5ec:
    // 0x16c5ec: 0x320f809  jalr        $t9
label_16c5f0:
    if (ctx->pc == 0x16C5F0u) {
        ctx->pc = 0x16C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5ECu;
        // 0x16c5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5F4u;
        goto label_fallthrough_0x16c5ec;
    }
    ctx->pc = 0x16C5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C5F4u);
        ctx->pc = 0x16C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5ECu;
        // 0x16c5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C5ECu, 0x16C5F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16c5ec:
    ctx->pc = 0x16C5F4u;
}
