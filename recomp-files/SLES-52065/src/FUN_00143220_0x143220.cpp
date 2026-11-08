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

// Function: FUN_00143220
// Address: 0x143220 - 0x143390
void FUN_00143220_0x143220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00143220_0x143220");
#endif

    switch (ctx->pc) {
        case 0x143260u: goto label_143260;
        case 0x1432bcu: goto label_1432bc;
        case 0x1432ecu: goto label_1432ec;
        case 0x143320u: goto label_143320;
        case 0x143348u: goto label_143348;
        default: break;
    }

    ctx->pc = 0x143220u;

    // 0x143220: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x143220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x143224: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x143224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x143228: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x143228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14322c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14322cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x143230: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x143230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x143234: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x143234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x143238: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x143238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14323c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14323cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143244: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x143244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x143248: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x143248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x14324c: 0x8c950038  lw          $s5, 0x38($a0)
    ctx->pc = 0x14324cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x143250: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x143250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x143254: 0x2a39821  addu        $s3, $s5, $v1
    ctx->pc = 0x143254u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x143258: 0x12b30042  beq         $s5, $s3, . + 4 + (0x42 << 2)
    ctx->pc = 0x143258u;
    {
        const bool branch_taken_0x143258 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 19));
        if (branch_taken_0x143258) {
            ctx->pc = 0x143364u;
            goto label_143364;
        }
    }
    ctx->pc = 0x143260u;
label_143260:
    // 0x143260: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x143260u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x143264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x143264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143268: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x143268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x14326c: 0x90c40029  lbu         $a0, 0x29($a2)
    ctx->pc = 0x14326cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 41)));
    // 0x143270: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x143270u;
    {
        const bool branch_taken_0x143270 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x143274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143270u;
        // 0x143274: 0x90c50028  lbu         $a1, 0x28($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143270) {
            ctx->pc = 0x14327Cu;
            goto label_14327c;
        }
    }
    ctx->pc = 0x143278u;
    // 0x143278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14327c:
    // 0x14327c: 0x0  nop
    ctx->pc = 0x14327cu;
    // NOP
    // 0x143280: 0x8cd10014  lw          $s1, 0x14($a2)
    ctx->pc = 0x143280u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x143284: 0x16200020  bnez        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x143284u;
    {
        const bool branch_taken_0x143284 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x143284) {
            ctx->pc = 0x143308u;
            goto label_143308;
        }
    }
    ctx->pc = 0x14328Cu;
    // 0x14328c: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x14328cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x143290: 0x5b140  sll         $s6, $a1, 5
    ctx->pc = 0x143290u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x143294: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x143294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x143298: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x143298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14329c: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x14329cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1432a0: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1432A0u;
    {
        const bool branch_taken_0x1432a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1432a0) {
            ctx->pc = 0x143358u;
            goto label_143358;
        }
    }
    ctx->pc = 0x1432A8u;
    // 0x1432a8: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x1432a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1432ac: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x1432acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1432b0: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x1432B0u;
    {
        const bool branch_taken_0x1432b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1432B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1432B0u;
        // 0x1432b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1432b0) {
            ctx->pc = 0x143358u;
            goto label_143358;
        }
    }
    ctx->pc = 0x1432B8u;
    // 0x1432b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1432b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1432bc:
    // 0x1432bc: 0x0  nop
    ctx->pc = 0x1432bcu;
    // NOP
    // 0x1432c0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1432c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1432c4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1432c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1432c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1432c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1432cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1432ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1432d0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1432D0u;
    {
        const bool branch_taken_0x1432d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1432d0) {
            ctx->pc = 0x1432ECu;
            goto label_1432ec;
        }
    }
    ctx->pc = 0x1432D8u;
    // 0x1432d8: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1432d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1432dc: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1432dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1432e0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1432e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1432e4: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1432E4u;
    SET_GPR_U32(ctx, 31, 0x1432ECu);
    ctx->pc = 0x1432E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1432E4u;
    // 0x1432e8: 0x542821  addu        $a1, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1432E4u, 0x1432ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1432ECu;
label_1432ec:
    // 0x1432ec: 0x0  nop
    ctx->pc = 0x1432ecu;
    // NOP
    // 0x1432f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1432f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1432f4: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x1432f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1432f8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1432F8u;
    {
        const bool branch_taken_0x1432f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1432FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1432F8u;
        // 0x1432fc: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1432f8) {
            ctx->pc = 0x1432BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1432bc;
        }
    }
    ctx->pc = 0x143300u;
    // 0x143300: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x143300u;
    {
        const bool branch_taken_0x143300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143300) {
            ctx->pc = 0x143358u;
            goto label_143358;
        }
    }
    ctx->pc = 0x143308u;
label_143308:
    // 0x143308: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x143308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x14330c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x14330Cu;
    {
        const bool branch_taken_0x14330c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x143310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14330Cu;
        // 0x143310: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14330c) {
            ctx->pc = 0x143358u;
            goto label_143358;
        }
    }
    ctx->pc = 0x143314u;
    // 0x143314: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x143314u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x143318: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x143318u;
    {
        const bool branch_taken_0x143318 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143318u;
        // 0x14331c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143318) {
            ctx->pc = 0x143358u;
            goto label_143358;
        }
    }
    ctx->pc = 0x143320u;
label_143320:
    // 0x143320: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x143320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x143324: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x143324u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x143328: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x143328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x14332c: 0x2111818  mult        $v1, $s0, $s1
    ctx->pc = 0x14332cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x143330: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x143330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x143334: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x143334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x143338: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x143338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14333c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14333cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x143340: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x143340u;
    SET_GPR_U32(ctx, 31, 0x143348u);
    ctx->pc = 0x143344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143340u;
    // 0x143344: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x143340u, 0x143348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143348u;
label_143348:
    // 0x143348: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x143348u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14334c: 0x290182a  slt         $v1, $s4, $s0
    ctx->pc = 0x14334cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x143350: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x143350u;
    {
        const bool branch_taken_0x143350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x143350) {
            ctx->pc = 0x143320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143320;
        }
    }
    ctx->pc = 0x143358u;
label_143358:
    // 0x143358: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x143358u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x14335c: 0x16b3ffc0  bne         $s5, $s3, . + 4 + (-0x40 << 2)
    ctx->pc = 0x14335Cu;
    {
        const bool branch_taken_0x14335c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 19));
        if (branch_taken_0x14335c) {
            ctx->pc = 0x143260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143260;
        }
    }
    ctx->pc = 0x143364u;
label_143364:
    // 0x143364: 0x0  nop
    ctx->pc = 0x143364u;
    // NOP
    // 0x143368: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x143368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14336c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14336cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x143370: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x143370u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143374: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x143374u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143378: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x143378u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14337c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14337cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143388: 0x3e00008  jr          $ra
    ctx->pc = 0x143388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143388u;
        // 0x14338c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143390u;
}
