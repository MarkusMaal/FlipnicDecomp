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

// Function: FUN_0017cf70
// Address: 0x17cf70 - 0x17d234
void FUN_0017cf70_0x17cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017cf70_0x17cf70");
#endif

    switch (ctx->pc) {
        case 0x17cf9cu: goto label_17cf9c;
        case 0x17cfa8u: goto label_17cfa8;
        case 0x17cfb8u: goto label_17cfb8;
        case 0x17cfc4u: goto label_17cfc4;
        case 0x17cfd0u: goto label_17cfd0;
        case 0x17cfe4u: goto label_17cfe4;
        case 0x17cfecu: goto label_17cfec;
        case 0x17cffcu: goto label_17cffc;
        case 0x17d00cu: goto label_17d00c;
        case 0x17d018u: goto label_17d018;
        case 0x17d020u: goto label_17d020;
        case 0x17d028u: goto label_17d028;
        case 0x17d054u: goto label_17d054;
        case 0x17d06cu: goto label_17d06c;
        case 0x17d07cu: goto label_17d07c;
        case 0x17d08cu: goto label_17d08c;
        case 0x17d0a4u: goto label_17d0a4;
        case 0x17d0bcu: goto label_17d0bc;
        case 0x17d0d4u: goto label_17d0d4;
        case 0x17d0ecu: goto label_17d0ec;
        case 0x17d0fcu: goto label_17d0fc;
        case 0x17d118u: goto label_17d118;
        case 0x17d134u: goto label_17d134;
        case 0x17d154u: goto label_17d154;
        case 0x17d170u: goto label_17d170;
        case 0x17d190u: goto label_17d190;
        case 0x17d1a4u: goto label_17d1a4;
        case 0x17d1b4u: goto label_17d1b4;
        case 0x17d1dcu: goto label_17d1dc;
        case 0x17d1ecu: goto label_17d1ec;
        case 0x17d20cu: goto label_17d20c;
        default: break;
    }

    ctx->pc = 0x17cf70u;

    // 0x17cf70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17cf74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17cf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17cf78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17cf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17cf7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17cf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17cf80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17cf84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17cf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17cf88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17cf8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17cf8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17cf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17cf94: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x17CF94u;
    SET_GPR_U32(ctx, 31, 0x17CF9Cu);
    ctx->pc = 0x17CF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF94u;
    // 0x17cf98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x17CF94u, 0x17CF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF9Cu;
label_17cf9c:
    // 0x17cf9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17cf9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfa0: 0xc080748  jal         func_201D20
    ctx->pc = 0x17CFA0u;
    SET_GPR_U32(ctx, 31, 0x17CFA8u);
    ctx->pc = 0x17CFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CFA0u;
    // 0x17cfa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x17CFA0u, 0x17CFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CFA8u;
label_17cfa8:
    // 0x17cfa8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17cfa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfac: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x17cfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17cfb0: 0xc048884  jal         func_122210
    ctx->pc = 0x17CFB0u;
    SET_GPR_U32(ctx, 31, 0x17CFB8u);
    ctx->pc = 0x17CFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CFB0u;
    // 0x17cfb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122210u, 0x17CFB0u, 0x17CFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CFB8u;
label_17cfb8:
    // 0x17cfb8: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x17cfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x17cfbc: 0xc048920  jal         func_122480
    ctx->pc = 0x17CFBCu;
    SET_GPR_U32(ctx, 31, 0x17CFC4u);
    ctx->pc = 0x17CFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CFBCu;
    // 0x17cfc0: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x17CFBCu, 0x17CFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CFC4u;
label_17cfc4:
    // 0x17cfc4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x17cfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17cfc8: 0xc080748  jal         func_201D20
    ctx->pc = 0x17CFC8u;
    SET_GPR_U32(ctx, 31, 0x17CFD0u);
    ctx->pc = 0x17CFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CFC8u;
    // 0x17cfcc: 0x2484f8b8  addiu       $a0, $a0, -0x748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x17CFC8u, 0x17CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CFD0u;
label_17cfd0:
    // 0x17cfd0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17cfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17cfd4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17cfd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfd8: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x17cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x17cfdc: 0xc048884  jal         func_122210
    ctx->pc = 0x17CFDCu;
    SET_GPR_U32(ctx, 31, 0x17CFE4u);
    ctx->pc = 0x17CFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CFDCu;
    // 0x17cfe0: 0x24a5f8b8  addiu       $a1, $a1, -0x748 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122210u, 0x17CFDCu, 0x17CFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CFE4u;
