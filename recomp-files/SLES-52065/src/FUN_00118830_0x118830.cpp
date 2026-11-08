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

// Function: FUN_00118830
// Address: 0x118830 - 0x1188a0
void FUN_00118830_0x118830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00118830_0x118830");
#endif

    switch (ctx->pc) {
        case 0x118870u: goto label_118870;
        case 0x118888u: goto label_118888;
        default: break;
    }

    ctx->pc = 0x118830u;

    // 0x118830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x118834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x118838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11883c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11883cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x118840: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118844: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x118844u;
    {
        const bool branch_taken_0x118844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x118848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118844u;
        // 0x118848: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118844) {
            ctx->pc = 0x118888u;
            goto label_118888;
        }
    }
    ctx->pc = 0x11884Cu;
    // 0x11884c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x11884cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x118850: 0x24428710  addiu       $v0, $v0, -0x78F0
    ctx->pc = 0x118850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936336));
    // 0x118854: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x118854u;
    {
        const bool branch_taken_0x118854 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x118858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118854u;
        // 0x118858: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118854) {
            ctx->pc = 0x118870u;
            goto label_118870;
        }
    }
    ctx->pc = 0x11885Cu;
    // 0x11885c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x11885cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x118860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x118860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118864: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x118864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x118868: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x118868u;
    SET_GPR_U32(ctx, 31, 0x118870u);
    ctx->pc = 0x11886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118868u;
    // 0x11886c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x118868u, 0x118870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118870u;
label_118870:
    // 0x118870: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x118870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x118874: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x118874u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x118878: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118878u;
    {
        const bool branch_taken_0x118878 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118878u;
        // 0x11887c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118878) {
            ctx->pc = 0x11888Cu;
            goto label_11888c;
        }
    }
    ctx->pc = 0x118880u;
    // 0x118880: 0xc0401a4  jal         func_100690
    ctx->pc = 0x118880u;
    SET_GPR_U32(ctx, 31, 0x118888u);
    ctx->pc = 0x118884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118880u;
    // 0x118884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x118880u, 0x118888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118888u;
label_118888:
    // 0x118888: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x118888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11888c:
    // 0x11888c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11888cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118898: 0x3e00008  jr          $ra
    ctx->pc = 0x118898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118898u;
        // 0x11889c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1188A0u;
}
