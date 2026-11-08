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

// Function: FUN_002012e8
// Address: 0x2012e8 - 0x201358
void FUN_002012e8_0x2012e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002012e8_0x2012e8");
#endif

    switch (ctx->pc) {
        case 0x20130cu: goto label_20130c;
        case 0x201328u: goto label_201328;
        default: break;
    }

    ctx->pc = 0x2012e8u;

    // 0x2012e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2012e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2012ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2012ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2012f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2012f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2012f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2012f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012f8: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x2012f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x2012fc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2012FCu;
    {
        const bool branch_taken_0x2012fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012FCu;
        // 0x201300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012fc) {
            ctx->pc = 0x201348u;
            goto label_201348;
        }
    }
    ctx->pc = 0x201304u;
    // 0x201304: 0xc07fbb2  jal         func_1FEEC8
    ctx->pc = 0x201304u;
    SET_GPR_U32(ctx, 31, 0x20130Cu);
    ctx->pc = 0x201308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201304u;
    // 0x201308: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEC8u, 0x201304u, 0x20130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20130Cu;
label_20130c:
    // 0x20130c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20130Cu;
    {
        const bool branch_taken_0x20130c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20130Cu;
        // 0x201310: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20130c) {
            ctx->pc = 0x20131Cu;
            goto label_20131c;
        }
    }
    ctx->pc = 0x201314u;
    // 0x201314: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x201314u;
    {
        const bool branch_taken_0x201314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201314u;
        // 0x201318: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201314) {
            ctx->pc = 0x201348u;
            goto label_201348;
        }
    }
    ctx->pc = 0x20131Cu;
label_20131c:
    // 0x20131c: 0x2442007c  addiu       $v0, $v0, 0x7C
    ctx->pc = 0x20131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x201320: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x201320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x201324: 0x0  nop
    ctx->pc = 0x201324u;
    // NOP
label_201328:
    // 0x201328: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x201328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20132c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20132cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x201330: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x201330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x201334: 0x0  nop
    ctx->pc = 0x201334u;
    // NOP
    // 0x201338: 0x0  nop
    ctx->pc = 0x201338u;
    // NOP
    // 0x20133c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20133Cu;
    {
        const bool branch_taken_0x20133c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x20133c) {
            ctx->pc = 0x201328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201328;
        }
    }
    ctx->pc = 0x201344u;
    // 0x201344: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201348:
    // 0x201348: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20134c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20134cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201350: 0x3e00008  jr          $ra
    ctx->pc = 0x201350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201350u;
        // 0x201354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201358u;
}
