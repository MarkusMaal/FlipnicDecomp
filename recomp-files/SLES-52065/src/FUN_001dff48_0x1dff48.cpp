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

// Function: FUN_001dff48
// Address: 0x1dff48 - 0x1e022c
void FUN_001dff48_0x1dff48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dff48_0x1dff48");
#endif

    switch (ctx->pc) {
        case 0x1dffa0u: goto label_1dffa0;
        case 0x1dffacu: goto label_1dffac;
        case 0x1dffecu: goto label_1dffec;
        case 0x1dfff8u: goto label_1dfff8;
        case 0x1e0010u: goto label_1e0010;
        case 0x1e0024u: goto label_1e0024;
        case 0x1e0040u: goto label_1e0040;
        case 0x1e0050u: goto label_1e0050;
        case 0x1e006cu: goto label_1e006c;
        case 0x1e0078u: goto label_1e0078;
        case 0x1e00a4u: goto label_1e00a4;
        case 0x1e00b0u: goto label_1e00b0;
        case 0x1e00b8u: goto label_1e00b8;
        case 0x1e00ccu: goto label_1e00cc;
        case 0x1e00d4u: goto label_1e00d4;
        case 0x1e00e0u: goto label_1e00e0;
        case 0x1e00f0u: goto label_1e00f0;
        case 0x1e00f8u: goto label_1e00f8;
        case 0x1e013cu: goto label_1e013c;
        case 0x1e0164u: goto label_1e0164;
        case 0x1e0170u: goto label_1e0170;
        case 0x1e0184u: goto label_1e0184;
        case 0x1e0190u: goto label_1e0190;
        case 0x1e01a8u: goto label_1e01a8;
        case 0x1e01b4u: goto label_1e01b4;
        case 0x1e01f0u: goto label_1e01f0;
        case 0x1e01fcu: goto label_1e01fc;
        default: break;
    }

    ctx->pc = 0x1dff48u;

    // 0x1dff48: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1dff48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1dff4c: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x1dff4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x1dff50: 0x90433838  lbu         $v1, 0x3838($v0)
    ctx->pc = 0x1dff50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x223838u));
    // 0x1dff54: 0xffb40220  sd          $s4, 0x220($sp)
    ctx->pc = 0x1dff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 20));
    // 0x1dff58: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1dff58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff5c: 0xffb50228  sd          $s5, 0x228($sp)
    ctx->pc = 0x1dff5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 21));
    // 0x1dff60: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1dff60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff64: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x1dff64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x1dff68: 0xffb10208  sd          $s1, 0x208($sp)
    ctx->pc = 0x1dff68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
    // 0x1dff6c: 0xffb70238  sd          $s7, 0x238($sp)
    ctx->pc = 0x1dff6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 23));
    // 0x1dff70: 0x15b9c0  sll         $s7, $s5, 7
    ctx->pc = 0x1dff70u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x1dff74: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x1dff74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x1dff78: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1dff78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1dff7c: 0x26319f00  addiu       $s1, $s1, -0x6100
    ctx->pc = 0x1dff7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942464));
    // 0x1dff80: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x1dff80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x1dff84: 0xffb30218  sd          $s3, 0x218($sp)
    ctx->pc = 0x1dff84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 19));
    // 0x1dff88: 0xffb60230  sd          $s6, 0x230($sp)
    ctx->pc = 0x1dff88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 22));
    // 0x1dff8c: 0xffbe0240  sd          $fp, 0x240($sp)
    ctx->pc = 0x1dff8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 30));
    // 0x1dff90: 0xffbf0248  sd          $ra, 0x248($sp)
    ctx->pc = 0x1dff90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 31));
    // 0x1dff94: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x1dff94u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dff98: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1DFF98u;
    SET_GPR_U32(ctx, 31, 0x1DFFA0u);
    ctx->pc = 0x1DFF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF98u;
    // 0x1dff9c: 0xde240048  ld          $a0, 0x48($s1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1DFF98u, 0x1DFFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFFA0u;
label_1dffa0:
    // 0x1dffa0: 0xde240038  ld          $a0, 0x38($s1)
    ctx->pc = 0x1dffa0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1dffa4: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1DFFA4u;
    SET_GPR_U32(ctx, 31, 0x1DFFACu);
    ctx->pc = 0x1DFFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFFA4u;
    // 0x1dffa8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1DFFA4u, 0x1DFFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFFACu;
