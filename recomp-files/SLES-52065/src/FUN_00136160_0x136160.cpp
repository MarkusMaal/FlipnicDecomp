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

// Function: FUN_00136160
// Address: 0x136160 - 0x136544
void FUN_00136160_0x136160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00136160_0x136160");
#endif

    switch (ctx->pc) {
        case 0x1361dcu: goto label_1361dc;
        case 0x1361e4u: goto label_1361e4;
        case 0x136234u: goto label_136234;
        case 0x136274u: goto label_136274;
        case 0x1362bcu: goto label_1362bc;
        case 0x136324u: goto label_136324;
        case 0x136348u: goto label_136348;
        case 0x1363acu: goto label_1363ac;
        case 0x1363e8u: goto label_1363e8;
        case 0x136408u: goto label_136408;
        case 0x136410u: goto label_136410;
        case 0x136434u: goto label_136434;
        case 0x136470u: goto label_136470;
        case 0x1364a4u: goto label_1364a4;
        case 0x1364ecu: goto label_1364ec;
        case 0x136518u: goto label_136518;
        default: break;
    }

    ctx->pc = 0x136160u;

    // 0x136160: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x136160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x136164: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x136164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x136168: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x136168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13616c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13616cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x136170: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x136170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x136174: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x136174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x136178: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x136178u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13617c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13617cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x136180: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x136180u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136184: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x136184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x136188: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x136188u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13618c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13618cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x136190: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x136190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136194: 0x126000e0  beqz        $s3, . + 4 + (0xE0 << 2)
    ctx->pc = 0x136194u;
    {
        const bool branch_taken_0x136194 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x136198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136194u;
        // 0x136198: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136194) {
            ctx->pc = 0x136518u;
            goto label_136518;
        }
    }
    ctx->pc = 0x13619Cu;
    // 0x13619c: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x13619cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x1361a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1361a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1361a4: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x1361a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1361a8: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1361A8u;
    {
        const bool branch_taken_0x1361a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1361a8) {
            ctx->pc = 0x1361C4u;
            goto label_1361c4;
        }
    }
    ctx->pc = 0x1361B0u;
    // 0x1361b0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x1361b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1361b4: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x1361b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1361b8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1361b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1361bc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1361BCu;
    {
        const bool branch_taken_0x1361bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1361bc) {
            ctx->pc = 0x1361E4u;
            goto label_1361e4;
        }
    }
    ctx->pc = 0x1361C4u;
label_1361c4:
    // 0x1361c4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1361c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1361c8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1361c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1361cc: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1361ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1361d0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1361d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1361d4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1361D4u;
    SET_GPR_U32(ctx, 31, 0x1361DCu);
    ctx->pc = 0x1361D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1361D4u;
    // 0x1361d8: 0x24a5ef20  addiu       $a1, $a1, -0x10E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1361D4u, 0x1361DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1361DCu;
label_1361dc:
    // 0x1361dc: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1361DCu;
    SET_GPR_U32(ctx, 31, 0x1361E4u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1361DCu, 0x1361E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1361E4u;
label_1361e4:
    // 0x1361e4: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x1361e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1361e8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1361e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1361ec: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x1361ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1361f0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1361f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1361f4: 0x1420005d  bnez        $at, . + 4 + (0x5D << 2)
    ctx->pc = 0x1361F4u;
    {
        const bool branch_taken_0x1361f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1361f4) {
            ctx->pc = 0x13636Cu;
            goto label_13636c;
        }
    }
    ctx->pc = 0x1361FCu;
    // 0x1361fc: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1361fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x136200: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x136200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x136204: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x136204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x136208: 0x742023  subu        $a0, $v1, $s4
    ctx->pc = 0x136208u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x13620c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13620Cu;
    {
        const bool branch_taken_0x13620c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x136210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13620Cu;
        // 0x136210: 0x43083  sra         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13620c) {
            ctx->pc = 0x13621Cu;
            goto label_13621c;
        }
    }
    ctx->pc = 0x136214u;
    // 0x136214: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x136214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x136218: 0x43083  sra         $a2, $a0, 2
    ctx->pc = 0x136218u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 2));
