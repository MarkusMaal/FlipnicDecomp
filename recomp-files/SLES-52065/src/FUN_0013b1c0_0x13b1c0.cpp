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

// Function: FUN_0013b1c0
// Address: 0x13b1c0 - 0x13b764
void FUN_0013b1c0_0x13b1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013b1c0_0x13b1c0");
#endif

    switch (ctx->pc) {
        case 0x13b23cu: goto label_13b23c;
        case 0x13b244u: goto label_13b244;
        case 0x13b2acu: goto label_13b2ac;
        case 0x13b314u: goto label_13b314;
        case 0x13b390u: goto label_13b390;
        case 0x13b428u: goto label_13b428;
        case 0x13b458u: goto label_13b458;
        case 0x13b490u: goto label_13b490;
        case 0x13b4b8u: goto label_13b4b8;
        case 0x13b534u: goto label_13b534;
        case 0x13b578u: goto label_13b578;
        case 0x13b598u: goto label_13b598;
        case 0x13b5a0u: goto label_13b5a0;
        case 0x13b5ccu: goto label_13b5cc;
        case 0x13b630u: goto label_13b630;
        case 0x13b68cu: goto label_13b68c;
        case 0x13b6fcu: goto label_13b6fc;
        case 0x13b724u: goto label_13b724;
        case 0x13b738u: goto label_13b738;
        default: break;
    }

    ctx->pc = 0x13b1c0u;

    // 0x13b1c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x13b1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x13b1c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x13b1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x13b1c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13b1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13b1cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13b1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13b1d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13b1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13b1d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13b1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13b1d8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13b1d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13b1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13b1e0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13b1e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13b1e8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13b1e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b1f0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x13b1f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1f4: 0x12600150  beqz        $s3, . + 4 + (0x150 << 2)
    ctx->pc = 0x13B1F4u;
    {
        const bool branch_taken_0x13b1f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B1F4u;
        // 0x13b1f8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b1f4) {
            ctx->pc = 0x13B738u;
            goto label_13b738;
        }
    }
    ctx->pc = 0x13B1FCu;
    // 0x13b1fc: 0x3c0302aa  lui         $v1, 0x2AA
    ctx->pc = 0x13b1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)682 << 16));
    // 0x13b200: 0x3463aaaa  ori         $v1, $v1, 0xAAAA
    ctx->pc = 0x13b200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43690);
    // 0x13b204: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x13b204u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x13b208: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x13B208u;
    {
        const bool branch_taken_0x13b208 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b208) {
            ctx->pc = 0x13B224u;
            goto label_13b224;
        }
    }
    ctx->pc = 0x13B210u;
    // 0x13b210: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x13b210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13b214: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x13b214u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x13b218: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x13b218u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13b21c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13B21Cu;
    {
        const bool branch_taken_0x13b21c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b21c) {
            ctx->pc = 0x13B244u;
            goto label_13b244;
        }
    }
    ctx->pc = 0x13B224u;
label_13b224:
    // 0x13b224: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x13b224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x13b228: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13b228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13b22c: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x13b230: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13b230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13b234: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13B234u;
    SET_GPR_U32(ctx, 31, 0x13B23Cu);
    ctx->pc = 0x13B238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B234u;
    // 0x13b238: 0x24a5ef70  addiu       $a1, $a1, -0x1090 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13B234u, 0x13B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B23Cu;
