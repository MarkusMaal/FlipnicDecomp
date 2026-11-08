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

// Function: FUN_001e74a0
// Address: 0x1e74a0 - 0x1e768c
void FUN_001e74a0_0x1e74a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e74a0_0x1e74a0");
#endif

    switch (ctx->pc) {
        case 0x1e7550u: goto label_1e7550;
        case 0x1e7598u: goto label_1e7598;
        case 0x1e7604u: goto label_1e7604;
        case 0x1e766cu: goto label_1e766c;
        default: break;
    }

    ctx->pc = 0x1e74a0u;

    // 0x1e74a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e74a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e74a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e74a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e74a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e74a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e74ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e74acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e74b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e74b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e74b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e74b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e74b8: 0x27b20062  addiu       $s2, $sp, 0x62
    ctx->pc = 0x1e74b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 98));
    // 0x1e74bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e74bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e74c0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1e74c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e74c4: 0xa7a20060  sh          $v0, 0x60($sp)
    ctx->pc = 0x1e74c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e74c8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1e74c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e74cc: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x1e74ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e74d0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1e74d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e74d4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1e74d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e74d8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E74D8u;
    {
        const bool branch_taken_0x1e74d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E74DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74D8u;
        // 0x1e74dc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e74d8) {
            ctx->pc = 0x1E7508u;
            goto label_1e7508;
        }
    }
    ctx->pc = 0x1E74E0u;
    // 0x1e74e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e74e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e74e4: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1e74e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e74e8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1e74e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e74ec: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1e74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e74f0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e74f0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e74f4: 0x0  nop
    ctx->pc = 0x1e74f4u;
    // NOP
    // 0x1e74f8: 0x0  nop
    ctx->pc = 0x1e74f8u;
    // NOP
    // 0x1e74fc: 0x1012  mflo        $v0
    ctx->pc = 0x1e74fcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1e7500: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7500u;
    {
        const bool branch_taken_0x1e7500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7500u;
        // 0x1e7504: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7500) {
            ctx->pc = 0x1E750Cu;
            goto label_1e750c;
        }
    }
    ctx->pc = 0x1E7508u;
label_1e7508:
    // 0x1e7508: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e7508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e750c:
    // 0x1e750c: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x1e750cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1e7510: 0x27b30065  addiu       $s3, $sp, 0x65
    ctx->pc = 0x1e7510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 101));
    // 0x1e7514: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1e7514u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e7518: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1e7518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e751c: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x1e751cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7520: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1e7520u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e7524: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x1e7524u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e7528: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1e7528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e752c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e752cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7530: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1e7530u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e7534: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1e7534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e7538: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1e7538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e753c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e753cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e7540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7544: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1e7544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1e7548: 0xc079e3c  jal         func_1E78F0
    ctx->pc = 0x1E7548u;
    SET_GPR_U32(ctx, 31, 0x1E7550u);
    ctx->pc = 0x1E754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7548u;
    // 0x1e754c: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E78F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E78F0u, 0x1E7548u, 0x1E7550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7550u;
label_1e7550:
    // 0x1e7550: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x1e7550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e7554: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e7554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7558: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x1e7558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e755c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1e755cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e7560: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e7560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e7564: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1e7564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e7568: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1e7568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1e756c: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E756Cu;
    {
        const bool branch_taken_0x1e756c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E7570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E756Cu;
        // 0x1e7570: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e756c) {
            ctx->pc = 0x1E758Cu;
            goto label_1e758c;
        }
    }
    ctx->pc = 0x1E7574u;
    // 0x1e7574: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x1e7574u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e7578: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1e7578u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e757c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1e757cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e7580: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7580u;
    {
        const bool branch_taken_0x1e7580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7580u;
        // 0x1e7584: 0x3c032aaa  lui         $v1, 0x2AAA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7580) {
            ctx->pc = 0x1E75A0u;
            goto label_1e75a0;
        }
    }
    ctx->pc = 0x1E7588u;
    // 0x1e7588: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e7588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e758c:
    // 0x1e758c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e758cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7590: 0xc079ebc  jal         func_1E7AF0
    ctx->pc = 0x1E7590u;
    SET_GPR_U32(ctx, 31, 0x1E7598u);
    ctx->pc = 0x1E7594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7590u;
    // 0x1e7594: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7AF0u, 0x1E7590u, 0x1E7598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7598u;