label_13621c:
    // 0x13621c: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x13621cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x136220: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x136220u;
    {
        const bool branch_taken_0x136220 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x136224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136220u;
        // 0x136224: 0x134880  sll         $t1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136220) {
            ctx->pc = 0x1362ACu;
            goto label_1362ac;
        }
    }
    ctx->pc = 0x136228u;
    // 0x136228: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x136228u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x13622c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13622Cu;
    {
        const bool branch_taken_0x13622c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x136230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13622Cu;
        // 0x136230: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13622c) {
            ctx->pc = 0x136264u;
            goto label_136264;
        }
    }
    ctx->pc = 0x136234u;
label_136234:
    // 0x136234: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x136234u;
    {
        const bool branch_taken_0x136234 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x136234) {
            ctx->pc = 0x136244u;
            goto label_136244;
        }
    }
    ctx->pc = 0x13623Cu;
    // 0x13623c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x13623cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x136240: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x136240u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_136244:
    // 0x136244: 0x0  nop
    ctx->pc = 0x136244u;
    // NOP
    // 0x136248: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x136248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13624c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13624cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x136250: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x136250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x136254: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x136254u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x136258: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x136258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13625c: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x13625Cu;
    {
        const bool branch_taken_0x13625c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x136260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13625Cu;
        // 0x136260: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13625c) {
            ctx->pc = 0x136234u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136234;
        }
    }
    ctx->pc = 0x136264u;
label_136264:
    // 0x136264: 0x0  nop
    ctx->pc = 0x136264u;
    // NOP
    // 0x136268: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x136268u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13626c: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x13626Cu;
    {
        const bool branch_taken_0x13626c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x136270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13626Cu;
        // 0x136270: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13626c) {
            ctx->pc = 0x136340u;
            goto label_136340;
        }
    }
    ctx->pc = 0x136274u;
label_136274:
    // 0x136274: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x136274u;
    {
        const bool branch_taken_0x136274 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x136274) {
            ctx->pc = 0x136284u;
            goto label_136284;
        }
    }
    ctx->pc = 0x13627Cu;
    // 0x13627c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x13627cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x136280: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x136280u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_136284:
    // 0x136284: 0x0  nop
    ctx->pc = 0x136284u;
    // NOP
    // 0x136288: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x136288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13628c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x13628cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x136290: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x136290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x136294: 0xc3202b  sltu        $a0, $a2, $v1
    ctx->pc = 0x136294u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x136298: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x136298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13629c: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x13629Cu;
    {
        const bool branch_taken_0x13629c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1362A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13629Cu;
        // 0x1362a0: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13629c) {
            ctx->pc = 0x136274u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136274;
        }
    }
    ctx->pc = 0x1362A4u;
    // 0x1362a4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1362A4u;
    {
        const bool branch_taken_0x1362a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1362a4) {
            ctx->pc = 0x136340u;
            goto label_136340;
        }
    }
    ctx->pc = 0x1362ACu;
label_1362ac:
    // 0x1362ac: 0x693823  subu        $a3, $v1, $t1
    ctx->pc = 0x1362acu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1362b0: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x1362b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1362b4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1362B4u;
    {
        const bool branch_taken_0x1362b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1362B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362B4u;
        // 0x1362b8: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362b4) {
            ctx->pc = 0x1362ECu;
            goto label_1362ec;
        }
    }
    ctx->pc = 0x1362BCu;
label_1362bc:
    // 0x1362bc: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1362BCu;
    {
        const bool branch_taken_0x1362bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1362bc) {
            ctx->pc = 0x1362CCu;
            goto label_1362cc;
        }
    }
    ctx->pc = 0x1362C4u;
    // 0x1362c4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1362c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1362c8: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x1362c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
label_1362cc:
    // 0x1362cc: 0x0  nop
    ctx->pc = 0x1362ccu;
    // NOP
    // 0x1362d0: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x1362d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1362d4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1362d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1362d8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1362d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1362dc: 0xe3202b  sltu        $a0, $a3, $v1
    ctx->pc = 0x1362dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1362e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1362e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1362e4: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1362E4u;
    {
        const bool branch_taken_0x1362e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1362E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362E4u;
        // 0x1362e8: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362e4) {
            ctx->pc = 0x1362BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1362bc;
        }
    }
    ctx->pc = 0x1362ECu;