label_13b23c:
    // 0x13b23c: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13B23Cu;
    SET_GPR_U32(ctx, 31, 0x13B244u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13B23Cu, 0x13B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B244u;
label_13b244:
    // 0x13b244: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x13b244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13b248: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x13b248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13b24c: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x13b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x13b250: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x13b250u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13b254: 0x142000a7  bnez        $at, . + 4 + (0xA7 << 2)
    ctx->pc = 0x13B254u;
    {
        const bool branch_taken_0x13b254 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b254) {
            ctx->pc = 0x13B4F4u;
            goto label_13b4f4;
        }
    }
    ctx->pc = 0x13B25Cu;
    // 0x13b25c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x13b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13b260: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x13b260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x13b264: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x13b264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13b268: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x13b268u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x13b26c: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x13b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x13b270: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x13b270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x13b274: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13b274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13b278: 0x942823  subu        $a1, $a0, $s4
    ctx->pc = 0x13b278u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x13b27c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x13b27cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13b280: 0x0  nop
    ctx->pc = 0x13b280u;
    // NOP
    // 0x13b284: 0x0  nop
    ctx->pc = 0x13b284u;
    // NOP
    // 0x13b288: 0x1810  mfhi        $v1
    ctx->pc = 0x13b288u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x13b28c: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x13b28cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x13b290: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x13b290u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x13b294: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13b294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13b298: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x13b298u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x13b29c: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x13B29Cu;
    {
        const bool branch_taken_0x13b29c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B29Cu;
        // 0x13b2a0: 0x73082b  sltu        $at, $v1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b29c) {
            ctx->pc = 0x13B374u;
            goto label_13b374;
        }
    }
    ctx->pc = 0x13B2A4u;
    // 0x13b2a4: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x13B2A4u;
    {
        const bool branch_taken_0x13b2a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2A4u;
        // 0x13b2a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b2a4) {
            ctx->pc = 0x13B304u;
            goto label_13b304;
        }
    }
    ctx->pc = 0x13B2ACu;
label_13b2ac:
    // 0x13b2ac: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x13B2ACu;
    {
        const bool branch_taken_0x13b2ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b2ac) {
            ctx->pc = 0x13B2E4u;
            goto label_13b2e4;
        }
    }
    ctx->pc = 0x13B2B4u;
    // 0x13b2b4: 0x7a490000  lq          $t1, 0x0($s2)
    ctx->pc = 0x13b2b4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13b2b8: 0x7a480010  lq          $t0, 0x10($s2)
    ctx->pc = 0x13b2b8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x13b2bc: 0x7a470020  lq          $a3, 0x20($s2)
    ctx->pc = 0x13b2bcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x13b2c0: 0x7a460030  lq          $a2, 0x30($s2)
    ctx->pc = 0x13b2c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x13b2c4: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x13b2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x13b2c8: 0x7ca80010  sq          $t0, 0x10($a1)
    ctx->pc = 0x13b2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 8));
    // 0x13b2cc: 0x7ca70020  sq          $a3, 0x20($a1)
    ctx->pc = 0x13b2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 7));
    // 0x13b2d0: 0x7ca60030  sq          $a2, 0x30($a1)
    ctx->pc = 0x13b2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 6));
    // 0x13b2d4: 0x7a470040  lq          $a3, 0x40($s2)
    ctx->pc = 0x13b2d4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x13b2d8: 0x7a460050  lq          $a2, 0x50($s2)
    ctx->pc = 0x13b2d8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x13b2dc: 0x7ca70040  sq          $a3, 0x40($a1)
    ctx->pc = 0x13b2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 7));
    // 0x13b2e0: 0x7ca60050  sq          $a2, 0x50($a1)
    ctx->pc = 0x13b2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 6));
label_13b2e4:
    // 0x13b2e4: 0x0  nop
    ctx->pc = 0x13b2e4u;
    // NOP
    // 0x13b2e8: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x13b2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13b2ec: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13b2ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13b2f0: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x13b2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x13b2f4: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x13b2f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x13b2f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13b2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13b2fc: 0x1420ffeb  bnez        $at, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13B2FCu;
    {
        const bool branch_taken_0x13b2fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2FCu;
        // 0x13b300: 0xaea60004  sw          $a2, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b2fc) {
            ctx->pc = 0x13B2ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b2ac;
        }
    }
    ctx->pc = 0x13B304u;
label_13b304:
    // 0x13b304: 0x0  nop
    ctx->pc = 0x13b304u;
    // NOP
    // 0x13b308: 0x284082b  sltu        $at, $s4, $a0
    ctx->pc = 0x13b308u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13b30c: 0x1020005e  beqz        $at, . + 4 + (0x5E << 2)
    ctx->pc = 0x13B30Cu;
    {
        const bool branch_taken_0x13b30c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B30Cu;
        // 0x13b310: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b30c) {
            ctx->pc = 0x13B488u;
            goto label_13b488;
        }
    }
    ctx->pc = 0x13B314u;