label_1dffac:
    // 0x1dffac: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DFFACu;
    {
        const bool branch_taken_0x1dffac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFFACu;
        // 0x1dffb0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dffac) {
            ctx->pc = 0x1DFFC8u;
            goto label_1dffc8;
        }
    }
    ctx->pc = 0x1DFFB4u;
    // 0x1dffb4: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x1dffb4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dffb8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DFFB8u;
    {
        const bool branch_taken_0x1dffb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dffb8) {
            ctx->pc = 0x1DFFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFFB8u;
            // 0x1dffbc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFFC0u;
            goto label_1dffc0;
        }
    }
    ctx->pc = 0x1DFFC0u;
label_1dffc0:
    // 0x1dffc0: 0x1010  mfhi        $v0
    ctx->pc = 0x1dffc0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dffc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dffc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dffc8:
    // 0x1dffc8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1dffc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1dffcc: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1dffccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1dffd0: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x1dffd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dffd4: 0x24a53840  addiu       $a1, $a1, 0x3840
    ctx->pc = 0x1dffd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14400));
    // 0x1dffd8: 0x8e280028  lw          $t0, 0x28($s1)
    ctx->pc = 0x1dffd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1dffdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dffdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dffe0: 0x8e290024  lw          $t1, 0x24($s1)
    ctx->pc = 0x1dffe0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1dffe4: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1DFFE4u;
    SET_GPR_U32(ctx, 31, 0x1DFFECu);
    ctx->pc = 0x1DFFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFFE4u;
    // 0x1dffe8: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1DFFE4u, 0x1DFFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFFECu;
label_1dffec:
    // 0x1dffec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dffecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfff0: 0xc080664  jal         func_201990
    ctx->pc = 0x1DFFF0u;
    SET_GPR_U32(ctx, 31, 0x1DFFF8u);
    ctx->pc = 0x1DFFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFFF0u;
    // 0x1dfff4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1DFFF0u, 0x1DFFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFFF8u;
label_1dfff8:
    // 0x1dfff8: 0x6a00043  bltz        $s5, . + 4 + (0x43 << 2)
    ctx->pc = 0x1DFFF8u;
    {
        const bool branch_taken_0x1dfff8 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x1DFFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFFF8u;
        // 0x1dfffc: 0x3c1e0022  lui         $fp, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfff8) {
            ctx->pc = 0x1E0108u;
            goto label_1e0108;
        }
    }
    ctx->pc = 0x1E0000u;
    // 0x1e0000: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e0000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0004: 0xde240048  ld          $a0, 0x48($s1)
    ctx->pc = 0x1e0004u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1e0008: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1E0008u;
    SET_GPR_U32(ctx, 31, 0x1E0010u);
    ctx->pc = 0x1E000Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0008u;
    // 0x1e000c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1E0008u, 0x1E0010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0010u;
label_1e0010:
    // 0x1e0010: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E0010u;
    {
        const bool branch_taken_0x1e0010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0010u;
        // 0x1e0014: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0010) {
            ctx->pc = 0x1E010Cu;
            goto label_1e010c;
        }
    }
    ctx->pc = 0x1E0018u;
    // 0x1e0018: 0xde240078  ld          $a0, 0x78($s1)
    ctx->pc = 0x1e0018u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1e001c: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1E001Cu;
    SET_GPR_U32(ctx, 31, 0x1E0024u);
    ctx->pc = 0x1E0020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E001Cu;
    // 0x1e0020: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1E001Cu, 0x1E0024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0024u;
label_1e0024:
    // 0x1e0024: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1E0024u;
    {
        const bool branch_taken_0x1e0024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0024u;
        // 0x1e0028: 0x8ec9a088  lw          $t1, -0x5F78($s6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294942856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0024) {
            ctx->pc = 0x1E0110u;
            goto label_1e0110;
        }
    }
    ctx->pc = 0x1E002Cu;
    // 0x1e002c: 0x3413809c  ori         $s3, $zero, 0x809C
    ctx->pc = 0x1e002cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32924);
    // 0x1e0030: 0x139bfc  dsll32      $s3, $s3, 15
    ctx->pc = 0x1e0030u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 15));
    // 0x1e0034: 0xde240058  ld          $a0, 0x58($s1)
    ctx->pc = 0x1e0034u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1e0038: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E0038u;
    SET_GPR_U32(ctx, 31, 0x1E0040u);
    ctx->pc = 0x1E003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0038u;
    // 0x1e003c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E0038u, 0x1E0040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0040u;