label_17cfe4:
    // 0x17cfe4: 0xc080748  jal         func_201D20
    ctx->pc = 0x17CFE4u;
    SET_GPR_U32(ctx, 31, 0x17CFECu);
    ctx->pc = 0x17CFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CFE4u;
    // 0x17cfe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x17CFE4u, 0x17CFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CFECu;
label_17cfec:
    // 0x17cfec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17cfecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cff0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17cff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cff4: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x17CFF4u;
    SET_GPR_U32(ctx, 31, 0x17CFFCu);
    ctx->pc = 0x17CFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CFF4u;
    // 0x17cff8: 0x27a40078  addiu       $a0, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x17CFF4u, 0x17CFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CFFCu;
label_17cffc:
    // 0x17cffc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17d000: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x17d000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17d004: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x17D004u;
    SET_GPR_U32(ctx, 31, 0x17D00Cu);
    ctx->pc = 0x17D008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D004u;
    // 0x17d008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x17D004u, 0x17D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D00Cu;
label_17d00c:
    // 0x17d00c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17d00cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d010: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x17D010u;
    SET_GPR_U32(ctx, 31, 0x17D018u);
    ctx->pc = 0x17D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D010u;
    // 0x17d014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x17D010u, 0x17D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D018u;
label_17d018:
    // 0x17d018: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D018u;
    {
        const bool branch_taken_0x17d018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d018) {
            ctx->pc = 0x17D03Cu;
            goto label_17d03c;
        }
    }
    ctx->pc = 0x17D020u;
label_17d020:
    // 0x17d020: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x17D020u;
    SET_GPR_U32(ctx, 31, 0x17D028u);
    ctx->pc = 0x17D024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D020u;
    // 0x17d024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x17D020u, 0x17D028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D028u;
label_17d028:
    // 0x17d028: 0x0  nop
    ctx->pc = 0x17d028u;
    // NOP
    // 0x17d02c: 0x0  nop
    ctx->pc = 0x17d02cu;
    // NOP
    // 0x17d030: 0x0  nop
    ctx->pc = 0x17d030u;
    // NOP
    // 0x17d034: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17D034u;
    {
        const bool branch_taken_0x17d034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d034) {
            ctx->pc = 0x17D020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d020;
        }
    }
    ctx->pc = 0x17D03Cu;
label_17d03c:
    // 0x17d03c: 0x0  nop
    ctx->pc = 0x17d03cu;
    // NOP
    // 0x17d040: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D040u;
    {
        const bool branch_taken_0x17d040 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D040u;
        // 0x17d044: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d040) {
            ctx->pc = 0x17D05Cu;
            goto label_17d05c;
        }
    }
    ctx->pc = 0x17D048u;
    // 0x17d048: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x17d048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x17d04c: 0xc04619c  jal         func_118670
    ctx->pc = 0x17D04Cu;
    SET_GPR_U32(ctx, 31, 0x17D054u);
    ctx->pc = 0x17D050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D04Cu;
    // 0x17d050: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x17D04Cu, 0x17D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D054u;
label_17d054:
    // 0x17d054: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x17D054u;
    {
        const bool branch_taken_0x17d054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D054u;
        // 0x17d058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d054) {
            ctx->pc = 0x17D210u;
            goto label_17d210;
        }
    }
    ctx->pc = 0x17D05Cu;
label_17d05c:
    // 0x17d05c: 0x27848634  addiu       $a0, $gp, -0x79CC
    ctx->pc = 0x17d05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936116));
    // 0x17d060: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17d060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d064: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D064u;
    SET_GPR_U32(ctx, 31, 0x17D06Cu);
    ctx->pc = 0x17D068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D064u;
    // 0x17d068: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D064u, 0x17D06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D06Cu;
label_17d06c:
    // 0x17d06c: 0x27848638  addiu       $a0, $gp, -0x79C8
    ctx->pc = 0x17d06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936120));
    // 0x17d070: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x17d070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x17d074: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D074u;
    SET_GPR_U32(ctx, 31, 0x17D07Cu);
    ctx->pc = 0x17D078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D074u;
    // 0x17d078: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D074u, 0x17D07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D07Cu;
label_17d07c:
    // 0x17d07c: 0x27a4007f  addiu       $a0, $sp, 0x7F
    ctx->pc = 0x17d07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 127));
    // 0x17d080: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x17d080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x17d084: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D084u;
    SET_GPR_U32(ctx, 31, 0x17D08Cu);
    ctx->pc = 0x17D088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D084u;
    // 0x17d088: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D084u, 0x17D08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D08Cu;