label_13b314:
    // 0x13b314: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x13B314u;
    {
        const bool branch_taken_0x13b314 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b314) {
            ctx->pc = 0x13B34Cu;
            goto label_13b34c;
        }
    }
    ctx->pc = 0x13B31Cu;
    // 0x13b31c: 0x79280000  lq          $t0, 0x0($t1)
    ctx->pc = 0x13b31cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13b320: 0x79270010  lq          $a3, 0x10($t1)
    ctx->pc = 0x13b320u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x13b324: 0x79260020  lq          $a2, 0x20($t1)
    ctx->pc = 0x13b324u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x13b328: 0x79230030  lq          $v1, 0x30($t1)
    ctx->pc = 0x13b328u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x13b32c: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x13b32cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x13b330: 0x7ca70010  sq          $a3, 0x10($a1)
    ctx->pc = 0x13b330u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 7));
    // 0x13b334: 0x7ca60020  sq          $a2, 0x20($a1)
    ctx->pc = 0x13b334u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 6));
    // 0x13b338: 0x7ca30030  sq          $v1, 0x30($a1)
    ctx->pc = 0x13b338u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
    // 0x13b33c: 0x79260040  lq          $a2, 0x40($t1)
    ctx->pc = 0x13b33cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x13b340: 0x79230050  lq          $v1, 0x50($t1)
    ctx->pc = 0x13b340u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x13b344: 0x7ca60040  sq          $a2, 0x40($a1)
    ctx->pc = 0x13b344u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 6));
    // 0x13b348: 0x7ca30050  sq          $v1, 0x50($a1)
    ctx->pc = 0x13b348u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 3));
label_13b34c:
    // 0x13b34c: 0x0  nop
    ctx->pc = 0x13b34cu;
    // NOP
    // 0x13b350: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x13b350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13b354: 0x25290060  addiu       $t1, $t1, 0x60
    ctx->pc = 0x13b354u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x13b358: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x13b358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x13b35c: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x13b35cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13b360: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13b360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13b364: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13B364u;
    {
        const bool branch_taken_0x13b364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B364u;
        // 0x13b368: 0xaea60004  sw          $a2, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b364) {
            ctx->pc = 0x13B314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b314;
        }
    }
    ctx->pc = 0x13B36Cu;
    // 0x13b36c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x13B36Cu;
    {
        const bool branch_taken_0x13b36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b36c) {
            ctx->pc = 0x13B488u;
            goto label_13b488;
        }
    }
    ctx->pc = 0x13B374u;
label_13b374:
    // 0x13b374: 0x132840  sll         $a1, $s3, 1
    ctx->pc = 0x13b374u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x13b378: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x13b378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x13b37c: 0x55940  sll         $t3, $a1, 5
    ctx->pc = 0x13b37cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x13b380: 0x8b4823  subu        $t1, $a0, $t3
    ctx->pc = 0x13b380u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x13b384: 0x124082b  sltu        $at, $t1, $a0
    ctx->pc = 0x13b384u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13b388: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x13B388u;
    {
        const bool branch_taken_0x13b388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B388u;
        // 0x13b38c: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b388) {
            ctx->pc = 0x13B3E4u;
            goto label_13b3e4;
        }
    }
    ctx->pc = 0x13B390u;
label_13b390:
    // 0x13b390: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
    ctx->pc = 0x13B390u;
    {
        const bool branch_taken_0x13b390 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b390) {
            ctx->pc = 0x13B3C8u;
            goto label_13b3c8;
        }
    }
    ctx->pc = 0x13B398u;
    // 0x13b398: 0x79280000  lq          $t0, 0x0($t1)
    ctx->pc = 0x13b398u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13b39c: 0x79270010  lq          $a3, 0x10($t1)
    ctx->pc = 0x13b39cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x13b3a0: 0x79260020  lq          $a2, 0x20($t1)
    ctx->pc = 0x13b3a0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x13b3a4: 0x79250030  lq          $a1, 0x30($t1)
    ctx->pc = 0x13b3a4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x13b3a8: 0x7d480000  sq          $t0, 0x0($t2)
    ctx->pc = 0x13b3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 8));
    // 0x13b3ac: 0x7d470010  sq          $a3, 0x10($t2)
    ctx->pc = 0x13b3acu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 7));
    // 0x13b3b0: 0x7d460020  sq          $a2, 0x20($t2)
    ctx->pc = 0x13b3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 6));
    // 0x13b3b4: 0x7d450030  sq          $a1, 0x30($t2)
    ctx->pc = 0x13b3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 48), GPR_VEC(ctx, 5));
    // 0x13b3b8: 0x79260040  lq          $a2, 0x40($t1)
    ctx->pc = 0x13b3b8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x13b3bc: 0x79250050  lq          $a1, 0x50($t1)
    ctx->pc = 0x13b3bcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x13b3c0: 0x7d460040  sq          $a2, 0x40($t2)
    ctx->pc = 0x13b3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 64), GPR_VEC(ctx, 6));
    // 0x13b3c4: 0x7d450050  sq          $a1, 0x50($t2)
    ctx->pc = 0x13b3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 80), GPR_VEC(ctx, 5));
