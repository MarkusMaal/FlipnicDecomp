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

// Function: FUN_0015e9a0
// Address: 0x15e9a0 - 0x15ecb4
void FUN_0015e9a0_0x15e9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015e9a0_0x15e9a0");
#endif

    switch (ctx->pc) {
        case 0x15e9a0u: goto label_15e9a0;
        case 0x15e9a4u: goto label_15e9a4;
        case 0x15e9a8u: goto label_15e9a8;
        case 0x15e9acu: goto label_15e9ac;
        case 0x15e9b0u: goto label_15e9b0;
        case 0x15e9b4u: goto label_15e9b4;
        case 0x15e9b8u: goto label_15e9b8;
        case 0x15e9bcu: goto label_15e9bc;
        case 0x15e9c0u: goto label_15e9c0;
        case 0x15e9c4u: goto label_15e9c4;
        case 0x15e9c8u: goto label_15e9c8;
        case 0x15e9ccu: goto label_15e9cc;
        case 0x15e9d0u: goto label_15e9d0;
        case 0x15e9d4u: goto label_15e9d4;
        case 0x15e9d8u: goto label_15e9d8;
        case 0x15e9dcu: goto label_15e9dc;
        case 0x15e9e0u: goto label_15e9e0;
        case 0x15e9e4u: goto label_15e9e4;
        case 0x15e9e8u: goto label_15e9e8;
        case 0x15e9ecu: goto label_15e9ec;
        case 0x15e9f0u: goto label_15e9f0;
        case 0x15e9f4u: goto label_15e9f4;
        case 0x15e9f8u: goto label_15e9f8;
        case 0x15e9fcu: goto label_15e9fc;
        case 0x15ea00u: goto label_15ea00;
        case 0x15ea04u: goto label_15ea04;
        case 0x15ea08u: goto label_15ea08;
        case 0x15ea0cu: goto label_15ea0c;
        case 0x15ea10u: goto label_15ea10;
        case 0x15ea14u: goto label_15ea14;
        case 0x15ea18u: goto label_15ea18;
        case 0x15ea1cu: goto label_15ea1c;
        case 0x15ea20u: goto label_15ea20;
        case 0x15ea24u: goto label_15ea24;
        case 0x15ea28u: goto label_15ea28;
        case 0x15ea2cu: goto label_15ea2c;
        case 0x15ea30u: goto label_15ea30;
        case 0x15ea34u: goto label_15ea34;
        case 0x15ea38u: goto label_15ea38;
        case 0x15ea3cu: goto label_15ea3c;
        case 0x15ea40u: goto label_15ea40;
        case 0x15ea44u: goto label_15ea44;
        case 0x15ea48u: goto label_15ea48;
        case 0x15ea4cu: goto label_15ea4c;
        case 0x15ea50u: goto label_15ea50;
        case 0x15ea54u: goto label_15ea54;
        case 0x15ea58u: goto label_15ea58;
        case 0x15ea5cu: goto label_15ea5c;
        case 0x15ea60u: goto label_15ea60;
        case 0x15ea64u: goto label_15ea64;
        case 0x15ea68u: goto label_15ea68;
        case 0x15ea6cu: goto label_15ea6c;
        case 0x15ea70u: goto label_15ea70;
        case 0x15ea74u: goto label_15ea74;
        case 0x15ea78u: goto label_15ea78;
        case 0x15ea7cu: goto label_15ea7c;
        case 0x15ea80u: goto label_15ea80;
        case 0x15ea84u: goto label_15ea84;
        case 0x15ea88u: goto label_15ea88;
        case 0x15ea8cu: goto label_15ea8c;
        case 0x15ea90u: goto label_15ea90;
        case 0x15ea94u: goto label_15ea94;
        case 0x15ea98u: goto label_15ea98;
        case 0x15ea9cu: goto label_15ea9c;
        case 0x15eaa0u: goto label_15eaa0;
        case 0x15eaa4u: goto label_15eaa4;
        case 0x15eaa8u: goto label_15eaa8;
        case 0x15eaacu: goto label_15eaac;
        case 0x15eab0u: goto label_15eab0;
        case 0x15eab4u: goto label_15eab4;
        case 0x15eab8u: goto label_15eab8;
        case 0x15eabcu: goto label_15eabc;
        case 0x15eac0u: goto label_15eac0;
        case 0x15eac4u: goto label_15eac4;
        case 0x15eac8u: goto label_15eac8;
        case 0x15eaccu: goto label_15eacc;
        case 0x15ead0u: goto label_15ead0;
        case 0x15ead4u: goto label_15ead4;
        case 0x15ead8u: goto label_15ead8;
        case 0x15eadcu: goto label_15eadc;
        case 0x15eae0u: goto label_15eae0;
        case 0x15eae4u: goto label_15eae4;
        case 0x15eae8u: goto label_15eae8;
        case 0x15eaecu: goto label_15eaec;
        case 0x15eaf0u: goto label_15eaf0;
        case 0x15eaf4u: goto label_15eaf4;
        case 0x15eaf8u: goto label_15eaf8;
        case 0x15eafcu: goto label_15eafc;
        case 0x15eb00u: goto label_15eb00;
        case 0x15eb04u: goto label_15eb04;
        case 0x15eb08u: goto label_15eb08;
        case 0x15eb0cu: goto label_15eb0c;
        case 0x15eb10u: goto label_15eb10;
        case 0x15eb14u: goto label_15eb14;
        case 0x15eb18u: goto label_15eb18;
        case 0x15eb1cu: goto label_15eb1c;
        case 0x15eb20u: goto label_15eb20;
        case 0x15eb24u: goto label_15eb24;
        case 0x15eb28u: goto label_15eb28;
        case 0x15eb2cu: goto label_15eb2c;
        case 0x15eb30u: goto label_15eb30;
        case 0x15eb34u: goto label_15eb34;
        case 0x15eb38u: goto label_15eb38;
        case 0x15eb3cu: goto label_15eb3c;
        case 0x15eb40u: goto label_15eb40;
        case 0x15eb44u: goto label_15eb44;
        case 0x15eb48u: goto label_15eb48;
        case 0x15eb4cu: goto label_15eb4c;
        case 0x15eb50u: goto label_15eb50;
        case 0x15eb54u: goto label_15eb54;
        case 0x15eb58u: goto label_15eb58;
        case 0x15eb5cu: goto label_15eb5c;
        case 0x15eb60u: goto label_15eb60;
        case 0x15eb64u: goto label_15eb64;
        case 0x15eb68u: goto label_15eb68;
        case 0x15eb6cu: goto label_15eb6c;
        case 0x15eb70u: goto label_15eb70;
        case 0x15eb74u: goto label_15eb74;
        case 0x15eb78u: goto label_15eb78;
        case 0x15eb7cu: goto label_15eb7c;
        case 0x15eb80u: goto label_15eb80;
        case 0x15eb84u: goto label_15eb84;
        case 0x15eb88u: goto label_15eb88;
        case 0x15eb8cu: goto label_15eb8c;
        case 0x15eb90u: goto label_15eb90;
        case 0x15eb94u: goto label_15eb94;
        case 0x15eb98u: goto label_15eb98;
        case 0x15eb9cu: goto label_15eb9c;
        case 0x15eba0u: goto label_15eba0;
        case 0x15eba4u: goto label_15eba4;
        case 0x15eba8u: goto label_15eba8;
        case 0x15ebacu: goto label_15ebac;
        case 0x15ebb0u: goto label_15ebb0;
        case 0x15ebb4u: goto label_15ebb4;
        case 0x15ebb8u: goto label_15ebb8;
        case 0x15ebbcu: goto label_15ebbc;
        case 0x15ebc0u: goto label_15ebc0;
        case 0x15ebc4u: goto label_15ebc4;
        case 0x15ebc8u: goto label_15ebc8;
        case 0x15ebccu: goto label_15ebcc;
        case 0x15ebd0u: goto label_15ebd0;
        case 0x15ebd4u: goto label_15ebd4;
        case 0x15ebd8u: goto label_15ebd8;
        case 0x15ebdcu: goto label_15ebdc;
        case 0x15ebe0u: goto label_15ebe0;
        case 0x15ebe4u: goto label_15ebe4;
        case 0x15ebe8u: goto label_15ebe8;
        case 0x15ebecu: goto label_15ebec;
        case 0x15ebf0u: goto label_15ebf0;
        case 0x15ebf4u: goto label_15ebf4;
        case 0x15ebf8u: goto label_15ebf8;
        case 0x15ebfcu: goto label_15ebfc;
        case 0x15ec00u: goto label_15ec00;
        case 0x15ec04u: goto label_15ec04;
        case 0x15ec08u: goto label_15ec08;
        case 0x15ec0cu: goto label_15ec0c;
        case 0x15ec10u: goto label_15ec10;
        case 0x15ec14u: goto label_15ec14;
        case 0x15ec18u: goto label_15ec18;
        case 0x15ec1cu: goto label_15ec1c;
        case 0x15ec20u: goto label_15ec20;
        case 0x15ec24u: goto label_15ec24;
        case 0x15ec28u: goto label_15ec28;
        case 0x15ec2cu: goto label_15ec2c;
        case 0x15ec30u: goto label_15ec30;
        case 0x15ec34u: goto label_15ec34;
        case 0x15ec38u: goto label_15ec38;
        case 0x15ec3cu: goto label_15ec3c;
        case 0x15ec40u: goto label_15ec40;
        case 0x15ec44u: goto label_15ec44;
        case 0x15ec48u: goto label_15ec48;
        case 0x15ec4cu: goto label_15ec4c;
        case 0x15ec50u: goto label_15ec50;
        case 0x15ec54u: goto label_15ec54;
        case 0x15ec58u: goto label_15ec58;
        case 0x15ec5cu: goto label_15ec5c;
        case 0x15ec60u: goto label_15ec60;
        case 0x15ec64u: goto label_15ec64;
        case 0x15ec68u: goto label_15ec68;
        case 0x15ec6cu: goto label_15ec6c;
        case 0x15ec70u: goto label_15ec70;
        case 0x15ec74u: goto label_15ec74;
        case 0x15ec78u: goto label_15ec78;
        case 0x15ec7cu: goto label_15ec7c;
        case 0x15ec80u: goto label_15ec80;
        case 0x15ec84u: goto label_15ec84;
        case 0x15ec88u: goto label_15ec88;
        case 0x15ec8cu: goto label_15ec8c;
        case 0x15ec90u: goto label_15ec90;
        case 0x15ec94u: goto label_15ec94;
        case 0x15ec98u: goto label_15ec98;
        case 0x15ec9cu: goto label_15ec9c;
        case 0x15eca0u: goto label_15eca0;
        case 0x15eca4u: goto label_15eca4;
        case 0x15eca8u: goto label_15eca8;
        case 0x15ecacu: goto label_15ecac;
        case 0x15ecb0u: goto label_15ecb0;
        default: break;
    }

    ctx->pc = 0x15e9a0u;

