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

// Function: FUN_00208f70
// Address: 0x208f70 - 0x2090d0
void FUN_00208f70_0x208f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00208f70_0x208f70");
#endif

    switch (ctx->pc) {
        case 0x208f90u: goto label_208f90;
        case 0x208fa0u: goto label_208fa0;
        case 0x209068u: goto label_209068;
        case 0x2090c0u: goto label_2090c0;
        default: break;
    }

    ctx->pc = 0x208f70u;

    // 0x208f70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x208f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x208f74: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x208f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x208f78: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x208f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x208f7c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x208f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x208f80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x208f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f84: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x208f84u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x208f88: 0xc08227c  jal         func_2089F0
    ctx->pc = 0x208F88u;
    SET_GPR_U32(ctx, 31, 0x208F90u);
    ctx->pc = 0x208F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F88u;
    // 0x208f8c: 0xe7ad0024  swc1        $f13, 0x24($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2089F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2089F0u, 0x208F88u, 0x208F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F90u;
label_208f90:
    // 0x208f90: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x208f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x208f94: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x208f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x208f98: 0xc08227c  jal         func_2089F0
    ctx->pc = 0x208F98u;
    SET_GPR_U32(ctx, 31, 0x208FA0u);
    ctx->pc = 0x208F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F98u;
    // 0x208f9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2089F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2089F0u, 0x208F98u, 0x208FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208FA0u;
label_208fa0:
    // 0x208fa0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x208fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208fa4: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x208fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x208fa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208FA8u;
    {
        const bool branch_taken_0x208fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FA8u;
        // 0x208fac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fa8) {
            ctx->pc = 0x208FB8u;
            goto label_208fb8;
        }
    }
    ctx->pc = 0x208FB0u;
    // 0x208fb0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x208FB0u;
    {
        const bool branch_taken_0x208fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FB0u;
        // 0x208fb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fb0) {
            ctx->pc = 0x2090B8u;
            goto label_2090b8;
        }
    }
    ctx->pc = 0x208FB8u;
label_208fb8:
    // 0x208fb8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x208fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208fbc: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x208fbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x208fc0: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x208FC0u;
    {
        const bool branch_taken_0x208fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FC0u;
        // 0x208fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fc0) {
            ctx->pc = 0x2090B8u;
            goto label_2090b8;
        }
    }
    ctx->pc = 0x208FC8u;
    // 0x208fc8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x208fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x208fcc: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x208fccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x208fd0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x208fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x208fd4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x208fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x208fd8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208FD8u;
    {
        const bool branch_taken_0x208fd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x208FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FD8u;
        // 0x208fdc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fd8) {
            ctx->pc = 0x208FECu;
            goto label_208fec;
        }
    }
    ctx->pc = 0x208FE0u;
    // 0x208fe0: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x208fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x208fe4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208FE4u;
    {
        const bool branch_taken_0x208fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FE4u;
        // 0x208fe8: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fe4) {
            ctx->pc = 0x209000u;
            goto label_209000;
        }
    }
    ctx->pc = 0x208FECu;
label_208fec:
    // 0x208fec: 0x14e60032  bne         $a3, $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x208FECu;
    {
        const bool branch_taken_0x208fec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x208FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FECu;
        // 0x208ff0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fec) {
            ctx->pc = 0x2090B8u;
            goto label_2090b8;
        }
    }
    ctx->pc = 0x208FF4u;
    // 0x208ff4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x208ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x208ff8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x208FF8u;
    {
        const bool branch_taken_0x208ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FF8u;
        // 0x208ffc: 0x24442c18  addiu       $a0, $v0, 0x2C18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ff8) {
            ctx->pc = 0x2090B8u;
            goto label_2090b8;
        }
    }
    ctx->pc = 0x209000u;
label_209000:
    // 0x209000: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209000u;
    {
        const bool branch_taken_0x209000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209000u;
        // 0x209004: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209000) {
            ctx->pc = 0x209018u;
            goto label_209018;
        }
    }
    ctx->pc = 0x209008u;
    // 0x209008: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x209008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x20900c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20900cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209010: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x209010u;
    {
        const bool branch_taken_0x209010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209010u;
        // 0x209014: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209010) {
            ctx->pc = 0x2090B8u;
            goto label_2090b8;
        }
    }
    ctx->pc = 0x209018u;