label_13b3c8:
    // 0x13b3c8: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x13b3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13b3cc: 0x25290060  addiu       $t1, $t1, 0x60
    ctx->pc = 0x13b3ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x13b3d0: 0x254a0060  addiu       $t2, $t2, 0x60
    ctx->pc = 0x13b3d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 96));
    // 0x13b3d4: 0x124282b  sltu        $a1, $t1, $a0
    ctx->pc = 0x13b3d4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13b3d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13b3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13b3dc: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13B3DCu;
    {
        const bool branch_taken_0x13b3dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B3DCu;
        // 0x13b3e0: 0xaea60004  sw          $a2, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b3dc) {
            ctx->pc = 0x13B390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b390;
        }
    }
    ctx->pc = 0x13B3E4u;
label_13b3e4:
    // 0x13b3e4: 0x0  nop
    ctx->pc = 0x13b3e4u;
    // NOP
    // 0x13b3e8: 0x732823  subu        $a1, $v1, $s3
    ctx->pc = 0x13b3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x13b3ec: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x13b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x13b3f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13b3f4: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x13b3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13b3f8: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x13b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13b3fc: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x13b3fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13b400: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x13B400u;
    {
        const bool branch_taken_0x13b400 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B400u;
        // 0x13b404: 0x2854821  addu        $t1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b400) {
            ctx->pc = 0x13B41Cu;
            goto label_13b41c;
        }
    }
    ctx->pc = 0x13B408u;
    // 0x13b408: 0x244082b  sltu        $at, $s2, $a0
    ctx->pc = 0x13b408u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13b40c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13B40Cu;
    {
        const bool branch_taken_0x13b40c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b40c) {
            ctx->pc = 0x13B418u;
            goto label_13b418;
        }
    }
    ctx->pc = 0x13B414u;
    // 0x13b414: 0x24b9021  addu        $s2, $s2, $t3
    ctx->pc = 0x13b414u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
label_13b418:
    // 0x13b418: 0x2854821  addu        $t1, $s4, $a1
    ctx->pc = 0x13b418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_13b41c:
    // 0x13b41c: 0x289082b  sltu        $at, $s4, $t1
    ctx->pc = 0x13b41cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x13b420: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x13B420u;
    {
        const bool branch_taken_0x13b420 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b420) {
            ctx->pc = 0x13B488u;
            goto label_13b488;
        }
    }
    ctx->pc = 0x13B428u;
label_13b428:
    // 0x13b428: 0x2529ffa0  addiu       $t1, $t1, -0x60
    ctx->pc = 0x13b428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967200));
    // 0x13b42c: 0x2484ffa0  addiu       $a0, $a0, -0x60
    ctx->pc = 0x13b42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967200));
    // 0x13b430: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x13b430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13b434: 0x25280010  addiu       $t0, $t1, 0x10
    ctx->pc = 0x13b434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13b438: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x13b438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13b43c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x13b43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13b440: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13b440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x13b444: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x13b444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x13b448: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x13b448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x13b44c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x13b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x13b450: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x13b450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x13b454: 0x0  nop
    ctx->pc = 0x13b454u;
    // NOP
