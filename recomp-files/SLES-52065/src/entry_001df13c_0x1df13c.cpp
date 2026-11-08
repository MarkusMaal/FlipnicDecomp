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

// Function: entry_001df13c
// Address: 0x1df13c - 0x1df200
void entry_001df13c_0x1df13c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df13c_0x1df13c");
#endif

    switch (ctx->pc) {
        case 0x1df174u: goto label_1df174;
        case 0x1df184u: goto label_1df184;
        case 0x1df198u: goto label_1df198;
        case 0x1df1d4u: goto label_1df1d4;
        case 0x1df1dcu: goto label_1df1dc;
        case 0x1df1e8u: goto label_1df1e8;
        default: break;
    }

    ctx->pc = 0x1df13cu;

    // 0x1df13c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1df13cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1df140: 0x11520046  beq         $t2, $s2, . + 4 + (0x46 << 2)
    ctx->pc = 0x1DF140u;
    {
        const bool branch_taken_0x1df140 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 18));
        ctx->pc = 0x1DF144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF140u;
        // 0x1df144: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df140) {
            ctx->pc = 0x1DF25Cu;
            return;
        }
    }
    ctx->pc = 0x1DF148u;
    // 0x1df148: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1df148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df14c: 0x24849f00  addiu       $a0, $a0, -0x6100
    ctx->pc = 0x1df14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942464));
    // 0x1df150: 0x1319c0  sll         $v1, $s3, 7
    ctx->pc = 0x1df150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x1df154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1df154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df158: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x1df158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1df15c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1df15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1df160: 0x5445003e  bnel        $v0, $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1DF160u;
    {
        const bool branch_taken_0x1df160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1df160) {
            ctx->pc = 0x1DF164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF160u;
            // 0x1df164: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF25Cu;
            return;
        }
    }
    ctx->pc = 0x1DF168u;
    // 0x1df168: 0xae340060  sw          $s4, 0x60($s1)
    ctx->pc = 0x1df168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 20));
    // 0x1df16c: 0xc077be6  jal         func_1DEF98
    ctx->pc = 0x1DF16Cu;
    SET_GPR_U32(ctx, 31, 0x1DF174u);
    ctx->pc = 0x1DF170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF16Cu;
    // 0x1df170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEF98u, 0x1DF16Cu, 0x1DF174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF174u;
label_1df174:
    // 0x1df174: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x1DF174u;
    {
        const bool branch_taken_0x1df174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df174) {
            ctx->pc = 0x1DF178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF174u;
            // 0x1df178: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF25Cu;
            return;
        }
    }
    ctx->pc = 0x1DF17Cu;
    // 0x1df17c: 0xc077c16  jal         func_1DF058
    ctx->pc = 0x1DF17Cu;
    SET_GPR_U32(ctx, 31, 0x1DF184u);
    ctx->pc = 0x1DF180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF17Cu;
    // 0x1df180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF058u, 0x1DF17Cu, 0x1DF184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF184u;
label_1df184:
    // 0x1df184: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x1DF184u;
    {
        const bool branch_taken_0x1df184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df184) {
            ctx->pc = 0x1DF188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF184u;
            // 0x1df188: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF25Cu;
            return;
        }
    }
    ctx->pc = 0x1DF18Cu;
    // 0x1df18c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1df18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df190: 0xc075586  jal         func_1D5618
    ctx->pc = 0x1DF190u;
    SET_GPR_U32(ctx, 31, 0x1DF198u);
    ctx->pc = 0x1DF194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF190u;
    // 0x1df194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5618u, 0x1DF190u, 0x1DF198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF198u;
label_1df198:
    // 0x1df198: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1df198u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df19c: 0x5072002f  beql        $v1, $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x1DF19Cu;
    {
        const bool branch_taken_0x1df19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x1df19c) {
            ctx->pc = 0x1DF1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF19Cu;
            // 0x1df1a0: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF25Cu;
            return;
        }
    }
    ctx->pc = 0x1DF1A4u;
    // 0x1df1a4: 0x340280bc  ori         $v0, $zero, 0x80BC
    ctx->pc = 0x1df1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32956);
    // 0x1df1a8: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x1df1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x1df1ac: 0x341480b2  ori         $s4, $zero, 0x80B2
    ctx->pc = 0x1df1acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
    // 0x1df1b0: 0x14a3fc  dsll32      $s4, $s4, 15
    ctx->pc = 0x1df1b0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 15));
    // 0x1df1b4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1df1b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1df1b8: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1df1b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1df1bc: 0xde250038  ld          $a1, 0x38($s1)
    ctx->pc = 0x1df1bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1df1c0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1df1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1df1c4: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x1df1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x1df1c8: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x1df1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x1df1cc: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1DF1CCu;
    SET_GPR_U32(ctx, 31, 0x1DF1D4u);
    ctx->pc = 0x1DF1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1CCu;
    // 0x1df1d0: 0xfe340078  sd          $s4, 0x78($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1DF1CCu, 0x1DF1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1D4u;
label_1df1d4:
    // 0x1df1d4: 0xc074c4c  jal         func_1D3130
    ctx->pc = 0x1DF1D4u;
    SET_GPR_U32(ctx, 31, 0x1DF1DCu);
    ctx->pc = 0x1DF1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1D4u;
    // 0x1df1d8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3130u, 0x1DF1D4u, 0x1DF1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1DCu;
label_1df1dc:
    // 0x1df1dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1df1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1e0: 0xc08218c  jal         func_208630
    ctx->pc = 0x1DF1E0u;
    SET_GPR_U32(ctx, 31, 0x1DF1E8u);
    ctx->pc = 0x1DF1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1E0u;
    // 0x1df1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1DF1E0u, 0x1DF1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1E8u;
label_1df1e8:
    // 0x1df1e8: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF1E8u;
    {
        const bool branch_taken_0x1df1e8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1df1e8) {
            ctx->pc = 0x1DF200u;
            return;
        }
    }
    ctx->pc = 0x1DF1F0u;
    // 0x1df1f0: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1df1f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1df1f4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1df1f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1df1f8: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1DF1F8u;
    SET_GPR_U32(ctx, 31, 0x1DF200u);
    ctx->pc = 0x1DF1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1F8u;
    // 0x1df1fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DF1F8u, 0x1DF200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF200u;
}