label_17d08c:
    // 0x17d08c: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x17d08cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
    // 0x17d090: 0x27a4007f  addiu       $a0, $sp, 0x7F
    ctx->pc = 0x17d090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 127));
    // 0x17d094: 0x26450005  addiu       $a1, $s2, 0x5
    ctx->pc = 0x17d094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x17d098: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17d098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d09c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D09Cu;
    SET_GPR_U32(ctx, 31, 0x17D0A4u);
    ctx->pc = 0x17D0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D09Cu;
    // 0x17d0a0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D09Cu, 0x17D0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D0A4u;
label_17d0a4:
    // 0x17d0a4: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x17d0a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
    // 0x17d0a8: 0x27a4007f  addiu       $a0, $sp, 0x7F
    ctx->pc = 0x17d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 127));
    // 0x17d0ac: 0x26450006  addiu       $a1, $s2, 0x6
    ctx->pc = 0x17d0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x17d0b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17d0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d0b4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D0B4u;
    SET_GPR_U32(ctx, 31, 0x17D0BCu);
    ctx->pc = 0x17D0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0B4u;
    // 0x17d0b8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D0B4u, 0x17D0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D0BCu;
label_17d0bc:
    // 0x17d0bc: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x17d0bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
    // 0x17d0c0: 0x27a4007f  addiu       $a0, $sp, 0x7F
    ctx->pc = 0x17d0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 127));
    // 0x17d0c4: 0x26450007  addiu       $a1, $s2, 0x7
    ctx->pc = 0x17d0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
    // 0x17d0c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17d0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d0cc: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D0CCu;
    SET_GPR_U32(ctx, 31, 0x17D0D4u);
    ctx->pc = 0x17D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0CCu;
    // 0x17d0d0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D0CCu, 0x17D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D0D4u;
label_17d0d4:
    // 0x17d0d4: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x17d0d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
    // 0x17d0d8: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x17d0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x17d0dc: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x17d0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x17d0e0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17d0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17d0e4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D0E4u;
    SET_GPR_U32(ctx, 31, 0x17D0ECu);
    ctx->pc = 0x17D0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0E4u;
    // 0x17d0e8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D0E4u, 0x17D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D0ECu;
label_17d0ec:
    // 0x17d0ec: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x17d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x17d0f0: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x17d0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x17d0f4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D0F4u;
    SET_GPR_U32(ctx, 31, 0x17D0FCu);
    ctx->pc = 0x17D0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0F4u;
    // 0x17d0f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D0F4u, 0x17D0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D0FCu;
label_17d0fc:
    // 0x17d0fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17d100: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D100u;
    {
        const bool branch_taken_0x17d100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D100u;
        // 0x17d104: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d100) {
            ctx->pc = 0x17D11Cu;
            goto label_17d11c;
        }
    }
    ctx->pc = 0x17D108u;
    // 0x17d108: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x17d108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x17d10c: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x17d10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x17d110: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D110u;
    SET_GPR_U32(ctx, 31, 0x17D118u);
    ctx->pc = 0x17D114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D110u;
    // 0x17d114: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D110u, 0x17D118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D118u;
label_17d118:
    // 0x17d118: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x17d118u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_17d11c:
    // 0x17d11c: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x17d11cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17d120: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x17d120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x17d124: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17d124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17d128: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x17d128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x17d12c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x17D12Cu;
    SET_GPR_U32(ctx, 31, 0x17D134u);
    ctx->pc = 0x17D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D12Cu;
    // 0x17d130: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x17D12Cu, 0x17D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D134u;
label_17d134:
    // 0x17d134: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x17d134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x17d138: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x17d138u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x17d13c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x17d13cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d140: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d144: 0x24a5d240  addiu       $a1, $a1, -0x2DC0
    ctx->pc = 0x17d144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955584));
    // 0x17d148: 0x24c6d250  addiu       $a2, $a2, -0x2DB0
    ctx->pc = 0x17d148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955600));
    // 0x17d14c: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x17D14Cu;
    SET_GPR_U32(ctx, 31, 0x17D154u);
    ctx->pc = 0x17D150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D14Cu;
    // 0x17d150: 0x240700c0  addiu       $a3, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x17D14Cu, 0x17D154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D154u;