label_1362ec:
    // 0x1362ec: 0x0  nop
    ctx->pc = 0x1362ecu;
    // NOP
    // 0x1362f0: 0xd32023  subu        $a0, $a2, $s3
    ctx->pc = 0x1362f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x1362f4: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1362f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1362f8: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x1362f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1362fc: 0x244082b  sltu        $at, $s2, $a0
    ctx->pc = 0x1362fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x136300: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x136300u;
    {
        const bool branch_taken_0x136300 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x136304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136300u;
        // 0x136304: 0x243082b  sltu        $at, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x136300) {
            ctx->pc = 0x136314u;
            goto label_136314;
        }
    }
    ctx->pc = 0x136308u;
    // 0x136308: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x136308u;
    {
        const bool branch_taken_0x136308 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136308) {
            ctx->pc = 0x136314u;
            goto label_136314;
        }
    }
    ctx->pc = 0x136310u;
    // 0x136310: 0x2499021  addu        $s2, $s2, $t1
    ctx->pc = 0x136310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_136314:
    // 0x136314: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x136314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x136318: 0x285082b  sltu        $at, $s4, $a1
    ctx->pc = 0x136318u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13631c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x13631Cu;
    {
        const bool branch_taken_0x13631c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13631c) {
            ctx->pc = 0x136340u;
            goto label_136340;
        }
    }
    ctx->pc = 0x136324u;
label_136324:
    // 0x136324: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x136324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x136328: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x136328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x13632c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x13632cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x136330: 0x285082b  sltu        $at, $s4, $a1
    ctx->pc = 0x136330u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x136334: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x136334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x136338: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x136338u;
    {
        const bool branch_taken_0x136338 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x136338) {
            ctx->pc = 0x136324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136324;
        }
    }
    ctx->pc = 0x136340u;
label_136340:
    // 0x136340: 0x12600075  beqz        $s3, . + 4 + (0x75 << 2)
    ctx->pc = 0x136340u;
    {
        const bool branch_taken_0x136340 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x136340) {
            ctx->pc = 0x136518u;
            goto label_136518;
        }
    }
    ctx->pc = 0x136348u;
label_136348:
    // 0x136348: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x136348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13634c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13634cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x136350: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x136350u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x136354: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x136354u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x136358: 0x0  nop
    ctx->pc = 0x136358u;
    // NOP
    // 0x13635c: 0x1660fffa  bnez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13635Cu;
    {
        const bool branch_taken_0x13635c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13635c) {
            ctx->pc = 0x136348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136348;
        }
    }
    ctx->pc = 0x136364u;
    // 0x136364: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x136364u;
    {
        const bool branch_taken_0x136364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136364u;
        // 0x136368: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136364) {
            ctx->pc = 0x13651Cu;
            goto label_13651c;
        }
    }
    ctx->pc = 0x13636Cu;
label_13636c:
    // 0x13636c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x13636cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x136370: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x136370u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x136374: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x136374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x136378: 0x27b70098  addiu       $s7, $sp, 0x98
    ctx->pc = 0x136378u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x13637c: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x13637cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x136380: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x136380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x136384: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x136384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x136388: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136388u;
    {
        const bool branch_taken_0x136388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136388u;
        // 0x13638c: 0x531821  addu        $v1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136388) {
            ctx->pc = 0x136398u;
            goto label_136398;
        }
    }
    ctx->pc = 0x136390u;
    // 0x136390: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x136390u;
    {
        const bool branch_taken_0x136390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136390u;
        // 0x136394: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x136390) {
            ctx->pc = 0x1363A0u;
            goto label_1363a0;
        }
    }
    ctx->pc = 0x136398u;
