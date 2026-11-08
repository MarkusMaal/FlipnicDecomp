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

// Function: entry_001e47d0
// Address: 0x1e47d0 - 0x1e4808
void entry_001e47d0_0x1e47d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e47d0_0x1e47d0");
#endif

    switch (ctx->pc) {
        case 0x1e47f8u: goto label_1e47f8;
        default: break;
    }

    ctx->pc = 0x1e47d0u;

label_1e47d0:
    // 0x1e47d0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1e47d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1e47d4:
    // 0x1e47d4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1e47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1e47d8:
    // 0x1e47d8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e47d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e47dc:
    // 0x1e47dc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1e47e0:
    if (ctx->pc == 0x1E47E0u) {
        ctx->pc = 0x1E47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47DCu;
        // 0x1e47e0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E47E4u;
        goto label_1e47e4;
    }
    ctx->pc = 0x1E47DCu;
    {
        const bool branch_taken_0x1e47dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47DCu;
        // 0x1e47e0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47dc) {
            ctx->pc = 0x1E4808u;
            return;
        }
    }
    ctx->pc = 0x1E47E4u;
label_1e47e4:
    // 0x1e47e4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1e47e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e47e8:
    // 0x1e47e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e47e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e47ec:
    // 0x1e47ec: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e47ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e47f0:
    // 0x1e47f0: 0x320f809  jalr        $t9
label_1e47f4:
    if (ctx->pc == 0x1E47F4u) {
        ctx->pc = 0x1E47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47F0u;
        // 0x1e47f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E47F8u;
        goto label_1e47f8;
    }
    ctx->pc = 0x1E47F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E47F8u);
        ctx->pc = 0x1E47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47F0u;
        // 0x1e47f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E47F0u, 0x1E47F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E47F8u;
label_1e47f8:
    // 0x1e47f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e47f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e47fc:
    // 0x1e47fc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e4800:
    if (ctx->pc == 0x1E4800u) {
        ctx->pc = 0x1E4804u;
        goto label_1e4804;
    }
    ctx->pc = 0x1E47FCu;
    {
        const bool branch_taken_0x1e47fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e47fc) {
            ctx->pc = 0x1E4808u;
            return;
        }
    }
    ctx->pc = 0x1E4804u;
label_1e4804:
    // 0x1e4804: 0x64150001  daddiu      $s5, $zero, 0x1
    ctx->pc = 0x1e4804u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->pc = 0x1e4808u;
}
