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

// Function: entry_001e3770
// Address: 0x1e3770 - 0x1e37a8
void entry_001e3770_0x1e3770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3770_0x1e3770");
#endif

    switch (ctx->pc) {
        case 0x1e3798u: goto label_1e3798;
        default: break;
    }

    ctx->pc = 0x1e3770u;

label_1e3770:
    // 0x1e3770: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1e3770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1e3774:
    // 0x1e3774: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1e3774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1e3778:
    // 0x1e3778: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e3778u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e377c:
    // 0x1e377c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1e3780:
    if (ctx->pc == 0x1E3780u) {
        ctx->pc = 0x1E3780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E377Cu;
        // 0x1e3780: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3784u;
        goto label_1e3784;
    }
    ctx->pc = 0x1E377Cu;
    {
        const bool branch_taken_0x1e377c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E377Cu;
        // 0x1e3780: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e377c) {
            ctx->pc = 0x1E37A8u;
            return;
        }
    }
    ctx->pc = 0x1E3784u;
label_1e3784:
    // 0x1e3784: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1e3784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e3788:
    // 0x1e3788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e3788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e378c:
    // 0x1e378c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e378cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e3790:
    // 0x1e3790: 0x320f809  jalr        $t9
label_1e3794:
    if (ctx->pc == 0x1E3794u) {
        ctx->pc = 0x1E3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3790u;
        // 0x1e3794: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3798u;
        goto label_1e3798;
    }
    ctx->pc = 0x1E3790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3798u);
        ctx->pc = 0x1E3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3790u;
        // 0x1e3794: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3790u, 0x1E3798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3798u;
label_1e3798:
    // 0x1e3798: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e3798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e379c:
    // 0x1e379c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e37a0:
    if (ctx->pc == 0x1E37A0u) {
        ctx->pc = 0x1E37A4u;
        goto label_1e37a4;
    }
    ctx->pc = 0x1E379Cu;
    {
        const bool branch_taken_0x1e379c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e379c) {
            ctx->pc = 0x1E37A8u;
            return;
        }
    }
    ctx->pc = 0x1E37A4u;
label_1e37a4:
    // 0x1e37a4: 0x64150001  daddiu      $s5, $zero, 0x1
    ctx->pc = 0x1e37a4u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->pc = 0x1e37a8u;
}