label_15e9a0:
    // 0x15e9a0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x15e9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_15e9a4:
    // 0x15e9a4: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x15e9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_15e9a8:
    // 0x15e9a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15e9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_15e9ac:
    // 0x15e9ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15e9acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e9b0:
    // 0x15e9b0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15e9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_15e9b4:
    // 0x15e9b4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15e9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15e9b8:
    // 0x15e9b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15e9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15e9bc:
    // 0x15e9bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15e9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15e9c0:
    // 0x15e9c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15e9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15e9c4:
    // 0x15e9c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15e9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15e9c8:
    // 0x15e9c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15e9cc:
    // 0x15e9cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15e9d0:
    // 0x15e9d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15e9d4:
    // 0x15e9d4: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x15e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
label_15e9d8:
    // 0x15e9d8: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x15e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_15e9dc:
    // 0x15e9dc: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x15e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_15e9e0:
    // 0x15e9e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15e9e4:
    // 0x15e9e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15e9e8:
    // 0x15e9e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15e9ec:
    // 0x15e9ec: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x15e9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_15e9f0:
    // 0x15e9f0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15e9f4:
    // 0x15e9f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15e9f8:
    // 0x15e9f8: 0xc4610330  lwc1        $f1, 0x330($v1)
    ctx->pc = 0x15e9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15e9fc:
    // 0x15e9fc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x15e9fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15ea00:
    // 0x15ea00: 0x0  nop
    ctx->pc = 0x15ea00u;
    // NOP