label_136398:
    // 0x136398: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x136398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13639c: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x13639cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1363a0:
    // 0x1363a0: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1363A0u;
    {
        const bool branch_taken_0x1363a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1363A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363A0u;
        // 0x1363a4: 0x3c023fff  lui         $v0, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1363a0) {
            ctx->pc = 0x1363DCu;
            goto label_1363dc;
        }
    }
    ctx->pc = 0x1363A8u;
    // 0x1363a8: 0x3c011fff  lui         $at, 0x1FFF
    ctx->pc = 0x1363a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8191 << 16));
label_1363ac:
    // 0x1363ac: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1363acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1363b0: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x1363b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1363b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1363B4u;
    {
        const bool branch_taken_0x1363b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1363b4) {
            ctx->pc = 0x1363C4u;
            goto label_1363c4;
        }
    }
    ctx->pc = 0x1363BCu;
    // 0x1363bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1363BCu;
    {
        const bool branch_taken_0x1363bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1363C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363BCu;
        // 0x1363c0: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1363bc) {
            ctx->pc = 0x1363CCu;
            goto label_1363cc;
        }
    }
    ctx->pc = 0x1363C4u;
label_1363c4:
    // 0x1363c4: 0x0  nop
    ctx->pc = 0x1363c4u;
    // NOP
    // 0x1363c8: 0x3450ffff  ori         $s0, $v0, 0xFFFF
    ctx->pc = 0x1363c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1363cc:
    // 0x1363cc: 0x0  nop
    ctx->pc = 0x1363ccu;
    // NOP
    // 0x1363d0: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x1363d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1363d4: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x1363D4u;
    {
        const bool branch_taken_0x1363d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1363D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363D4u;
        // 0x1363d8: 0x3c011fff  lui         $at, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8191 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1363d4) {
            ctx->pc = 0x1363ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1363ac;
        }
    }
    ctx->pc = 0x1363DCu;
label_1363dc:
    // 0x1363dc: 0x0  nop
    ctx->pc = 0x1363dcu;
    // NOP
    // 0x1363e0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1363E0u;
    SET_GPR_U32(ctx, 31, 0x1363E8u);
    ctx->pc = 0x1363E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1363E0u;
    // 0x1363e4: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1363E0u, 0x1363E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1363E8u;
label_1363e8:
    // 0x1363e8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1363e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1363ec: 0x16c00008  bnez        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x1363ECu;
    {
        const bool branch_taken_0x1363ec = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1363F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363ECu;
        // 0x1363f0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1363ec) {
            ctx->pc = 0x136410u;
            goto label_136410;
        }
    }
    ctx->pc = 0x1363F4u;
    // 0x1363f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1363f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1363f8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1363f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1363fc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1363fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x136400: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x136400u;
    SET_GPR_U32(ctx, 31, 0x136408u);
    ctx->pc = 0x136404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136400u;
    // 0x136404: 0x24a5ef00  addiu       $a1, $a1, -0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x136400u, 0x136408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136408u;
label_136408:
    // 0x136408: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x136408u;
    SET_GPR_U32(ctx, 31, 0x136410u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x136408u, 0x136410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136410u;
label_136410:
    // 0x136410: 0xaef60000  sw          $s6, 0x0($s7)
    ctx->pc = 0x136410u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 22));
    // 0x136414: 0xafb00090  sw          $s0, 0x90($sp)
    ctx->pc = 0x136414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 16));
    // 0x136418: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x136418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13641c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x13641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x136420: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x136420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x136424: 0xd4082b  sltu        $at, $a2, $s4
    ctx->pc = 0x136424u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x136428: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13642c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13642Cu;
    {
        const bool branch_taken_0x13642c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x136430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13642Cu;
        // 0x136430: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13642c) {
            ctx->pc = 0x136464u;
            goto label_136464;
        }
    }
    ctx->pc = 0x136434u;
label_136434:
    // 0x136434: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x136434u;
    {
        const bool branch_taken_0x136434 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x136434) {
            ctx->pc = 0x136444u;
            goto label_136444;
        }
    }
    ctx->pc = 0x13643Cu;
    // 0x13643c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x13643cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x136440: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x136440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_136444:
    // 0x136444: 0x0  nop
    ctx->pc = 0x136444u;
    // NOP
    // 0x136448: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x136448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13644c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x13644cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x136450: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x136450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x136454: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x136454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x136458: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x136458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13645c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x13645Cu;
    {
        const bool branch_taken_0x13645c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13645Cu;
        // 0x136460: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13645c) {
            ctx->pc = 0x136434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136434;
        }
    }
    ctx->pc = 0x136464u;
