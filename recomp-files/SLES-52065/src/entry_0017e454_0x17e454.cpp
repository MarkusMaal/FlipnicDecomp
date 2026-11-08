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

// Function: entry_0017e454
// Address: 0x17e454 - 0x17e490
void entry_0017e454_0x17e454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e454_0x17e454");
#endif

    switch (ctx->pc) {
        case 0x17e464u: goto label_17e464;
        case 0x17e488u: goto label_17e488;
        default: break;
    }

    ctx->pc = 0x17e454u;

label_17e454:
    // 0x17e454: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x17e454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17e458:
    // 0x17e458: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x17e458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_17e45c:
    // 0x17e45c: 0x320f809  jalr        $t9
label_17e460:
    if (ctx->pc == 0x17E460u) {
        ctx->pc = 0x17E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E45Cu;
        // 0x17e460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E464u;
        goto label_17e464;
    }
    ctx->pc = 0x17E45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E464u);
        ctx->pc = 0x17E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E45Cu;
        // 0x17e460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E45Cu, 0x17E464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E464u;
label_17e464:
    // 0x17e464: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_17e468:
    if (ctx->pc == 0x17E468u) {
        ctx->pc = 0x17E46Cu;
        goto label_17e46c;
    }
    ctx->pc = 0x17E464u;
    {
        const bool branch_taken_0x17e464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e464) {
            ctx->pc = 0x17E490u;
            return;
        }
    }
    ctx->pc = 0x17E46Cu;
label_17e46c:
    // 0x17e46c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x17e46cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17e470:
    // 0x17e470: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17e470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17e474:
    // 0x17e474: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17e474u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_17e478:
    // 0x17e478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17e47c:
    // 0x17e47c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x17e47cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_17e480:
    // 0x17e480: 0x320f809  jalr        $t9
label_17e484:
    if (ctx->pc == 0x17E484u) {
        ctx->pc = 0x17E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E480u;
        // 0x17e484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E488u;
        goto label_17e488;
    }
    ctx->pc = 0x17E480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E488u);
        ctx->pc = 0x17E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E480u;
        // 0x17e484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E480u, 0x17E488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E488u;
label_17e488:
    // 0x17e488: 0x10000002  b           . + 4 + (0x2 << 2)
label_17e48c:
    if (ctx->pc == 0x17E48Cu) {
        ctx->pc = 0x17E490u;
        goto label_fallthrough_0x17e488;
    }
    ctx->pc = 0x17E488u;
    {
        const bool branch_taken_0x17e488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e488) {
            ctx->pc = 0x17E494u;
            return;
        }
    }
label_fallthrough_0x17e488:
    ctx->pc = 0x17E490u;
}