label_13b458:
    // 0x13b458: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x13b458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13b45c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x13b45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x13b460: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x13b460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x13b464: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x13b464u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x13b468: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x13b468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x13b46c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x13b46cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x13b470: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13B470u;
    {
        const bool branch_taken_0x13b470 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x13B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B470u;
        // 0x13b474: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b470) {
            ctx->pc = 0x13B458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b458;
        }
    }
    ctx->pc = 0x13B478u;
    // 0x13b478: 0x8d230050  lw          $v1, 0x50($t1)
    ctx->pc = 0x13b478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x13b47c: 0x289082b  sltu        $at, $s4, $t1
    ctx->pc = 0x13b47cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x13b480: 0x1420ffe9  bnez        $at, . + 4 + (-0x17 << 2)
    ctx->pc = 0x13B480u;
    {
        const bool branch_taken_0x13b480 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B480u;
        // 0x13b484: 0xac830050  sw          $v1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b480) {
            ctx->pc = 0x13B428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b428;
        }
    }
    ctx->pc = 0x13B488u;
label_13b488:
    // 0x13b488: 0x126000ab  beqz        $s3, . + 4 + (0xAB << 2)
    ctx->pc = 0x13B488u;
    {
        const bool branch_taken_0x13b488 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b488) {
            ctx->pc = 0x13B738u;
            goto label_13b738;
        }
    }
    ctx->pc = 0x13B490u;
label_13b490:
    // 0x13b490: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13b490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13b494: 0x26470010  addiu       $a3, $s2, 0x10
    ctx->pc = 0x13b494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x13b498: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x13b498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x13b49c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x13b49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13b4a0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x13b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x13b4a4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x13b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13b4a8: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x13b4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x13b4ac: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x13b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13b4b0: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x13b4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x13b4b4: 0x0  nop
    ctx->pc = 0x13b4b4u;
    // NOP
label_13b4b8:
    // 0x13b4b8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x13b4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13b4bc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x13b4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x13b4c0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x13b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x13b4c4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x13b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x13b4c8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x13b4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x13b4cc: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x13b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x13b4d0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13B4D0u;
    {
        const bool branch_taken_0x13b4d0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x13B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4D0u;
        // 0x13b4d4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b4d0) {
            ctx->pc = 0x13B4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b4b8;
        }
    }
    ctx->pc = 0x13B4D8u;
    // 0x13b4d8: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x13b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x13b4dc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13b4dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13b4e0: 0xae830050  sw          $v1, 0x50($s4)
    ctx->pc = 0x13b4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 3));
    // 0x13b4e4: 0x1660ffea  bnez        $s3, . + 4 + (-0x16 << 2)
    ctx->pc = 0x13B4E4u;
    {
        const bool branch_taken_0x13b4e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4E4u;
        // 0x13b4e8: 0x26940060  addiu       $s4, $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b4e4) {
            ctx->pc = 0x13B490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b490;
        }
    }
    ctx->pc = 0x13B4ECu;
    // 0x13b4ec: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x13B4ECu;
    {
        const bool branch_taken_0x13b4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4ECu;
        // 0x13b4f0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b4ec) {
            ctx->pc = 0x13B73Cu;
            goto label_13b73c;
        }
    }
    ctx->pc = 0x13B4F4u;
label_13b4f4:
    // 0x13b4f4: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x13b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x13b4f8: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x13b4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x13b4fc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x13b4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x13b500: 0x27b60098  addiu       $s6, $sp, 0x98
    ctx->pc = 0x13b500u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x13b504: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x13b504u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x13b508: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x13b508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13b50c: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x13b50cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13b510: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B510u;
    {
        const bool branch_taken_0x13b510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B510u;
        // 0x13b514: 0x531821  addu        $v1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b510) {
            ctx->pc = 0x13B520u;
            goto label_13b520;
        }
    }
    ctx->pc = 0x13B518u;
    // 0x13b518: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13B518u;
    {
        const bool branch_taken_0x13b518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B518u;
        // 0x13b51c: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b518) {
            ctx->pc = 0x13B528u;
            goto label_13b528;
        }
    }
    ctx->pc = 0x13B520u;
label_13b520:
    // 0x13b520: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x13b520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b524: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x13b524u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_13b528:
    // 0x13b528: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x13B528u;
    {
        const bool branch_taken_0x13b528 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B528u;
        // 0x13b52c: 0x3c0202aa  lui         $v0, 0x2AA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)682 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b528) {
            ctx->pc = 0x13B564u;
            goto label_13b564;
        }
    }
    ctx->pc = 0x13B530u;
    // 0x13b530: 0x3c010155  lui         $at, 0x155
    ctx->pc = 0x13b530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)341 << 16));
