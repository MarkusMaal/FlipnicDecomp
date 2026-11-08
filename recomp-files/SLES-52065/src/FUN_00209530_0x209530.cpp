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

// Function: FUN_00209530
// Address: 0x209530 - 0x2095b4
void FUN_00209530_0x209530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209530_0x209530");
#endif

    switch (ctx->pc) {
        case 0x209570u: goto label_209570;
        case 0x209580u: goto label_209580;
        case 0x209588u: goto label_209588;
        default: break;
    }

    ctx->pc = 0x209530u;

    // 0x209530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x209530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x209534: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x209534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x209538: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x209538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20953c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20953cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209540: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209544: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209548: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x209548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20954c: 0x3c100100  lui         $s0, 0x100
    ctx->pc = 0x20954cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)256 << 16));
    // 0x209550: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x209550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x209554: 0xc6800b  movn        $s0, $a2, $a2
    ctx->pc = 0x209554u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x209558: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x209558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x20955c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x20955cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x209560: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x209560u;
    {
        const bool branch_taken_0x209560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209560u;
        // 0x209564: 0x3c130022  lui         $s3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209560) {
            ctx->pc = 0x209598u;
            goto label_209598;
        }
    }
    ctx->pc = 0x209568u;
    // 0x209568: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x209568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x20956c: 0x0  nop
    ctx->pc = 0x20956cu;
    // NOP
label_209570:
    // 0x209570: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209570u;
    {
        const bool branch_taken_0x209570 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x209570) {
            ctx->pc = 0x209588u;
            goto label_209588;
        }
    }
    ctx->pc = 0x209578u;
    // 0x209578: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x209578u;
    SET_GPR_U32(ctx, 31, 0x209580u);
    ctx->pc = 0x20957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209578u;
    // 0x20957c: 0x26645c00  addiu       $a0, $s3, 0x5C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 23552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x209578u, 0x209580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209580u;
label_209580:
    // 0x209580: 0xc082716  jal         func_209C58
    ctx->pc = 0x209580u;
    SET_GPR_U32(ctx, 31, 0x209588u);
    ctx->pc = 0x209584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209580u;
    // 0x209584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C58u, 0x209580u, 0x209588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209588u;
label_209588:
    // 0x209588: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x209588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x20958c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x20958cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x209590: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x209590u;
    {
        const bool branch_taken_0x209590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209590u;
        // 0x209594: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209590) {
            ctx->pc = 0x209570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209570;
        }
    }
    ctx->pc = 0x209598u;
label_209598:
    // 0x209598: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x209598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20959c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x20959cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2095a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2095a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2095a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2095a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2095a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2095a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2095ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2095ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2095B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095ACu;
        // 0x2095b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2095ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2095B4u;
}
