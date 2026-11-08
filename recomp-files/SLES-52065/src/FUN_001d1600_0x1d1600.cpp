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

// Function: FUN_001d1600
// Address: 0x1d1600 - 0x1d1660
void FUN_001d1600_0x1d1600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1600_0x1d1600");
#endif

    switch (ctx->pc) {
        case 0x1d1630u: goto label_1d1630;
        case 0x1d1648u: goto label_1d1648;
        default: break;
    }

    ctx->pc = 0x1d1600u;

    // 0x1d1600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d1604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d1608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d160c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d1610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1614: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D1614u;
    {
        const bool branch_taken_0x1d1614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1614u;
        // 0x1d1618: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1614) {
            ctx->pc = 0x1D1648u;
            goto label_1d1648;
        }
    }
    ctx->pc = 0x1D161Cu;
    // 0x1d161c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1d161cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1d1620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1624: 0x2442c070  addiu       $v0, $v0, -0x3F90
    ctx->pc = 0x1d1624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951024));
    // 0x1d1628: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1D1628u;
    SET_GPR_U32(ctx, 31, 0x1D1630u);
    ctx->pc = 0x1D162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1628u;
    // 0x1d162c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1D1628u, 0x1D1630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1630u;
label_1d1630:
    // 0x1d1630: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1d1630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1d1634: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d1634u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d1638: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1638u;
    {
        const bool branch_taken_0x1d1638 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1638u;
        // 0x1d163c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1638) {
            ctx->pc = 0x1D164Cu;
            goto label_1d164c;
        }
    }
    ctx->pc = 0x1D1640u;
    // 0x1d1640: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1D1640u;
    SET_GPR_U32(ctx, 31, 0x1D1648u);
    ctx->pc = 0x1D1644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1640u;
    // 0x1d1644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1D1640u, 0x1D1648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1648u;
label_1d1648:
    // 0x1d1648: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d1648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d164c:
    // 0x1d164c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d164cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1658: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1658u;
        // 0x1d165c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1660u;
}