label_13b534:
    // 0x13b534: 0x34215555  ori         $at, $at, 0x5555
    ctx->pc = 0x13b534u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21845);
    // 0x13b538: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x13b538u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x13b53c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B53Cu;
    {
        const bool branch_taken_0x13b53c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b53c) {
            ctx->pc = 0x13B54Cu;
            goto label_13b54c;
        }
    }
    ctx->pc = 0x13B544u;
    // 0x13b544: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13B544u;
    {
        const bool branch_taken_0x13b544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B544u;
        // 0x13b548: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b544) {
            ctx->pc = 0x13B554u;
            goto label_13b554;
        }
    }
    ctx->pc = 0x13B54Cu;
label_13b54c:
    // 0x13b54c: 0x0  nop
    ctx->pc = 0x13b54cu;
    // NOP
    // 0x13b550: 0x3450aaaa  ori         $s0, $v0, 0xAAAA
    ctx->pc = 0x13b550u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43690);
label_13b554:
    // 0x13b554: 0x0  nop
    ctx->pc = 0x13b554u;
    // NOP
    // 0x13b558: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x13b558u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13b55c: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x13B55Cu;
    {
        const bool branch_taken_0x13b55c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B55Cu;
        // 0x13b560: 0x3c010155  lui         $at, 0x155 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)341 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b55c) {
            ctx->pc = 0x13B534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b534;
        }
    }
    ctx->pc = 0x13B564u;
label_13b564:
    // 0x13b564: 0x0  nop
    ctx->pc = 0x13b564u;
    // NOP
    // 0x13b568: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x13b568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x13b56c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x13b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13b570: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13B570u;
    SET_GPR_U32(ctx, 31, 0x13B578u);
    ctx->pc = 0x13B574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B570u;
    // 0x13b574: 0x22140  sll         $a0, $v0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13B570u, 0x13B578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B578u;
label_13b578:
    // 0x13b578: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x13b578u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b57c: 0x16e00008  bnez        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x13B57Cu;
    {
        const bool branch_taken_0x13b57c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B57Cu;
        // 0x13b580: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b57c) {
            ctx->pc = 0x13B5A0u;
            goto label_13b5a0;
        }
    }
    ctx->pc = 0x13B584u;
    // 0x13b584: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13b584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13b588: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13b588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x13b58c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13b58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13b590: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13B590u;
    SET_GPR_U32(ctx, 31, 0x13B598u);
    ctx->pc = 0x13B594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B590u;
    // 0x13b594: 0x24a5ef90  addiu       $a1, $a1, -0x1070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13B590u, 0x13B598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B598u;
label_13b598:
    // 0x13b598: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13B598u;
    SET_GPR_U32(ctx, 31, 0x13B5A0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13B598u, 0x13B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B5A0u;
label_13b5a0:
    // 0x13b5a0: 0xaed70000  sw          $s7, 0x0($s6)
    ctx->pc = 0x13b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 23));
    // 0x13b5a4: 0xafb00090  sw          $s0, 0x90($sp)
    ctx->pc = 0x13b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 16));
    // 0x13b5a8: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x13b5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13b5ac: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x13b5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13b5b0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x13b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13b5b4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x13b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x13b5b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13b5bc: 0x94082b  sltu        $at, $a0, $s4
    ctx->pc = 0x13b5bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x13b5c0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13b5c4: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x13B5C4u;
    {
        const bool branch_taken_0x13b5c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5C4u;
        // 0x13b5c8: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b5c4) {
            ctx->pc = 0x13B624u;
            goto label_13b624;
        }
    }
    ctx->pc = 0x13B5CCu;
