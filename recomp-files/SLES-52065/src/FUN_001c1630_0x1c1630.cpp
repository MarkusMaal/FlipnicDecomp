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

// Function: FUN_001c1630
// Address: 0x1c1630 - 0x1c1690
void FUN_001c1630_0x1c1630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c1630_0x1c1630");
#endif

    switch (ctx->pc) {
        case 0x1c1660u: goto label_1c1660;
        case 0x1c1678u: goto label_1c1678;
        default: break;
    }

    ctx->pc = 0x1c1630u;

    // 0x1c1630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c1634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c1638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c163c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c163cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1644: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C1644u;
    {
        const bool branch_taken_0x1c1644 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1644u;
        // 0x1c1648: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1644) {
            ctx->pc = 0x1C1678u;
            goto label_1c1678;
        }
    }
    ctx->pc = 0x1C164Cu;
    // 0x1c164c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1c164cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1c1650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1654: 0x2442bad0  addiu       $v0, $v0, -0x4530
    ctx->pc = 0x1c1654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949584));
    // 0x1c1658: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1C1658u;
    SET_GPR_U32(ctx, 31, 0x1C1660u);
    ctx->pc = 0x1C165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1658u;
    // 0x1c165c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1C1658u, 0x1C1660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1660u;
label_1c1660:
    // 0x1c1660: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1c1660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1c1664: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c1664u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c1668: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1668u;
    {
        const bool branch_taken_0x1c1668 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1668u;
        // 0x1c166c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1668) {
            ctx->pc = 0x1C167Cu;
            goto label_1c167c;
        }
    }
    ctx->pc = 0x1C1670u;
    // 0x1c1670: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C1670u;
    SET_GPR_U32(ctx, 31, 0x1C1678u);
    ctx->pc = 0x1C1674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1670u;
    // 0x1c1674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C1670u, 0x1C1678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1678u;
label_1c1678:
    // 0x1c1678: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c1678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c167c:
    // 0x1c167c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c167cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1688: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1688u;
        // 0x1c168c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1690u;
}