label_15ea04:
    // 0x15ea04: 0x4501009f  bc1t        . + 4 + (0x9F << 2)
label_15ea08:
    if (ctx->pc == 0x15EA08u) {
        ctx->pc = 0x15EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA04u;
        // 0x15ea08: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA0Cu;
        goto label_15ea0c;
    }
    ctx->pc = 0x15EA04u;
    {
        const bool branch_taken_0x15ea04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA04u;
        // 0x15ea08: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea04) {
            ctx->pc = 0x15EC84u;
            goto label_15ec84;
        }
    }
    ctx->pc = 0x15EA0Cu;
label_15ea0c:
    // 0x15ea0c: 0xc05c01c  jal         func_170070
label_15ea10:
    if (ctx->pc == 0x15EA10u) {
        ctx->pc = 0x15EA14u;
        goto label_15ea14;
    }
    ctx->pc = 0x15EA0Cu;
    SET_GPR_U32(ctx, 31, 0x15EA14u);
    ctx->pc = 0x170070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170070u, 0x15EA0Cu, 0x15EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EA14u;
label_15ea14:
    // 0x15ea14: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15ea18:
    // 0x15ea18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15ea18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ea1c:
    // 0x15ea1c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x15ea1cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ea20:
    // 0x15ea20: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x15ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_15ea24:
    // 0x15ea24: 0x2462022c  addiu       $v0, $v1, 0x22C
    ctx->pc = 0x15ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 556));
