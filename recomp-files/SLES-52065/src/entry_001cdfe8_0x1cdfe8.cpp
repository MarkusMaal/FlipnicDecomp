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

// Function: entry_001cdfe8
// Address: 0x1cdfe8 - 0x1ce0e8
void entry_001cdfe8_0x1cdfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdfe8_0x1cdfe8");
#endif

    switch (ctx->pc) {
        case 0x1cdff4u: goto label_1cdff4;
        case 0x1ce004u: goto label_1ce004;
        case 0x1ce014u: goto label_1ce014;
        case 0x1ce028u: goto label_1ce028;
        case 0x1ce034u: goto label_1ce034;
        case 0x1ce04cu: goto label_1ce04c;
        case 0x1ce06cu: goto label_1ce06c;
        case 0x1ce080u: goto label_1ce080;
        case 0x1ce098u: goto label_1ce098;
        case 0x1ce0acu: goto label_1ce0ac;
        case 0x1ce0c4u: goto label_1ce0c4;
        case 0x1ce0d8u: goto label_1ce0d8;
        default: break;
    }

    ctx->pc = 0x1cdfe8u;

label_1cdfe8:
    // 0x1cdfe8: 0x8ea40064  lw          $a0, 0x64($s5)
    ctx->pc = 0x1cdfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1cdfec: 0xc072f34  jal         func_1CBCD0
    ctx->pc = 0x1CDFECu;
    SET_GPR_U32(ctx, 31, 0x1CDFF4u);
    ctx->pc = 0x1CDFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFECu;
    // 0x1cdff0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCD0u, 0x1CDFECu, 0x1CDFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFF4u;
label_1cdff4:
    // 0x1cdff4: 0x8ea40064  lw          $a0, 0x64($s5)
    ctx->pc = 0x1cdff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1cdff8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cdff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdffc: 0xc072f78  jal         func_1CBDE0
    ctx->pc = 0x1CDFFCu;
    SET_GPR_U32(ctx, 31, 0x1CE004u);
    ctx->pc = 0x1CE000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFFCu;
    // 0x1ce000: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBDE0u, 0x1CDFFCu, 0x1CE004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE004u;
label_1ce004:
    // 0x1ce004: 0x8ea40064  lw          $a0, 0x64($s5)
    ctx->pc = 0x1ce004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1ce008: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ce008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce00c: 0xc072fb0  jal         func_1CBEC0
    ctx->pc = 0x1CE00Cu;
    SET_GPR_U32(ctx, 31, 0x1CE014u);
    ctx->pc = 0x1CE010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE00Cu;
    // 0x1ce010: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBEC0u, 0x1CE00Cu, 0x1CE014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE014u;
label_1ce014:
    // 0x1ce014: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ce014u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce018: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce01c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ce01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ce020: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CE020u;
    SET_GPR_U32(ctx, 31, 0x1CE028u);
    ctx->pc = 0x1CE024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE020u;
    // 0x1ce024: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CE020u, 0x1CE028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE028u;
label_1ce028:
    // 0x1ce028: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x1ce028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1ce02c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1CE02Cu;
    SET_GPR_U32(ctx, 31, 0x1CE034u);
    ctx->pc = 0x1CE030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE02Cu;
    // 0x1ce030: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1CE02Cu, 0x1CE034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE034u;
label_1ce034:
    // 0x1ce034: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x1ce034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce038: 0xc7ad00b4  lwc1        $f13, 0xB4($sp)
    ctx->pc = 0x1ce038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce03c: 0xc7ae00b8  lwc1        $f14, 0xB8($sp)
    ctx->pc = 0x1ce03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ce040: 0xc7af00bc  lwc1        $f15, 0xBC($sp)
    ctx->pc = 0x1ce040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ce044: 0xc062860  jal         func_18A180
    ctx->pc = 0x1CE044u;
    SET_GPR_U32(ctx, 31, 0x1CE04Cu);
    ctx->pc = 0x1CE048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE044u;
    // 0x1ce048: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1CE044u, 0x1CE04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE04Cu;
label_1ce04c:
    // 0x1ce04c: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x1ce04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1ce050: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce054: 0xc4540090  lwc1        $f20, 0x90($v0)
    ctx->pc = 0x1ce054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce058: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce05c: 0xc42cfa58  lwc1        $f12, -0x5A8($at)
    ctx->pc = 0x1ce05cu;
    { uint32_t bits = FAST_READ32(0x36FA58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce060: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ce060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ce064: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CE064u;
    SET_GPR_U32(ctx, 31, 0x1CE06Cu);
    ctx->pc = 0x1CE068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE064u;
    // 0x1ce068: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CE064u, 0x1CE06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE06Cu;
label_1ce06c:
    // 0x1ce06c: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce070: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce074: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ce074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce078: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1CE078u;
    SET_GPR_U32(ctx, 31, 0x1CE080u);
    ctx->pc = 0x1CE07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE078u;
    // 0x1ce07c: 0x24a52eb8  addiu       $a1, $a1, 0x2EB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1CE078u, 0x1CE080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE080u;
label_1ce080:
    // 0x1ce080: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce084: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce088: 0xc42cfa68  lwc1        $f12, -0x598($at)
    ctx->pc = 0x1ce088u;
    { uint32_t bits = FAST_READ32(0x36FA68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce08c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ce08cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ce090: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CE090u;
    SET_GPR_U32(ctx, 31, 0x1CE098u);
    ctx->pc = 0x1CE094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE090u;
    // 0x1ce094: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CE090u, 0x1CE098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE098u;
label_1ce098:
    // 0x1ce098: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce09c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce09cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce0a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ce0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce0a4: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1CE0A4u;
    SET_GPR_U32(ctx, 31, 0x1CE0ACu);
    ctx->pc = 0x1CE0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE0A4u;
    // 0x1ce0a8: 0x24a52eb8  addiu       $a1, $a1, 0x2EB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1CE0A4u, 0x1CE0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE0ACu;
label_1ce0ac:
    // 0x1ce0ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce0b0: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce0b4: 0xc42cfa78  lwc1        $f12, -0x588($at)
    ctx->pc = 0x1ce0b4u;
    { uint32_t bits = FAST_READ32(0x36FA78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce0b8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ce0b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ce0bc: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CE0BCu;
    SET_GPR_U32(ctx, 31, 0x1CE0C4u);
    ctx->pc = 0x1CE0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE0BCu;
    // 0x1ce0c0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CE0BCu, 0x1CE0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE0C4u;
label_1ce0c4:
    // 0x1ce0c4: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce0c8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce0cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ce0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce0d0: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1CE0D0u;
    SET_GPR_U32(ctx, 31, 0x1CE0D8u);
    ctx->pc = 0x1CE0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE0D0u;
    // 0x1ce0d4: 0x24a52eb8  addiu       $a1, $a1, 0x2EB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1CE0D0u, 0x1CE0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE0D8u;
label_1ce0d8:
    // 0x1ce0d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ce0d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ce0dc: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x1ce0dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1ce0e0: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1CE0E0u;
    {
        const bool branch_taken_0x1ce0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0E0u;
        // 0x1ce0e4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0e0) {
            ctx->pc = 0x1CDFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdfe8;
        }
    }
    ctx->pc = 0x1CE0E8u;
}
