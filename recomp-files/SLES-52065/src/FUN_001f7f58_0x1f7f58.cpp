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

// Function: FUN_001f7f58
// Address: 0x1f7f58 - 0x1f8028
void FUN_001f7f58_0x1f7f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f7f58_0x1f7f58");
#endif

    switch (ctx->pc) {
        case 0x1f7f80u: goto label_1f7f80;
        case 0x1f7f9cu: goto label_1f7f9c;
        case 0x1f7fdcu: goto label_1f7fdc;
        case 0x1f7ff0u: goto label_1f7ff0;
        case 0x1f800cu: goto label_1f800c;
        default: break;
    }

    ctx->pc = 0x1f7f58u;

    // 0x1f7f58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f7f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f7f5c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f7f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f7f60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f7f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f7f64: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x1f7f64u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x1f7f68: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f7f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f7f6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f7f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7f70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f7f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f7f74: 0x2632d140  addiu       $s2, $s1, -0x2EC0
    ctx->pc = 0x1f7f74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955328));
    // 0x1f7f78: 0xc07de48  jal         func_1F7920
    ctx->pc = 0x1F7F78u;
    SET_GPR_U32(ctx, 31, 0x1F7F80u);
    ctx->pc = 0x1F7F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7F78u;
    // 0x1f7f7c: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7920u, 0x1F7F78u, 0x1F7F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F80u;
label_1f7f80:
    // 0x1f7f80: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7F80u;
    {
        const bool branch_taken_0x1f7f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7f80) {
            ctx->pc = 0x1F7F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7F80u;
            // 0x1f7f84: 0xae30d140  sw          $s0, -0x2EC0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294955328), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7F90u;
            goto label_1f7f90;
        }
    }
    ctx->pc = 0x1F7F88u;
    // 0x1f7f88: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1F7F88u;
    {
        const bool branch_taken_0x1f7f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F88u;
        // 0x1f7f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f88) {
            ctx->pc = 0x1F8010u;
            goto label_1f8010;
        }
    }
    ctx->pc = 0x1F7F90u;
label_1f7f90:
    // 0x1f7f90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f7f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7f94: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F7F94u;
    SET_GPR_U32(ctx, 31, 0x1F7F9Cu);
    ctx->pc = 0x1F7F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7F94u;
    // 0x1f7f98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F7F94u, 0x1F7F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F9Cu;
label_1f7f9c:
    // 0x1f7f9c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f7f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f7fa0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1f7fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1f7fa4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f7fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f7fa8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f7fac: 0x8c88bb5c  lw          $t0, -0x44A4($a0)
    ctx->pc = 0x1f7facu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x21BB5Cu));
    // 0x1f7fb0: 0x2450cd00  addiu       $s0, $v0, -0x3300
    ctx->pc = 0x1f7fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954240));
    // 0x1f7fb4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f7fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f7fb8: 0x8ccabb60  lw          $t2, -0x44A0($a2)
    ctx->pc = 0x1f7fb8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x21BB60u));
    // 0x1f7fbc: 0x8c65bb58  lw          $a1, -0x44A8($v1)
    ctx->pc = 0x1f7fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x21BB58u));
    // 0x1f7fc0: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x1f7fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x1f7fc4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f7fc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7fc8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f7fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f7fcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7fd0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f7fd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7fd4: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F7FD4u;
    SET_GPR_U32(ctx, 31, 0x1F7FDCu);
    ctx->pc = 0x1F7FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7FD4u;
    // 0x1f7fd8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F7FD4u, 0x1F7FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FDCu;
label_1f7fdc:
    // 0x1f7fdc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7FDCu;
    {
        const bool branch_taken_0x1f7fdc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F7FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FDCu;
        // 0x1f7fe0: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7fdc) {
            ctx->pc = 0x1F7FF8u;
            goto label_1f7ff8;
        }
    }
    ctx->pc = 0x1F7FE4u;
    // 0x1f7fe4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f7fe8: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F7FE8u;
    SET_GPR_U32(ctx, 31, 0x1F7FF0u);
    ctx->pc = 0x1F7FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7FE8u;
    // 0x1f7fec: 0x8c44bb2c  lw          $a0, -0x44D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949676)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F7FE8u, 0x1F7FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FF0u;
label_1f7ff0:
    // 0x1f7ff0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7FF0u;
    {
        const bool branch_taken_0x1f7ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FF0u;
        // 0x1f7ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ff0) {
            ctx->pc = 0x1F8010u;
            goto label_1f8010;
        }
    }
    ctx->pc = 0x1F7FF8u;
label_1f7ff8:
    // 0x1f7ff8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1f7ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1f7ffc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1f7ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8000: 0x8c64bb2c  lw          $a0, -0x44D4($v1)
    ctx->pc = 0x1f8000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949676)));
    // 0x1f8004: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F8004u;
    SET_GPR_U32(ctx, 31, 0x1F800Cu);
    ctx->pc = 0x1F8008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8004u;
    // 0x1f8008: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F8004u, 0x1F800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F800Cu;
label_1f800c:
    // 0x1f800c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f800cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8010:
    // 0x1f8010: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f8010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f8014: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f8014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8018: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f8018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f801c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f801cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8020: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8020u;
        // 0x1f8024: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8028u;
}