label_15ea28:
    // 0x15ea28: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x15ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_15ea2c:
    // 0x15ea2c: 0x8462022c  lh          $v0, 0x22C($v1)
    ctx->pc = 0x15ea2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 556)));
label_15ea30:
    // 0x15ea30: 0x1000004b  b           . + 4 + (0x4B << 2)
label_15ea34:
    if (ctx->pc == 0x15EA34u) {
        ctx->pc = 0x15EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA30u;
        // 0x15ea34: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA38u;
        goto label_15ea38;
    }
    ctx->pc = 0x15EA30u;
    {
        const bool branch_taken_0x15ea30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA30u;
        // 0x15ea34: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea30) {
            ctx->pc = 0x15EB60u;
            goto label_15eb60;
        }
    }
    ctx->pc = 0x15EA38u;
label_15ea38:
    // 0x15ea38: 0x8ea22c1c  lw          $v0, 0x2C1C($s5)
    ctx->pc = 0x15ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
label_15ea3c:
    // 0x15ea3c: 0x573021  addu        $a2, $v0, $s7
    ctx->pc = 0x15ea3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_15ea40:
    // 0x15ea40: 0x90c20041  lbu         $v0, 0x41($a2)
    ctx->pc = 0x15ea40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 65)));
label_15ea44:
    // 0x15ea44: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
label_15ea48:
    if (ctx->pc == 0x15EA48u) {
        ctx->pc = 0x15EA4Cu;
        goto label_15ea4c;
    }
    ctx->pc = 0x15EA44u;
    {
        const bool branch_taken_0x15ea44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ea44) {
            ctx->pc = 0x15EB58u;
            goto label_15eb58;
        }
    }
    ctx->pc = 0x15EA4Cu;
label_15ea4c:
    // 0x15ea4c: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x15ea4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_15ea50:
    // 0x15ea50: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x15ea50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_15ea54:
    // 0x15ea54: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
label_15ea58:
    if (ctx->pc == 0x15EA58u) {
        ctx->pc = 0x15EA5Cu;
        goto label_15ea5c;
    }
    ctx->pc = 0x15EA54u;
    {
        const bool branch_taken_0x15ea54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15ea54) {
            ctx->pc = 0x15EB58u;
            goto label_15eb58;
        }
    }
    ctx->pc = 0x15EA5Cu;
label_15ea5c:
    // 0x15ea5c: 0x84c5000a  lh          $a1, 0xA($a2)
    ctx->pc = 0x15ea5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_15ea60:
    // 0x15ea60: 0x8cc40030  lw          $a0, 0x30($a2)
    ctx->pc = 0x15ea60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_15ea64:
    // 0x15ea64: 0x84c3000c  lh          $v1, 0xC($a2)
    ctx->pc = 0x15ea64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
label_15ea68:
    // 0x15ea68: 0x84c20008  lh          $v0, 0x8($a2)
    ctx->pc = 0x15ea68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
label_15ea6c:
    // 0x15ea6c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15ea70:
    // 0x15ea70: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x15ea70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15ea74:
    // 0x15ea74: 0x222f021  addu        $fp, $s1, $v0
    ctx->pc = 0x15ea74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_15ea78:
    // 0x15ea78: 0x23e082a  slt         $at, $s1, $fp
    ctx->pc = 0x15ea78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_15ea7c:
    // 0x15ea7c: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
label_15ea80:
    if (ctx->pc == 0x15EA80u) {
        ctx->pc = 0x15EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA7Cu;
        // 0x15ea80: 0x11b080  sll         $s6, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA84u;
        goto label_15ea84;
    }
    ctx->pc = 0x15EA7Cu;
    {
        const bool branch_taken_0x15ea7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA7Cu;
        // 0x15ea80: 0x11b080  sll         $s6, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea7c) {
            ctx->pc = 0x15EB58u;
            goto label_15eb58;
        }
    }
    ctx->pc = 0x15EA84u;
label_15ea84:
    // 0x15ea84: 0x0  nop
    ctx->pc = 0x15ea84u;
    // NOP
label_15ea88:
    // 0x15ea88: 0x2b61021  addu        $v0, $s5, $s6
    ctx->pc = 0x15ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
