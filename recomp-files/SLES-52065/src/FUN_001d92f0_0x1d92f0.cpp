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

// Function: FUN_001d92f0
// Address: 0x1d92f0 - 0x1d93a8
void FUN_001d92f0_0x1d92f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d92f0_0x1d92f0");
#endif

    switch (ctx->pc) {
        case 0x1d933cu: goto label_1d933c;
        case 0x1d9360u: goto label_1d9360;
        case 0x1d936cu: goto label_1d936c;
        case 0x1d9378u: goto label_1d9378;
        case 0x1d9388u: goto label_1d9388;
        default: break;
    }

    ctx->pc = 0x1d92f0u;

    // 0x1d92f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d92f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d92f4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d92f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d92f8: 0x2c830020  sltiu       $v1, $a0, 0x20
    ctx->pc = 0x1d92f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d92fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d92fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9300: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9304: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x1d9304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d9308: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d930c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d930cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d9310: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D9310u;
    {
        const bool branch_taken_0x1d9310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9310u;
        // 0x1d9314: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9310) {
            ctx->pc = 0x1D9388u;
            goto label_1d9388;
        }
    }
    ctx->pc = 0x1D9318u;
    // 0x1d9318: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1d9318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1d931c: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1d931cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d9320: 0x245266c0  addiu       $s2, $v0, 0x66C0
    ctx->pc = 0x1d9320u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 26304));
    // 0x1d9324: 0x2128821  addu        $s1, $s0, $s2
    ctx->pc = 0x1d9324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1d9328: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d9328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d932c: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D932Cu;
    {
        const bool branch_taken_0x1d932c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d932c) {
            ctx->pc = 0x1D9378u;
            goto label_1d9378;
        }
    }
    ctx->pc = 0x1D9334u;
    // 0x1d9334: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D9334u;
    SET_GPR_U32(ctx, 31, 0x1D933Cu);
    ctx->pc = 0x1D9338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9334u;
    // 0x1d9338: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D9334u, 0x1D933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D933Cu;
label_1d933c:
    // 0x1d933c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d933cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9340: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d9340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9344: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d9344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9348: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1d9348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1d934c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d934cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1d9350: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x1d9350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1d9354: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1d9354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d9358: 0xc075446  jal         func_1D5118
    ctx->pc = 0x1D9358u;
    SET_GPR_U32(ctx, 31, 0x1D9360u);
    ctx->pc = 0x1D935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9358u;
    // 0x1d935c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5118u, 0x1D9358u, 0x1D9360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9360u;
label_1d9360:
    // 0x1d9360: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d9360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9364: 0xc075446  jal         func_1D5118
    ctx->pc = 0x1D9364u;
    SET_GPR_U32(ctx, 31, 0x1D936Cu);
    ctx->pc = 0x1D9368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9364u;
    // 0x1d9368: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5118u, 0x1D9364u, 0x1D936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D936Cu;
label_1d936c:
    // 0x1d936c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d936cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9370: 0xc075446  jal         func_1D5118
    ctx->pc = 0x1D9370u;
    SET_GPR_U32(ctx, 31, 0x1D9378u);
    ctx->pc = 0x1D9374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9370u;
    // 0x1d9374: 0x240500f7  addiu       $a1, $zero, 0xF7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5118u, 0x1D9370u, 0x1D9378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9378u;
label_1d9378:
    // 0x1d9378: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9378u;
    {
        const bool branch_taken_0x1d9378 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9378u;
        // 0x1d937c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9378) {
            ctx->pc = 0x1D938Cu;
            goto label_1d938c;
        }
    }
    ctx->pc = 0x1D9380u;
    // 0x1d9380: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D9380u;
    SET_GPR_U32(ctx, 31, 0x1D9388u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D9380u, 0x1D9388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9388u;
label_1d9388:
    // 0x1d9388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d938c:
    // 0x1d938c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d938cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9390: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9390u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9394: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9394u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9398: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9398u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d939c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d939cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d93a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D93A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93A0u;
        // 0x1d93a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D93A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D93A8u;
}