label_13b5cc:
    // 0x13b5cc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13B5CCu;
    {
        const bool branch_taken_0x13b5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b5cc) {
            ctx->pc = 0x13B604u;
            goto label_13b604;
        }
    }
    ctx->pc = 0x13B5D4u;
    // 0x13b5d4: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x13b5d4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13b5d8: 0x78870010  lq          $a3, 0x10($a0)
    ctx->pc = 0x13b5d8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13b5dc: 0x78860020  lq          $a2, 0x20($a0)
    ctx->pc = 0x13b5dcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x13b5e0: 0x78850030  lq          $a1, 0x30($a0)
    ctx->pc = 0x13b5e0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x13b5e4: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x13b5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x13b5e8: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x13b5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x13b5ec: 0x7c660020  sq          $a2, 0x20($v1)
    ctx->pc = 0x13b5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 6));
    // 0x13b5f0: 0x7c650030  sq          $a1, 0x30($v1)
    ctx->pc = 0x13b5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 5));
    // 0x13b5f4: 0x78860040  lq          $a2, 0x40($a0)
    ctx->pc = 0x13b5f4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13b5f8: 0x78850050  lq          $a1, 0x50($a0)
    ctx->pc = 0x13b5f8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x13b5fc: 0x7c660040  sq          $a2, 0x40($v1)
    ctx->pc = 0x13b5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 6));
    // 0x13b600: 0x7c650050  sq          $a1, 0x50($v1)
    ctx->pc = 0x13b600u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 5));
label_13b604:
    // 0x13b604: 0x0  nop
    ctx->pc = 0x13b604u;
    // NOP
    // 0x13b608: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x13b608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13b60c: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x13b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x13b610: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x13b610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x13b614: 0x94282b  sltu        $a1, $a0, $s4
    ctx->pc = 0x13b614u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x13b618: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13b618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13b61c: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13B61Cu;
    {
        const bool branch_taken_0x13b61c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B61Cu;
        // 0x13b620: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b61c) {
            ctx->pc = 0x13B5CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b5cc;
        }
    }
    ctx->pc = 0x13B624u;
label_13b624:
    // 0x13b624: 0x0  nop
    ctx->pc = 0x13b624u;
    // NOP
    // 0x13b628: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x13B628u;
    {
        const bool branch_taken_0x13b628 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b628) {
            ctx->pc = 0x13B680u;
            goto label_13b680;
        }
    }
    ctx->pc = 0x13B630u;
label_13b630:
    // 0x13b630: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13B630u;
    {
        const bool branch_taken_0x13b630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b630) {
            ctx->pc = 0x13B668u;
            goto label_13b668;
        }
    }
    ctx->pc = 0x13B638u;
    // 0x13b638: 0x7a480000  lq          $t0, 0x0($s2)
    ctx->pc = 0x13b638u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13b63c: 0x7a470010  lq          $a3, 0x10($s2)
    ctx->pc = 0x13b63cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x13b640: 0x7a460020  lq          $a2, 0x20($s2)
    ctx->pc = 0x13b640u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x13b644: 0x7a450030  lq          $a1, 0x30($s2)
    ctx->pc = 0x13b644u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x13b648: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x13b648u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x13b64c: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x13b64cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x13b650: 0x7c660020  sq          $a2, 0x20($v1)
    ctx->pc = 0x13b650u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 6));
    // 0x13b654: 0x7c650030  sq          $a1, 0x30($v1)
    ctx->pc = 0x13b654u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 5));
    // 0x13b658: 0x7a460040  lq          $a2, 0x40($s2)
    ctx->pc = 0x13b658u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x13b65c: 0x7a450050  lq          $a1, 0x50($s2)
    ctx->pc = 0x13b65cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x13b660: 0x7c660040  sq          $a2, 0x40($v1)
    ctx->pc = 0x13b660u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 6));
    // 0x13b664: 0x7c650050  sq          $a1, 0x50($v1)
    ctx->pc = 0x13b664u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 5));
label_13b668:
    // 0x13b668: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x13b668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13b66c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13b66cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13b670: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x13b670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x13b674: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13b674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13b678: 0x1660ffed  bnez        $s3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x13B678u;
    {
        const bool branch_taken_0x13b678 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B678u;
        // 0x13b67c: 0xae250000  sw          $a1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b678) {
            ctx->pc = 0x13B630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b630;
        }
    }
    ctx->pc = 0x13B680u;
label_13b680:
    // 0x13b680: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x13b680u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13b684: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x13B684u;
    {
        const bool branch_taken_0x13b684 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b684) {
            ctx->pc = 0x13B6E4u;
            goto label_13b6e4;
        }
    }
    ctx->pc = 0x13B68Cu;