label_15ea8c:
    // 0x15ea8c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15ea90:
    // 0x15ea90: 0x24532cd8  addiu       $s3, $v0, 0x2CD8
    ctx->pc = 0x15ea90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
label_15ea94:
    // 0x15ea94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x15ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15ea98:
    // 0x15ea98: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x15ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_15ea9c:
    // 0x15ea9c: 0x84630020  lh          $v1, 0x20($v1)
    ctx->pc = 0x15ea9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_15eaa0:
    // 0x15eaa0: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
label_15eaa4:
    if (ctx->pc == 0x15EAA4u) {
        ctx->pc = 0x15EAA8u;
        goto label_15eaa8;
    }
    ctx->pc = 0x15EAA0u;
    {
        const bool branch_taken_0x15eaa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15eaa0) {
            ctx->pc = 0x15EB44u;
            goto label_15eb44;
        }
    }
    ctx->pc = 0x15EAA8u;
label_15eaa8:
    // 0x15eaa8: 0x908201d3  lbu         $v0, 0x1D3($a0)
    ctx->pc = 0x15eaa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15eaac:
    // 0x15eaac: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_15eab0:
    if (ctx->pc == 0x15EAB0u) {
        ctx->pc = 0x15EAB4u;
        goto label_15eab4;
    }
    ctx->pc = 0x15EAACu;
    {
        const bool branch_taken_0x15eaac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15eaac) {
            ctx->pc = 0x15EB44u;
            goto label_15eb44;
        }
    }
    ctx->pc = 0x15EAB4u;
label_15eab4:
    // 0x15eab4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15eab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15eab8:
    // 0x15eab8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15eabc:
    // 0x15eabc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x15eabcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_15eac0:
    // 0x15eac0: 0x2a2a021  addu        $s4, $s5, $v0
    ctx->pc = 0x15eac0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_15eac4:
    // 0x15eac4: 0x26920040  addiu       $s2, $s4, 0x40
    ctx->pc = 0x15eac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_15eac8:
    // 0x15eac8: 0x320f809  jalr        $t9
label_15eacc:
    if (ctx->pc == 0x15EACCu) {
        ctx->pc = 0x15EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAC8u;
        // 0x15eacc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EAD0u;
        goto label_15ead0;
    }
    ctx->pc = 0x15EAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EAD0u);
        ctx->pc = 0x15EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAC8u;
        // 0x15eacc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EAC8u, 0x15EAD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EAD0u;
label_15ead0:
    // 0x15ead0: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15ead0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15ead4:
    // 0x15ead4: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
label_15ead8:
    if (ctx->pc == 0x15EAD8u) {
        ctx->pc = 0x15EADCu;
        goto label_15eadc;
    }
    ctx->pc = 0x15EAD4u;
    {
        const bool branch_taken_0x15ead4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ead4) {
            ctx->pc = 0x15EB44u;
            goto label_15eb44;
        }
    }
    ctx->pc = 0x15EADCu;
label_15eadc:
    // 0x15eadc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x15eadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15eae0:
    // 0x15eae0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15eae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15eae4:
    // 0x15eae4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15eae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15eae8:
    // 0x15eae8: 0x320f809  jalr        $t9
label_15eaec:
    if (ctx->pc == 0x15EAECu) {
        ctx->pc = 0x15EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAE8u;
        // 0x15eaec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EAF0u;
        goto label_15eaf0;
    }
    ctx->pc = 0x15EAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EAF0u);
        ctx->pc = 0x15EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAE8u;
        // 0x15eaec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EAE8u, 0x15EAF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EAF0u;
label_15eaf0:
    // 0x15eaf0: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15eaf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_15eaf4:
    // 0x15eaf4: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
label_15eaf8:
    if (ctx->pc == 0x15EAF8u) {
        ctx->pc = 0x15EAFCu;
        goto label_15eafc;
    }
    ctx->pc = 0x15EAF4u;
    {
        const bool branch_taken_0x15eaf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15eaf4) {
            ctx->pc = 0x15EB44u;
            goto label_15eb44;
        }
    }
    ctx->pc = 0x15EAFCu;
label_15eafc:
    // 0x15eafc: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
label_15eb00:
    if (ctx->pc == 0x15EB00u) {
        ctx->pc = 0x15EB04u;
        goto label_15eb04;
    }
    ctx->pc = 0x15EAFCu;
    {
        const bool branch_taken_0x15eafc = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x15eafc) {
            ctx->pc = 0x15EB14u;
            goto label_15eb14;
        }
    }
    ctx->pc = 0x15EB04u;
label_15eb04:
    // 0x15eb04: 0x8683022c  lh          $v1, 0x22C($s4)
    ctx->pc = 0x15eb04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 556)));
