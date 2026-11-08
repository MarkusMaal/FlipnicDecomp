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

// Function: FUN_001315f0
// Address: 0x1315f0 - 0x13168c
void FUN_001315f0_0x1315f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001315f0_0x1315f0");
#endif

    switch (ctx->pc) {
        case 0x131610u: goto label_131610;
        case 0x13161cu: goto label_13161c;
        case 0x131638u: goto label_131638;
        case 0x131678u: goto label_131678;
        default: break;
    }

    ctx->pc = 0x1315f0u;

    // 0x1315f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1315f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1315f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1315f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1315f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1315f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1315fc: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x1315fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x131600: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x131600u;
    {
        const bool branch_taken_0x131600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x131604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131600u;
        // 0x131604: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131600) {
            ctx->pc = 0x13167Cu;
            goto label_13167c;
        }
    }
    ctx->pc = 0x131608u;
    // 0x131608: 0xc04c554  jal         func_131550
    ctx->pc = 0x131608u;
    SET_GPR_U32(ctx, 31, 0x131610u);
    ctx->pc = 0x13160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131608u;
    // 0x13160c: 0x24640058  addiu       $a0, $v1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x131608u, 0x131610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131610u;
label_131610:
    // 0x131610: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x131610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x131614: 0xc04c54c  jal         func_131530
    ctx->pc = 0x131614u;
    SET_GPR_U32(ctx, 31, 0x13161Cu);
    ctx->pc = 0x131618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131614u;
    // 0x131618: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x131614u, 0x13161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13161Cu;
label_13161c:
    // 0x13161c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x13161cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x131620: 0x27a3002c  addiu       $v1, $sp, 0x2C
    ctx->pc = 0x131620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x131624: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x131624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x131628: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x131628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x13162c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13162cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131630: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x131630u;
    {
        const bool branch_taken_0x131630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131630u;
        // 0x131634: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131630) {
            ctx->pc = 0x131644u;
            goto label_131644;
        }
    }
    ctx->pc = 0x131638u;
label_131638:
    // 0x131638: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x131638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13163c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x131640: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x131640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_131644:
    // 0x131644: 0x0  nop
    ctx->pc = 0x131644u;
    // NOP
    // 0x131648: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13164c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x13164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x131650: 0x1450fff9  bne         $v0, $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x131650u;
    {
        const bool branch_taken_0x131650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x131650) {
            ctx->pc = 0x131638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131638;
        }
    }
    ctx->pc = 0x131658u;
    // 0x131658: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x131658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x13165c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x13165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x131660: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x131660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x131664: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x131664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x131668: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x131668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x13166c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131670: 0xc04c91c  jal         func_132470
    ctx->pc = 0x131670u;
    SET_GPR_U32(ctx, 31, 0x131678u);
    ctx->pc = 0x131674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131670u;
    // 0x131674: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132470u, 0x131670u, 0x131678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131678u;
label_131678:
    // 0x131678: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x131678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_13167c:
    // 0x13167c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13167cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131684: 0x3e00008  jr          $ra
    ctx->pc = 0x131684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131684u;
        // 0x131688: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13168Cu;
}
