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

// Function: FUN_00204fc0
// Address: 0x204fc0 - 0x205170
void FUN_00204fc0_0x204fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00204fc0_0x204fc0");
#endif

    switch (ctx->pc) {
        case 0x205054u: goto label_205054;
        case 0x205080u: goto label_205080;
        case 0x2050c8u: goto label_2050c8;
        case 0x2050ecu: goto label_2050ec;
        case 0x205108u: goto label_205108;
        default: break;
    }

    ctx->pc = 0x204fc0u;

    // 0x204fc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x204fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x204fc4: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x204fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x204fc8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x204fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x204fcc: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x204fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x204fd0: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x204fd0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204fd4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x204fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x204fd8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x204fd8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204fdc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x204fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x204fe0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x204fe0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204fe4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x204fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x204fe8: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x204fe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204fec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x204fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x204ff0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x204ff0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ff4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x204ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x204ff8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x204ff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ffc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x204ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x205000: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x205000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205004: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x205004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x205008: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x205008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20500c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20500Cu;
    {
        const bool branch_taken_0x20500c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x205010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20500Cu;
        // 0x205010: 0xffb30040  sd          $s3, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20500c) {
            ctx->pc = 0x20501Cu;
            goto label_20501c;
        }
    }
    ctx->pc = 0x205014u;
    // 0x205014: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x205014u;
    {
        const bool branch_taken_0x205014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205014u;
        // 0x205018: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205014) {
            ctx->pc = 0x205038u;
            goto label_205038;
        }
    }
    ctx->pc = 0x20501Cu;
label_20501c:
    // 0x20501c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x20501cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x205020: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205020u;
    {
        const bool branch_taken_0x205020 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x205024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205020u;
        // 0x205024: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205020) {
            ctx->pc = 0x205030u;
            goto label_205030;
        }
    }
    ctx->pc = 0x205028u;
    // 0x205028: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205028u;
    {
        const bool branch_taken_0x205028 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x20502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205028u;
        // 0x20502c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205028) {
            ctx->pc = 0x205038u;
            goto label_205038;
        }
    }
    ctx->pc = 0x205030u;
label_205030:
    // 0x205030: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x205030u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x205034: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x205034u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205038:
    // 0x205038: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x205038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20503c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20503cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x205040: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205040u;
    {
        const bool branch_taken_0x205040 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x205040) {
            ctx->pc = 0x205044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205040u;
            // 0x205044: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205060u;
            goto label_205060;
        }
    }
    ctx->pc = 0x205048u;
    // 0x205048: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x205048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20504c: 0xc082014  jal         func_208050
    ctx->pc = 0x20504Cu;
    SET_GPR_U32(ctx, 31, 0x205054u);
    ctx->pc = 0x205050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20504Cu;
    // 0x205050: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x20504Cu, 0x205054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205054u;
label_205054:
    // 0x205054: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x205054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x205058: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x205058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20505c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x20505cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_205060:
    // 0x205060: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x205060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205064: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x205064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205068: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x205068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20506c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x20506cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205070: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x205070u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205074: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x205074u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205078: 0xc07f084  jal         func_1FC210
    ctx->pc = 0x205078u;
    SET_GPR_U32(ctx, 31, 0x205080u);
    ctx->pc = 0x20507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205078u;
    // 0x20507c: 0x37aa0004  ori         $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC210u, 0x205078u, 0x205080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205080u;
label_205080:
    // 0x205080: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x205080u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205084: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x205084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x205088: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205088u;
    {
        const bool branch_taken_0x205088 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x20508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205088u;
        // 0x20508c: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205088) {
            ctx->pc = 0x205098u;
            goto label_205098;
        }
    }
    ctx->pc = 0x205090u;
    // 0x205090: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x205090u;
    {
        const bool branch_taken_0x205090 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x205094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205090u;
        // 0x205094: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205090) {
            ctx->pc = 0x2050A4u;
            goto label_2050a4;
        }
    }
    ctx->pc = 0x205098u;