label_15eb08:
    // 0x15eb08: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
label_15eb0c:
    if (ctx->pc == 0x15EB0Cu) {
        ctx->pc = 0x15EB10u;
        goto label_15eb10;
    }
    ctx->pc = 0x15EB08u;
    {
        const bool branch_taken_0x15eb08 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x15eb08) {
            ctx->pc = 0x15EB14u;
            goto label_15eb14;
        }
    }
    ctx->pc = 0x15EB10u;
label_15eb10:
    // 0x15eb10: 0xa683022e  sh          $v1, 0x22E($s4)
    ctx->pc = 0x15eb10u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 558), (uint16_t)GPR_U32(ctx, 3));
label_15eb14:
    // 0x15eb14: 0x0  nop
    ctx->pc = 0x15eb14u;
    // NOP
label_15eb18:
    // 0x15eb18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15eb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15eb1c:
    // 0x15eb1c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_15eb20:
    if (ctx->pc == 0x15EB20u) {
        ctx->pc = 0x15EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB1Cu;
        // 0x15eb20: 0xa691022c  sh          $s1, 0x22C($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 556), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EB24u;
        goto label_15eb24;
    }
    ctx->pc = 0x15EB1Cu;
    {
        const bool branch_taken_0x15eb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB1Cu;
        // 0x15eb20: 0xa691022c  sh          $s1, 0x22C($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 556), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb1c) {
            ctx->pc = 0x15EB34u;
            goto label_15eb34;
        }
    }
    ctx->pc = 0x15EB24u;
label_15eb24:
    // 0x15eb24: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x15eb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15eb28:
    // 0x15eb28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15eb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15eb2c:
    // 0x15eb2c: 0xc05b698  jal         func_16DA60
label_15eb30:
    if (ctx->pc == 0x15EB30u) {
        ctx->pc = 0x15EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB2Cu;
        // 0x15eb30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EB34u;
        goto label_15eb34;
    }
    ctx->pc = 0x15EB2Cu;
    SET_GPR_U32(ctx, 31, 0x15EB34u);
    ctx->pc = 0x15EB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB2Cu;
    // 0x15eb30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA60u, 0x15EB2Cu, 0x15EB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB34u;
label_15eb34:
    // 0x15eb34: 0x0  nop
    ctx->pc = 0x15eb34u;
    // NOP
label_15eb38:
    // 0x15eb38: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x15eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15eb3c:
    // 0x15eb3c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x15eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_15eb40:
    // 0x15eb40: 0xa06201d1  sb          $v0, 0x1D1($v1)
    ctx->pc = 0x15eb40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 465), (uint8_t)GPR_U32(ctx, 2));
label_15eb44:
    // 0x15eb44: 0x0  nop
    ctx->pc = 0x15eb44u;
    // NOP
label_15eb48:
    // 0x15eb48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15eb48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15eb4c:
    // 0x15eb4c: 0x23e102a  slt         $v0, $s1, $fp
    ctx->pc = 0x15eb4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_15eb50:
    // 0x15eb50: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_15eb54:
    if (ctx->pc == 0x15EB54u) {
        ctx->pc = 0x15EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB50u;
        // 0x15eb54: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EB58u;
        goto label_15eb58;
    }
    ctx->pc = 0x15EB50u;
    {
        const bool branch_taken_0x15eb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB50u;
        // 0x15eb54: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb50) {
            ctx->pc = 0x15EA84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ea84;
        }
    }
    ctx->pc = 0x15EB58u;
label_15eb58:
    // 0x15eb58: 0x26f70050  addiu       $s7, $s7, 0x50
    ctx->pc = 0x15eb58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 80));
label_15eb5c:
    // 0x15eb5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15eb5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15eb60:
    // 0x15eb60: 0x8ea22c20  lw          $v0, 0x2C20($s5)
    ctx->pc = 0x15eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11296)));
label_15eb64:
    // 0x15eb64: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x15eb64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15eb68:
    // 0x15eb68: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_15eb6c:
    if (ctx->pc == 0x15EB6Cu) {
        ctx->pc = 0x15EB70u;
        goto label_15eb70;
    }
    ctx->pc = 0x15EB68u;
    {
        const bool branch_taken_0x15eb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15eb68) {
            ctx->pc = 0x15EA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ea38;
        }
    }
    ctx->pc = 0x15EB70u;
label_15eb70:
    // 0x15eb70: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x15eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_15eb74:
    // 0x15eb74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15eb78:
    // 0x15eb78: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x15eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_15eb7c:
    // 0x15eb7c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15eb80:
    // 0x15eb80: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15eb84:
    // 0x15eb84: 0x24712cd8  addiu       $s1, $v1, 0x2CD8
    ctx->pc = 0x15eb84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 11480));
