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

// Function: FUN_001f78b0
// Address: 0x1f78b0 - 0x1f791c
void FUN_001f78b0_0x1f78b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f78b0_0x1f78b0");
#endif

    switch (ctx->pc) {
        case 0x1f78d8u: goto label_1f78d8;
        case 0x1f78e0u: goto label_1f78e0;
        case 0x1f78e8u: goto label_1f78e8;
        case 0x1f78f0u: goto label_1f78f0;
        case 0x1f790cu: goto label_1f790c;
        default: break;
    }

    ctx->pc = 0x1f78b0u;

    // 0x1f78b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f78b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f78b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f78b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f78b8: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F78B8u;
    {
        const bool branch_taken_0x1f78b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78B8u;
        // 0x1f78bc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78b8) {
            ctx->pc = 0x1F7900u;
            goto label_1f7900;
        }
    }
    ctx->pc = 0x1F78C0u;
    // 0x1f78c0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f78c4: 0x8c43bb10  lw          $v1, -0x44F0($v0)
    ctx->pc = 0x1f78c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21BB10u));
    // 0x1f78c8: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F78C8u;
    {
        const bool branch_taken_0x1f78c8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F78CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78C8u;
        // 0x1f78cc: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78c8) {
            ctx->pc = 0x1F78D8u;
            goto label_1f78d8;
        }
    }
    ctx->pc = 0x1F78D0u;
    // 0x1f78d0: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F78D0u;
    SET_GPR_U32(ctx, 31, 0x1F78D8u);
    ctx->pc = 0x1F78D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F78D0u;
    // 0x1f78d4: 0x24844748  addiu       $a0, $a0, 0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F78D0u, 0x1F78D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F78D8u;
label_1f78d8:
    // 0x1f78d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F78D8u;
    {
        const bool branch_taken_0x1f78d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78D8u;
        // 0x1f78dc: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78d8) {
            ctx->pc = 0x1F78E8u;
            goto label_1f78e8;
        }
    }
    ctx->pc = 0x1F78E0u;
label_1f78e0:
    // 0x1f78e0: 0xc07db24  jal         func_1F6C90
    ctx->pc = 0x1F78E0u;
    SET_GPR_U32(ctx, 31, 0x1F78E8u);
    ctx->pc = 0x1F78E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F78E0u;
    // 0x1f78e4: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6C90u, 0x1F78E0u, 0x1F78E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F78E8u;
label_1f78e8:
    // 0x1f78e8: 0xc07ba5a  jal         func_1EE968
    ctx->pc = 0x1F78E8u;
    SET_GPR_U32(ctx, 31, 0x1F78F0u);
    ctx->pc = 0x1F78ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F78E8u;
    // 0x1f78ec: 0x2604d680  addiu       $a0, $s0, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE968u, 0x1F78E8u, 0x1F78F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F78F0u;
label_1f78f0:
    // 0x1f78f0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F78F0u;
    {
        const bool branch_taken_0x1f78f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78F0u;
        // 0x1f78f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78f0) {
            ctx->pc = 0x1F78E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f78e0;
        }
    }
    ctx->pc = 0x1F78F8u;
    // 0x1f78f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F78F8u;
    {
        const bool branch_taken_0x1f78f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78F8u;
        // 0x1f78fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78f8) {
            ctx->pc = 0x1F7910u;
            goto label_1f7910;
        }
    }
    ctx->pc = 0x1F7900u;
label_1f7900:
    // 0x1f7900: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f7900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f7904: 0xc07ba5a  jal         func_1EE968
    ctx->pc = 0x1F7904u;
    SET_GPR_U32(ctx, 31, 0x1F790Cu);
    ctx->pc = 0x1F7908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7904u;
    // 0x1f7908: 0x2484d680  addiu       $a0, $a0, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE968u, 0x1F7904u, 0x1F790Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F790Cu;
label_1f790c:
    // 0x1f790c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f790cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f7910:
    // 0x1f7910: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7914: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7914u;
        // 0x1f7918: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F791Cu;
}
