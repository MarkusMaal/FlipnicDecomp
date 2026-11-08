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

// Function: FUN_001798e0
// Address: 0x1798e0 - 0x179954
void FUN_001798e0_0x1798e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001798e0_0x1798e0");
#endif

    switch (ctx->pc) {
        case 0x17990cu: goto label_17990c;
        case 0x179924u: goto label_179924;
        default: break;
    }

    ctx->pc = 0x1798e0u;

    // 0x1798e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1798e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1798e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1798e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1798e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1798e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1798ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1798ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1798f0: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x1798f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1798f4: 0x1c800003  bgtz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1798F4u;
    {
        const bool branch_taken_0x1798f4 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1798F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1798F4u;
        // 0x1798f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1798f4) {
            ctx->pc = 0x179904u;
            goto label_179904;
        }
    }
    ctx->pc = 0x1798FCu;
    // 0x1798fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1798FCu;
    {
        const bool branch_taken_0x1798fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1798FCu;
        // 0x179900: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1798fc) {
            ctx->pc = 0x179948u;
            goto label_179948;
        }
    }
    ctx->pc = 0x179904u;
label_179904:
    // 0x179904: 0xc045ae8  jal         func_116BA0
    ctx->pc = 0x179904u;
    SET_GPR_U32(ctx, 31, 0x17990Cu);
    ctx->pc = 0x116BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116BA0u, 0x179904u, 0x17990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17990Cu;
label_17990c:
    // 0x17990c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x17990cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x179910: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x179910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x179914: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x179914u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x179918: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x179918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17991c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17991Cu;
    {
        const bool branch_taken_0x17991c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17991Cu;
        // 0x179920: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17991c) {
            ctx->pc = 0x179930u;
            goto label_179930;
        }
    }
    ctx->pc = 0x179924u;
label_179924:
    // 0x179924: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x179924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x179928: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x179928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17992c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x17992cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_179930:
    // 0x179930: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x179930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x179934: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x179934u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x179938: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x179938u;
    {
        const bool branch_taken_0x179938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179938u;
        // 0x17993c: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179938) {
            ctx->pc = 0x179924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179924;
        }
    }
    ctx->pc = 0x179940u;
    // 0x179940: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x179940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179944: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x179944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_179948:
    // 0x179948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17994c: 0x3e00008  jr          $ra
    ctx->pc = 0x17994Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17994Cu;
        // 0x179950: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17994Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179954u;
}
