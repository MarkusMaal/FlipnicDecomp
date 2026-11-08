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

// Function: FUN_00200448
// Address: 0x200448 - 0x2005d8
void FUN_00200448_0x200448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00200448_0x200448");
#endif

    switch (ctx->pc) {
        case 0x200478u: goto label_200478;
        case 0x20048cu: goto label_20048c;
        case 0x2004c4u: goto label_2004c4;
        case 0x2004f8u: goto label_2004f8;
        case 0x200550u: goto label_200550;
        case 0x200598u: goto label_200598;
        default: break;
    }

    ctx->pc = 0x200448u;

    // 0x200448: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x200448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20044c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x20044cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x200450: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x200450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x200454: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x200454u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200458: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x200458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20045c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20045cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200460: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x200460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200468: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x200468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20046c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20046cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200470: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x200470u;
    SET_GPR_U32(ctx, 31, 0x200478u);
    ctx->pc = 0x200474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200470u;
    // 0x200474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x200470u, 0x200478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200478u;
label_200478:
    // 0x200478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20047c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20047Cu;
    {
        const bool branch_taken_0x20047c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x200480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20047Cu;
        // 0x200480: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20047c) {
            ctx->pc = 0x2004A0u;
            goto label_2004a0;
        }
    }
    ctx->pc = 0x200484u;
    // 0x200484: 0xc07fea0  jal         func_1FFA80
    ctx->pc = 0x200484u;
    SET_GPR_U32(ctx, 31, 0x20048Cu);
    ctx->pc = 0x200488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200484u;
    // 0x200488: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA80u, 0x200484u, 0x20048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20048Cu;
label_20048c:
    // 0x20048c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x20048cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200494: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x200494u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
    // 0x200498: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x200498u;
    {
        const bool branch_taken_0x200498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200498u;
        // 0x20049c: 0xad620010  sw          $v0, 0x10($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200498) {
            ctx->pc = 0x2005B8u;
            goto label_2005b8;
        }
    }
    ctx->pc = 0x2004A0u;
label_2004a0:
    // 0x2004a0: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2004A0u;
    {
        const bool branch_taken_0x2004a0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2004A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004A0u;
        // 0x2004a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004a0) {
            ctx->pc = 0x2004B8u;
            goto label_2004b8;
        }
    }
    ctx->pc = 0x2004A8u;
    // 0x2004a8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2004a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004ac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2004acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2004b0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2004b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004b4: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x2004b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2004b8:
    // 0x2004b8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2004b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2004bc: 0xc07fea0  jal         func_1FFA80
    ctx->pc = 0x2004BCu;
    SET_GPR_U32(ctx, 31, 0x2004C4u);
    ctx->pc = 0x2004C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2004BCu;
    // 0x2004c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA80u, 0x2004BCu, 0x2004C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2004C4u;
label_2004c4:
    // 0x2004c4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2004c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004c8: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x2004c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2004cc: 0xad70000c  sw          $s0, 0xC($t3)
    ctx->pc = 0x2004ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 16));
    // 0x2004d0: 0x26490014  addiu       $t1, $s2, 0x14
    ctx->pc = 0x2004d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2004d4: 0x25670014  addiu       $a3, $t3, 0x14
    ctx->pc = 0x2004d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x2004d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2004d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004dc: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x2004dcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2004e0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2004e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2004e4: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x2004e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x2004e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2004e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2004ec: 0x1036821  addu        $t5, $t0, $v1
    ctx->pc = 0x2004ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2004f0: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x2004f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2004f4: 0x0  nop
    ctx->pc = 0x2004f4u;
    // NOP
label_2004f8:
    // 0x2004f8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x2004f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2004fc: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2004fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x200500: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x200500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x200504: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x200504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x200508: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x200508u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x20050c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x20050cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x200510: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x200510u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x200514: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x200514u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200518: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x200518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x20051c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x20051cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x200520: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x200520u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x200524: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x200524u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x200528: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x200528u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x20052c: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x20052cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x200530: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x200530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x200534: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x200534u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x200538: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x200538u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x20053c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x20053Cu;
    {
        const bool branch_taken_0x20053c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20053Cu;
        // 0x200540: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20053c) {
            ctx->pc = 0x2004F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2004f8;
        }
    }
    ctx->pc = 0x200544u;
    // 0x200544: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x200544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x200548: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x200548u;
    {
        const bool branch_taken_0x200548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200548) {
            ctx->pc = 0x20054Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200548u;
            // 0x20054c: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200588u;
            goto label_200588;
        }
    }
    ctx->pc = 0x200550u;
label_200550:
    // 0x200550: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x200550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x200554: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x200554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x200558: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x200558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20055c: 0x10d202b  sltu        $a0, $t0, $t5
    ctx->pc = 0x20055cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x200560: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x200560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x200564: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x200564u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x200568: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x200568u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x20056c: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x20056cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x200570: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x200570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x200574: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x200574u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x200578: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x200578u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x20057c: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20057Cu;
    {
        const bool branch_taken_0x20057c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x200580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20057Cu;
        // 0x200580: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20057c) {
            ctx->pc = 0x200550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200550;
        }
    }
    ctx->pc = 0x200584u;
    // 0x200584: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x200584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_200588:
    // 0x200588: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x200588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20058c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x20058Cu;
    {
        const bool branch_taken_0x20058c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20058c) {
            ctx->pc = 0x200590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20058Cu;
            // 0x200590: 0xad6c0010  sw          $t4, 0x10($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2005B8u;
            goto label_2005b8;
        }
    }
    ctx->pc = 0x200594u;
    // 0x200594: 0x0  nop
    ctx->pc = 0x200594u;
    // NOP
label_200598:
    // 0x200598: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x200598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x20059c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x20059cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x2005a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2005a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2005a4: 0x0  nop
    ctx->pc = 0x2005a4u;
    // NOP
    // 0x2005a8: 0x0  nop
    ctx->pc = 0x2005a8u;
    // NOP
    // 0x2005ac: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2005ACu;
    {
        const bool branch_taken_0x2005ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2005ac) {
            ctx->pc = 0x200598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200598;
        }
    }
    ctx->pc = 0x2005B4u;
    // 0x2005b4: 0xad6c0010  sw          $t4, 0x10($t3)
    ctx->pc = 0x2005b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
label_2005b8:
    // 0x2005b8: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x2005b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2005bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2005bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2005c0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2005c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2005c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2005c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2005c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2005c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2005cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2005ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2005d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2005D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2005D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005D0u;
        // 0x2005d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2005D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2005D8u;
}