label_1e7598:
    // 0x1e7598: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1E7598u;
    {
        const bool branch_taken_0x1e7598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7598u;
        // 0x1e759c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7598) {
            ctx->pc = 0x1E7670u;
            goto label_1e7670;
        }
    }
    ctx->pc = 0x1E75A0u;
label_1e75a0:
    // 0x1e75a0: 0xa62023  subu        $a0, $a1, $a2
    ctx->pc = 0x1e75a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e75a4: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x1e75a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x1e75a8: 0x44fc2  srl         $t1, $a0, 31
    ctx->pc = 0x1e75a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1e75ac: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1e75acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e75b0: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x1e75b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e75b4: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x1e75b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1e75b8: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x1e75b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e75bc: 0x4010  mfhi        $t0
    ctx->pc = 0x1e75bcu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x1e75c0: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x1e75c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e75c4: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x1e75c4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1e75c8: 0xa4e40002  sh          $a0, 0x2($a3)
    ctx->pc = 0x1e75c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e75cc: 0xa4e30004  sh          $v1, 0x4($a3)
    ctx->pc = 0x1e75ccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e75d0: 0x97a40068  lhu         $a0, 0x68($sp)
    ctx->pc = 0x1e75d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e75d4: 0x97a30060  lhu         $v1, 0x60($sp)
    ctx->pc = 0x1e75d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e75d8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1e75d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e75dc: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1E75DCu;
    {
        const bool branch_taken_0x1e75dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E75E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75DCu;
        // 0x1e75e0: 0x1098021  addu        $s0, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e75dc) {
            ctx->pc = 0x1E760Cu;
            goto label_1e760c;
        }
    }
    ctx->pc = 0x1E75E4u;
    // 0x1e75e4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1e75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e75e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e75e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e75ec: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x1e75ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e75f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e75f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e75f4: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x1e75f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1e75f8: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1e75f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e75fc: 0xc079ebc  jal         func_1E7AF0
    ctx->pc = 0x1E75FCu;
    SET_GPR_U32(ctx, 31, 0x1E7604u);
    ctx->pc = 0x1E7600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E75FCu;
    // 0x1e7600: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7AF0u, 0x1E75FCu, 0x1E7604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7604u;
label_1e7604:
    // 0x1e7604: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7604u;
    {
        const bool branch_taken_0x1e7604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7604u;
        // 0x1e7608: 0x96440000  lhu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7604) {
            ctx->pc = 0x1E762Cu;
            goto label_1e762c;
        }
    }
    ctx->pc = 0x1E760Cu;
label_1e760c:
    // 0x1e760c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1e760cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e7610: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1e7610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e7614: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x1e7614u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e7618: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1e7618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e761c: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x1e761cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e7620: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x1e7620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e7624: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x1e7624u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e7628: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x1e7628u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1e762c:
    // 0x1e762c: 0x97a3006a  lhu         $v1, 0x6A($sp)
    ctx->pc = 0x1e762cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 106)));
    // 0x1e7630: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1e7630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e7634: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1E7634u;
    {
        const bool branch_taken_0x1e7634 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7634) {
            ctx->pc = 0x1E766Cu;
            goto label_1e766c;
        }
    }
    ctx->pc = 0x1E763Cu;
    // 0x1e763c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1e763cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e7640: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1e7640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e7644: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x1e7644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e7648: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e7648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e764c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1e764cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1e7650: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x1e7650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1e7654: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1e7654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e7658: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1e7658u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1e765c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e765cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7660: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1e7660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e7664: 0xc079ebc  jal         func_1E7AF0
    ctx->pc = 0x1E7664u;
    SET_GPR_U32(ctx, 31, 0x1E766Cu);
    ctx->pc = 0x1E7668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7664u;
    // 0x1e7668: 0xa7a20068  sh          $v0, 0x68($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 104), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7AF0u, 0x1E7664u, 0x1E766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E766Cu;
label_1e766c:
    // 0x1e766c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e766cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e7670:
    // 0x1e7670: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e7670u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7674: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e7674u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7678: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e7678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e767c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e767cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7684: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7684u;
        // 0x1e7688: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E768Cu;
}