label_136464:
    // 0x136464: 0x0  nop
    ctx->pc = 0x136464u;
    // NOP
    // 0x136468: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x136468u;
    {
        const bool branch_taken_0x136468 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x136468) {
            ctx->pc = 0x136498u;
            goto label_136498;
        }
    }
    ctx->pc = 0x136470u;
label_136470:
    // 0x136470: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x136470u;
    {
        const bool branch_taken_0x136470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x136470) {
            ctx->pc = 0x136480u;
            goto label_136480;
        }
    }
    ctx->pc = 0x136478u;
    // 0x136478: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x136478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13647c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x13647cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_136480:
    // 0x136480: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x136480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x136484: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x136484u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x136488: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x136488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13648c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13648cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x136490: 0x1660fff7  bnez        $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x136490u;
    {
        const bool branch_taken_0x136490 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x136494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136490u;
        // 0x136494: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136490) {
            ctx->pc = 0x136470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136470;
        }
    }
    ctx->pc = 0x136498u;
label_136498:
    // 0x136498: 0xc4082b  sltu        $at, $a2, $a0
    ctx->pc = 0x136498u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13649c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13649Cu;
    {
        const bool branch_taken_0x13649c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13649c) {
            ctx->pc = 0x1364D4u;
            goto label_1364d4;
        }
    }
    ctx->pc = 0x1364A4u;
label_1364a4:
    // 0x1364a4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1364A4u;
    {
        const bool branch_taken_0x1364a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1364a4) {
            ctx->pc = 0x1364B4u;
            goto label_1364b4;
        }
    }
    ctx->pc = 0x1364ACu;
    // 0x1364ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1364acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1364b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1364b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1364b4:
    // 0x1364b4: 0x0  nop
    ctx->pc = 0x1364b4u;
    // NOP
    // 0x1364b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1364b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1364bc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1364bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1364c0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1364c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1364c4: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x1364c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1364c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1364c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1364cc: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1364CCu;
    {
        const bool branch_taken_0x1364cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1364D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364CCu;
        // 0x1364d0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364cc) {
            ctx->pc = 0x1364A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1364a4;
        }
    }
    ctx->pc = 0x1364D4u;
label_1364d4:
    // 0x1364d4: 0x0  nop
    ctx->pc = 0x1364d4u;
    // NOP
    // 0x1364d8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1364d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1364dc: 0x1095000b  beq         $a0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x1364DCu;
    {
        const bool branch_taken_0x1364dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x1364E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364DCu;
        // 0x1364e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364dc) {
            ctx->pc = 0x13650Cu;
            goto label_13650c;
        }
    }
    ctx->pc = 0x1364E4u;
    // 0x1364e4: 0xc04d954  jal         func_136550
    ctx->pc = 0x1364E4u;
    SET_GPR_U32(ctx, 31, 0x1364ECu);
    ctx->pc = 0x136550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136550u, 0x1364E4u, 0x1364ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1364ECu;
label_1364ec:
    // 0x1364ec: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1364ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1364f0: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1364f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1364f4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1364f4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x1364f8: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x1364f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x1364fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1364fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x136500: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x136500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x136504: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x136504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x136508: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x136508u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
label_13650c:
    // 0x13650c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13650cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x136510: 0xc04d95c  jal         func_136570
    ctx->pc = 0x136510u;
    SET_GPR_U32(ctx, 31, 0x136518u);
    ctx->pc = 0x136514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136510u;
    // 0x136514: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136570u, 0x136510u, 0x136518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136518u;
label_136518:
    // 0x136518: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x136518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_13651c:
    // 0x13651c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13651cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x136520: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x136520u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x136524: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x136524u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x136528: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x136528u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13652c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13652cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136530: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x136530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136534: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136538: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13653c: 0x3e00008  jr          $ra
    ctx->pc = 0x13653Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13653Cu;
        // 0x136540: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13653Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136544u;
}