label_209018:
    // 0x209018: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209018u;
    {
        const bool branch_taken_0x209018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209018u;
        // 0x20901c: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209018) {
            ctx->pc = 0x209030u;
            goto label_209030;
        }
    }
    ctx->pc = 0x209020u;
    // 0x209020: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x209020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x209024: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x209024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209028: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x209028u;
    {
        const bool branch_taken_0x209028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209028u;
        // 0x20902c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209028) {
            ctx->pc = 0x2090B8u;
            goto label_2090b8;
        }
    }
    ctx->pc = 0x209030u;
label_209030:
    // 0x209030: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x209030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209034: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x209034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x209038: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x209038u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x20903c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x20903cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x209040: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x209040u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x209044: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x209044u;
    {
        const bool branch_taken_0x209044 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x209048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209044u;
        // 0x209048: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209044) {
            ctx->pc = 0x20905Cu;
            goto label_20905c;
        }
    }
    ctx->pc = 0x20904Cu;
    // 0x20904c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x209050: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x209050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x209054: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x209054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x209058: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x209058u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_20905c:
    // 0x20905c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x20905cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x209060: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x209060u;
    {
        const bool branch_taken_0x209060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209060u;
        // 0x209064: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209060) {
            ctx->pc = 0x20906Cu;
            goto label_20906c;
        }
    }
    ctx->pc = 0x209068u;
label_209068:
    // 0x209068: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x209068u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_20906c:
    // 0x20906c: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20906Cu;
    {
        const bool branch_taken_0x20906c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x20906c) {
            ctx->pc = 0x209070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20906Cu;
            // 0x209070: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209080u;
            goto label_209080;
        }
    }
    ctx->pc = 0x209074u;
    // 0x209074: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x209074u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x209078: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x209078u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x20907c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x20907cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_209080:
    // 0x209080: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x209080u;
    {
        const bool branch_taken_0x209080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209080u;
        // 0x209084: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209080) {
            ctx->pc = 0x209068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209068;
        }
    }
    ctx->pc = 0x209088u;
    // 0x209088: 0x30e3007f  andi        $v1, $a3, 0x7F
    ctx->pc = 0x209088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x20908c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x20908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x209090: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x209090u;
    {
        const bool branch_taken_0x209090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x209090) {
            ctx->pc = 0x209094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209090u;
            // 0x209094: 0xaca7000c  sw          $a3, 0xC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2090B4u;
            goto label_2090b4;
        }
    }
    ctx->pc = 0x209098u;
    // 0x209098: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x209098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x20909c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20909Cu;
    {
        const bool branch_taken_0x20909c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2090A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20909Cu;
        // 0x2090a0: 0x24e20040  addiu       $v0, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20909c) {
            ctx->pc = 0x2090ACu;
            goto label_2090ac;
        }
    }
    ctx->pc = 0x2090A4u;
    // 0x2090a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2090A4u;
    {
        const bool branch_taken_0x2090a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2090A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090A4u;
        // 0x2090a8: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2090a4) {
            ctx->pc = 0x2090B0u;
            goto label_2090b0;
        }
    }
    ctx->pc = 0x2090ACu;
label_2090ac:
    // 0x2090ac: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x2090acu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_2090b0:
    // 0x2090b0: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x2090b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
label_2090b4:
    // 0x2090b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2090b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2090b8:
    // 0x2090b8: 0xc082238  jal         func_2088E0
    ctx->pc = 0x2090B8u;
    SET_GPR_U32(ctx, 31, 0x2090C0u);
    ctx->pc = 0x2088E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2088E0u, 0x2090B8u, 0x2090C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2090C0u;
label_2090c0:
    // 0x2090c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2090c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2090c4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2090c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2090c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2090C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2090CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090C8u;
        // 0x2090cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2090C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2090D0u;
}