label_15eb88:
    // 0x15eb88: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x15eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_15eb8c:
    // 0x15eb8c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15eb8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15eb90:
    // 0x15eb90: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x15eb90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_15eb94:
    // 0x15eb94: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x15eb94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_15eb98:
    // 0x15eb98: 0x320f809  jalr        $t9
label_15eb9c:
    if (ctx->pc == 0x15EB9Cu) {
        ctx->pc = 0x15EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB98u;
        // 0x15eb9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EBA0u;
        goto label_15eba0;
    }
    ctx->pc = 0x15EB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EBA0u);
        ctx->pc = 0x15EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB98u;
        // 0x15eb9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EB98u, 0x15EBA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EBA0u;
label_15eba0:
    // 0x15eba0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x15eba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15eba4:
    // 0x15eba4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15eba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15eba8:
    // 0x15eba8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15eba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15ebac:
    // 0x15ebac: 0x320f809  jalr        $t9
label_15ebb0:
    if (ctx->pc == 0x15EBB0u) {
        ctx->pc = 0x15EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBACu;
        // 0x15ebb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EBB4u;
        goto label_15ebb4;
    }
    ctx->pc = 0x15EBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EBB4u);
        ctx->pc = 0x15EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBACu;
        // 0x15ebb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EBACu, 0x15EBB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EBB4u;
label_15ebb4:
    // 0x15ebb4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x15ebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15ebb8:
    // 0x15ebb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ebb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ebbc:
    // 0x15ebbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15ebbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ebc0:
    // 0x15ebc0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15ebc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15ebc4:
    // 0x15ebc4: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x15ebc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_15ebc8:
    // 0x15ebc8: 0x320f809  jalr        $t9
label_15ebcc:
    if (ctx->pc == 0x15EBCCu) {
        ctx->pc = 0x15EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBC8u;
        // 0x15ebcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EBD0u;
        goto label_15ebd0;
    }
    ctx->pc = 0x15EBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EBD0u);
        ctx->pc = 0x15EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBC8u;
        // 0x15ebcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EBC8u, 0x15EBD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EBD0u;
label_15ebd0:
    // 0x15ebd0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x15ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_15ebd4:
    // 0x15ebd4: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
label_15ebd8:
    if (ctx->pc == 0x15EBD8u) {
        ctx->pc = 0x15EBDCu;
        goto label_15ebdc;
    }
    ctx->pc = 0x15EBD4u;
    {
        const bool branch_taken_0x15ebd4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x15ebd4) {
            ctx->pc = 0x15EBF8u;
            goto label_15ebf8;
        }
    }
    ctx->pc = 0x15EBDCu;
label_15ebdc:
    // 0x15ebdc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_15ebe0:
    // 0x15ebe0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15ebe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15ebe4:
    // 0x15ebe4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_15ebe8:
    if (ctx->pc == 0x15EBE8u) {
        ctx->pc = 0x15EBECu;
        goto label_15ebec;
    }
    ctx->pc = 0x15EBE4u;
    {
        const bool branch_taken_0x15ebe4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x15ebe4) {
            ctx->pc = 0x15EBF8u;
            goto label_15ebf8;
        }
    }
    ctx->pc = 0x15EBECu;
label_15ebec:
    // 0x15ebec: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15ebf0:
    // 0x15ebf0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x15ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_15ebf4:
    // 0x15ebf4: 0xa464022e  sh          $a0, 0x22E($v1)
    ctx->pc = 0x15ebf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 558), (uint16_t)GPR_U32(ctx, 4));
label_15ebf8:
    // 0x15ebf8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x15ebf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_15ebfc:
    // 0x15ebfc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_15ec00:
    // 0x15ec00: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x15ec00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_15ec04:
    // 0x15ec04: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15ec08:
    // 0x15ec08: 0x752821  addu        $a1, $v1, $s5
    ctx->pc = 0x15ec08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_15ec0c:
    // 0x15ec0c: 0x84a40228  lh          $a0, 0x228($a1)
    ctx->pc = 0x15ec0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 552)));
label_15ec10:
    // 0x15ec10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15ec14:
    // 0x15ec14: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_15ec18:
    if (ctx->pc == 0x15EC18u) {
        ctx->pc = 0x15EC1Cu;
        goto label_15ec1c;
    }
    ctx->pc = 0x15EC14u;
    {
        const bool branch_taken_0x15ec14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15ec14) {
            ctx->pc = 0x15EC84u;
            goto label_15ec84;
        }
    }
    ctx->pc = 0x15EC1Cu;
