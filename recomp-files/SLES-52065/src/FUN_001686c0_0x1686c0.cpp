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

// Function: FUN_001686c0
// Address: 0x1686c0 - 0x16871c
void FUN_001686c0_0x1686c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001686c0_0x1686c0");
#endif

    switch (ctx->pc) {
        case 0x1686dcu: goto label_1686dc;
        default: break;
    }

    ctx->pc = 0x1686c0u;

    // 0x1686c0: 0x8c860220  lw          $a2, 0x220($a0)
    ctx->pc = 0x1686c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x1686c4: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1686C4u;
    {
        const bool branch_taken_0x1686c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1686c4) {
            ctx->pc = 0x168710u;
            goto label_168710;
        }
    }
    ctx->pc = 0x1686CCu;
    // 0x1686cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1686ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1686d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686d4: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1686d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1686d8: 0x0  nop
    ctx->pc = 0x1686d8u;
    // NOP
label_1686dc:
    // 0x1686dc: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1686dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1686e0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1686e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1686e4: 0x14460006  bne         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1686E4u;
    {
        const bool branch_taken_0x1686e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1686e4) {
            ctx->pc = 0x168700u;
            goto label_168700;
        }
    }
    ctx->pc = 0x1686ECu;
    // 0x1686ec: 0xa0c001f4  sb          $zero, 0x1F4($a2)
    ctx->pc = 0x1686ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 500), (uint8_t)GPR_U32(ctx, 0));
    // 0x1686f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1686f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1686f4: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1686f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1686f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1686F8u;
    {
        const bool branch_taken_0x1686f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1686FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686F8u;
        // 0x1686fc: 0xac642cd0  sw          $a0, 0x2CD0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11472), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686f8) {
            ctx->pc = 0x168714u;
            goto label_168714;
        }
    }
    ctx->pc = 0x168700u;
label_168700:
    // 0x168700: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x168700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x168704: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x168704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x168708: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x168708u;
    {
        const bool branch_taken_0x168708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168708u;
        // 0x16870c: 0x24a503d0  addiu       $a1, $a1, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168708) {
            ctx->pc = 0x1686DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1686dc;
        }
    }
    ctx->pc = 0x168710u;
label_168710:
    // 0x168710: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x168710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168714:
    // 0x168714: 0x3e00008  jr          $ra
    ctx->pc = 0x168714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16871Cu;
}