label_17d154:
    // 0x17d154: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x17d154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x17d158: 0x8e110018  lw          $s1, 0x18($s0)
    ctx->pc = 0x17d158u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17d15c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x17d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x17d160: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17d160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17d164: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x17d164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x17d168: 0xc040168  jal         func_1005A0
    ctx->pc = 0x17D168u;
    SET_GPR_U32(ctx, 31, 0x17D170u);
    ctx->pc = 0x17D16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D168u;
    // 0x17d16c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x17D168u, 0x17D170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D170u;
label_17d170:
    // 0x17d170: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x17d170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x17d174: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x17d174u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x17d178: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x17d178u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d17c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d180: 0x24a5d240  addiu       $a1, $a1, -0x2DC0
    ctx->pc = 0x17d180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955584));
    // 0x17d184: 0x24c6d250  addiu       $a2, $a2, -0x2DB0
    ctx->pc = 0x17d184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955600));
    // 0x17d188: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x17D188u;
    SET_GPR_U32(ctx, 31, 0x17D190u);
    ctx->pc = 0x17D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D188u;
    // 0x17d18c: 0x240700c0  addiu       $a3, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x17D188u, 0x17D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D190u;
label_17d190:
    // 0x17d190: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x17d190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x17d194: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17d194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d198: 0x8e140014  lw          $s4, 0x14($s0)
    ctx->pc = 0x17d198u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17d19c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D19Cu;
    {
        const bool branch_taken_0x17d19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D19Cu;
        // 0x17d1a0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d19c) {
            ctx->pc = 0x17D1C0u;
            goto label_17d1c0;
        }
    }
    ctx->pc = 0x17D1A4u;
label_17d1a4:
    // 0x17d1a4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x17d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x17d1a8: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x17d1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x17d1ac: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x17D1ACu;
    SET_GPR_U32(ctx, 31, 0x17D1B4u);
    ctx->pc = 0x17D1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D1ACu;
    // 0x17d1b0: 0x552021  addu        $a0, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x17D1ACu, 0x17D1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D1B4u;
label_17d1b4:
    // 0x17d1b4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x17d1b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17d1b8: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x17d1b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x17d1bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17d1bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17d1c0:
    // 0x17d1c0: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x17d1c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x17d1c4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17D1C4u;
    {
        const bool branch_taken_0x17d1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d1c4) {
            ctx->pc = 0x17D1A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d1a4;
        }
    }
    ctx->pc = 0x17D1CCu;
    // 0x17d1cc: 0x8e110018  lw          $s1, 0x18($s0)
    ctx->pc = 0x17d1ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17d1d0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x17d1d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d1d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D1D4u;
    {
        const bool branch_taken_0x17d1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1D4u;
        // 0x17d1d8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d1d4) {
            ctx->pc = 0x17D1F8u;
            goto label_17d1f8;
        }
    }
    ctx->pc = 0x17D1DCu;
label_17d1dc:
    // 0x17d1dc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x17d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x17d1e0: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x17d1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x17d1e4: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x17D1E4u;
    SET_GPR_U32(ctx, 31, 0x17D1ECu);
    ctx->pc = 0x17D1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D1E4u;
    // 0x17d1e8: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x17D1E4u, 0x17D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D1ECu;
label_17d1ec:
    // 0x17d1ec: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x17d1ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17d1f0: 0x269400c0  addiu       $s4, $s4, 0xC0
    ctx->pc = 0x17d1f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x17d1f4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x17d1f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_17d1f8:
    // 0x17d1f8: 0x2b1102b  sltu        $v0, $s5, $s1
    ctx->pc = 0x17d1f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x17d1fc: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17D1FCu;
    {
        const bool branch_taken_0x17d1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1FCu;
        // 0x17d200: 0x27a40078  addiu       $a0, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d1fc) {
            ctx->pc = 0x17D1DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d1dc;
        }
    }
    ctx->pc = 0x17D204u;
    // 0x17d204: 0xc04619c  jal         func_118670
    ctx->pc = 0x17D204u;
    SET_GPR_U32(ctx, 31, 0x17D20Cu);
    ctx->pc = 0x17D208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D204u;
    // 0x17d208: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x17D204u, 0x17D20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D20Cu;
label_17d20c:
    // 0x17d20c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17d210:
    // 0x17d210: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17d210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17d214: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17d214u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17d218: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17d218u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d21c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17d21cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d220: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17d220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d224: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d22c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D22Cu;
        // 0x17d230: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D234u;
}
