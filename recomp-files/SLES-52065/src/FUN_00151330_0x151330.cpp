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

// Function: FUN_00151330
// Address: 0x151330 - 0x1513bc
void FUN_00151330_0x151330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00151330_0x151330");
#endif

    switch (ctx->pc) {
        case 0x151364u: goto label_151364;
        case 0x151370u: goto label_151370;
        case 0x15138cu: goto label_15138c;
        case 0x1513a4u: goto label_1513a4;
        default: break;
    }

    ctx->pc = 0x151330u;

    // 0x151330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x151330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x151334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x151334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x151338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15133c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15133cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151340: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x151340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151344: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x151344u;
    {
        const bool branch_taken_0x151344 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x151348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151344u;
        // 0x151348: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151344) {
            ctx->pc = 0x1513A4u;
            goto label_1513a4;
        }
    }
    ctx->pc = 0x15134Cu;
    // 0x15134c: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15134Cu;
    {
        const bool branch_taken_0x15134c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x151350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15134Cu;
        // 0x151350: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15134c) {
            ctx->pc = 0x151390u;
            goto label_151390;
        }
    }
    ctx->pc = 0x151354u;
    // 0x151354: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x151354u;
    {
        const bool branch_taken_0x151354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x151358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151354u;
        // 0x151358: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151354) {
            ctx->pc = 0x15138Cu;
            goto label_15138c;
        }
    }
    ctx->pc = 0x15135Cu;
    // 0x15135c: 0xc05423c  jal         func_1508F0
    ctx->pc = 0x15135Cu;
    SET_GPR_U32(ctx, 31, 0x151364u);
    ctx->pc = 0x1508F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1508F0u, 0x15135Cu, 0x151364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151364u;
label_151364:
    // 0x151364: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x151364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x151368: 0xc05423c  jal         func_1508F0
    ctx->pc = 0x151368u;
    SET_GPR_U32(ctx, 31, 0x151370u);
    ctx->pc = 0x15136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151368u;
    // 0x15136c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1508F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1508F0u, 0x151368u, 0x151370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151370u;
label_151370:
    // 0x151370: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x151370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x151374: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x151374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x151378: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x151378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15137c: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x15137cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x151380: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x151380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x151384: 0xc054240  jal         func_150900
    ctx->pc = 0x151384u;
    SET_GPR_U32(ctx, 31, 0x15138Cu);
    ctx->pc = 0x151388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151384u;
    // 0x151388: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150900u, 0x151384u, 0x15138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15138Cu;
label_15138c:
    // 0x15138c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x15138cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_151390:
    // 0x151390: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x151390u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x151394: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151394u;
    {
        const bool branch_taken_0x151394 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x151398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151394u;
        // 0x151398: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151394) {
            ctx->pc = 0x1513A8u;
            goto label_1513a8;
        }
    }
    ctx->pc = 0x15139Cu;
    // 0x15139c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x15139Cu;
    SET_GPR_U32(ctx, 31, 0x1513A4u);
    ctx->pc = 0x1513A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15139Cu;
    // 0x1513a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x15139Cu, 0x1513A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1513A4u;
label_1513a4:
    // 0x1513a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1513a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1513a8:
    // 0x1513a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1513a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1513ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1513acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1513b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1513b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1513b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1513B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1513B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513B4u;
        // 0x1513b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1513B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1513BCu;
}