label_15ec1c:
    // 0x15ec1c: 0x84a4022a  lh          $a0, 0x22A($a1)
    ctx->pc = 0x15ec1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 554)));
label_15ec20:
    // 0x15ec20: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15ec24:
    // 0x15ec24: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_15ec28:
    if (ctx->pc == 0x15EC28u) {
        ctx->pc = 0x15EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC24u;
        // 0x15ec28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EC2Cu;
        goto label_15ec2c;
    }
    ctx->pc = 0x15EC24u;
    {
        const bool branch_taken_0x15ec24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC24u;
        // 0x15ec28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec24) {
            ctx->pc = 0x15EC5Cu;
            goto label_15ec5c;
        }
    }
    ctx->pc = 0x15EC2Cu;
label_15ec2c:
    // 0x15ec2c: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
label_15ec30:
    if (ctx->pc == 0x15EC30u) {
        ctx->pc = 0x15EC34u;
        goto label_15ec34;
    }
    ctx->pc = 0x15EC2Cu;
    {
        const bool branch_taken_0x15ec2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x15ec2c) {
            ctx->pc = 0x15EC44u;
            goto label_15ec44;
        }
    }
    ctx->pc = 0x15EC34u;
label_15ec34:
    // 0x15ec34: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x15ec34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15ec38:
    // 0x15ec38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15ec38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15ec3c:
    // 0x15ec3c: 0xc05b698  jal         func_16DA60
label_15ec40:
    if (ctx->pc == 0x15EC40u) {
        ctx->pc = 0x15EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC3Cu;
        // 0x15ec40: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EC44u;
        goto label_15ec44;
    }
    ctx->pc = 0x15EC3Cu;
    SET_GPR_U32(ctx, 31, 0x15EC44u);
    ctx->pc = 0x15EC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EC3Cu;
    // 0x15ec40: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA60u, 0x15EC3Cu, 0x15EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EC44u;
label_15ec44:
    // 0x15ec44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x15ec44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15ec48:
    // 0x15ec48: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15ec4c:
    // 0x15ec4c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x15ec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15ec50:
    // 0x15ec50: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x15ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_15ec54:
    // 0x15ec54: 0x80840024  lb          $a0, 0x24($a0)
    ctx->pc = 0x15ec54u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
label_15ec58:
    // 0x15ec58: 0xa4640230  sh          $a0, 0x230($v1)
    ctx->pc = 0x15ec58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 4));
label_15ec5c:
    // 0x15ec5c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_15ec60:
    // 0x15ec60: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15ec60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15ec64:
    // 0x15ec64: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_15ec68:
    if (ctx->pc == 0x15EC68u) {
        ctx->pc = 0x15EC6Cu;
        goto label_15ec6c;
    }
    ctx->pc = 0x15EC64u;
    {
        const bool branch_taken_0x15ec64 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x15ec64) {
            ctx->pc = 0x15EC78u;
            goto label_15ec78;
        }
    }
    ctx->pc = 0x15EC6Cu;
label_15ec6c:
    // 0x15ec6c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15ec70:
    // 0x15ec70: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x15ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_15ec74:
    // 0x15ec74: 0xa464022e  sh          $a0, 0x22E($v1)
    ctx->pc = 0x15ec74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 558), (uint16_t)GPR_U32(ctx, 4));
label_15ec78:
    // 0x15ec78: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_15ec7c:
    // 0x15ec7c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x15ec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15ec80:
    // 0x15ec80: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x15ec80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_15ec84:
    // 0x15ec84: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15ec84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_15ec88:
    // 0x15ec88: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15ec88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15ec8c:
    // 0x15ec8c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15ec8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15ec90:
    // 0x15ec90: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15ec90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15ec94:
    // 0x15ec94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15ec94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15ec98:
    // 0x15ec98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15ec98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15ec9c:
    // 0x15ec9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15ec9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15eca0:
    // 0x15eca0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15eca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15eca4:
    // 0x15eca4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15eca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15eca8:
    // 0x15eca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15eca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15ecac:
    // 0x15ecac: 0x3e00008  jr          $ra
label_15ecb0:
    if (ctx->pc == 0x15ECB0u) {
        ctx->pc = 0x15ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECACu;
        // 0x15ecb0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ECB4u;
        goto label_fallthrough_0x15ecac;
    }
    ctx->pc = 0x15ECACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECACu;
        // 0x15ecb0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ECACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15ecac:
    ctx->pc = 0x15ECB4u;
}