label_1e0040:
    // 0x1e0040: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0044: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e0044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0048: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1E0048u;
    SET_GPR_U32(ctx, 31, 0x1E0050u);
    ctx->pc = 0x1E004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0048u;
    // 0x1e004c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1E0048u, 0x1E0050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0050u;
label_1e0050:
    // 0x1e0050: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0050u;
    {
        const bool branch_taken_0x1e0050 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e0050) {
            ctx->pc = 0x1E005Cu;
            goto label_1e005c;
        }
    }
    ctx->pc = 0x1E0058u;
    // 0x1e0058: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1e0058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e005c:
    // 0x1e005c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e005cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e0060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0064: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E0064u;
    SET_GPR_U32(ctx, 31, 0x1E006Cu);
    ctx->pc = 0x1E0068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0064u;
    // 0x1e0068: 0x3c1e0022  lui         $fp, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E0064u, 0x1E006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E006Cu;
label_1e006c:
    // 0x1e006c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e006cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0070: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1E0070u;
    SET_GPR_U32(ctx, 31, 0x1E0078u);
    ctx->pc = 0x1E0074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0070u;
    // 0x1e0074: 0x27d0a084  addiu       $s0, $fp, -0x5F7C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294942852));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1E0070u, 0x1E0078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0078u;
label_1e0078:
    // 0x1e0078: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1e0078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1e007c: 0x2465a080  addiu       $a1, $v1, -0x5F80
    ctx->pc = 0x1e007cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942848));
    // 0x1e0080: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1e0080u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1e0084: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1e0084u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1e0088: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x1e0088u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
    // 0x1e008c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1e008cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e0090: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e0090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1e0094: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1e0094u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e0098: 0x26d3a088  addiu       $s3, $s6, -0x5F78
    ctx->pc = 0x1e0098u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294942856));
    // 0x1e009c: 0xc08218c  jal         func_208630
    ctx->pc = 0x1E009Cu;
    SET_GPR_U32(ctx, 31, 0x1E00A4u);
    ctx->pc = 0x1E00A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E009Cu;
    // 0x1e00a0: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1E009Cu, 0x1E00A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00A4u;
label_1e00a4:
    // 0x1e00a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e00a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e00a8: 0xc082014  jal         func_208050
    ctx->pc = 0x1E00A8u;
    SET_GPR_U32(ctx, 31, 0x1E00B0u);
    ctx->pc = 0x1E00ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00A8u;
    // 0x1e00ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1E00A8u, 0x1E00B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00B0u;
label_1e00b0:
    // 0x1e00b0: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1E00B0u;
    SET_GPR_U32(ctx, 31, 0x1E00B8u);
    ctx->pc = 0x1E00B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00B0u;
    // 0x1e00b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1E00B0u, 0x1E00B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00B8u;
label_1e00b8:
    // 0x1e00b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e00b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e00bc: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1e00bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1e00c0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1e00c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1e00c4: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1E00C4u;
    SET_GPR_U32(ctx, 31, 0x1E00CCu);
    ctx->pc = 0x1E00C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00C4u;
    // 0x1e00c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1E00C4u, 0x1E00CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00CCu;
label_1e00cc:
    // 0x1e00cc: 0xc08218c  jal         func_208630
    ctx->pc = 0x1E00CCu;
    SET_GPR_U32(ctx, 31, 0x1E00D4u);
    ctx->pc = 0x1E00D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00CCu;
    // 0x1e00d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1E00CCu, 0x1E00D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00D4u;
label_1e00d4:
    // 0x1e00d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e00d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e00d8: 0xc082014  jal         func_208050
    ctx->pc = 0x1E00D8u;
    SET_GPR_U32(ctx, 31, 0x1E00E0u);
    ctx->pc = 0x1E00DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00D8u;
    // 0x1e00dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1E00D8u, 0x1E00E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00E0u;