label_13b68c:
    // 0x13b68c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13B68Cu;
    {
        const bool branch_taken_0x13b68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b68c) {
            ctx->pc = 0x13B6C4u;
            goto label_13b6c4;
        }
    }
    ctx->pc = 0x13B694u;
    // 0x13b694: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x13b694u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13b698: 0x78870010  lq          $a3, 0x10($a0)
    ctx->pc = 0x13b698u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13b69c: 0x78860020  lq          $a2, 0x20($a0)
    ctx->pc = 0x13b69cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x13b6a0: 0x78850030  lq          $a1, 0x30($a0)
    ctx->pc = 0x13b6a0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x13b6a4: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x13b6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x13b6a8: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x13b6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x13b6ac: 0x7c660020  sq          $a2, 0x20($v1)
    ctx->pc = 0x13b6acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 6));
    // 0x13b6b0: 0x7c650030  sq          $a1, 0x30($v1)
    ctx->pc = 0x13b6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 5));
    // 0x13b6b4: 0x78860040  lq          $a2, 0x40($a0)
    ctx->pc = 0x13b6b4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13b6b8: 0x78850050  lq          $a1, 0x50($a0)
    ctx->pc = 0x13b6b8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x13b6bc: 0x7c660040  sq          $a2, 0x40($v1)
    ctx->pc = 0x13b6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 6));
    // 0x13b6c0: 0x7c650050  sq          $a1, 0x50($v1)
    ctx->pc = 0x13b6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 5));
label_13b6c4:
    // 0x13b6c4: 0x0  nop
    ctx->pc = 0x13b6c4u;
    // NOP
    // 0x13b6c8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x13b6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13b6cc: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x13b6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x13b6d0: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x13b6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x13b6d4: 0x82282b  sltu        $a1, $a0, $v0
    ctx->pc = 0x13b6d4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13b6d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13b6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13b6dc: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13B6DCu;
    {
        const bool branch_taken_0x13b6dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6DCu;
        // 0x13b6e0: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b6dc) {
            ctx->pc = 0x13B68Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b68c;
        }
    }
    ctx->pc = 0x13B6E4u;
label_13b6e4:
    // 0x13b6e4: 0x0  nop
    ctx->pc = 0x13b6e4u;
    // NOP
    // 0x13b6e8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13b6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13b6ec: 0x1095000b  beq         $a0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x13B6ECu;
    {
        const bool branch_taken_0x13b6ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x13B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6ECu;
        // 0x13b6f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b6ec) {
            ctx->pc = 0x13B71Cu;
            goto label_13b71c;
        }
    }
    ctx->pc = 0x13B6F4u;
    // 0x13b6f4: 0xc04eddc  jal         func_13B770
    ctx->pc = 0x13B6F4u;
    SET_GPR_U32(ctx, 31, 0x13B6FCu);
    ctx->pc = 0x13B770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B770u, 0x13B6F4u, 0x13B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B6FCu;
label_13b6fc:
    // 0x13b6fc: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x13b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13b700: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x13b700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13b704: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x13b704u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x13b708: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x13b708u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x13b70c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13b710: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x13b710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13b714: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13b714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13b718: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x13b718u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
label_13b71c:
    // 0x13b71c: 0xc04ee00  jal         func_13B800
    ctx->pc = 0x13B71Cu;
    SET_GPR_U32(ctx, 31, 0x13B724u);
    ctx->pc = 0x13B720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B71Cu;
    // 0x13b720: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B800u, 0x13B71Cu, 0x13B724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B724u;
label_13b724:
    // 0x13b724: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x13b724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13b728: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B728u;
    {
        const bool branch_taken_0x13b728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b728) {
            ctx->pc = 0x13B738u;
            goto label_13b738;
        }
    }
    ctx->pc = 0x13B730u;
    // 0x13b730: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13B730u;
    SET_GPR_U32(ctx, 31, 0x13B738u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13B730u, 0x13B738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B738u;
label_13b738:
    // 0x13b738: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x13b738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_13b73c:
    // 0x13b73c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13b73cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13b740: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13b740u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13b744: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13b744u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b748: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13b748u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b74c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13b74cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b750: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13b750u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b754: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b758: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b75c: 0x3e00008  jr          $ra
    ctx->pc = 0x13B75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B75Cu;
        // 0x13b760: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B764u;
}