label_205098:
    // 0x205098: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x205098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x20509c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x20509Cu;
    {
        const bool branch_taken_0x20509c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2050A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20509Cu;
        // 0x2050a0: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20509c) {
            ctx->pc = 0x205130u;
            goto label_205130;
        }
    }
    ctx->pc = 0x2050A4u;
label_2050a4:
    // 0x2050a4: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2050A4u;
    {
        const bool branch_taken_0x2050a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2050A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050A4u;
        // 0x2050a8: 0x2748021  addu        $s0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050a4) {
            ctx->pc = 0x2050E0u;
            goto label_2050e0;
        }
    }
    ctx->pc = 0x2050ACu;
    // 0x2050ac: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x2050acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2050b0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2050b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2050b4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2050B4u;
    {
        const bool branch_taken_0x2050b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2050b4) {
            ctx->pc = 0x2050B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2050B4u;
            // 0x2050b8: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2050DCu;
            goto label_2050dc;
        }
    }
    ctx->pc = 0x2050BCu;
    // 0x2050bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2050bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2050c0: 0xc082178  jal         func_2085E0
    ctx->pc = 0x2050C0u;
    SET_GPR_U32(ctx, 31, 0x2050C8u);
    ctx->pc = 0x2050C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2050C0u;
    // 0x2050c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x2050C0u, 0x2050C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050C8u;
label_2050c8:
    // 0x2050c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2050C8u;
    {
        const bool branch_taken_0x2050c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2050CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050C8u;
        // 0x2050cc: 0x141023  negu        $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050c8) {
            ctx->pc = 0x2050D8u;
            goto label_2050d8;
        }
    }
    ctx->pc = 0x2050D0u;
    // 0x2050d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2050d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2050d4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2050d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2050d8:
    // 0x2050d8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2050d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2050dc:
    // 0x2050dc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2050dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2050e0:
    // 0x2050e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2050e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2050e4: 0xc082178  jal         func_2085E0
    ctx->pc = 0x2050E4u;
    SET_GPR_U32(ctx, 31, 0x2050ECu);
    ctx->pc = 0x2050E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2050E4u;
    // 0x2050e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x2050E4u, 0x2050ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050ECu;
label_2050ec:
    // 0x2050ec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2050ECu;
    {
        const bool branch_taken_0x2050ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2050ec) {
            ctx->pc = 0x2050F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2050ECu;
            // 0x2050f0: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2050F4u;
            goto label_2050f4;
        }
    }
    ctx->pc = 0x2050F4u;
label_2050f4:
    // 0x2050f4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2050f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2050f8: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x2050f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2050fc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2050FCu;
    {
        const bool branch_taken_0x2050fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050FCu;
        // 0x205100: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050fc) {
            ctx->pc = 0x205134u;
            goto label_205134;
        }
    }
    ctx->pc = 0x205104u;
    // 0x205104: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x205104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_205108:
    // 0x205108: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x205108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20510c: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x20510cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x205110: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x205110u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205114: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x205114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x205118: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x205118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20511c: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x20511cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x205120: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x205120u;
    {
        const bool branch_taken_0x205120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205120) {
            ctx->pc = 0x205108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205108;
        }
    }
    ctx->pc = 0x205128u;
    // 0x205128: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x205128u;
    {
        const bool branch_taken_0x205128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205128u;
        // 0x20512c: 0x731823  subu        $v1, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205128) {
            ctx->pc = 0x205138u;
            goto label_205138;
        }
    }
    ctx->pc = 0x205130u;
label_205130:
    // 0x205130: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x205130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_205134:
    // 0x205134: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x205134u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_205138:
    // 0x205138: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x205138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20513c: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x20513cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x205140: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x205140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x205144: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x205144u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x205148: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x205148u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20514c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x20514cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x205150: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x205150u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x205154: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x205154u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x205158: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x205158u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20515c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x20515cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x205160: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x205160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205164: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x205164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205168: 0x3e00008  jr          $ra
    ctx->pc = 0x205168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205168u;
        // 0x20516c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205170u;
}