label_1e00e0:
    // 0x1e00e0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1e00e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1e00e4: 0xdc253930  ld          $a1, 0x3930($at)
    ctx->pc = 0x1e00e4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x223930u));
    // 0x1e00e8: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1E00E8u;
    SET_GPR_U32(ctx, 31, 0x1E00F0u);
    ctx->pc = 0x1E00ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00E8u;
    // 0x1e00ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1E00E8u, 0x1E00F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00F0u;
label_1e00f0:
    // 0x1e00f0: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1E00F0u;
    SET_GPR_U32(ctx, 31, 0x1E00F8u);
    ctx->pc = 0x1E00F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00F0u;
    // 0x1e00f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1E00F0u, 0x1E00F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00F8u;
label_1e00f8:
    // 0x1e00f8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E00F8u;
    {
        const bool branch_taken_0x1e00f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E00FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00F8u;
        // 0x1e00fc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00f8) {
            ctx->pc = 0x1E010Cu;
            goto label_1e010c;
        }
    }
    ctx->pc = 0x1E0100u;
    // 0x1e0100: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0100u;
    {
        const bool branch_taken_0x1e0100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0100u;
        // 0x1e0104: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0100) {
            ctx->pc = 0x1E010Cu;
            goto label_1e010c;
        }
    }
    ctx->pc = 0x1E0108u;
label_1e0108:
    // 0x1e0108: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x1e0108u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
label_1e010c:
    // 0x1e010c: 0x8ec9a088  lw          $t1, -0x5F78($s6)
    ctx->pc = 0x1e010cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294942856)));
label_1e0110:
    // 0x1e0110: 0x292201f5  slti        $v0, $t1, 0x1F5
    ctx->pc = 0x1e0110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)501) ? 1 : 0);
    // 0x1e0114: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1E0114u;
    {
        const bool branch_taken_0x1e0114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0114) {
            ctx->pc = 0x1E0118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0114u;
            // 0x1e0118: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0148u;
            goto label_1e0148;
        }
    }
    ctx->pc = 0x1E011Cu;
    // 0x1e011c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1e011cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1e0120: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1e0120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1e0124: 0x8fc8a084  lw          $t0, -0x5F7C($fp)
    ctx->pc = 0x1e0124u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294942852)));
    // 0x1e0128: 0x24a53878  addiu       $a1, $a1, 0x3878
    ctx->pc = 0x1e0128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14456));
    // 0x1e012c: 0xde260030  ld          $a2, 0x30($s1)
    ctx->pc = 0x1e012cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1e0130: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e0130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0134: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1E0134u;
    SET_GPR_U32(ctx, 31, 0x1E013Cu);
    ctx->pc = 0x1E0138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0134u;
    // 0x1e0138: 0x8c47a080  lw          $a3, -0x5F80($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1E0134u, 0x1E013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E013Cu;
label_1e013c:
    // 0x1e013c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E013Cu;
    {
        const bool branch_taken_0x1e013c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E013Cu;
        // 0x1e0140: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e013c) {
            ctx->pc = 0x1E0168u;
            goto label_1e0168;
        }
    }
    ctx->pc = 0x1E0144u;
    // 0x1e0144: 0x0  nop
    ctx->pc = 0x1e0144u;
    // NOP
label_1e0148:
    // 0x1e0148: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1e0148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1e014c: 0x8fc8a084  lw          $t0, -0x5F7C($fp)
    ctx->pc = 0x1e014cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294942852)));
    // 0x1e0150: 0x24a538b0  addiu       $a1, $a1, 0x38B0
    ctx->pc = 0x1e0150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14512));
    // 0x1e0154: 0xde260030  ld          $a2, 0x30($s1)
    ctx->pc = 0x1e0154u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1e0158: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e0158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e015c: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1E015Cu;
    SET_GPR_U32(ctx, 31, 0x1E0164u);
    ctx->pc = 0x1E0160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E015Cu;
    // 0x1e0160: 0x8c67a080  lw          $a3, -0x5F80($v1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1E015Cu, 0x1E0164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0164u;
label_1e0164:
    // 0x1e0164: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e0164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e0168:
    // 0x1e0168: 0xc080664  jal         func_201990
    ctx->pc = 0x1E0168u;
    SET_GPR_U32(ctx, 31, 0x1E0170u);
    ctx->pc = 0x1E016Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0168u;
    // 0x1e016c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1E0168u, 0x1E0170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0170u;
