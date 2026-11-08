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

// Function: FUN_001b15b0
// Address: 0x1b15b0 - 0x1b165c
void FUN_001b15b0_0x1b15b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b15b0_0x1b15b0");
#endif

    switch (ctx->pc) {
        case 0x1b15e0u: goto label_1b15e0;
        case 0x1b15f8u: goto label_1b15f8;
        case 0x1b1604u: goto label_1b1604;
        default: break;
    }

    ctx->pc = 0x1b15b0u;

    // 0x1b15b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b15b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b15b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b15b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b15b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b15b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b15bc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1b15bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1b15c0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1b15c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1b15c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b15c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B15C8u;
    {
        const bool branch_taken_0x1b15c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B15CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15C8u;
        // 0x1b15cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15c8) {
            ctx->pc = 0x1B15E8u;
            goto label_1b15e8;
        }
    }
    ctx->pc = 0x1B15D0u;
    // 0x1b15d0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b15d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b15d4: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1b15d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1b15d8: 0xc061fa8  jal         func_187EA0
    ctx->pc = 0x1B15D8u;
    SET_GPR_U32(ctx, 31, 0x1B15E0u);
    ctx->pc = 0x1B15DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B15D8u;
    // 0x1b15dc: 0x24a50c70  addiu       $a1, $a1, 0xC70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B15D8u, 0x1B15E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B15E0u;
label_1b15e0:
    // 0x1b15e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B15E0u;
    {
        const bool branch_taken_0x1b15e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B15E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15E0u;
        // 0x1b15e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15e0) {
            ctx->pc = 0x1B15FCu;
            goto label_1b15fc;
        }
    }
    ctx->pc = 0x1B15E8u;
label_1b15e8:
    // 0x1b15e8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b15e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b15ec: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1b15ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1b15f0: 0xc061fa8  jal         func_187EA0
    ctx->pc = 0x1B15F0u;
    SET_GPR_U32(ctx, 31, 0x1B15F8u);
    ctx->pc = 0x1B15F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B15F0u;
    // 0x1b15f4: 0x24a50c88  addiu       $a1, $a1, 0xC88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B15F0u, 0x1B15F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B15F8u;
label_1b15f8:
    // 0x1b15f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b15f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b15fc:
    // 0x1b15fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b15fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1600: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b1600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1b1604:
    // 0x1b1604: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x1b1604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1b1608: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1b1608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1b160c: 0xacc30058  sw          $v1, 0x58($a2)
    ctx->pc = 0x1b160cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 3));
    // 0x1b1610: 0x2c820020  sltiu       $v0, $a0, 0x20
    ctx->pc = 0x1b1610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1b1614: 0xacc3005c  sw          $v1, 0x5C($a2)
    ctx->pc = 0x1b1614u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 3));
    // 0x1b1618: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1b1618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1b161c: 0xacc30060  sw          $v1, 0x60($a2)
    ctx->pc = 0x1b161cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 3));
    // 0x1b1620: 0xacc30064  sw          $v1, 0x64($a2)
    ctx->pc = 0x1b1620u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 3));
    // 0x1b1624: 0xacc30068  sw          $v1, 0x68($a2)
    ctx->pc = 0x1b1624u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 104), GPR_U32(ctx, 3));
    // 0x1b1628: 0xacc3006c  sw          $v1, 0x6C($a2)
    ctx->pc = 0x1b1628u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 3));
    // 0x1b162c: 0xacc30070  sw          $v1, 0x70($a2)
    ctx->pc = 0x1b162cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 3));
    // 0x1b1630: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B1630u;
    {
        const bool branch_taken_0x1b1630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1630u;
        // 0x1b1634: 0xacc30074  sw          $v1, 0x74($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1630) {
            ctx->pc = 0x1B1604u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1604;
        }
    }
    ctx->pc = 0x1B1638u;
    // 0x1b1638: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1b1638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1b163c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b163cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1640: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1b1640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1b1644: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1b1644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1b1648: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1b1648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1b164c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b164cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1650: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b1650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1654: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1654u;
        // 0x1b1658: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B165Cu;
}
