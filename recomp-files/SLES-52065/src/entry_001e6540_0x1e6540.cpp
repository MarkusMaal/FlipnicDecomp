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

// Function: entry_001e6540
// Address: 0x1e6540 - 0x1e6598
void entry_001e6540_0x1e6540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6540_0x1e6540");
#endif

    switch (ctx->pc) {
        case 0x1e6560u: goto label_1e6560;
        default: break;
    }

    ctx->pc = 0x1e6540u;

label_1e6540:
    // 0x1e6540: 0x26450028  addiu       $a1, $s2, 0x28
    ctx->pc = 0x1e6540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_1e6544:
    // 0x1e6544: 0xafa6004c  sw          $a2, 0x4C($sp)
    ctx->pc = 0x1e6544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
label_1e6548:
    // 0x1e6548: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x1e6548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_1e654c:
    // 0x1e654c: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1e654cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1e6550:
    // 0x1e6550: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e6550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6554:
    // 0x1e6554: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1e6554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1e6558:
    // 0x1e6558: 0x320f809  jalr        $t9
label_1e655c:
    if (ctx->pc == 0x1E655Cu) {
        ctx->pc = 0x1E655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6558u;
        // 0x1e655c: 0x27a8004c  addiu       $t0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6560u;
        goto label_1e6560;
    }
    ctx->pc = 0x1E6558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6560u);
        ctx->pc = 0x1E655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6558u;
        // 0x1e655c: 0x27a8004c  addiu       $t0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6558u, 0x1E6560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6560u;
label_1e6560:
    // 0x1e6560: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e6560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e6564:
    // 0x1e6564: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e6564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e6568:
    // 0x1e6568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e656c:
    // 0x1e656c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1e6570:
    if (ctx->pc == 0x1E6570u) {
        ctx->pc = 0x1E6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E656Cu;
        // 0x1e6570: 0x27b10048  addiu       $s1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6574u;
        goto label_1e6574;
    }
    ctx->pc = 0x1E656Cu;
    {
        const bool branch_taken_0x1e656c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E656Cu;
        // 0x1e6570: 0x27b10048  addiu       $s1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e656c) {
            ctx->pc = 0x1E65A0u;
            return;
        }
    }
    ctx->pc = 0x1E6574u;
label_1e6574:
    // 0x1e6574: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1e6578:
    if (ctx->pc == 0x1E6578u) {
        ctx->pc = 0x1E6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6574u;
        // 0x1e6578: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E657Cu;
        goto label_1e657c;
    }
    ctx->pc = 0x1E6574u;
    {
        const bool branch_taken_0x1e6574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6574u;
        // 0x1e6578: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6574) {
            ctx->pc = 0x1E65A0u;
            return;
        }
    }
    ctx->pc = 0x1E657Cu;
label_1e657c:
    // 0x1e657c: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
label_1e6580:
    if (ctx->pc == 0x1E6580u) {
        ctx->pc = 0x1E6584u;
        goto label_1e6584;
    }
    ctx->pc = 0x1E657Cu;
    {
        const bool branch_taken_0x1e657c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e657c) {
            ctx->pc = 0x1E668Cu;
            return;
        }
    }
    ctx->pc = 0x1E6584u;
label_1e6584:
    // 0x1e6584: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e6584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e6588:
    // 0x1e6588: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1e658c:
    if (ctx->pc == 0x1E658Cu) {
        ctx->pc = 0x1E6590u;
        goto label_1e6590;
    }
    ctx->pc = 0x1E6588u;
    {
        const bool branch_taken_0x1e6588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e6588) {
            ctx->pc = 0x1E6598u;
            return;
        }
    }
    ctx->pc = 0x1E6590u;
label_1e6590:
    // 0x1e6590: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1e6594:
    if (ctx->pc == 0x1E6594u) {
        ctx->pc = 0x1E6598u;
        goto label_fallthrough_0x1e6590;
    }
    ctx->pc = 0x1E6590u;
    {
        const bool branch_taken_0x1e6590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6590) {
            ctx->pc = 0x1E668Cu;
            return;
        }
    }
label_fallthrough_0x1e6590:
    ctx->pc = 0x1E6598u;
}