label_1e0170:
    // 0x1e0170: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1e0170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1e0174: 0xde260078  ld          $a2, 0x78($s1)
    ctx->pc = 0x1e0174u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1e0178: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e0178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e017c: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1E017Cu;
    SET_GPR_U32(ctx, 31, 0x1E0184u);
    ctx->pc = 0x1E0180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E017Cu;
    // 0x1e0180: 0x24a538e8  addiu       $a1, $a1, 0x38E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1E017Cu, 0x1E0184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0184u;
label_1e0184:
    // 0x1e0184: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e0184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0188: 0xc080664  jal         func_201990
    ctx->pc = 0x1E0188u;
    SET_GPR_U32(ctx, 31, 0x1E0190u);
    ctx->pc = 0x1E018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0188u;
    // 0x1e018c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1E0188u, 0x1E0190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0190u;
label_1e0190:
    // 0x1e0190: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1e0190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1e0194: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x1e0194u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e0198: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e0198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e019c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1e019cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01a0: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1E01A0u;
    SET_GPR_U32(ctx, 31, 0x1E01A8u);
    ctx->pc = 0x1E01A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01A0u;
    // 0x1e01a4: 0x24a53908  addiu       $a1, $a1, 0x3908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1E01A0u, 0x1E01A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01A8u;
label_1e01a8:
    // 0x1e01a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e01a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01ac: 0xc080664  jal         func_201990
    ctx->pc = 0x1E01ACu;
    SET_GPR_U32(ctx, 31, 0x1E01B4u);
    ctx->pc = 0x1E01B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01ACu;
    // 0x1e01b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1E01ACu, 0x1E01B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01B4u;
label_1e01b4:
    // 0x1e01b4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1e01b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1e01b8: 0x2445a080  addiu       $a1, $v0, -0x5F80
    ctx->pc = 0x1e01b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942848));
    // 0x1e01bc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e01c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e01c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e01c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e01c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e01c8: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E01C8u;
    {
        const bool branch_taken_0x1e01c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E01C8u;
        // 0x1e01cc: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e01c8) {
            ctx->pc = 0x1E01D4u;
            goto label_1e01d4;
        }
    }
    ctx->pc = 0x1E01D0u;
    // 0x1e01d0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1e01d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1e01d4:
    // 0x1e01d4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e01d8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1e01d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e01dc: 0x24429f00  addiu       $v0, $v0, -0x6100
    ctx->pc = 0x1e01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942464));
    // 0x1e01e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e01e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01e4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e01e8: 0xc0758b0  jal         func_1D62C0
    ctx->pc = 0x1E01E8u;
    SET_GPR_U32(ctx, 31, 0x1E01F0u);
    ctx->pc = 0x1E01ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01E8u;
    // 0x1e01ec: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D62C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D62C0u, 0x1E01E8u, 0x1E01F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01F0u;
label_1e01f0:
    // 0x1e01f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e01f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01f4: 0xc080664  jal         func_201990
    ctx->pc = 0x1E01F4u;
    SET_GPR_U32(ctx, 31, 0x1E01FCu);
    ctx->pc = 0x1E01F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01F4u;
    // 0x1e01f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1E01F4u, 0x1E01FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01FCu;
label_1e01fc:
    // 0x1e01fc: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x1e01fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e0200: 0xdfb10208  ld          $s1, 0x208($sp)
    ctx->pc = 0x1e0200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1e0204: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x1e0204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1e0208: 0xdfb30218  ld          $s3, 0x218($sp)
    ctx->pc = 0x1e0208u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1e020c: 0xdfb40220  ld          $s4, 0x220($sp)
    ctx->pc = 0x1e020cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1e0210: 0xdfb50228  ld          $s5, 0x228($sp)
    ctx->pc = 0x1e0210u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x1e0214: 0xdfb60230  ld          $s6, 0x230($sp)
    ctx->pc = 0x1e0214u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1e0218: 0xdfb70238  ld          $s7, 0x238($sp)
    ctx->pc = 0x1e0218u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1e021c: 0xdfbe0240  ld          $fp, 0x240($sp)
    ctx->pc = 0x1e021cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1e0220: 0xdfbf0248  ld          $ra, 0x248($sp)
    ctx->pc = 0x1e0220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1e0224: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0224u;
        // 0x1e0228: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E022Cu;
}
