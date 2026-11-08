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

// Function: FUN_002003e0
// Address: 0x2003e0 - 0x200448
void FUN_002003e0_0x2003e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002003e0_0x2003e0");
#endif

    switch (ctx->pc) {
        case 0x2003fcu: goto label_2003fc;
        case 0x200420u: goto label_200420;
        default: break;
    }

    ctx->pc = 0x2003e0u;

    // 0x2003e0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2003e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2003e4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2003e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2003e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2003e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2003ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2003ECu;
    {
        const bool branch_taken_0x2003ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2003F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003ECu;
        // 0x2003f0: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003ec) {
            ctx->pc = 0x20040Cu;
            goto label_20040c;
        }
    }
    ctx->pc = 0x2003F4u;
    // 0x2003f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2003F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2003F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2003FCu;
label_2003fc:
    // 0x2003fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2003fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200400: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x200400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200404: 0x3e00008  jr          $ra
    ctx->pc = 0x200404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200404u;
        // 0x200408: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20040Cu;
label_20040c:
    // 0x20040c: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x20040cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x200410: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x200410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x200414: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x200414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x200418: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x200418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20041c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x20041cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_200420:
    // 0x200420: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x200420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x200424: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x200424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x200428: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x200428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20042c: 0x5444fff3  bnel        $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x20042Cu;
    {
        const bool branch_taken_0x20042c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x20042c) {
            ctx->pc = 0x200430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20042Cu;
            // 0x200430: 0x44202b  sltu        $a0, $v0, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2003FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2003fc;
        }
    }
    ctx->pc = 0x200434u;
    // 0x200434: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x200434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x200438: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x200438u;
    {
        const bool branch_taken_0x200438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200438u;
        // 0x20043c: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200438) {
            ctx->pc = 0x200420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200420;
        }
    }
    ctx->pc = 0x200440u;
    // 0x200440: 0x3e00008  jr          $ra
    ctx->pc = 0x200440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200440u;
        // 0x200444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200448u;
}
