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

// Function: FUN_0016be10
// Address: 0x16be10 - 0x16c0f4
void FUN_0016be10_0x16be10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016be10_0x16be10");
#endif

    switch (ctx->pc) {
        case 0x16be10u: goto label_16be10;
        case 0x16be14u: goto label_16be14;
        case 0x16be18u: goto label_16be18;
        case 0x16be1cu: goto label_16be1c;
        case 0x16be20u: goto label_16be20;
        case 0x16be24u: goto label_16be24;
        case 0x16be28u: goto label_16be28;
        case 0x16be2cu: goto label_16be2c;
        case 0x16be30u: goto label_16be30;
        case 0x16be34u: goto label_16be34;
        case 0x16be38u: goto label_16be38;
        case 0x16be3cu: goto label_16be3c;
        case 0x16be40u: goto label_16be40;
        case 0x16be44u: goto label_16be44;
        case 0x16be48u: goto label_16be48;
        case 0x16be4cu: goto label_16be4c;
        case 0x16be50u: goto label_16be50;
        case 0x16be54u: goto label_16be54;
        case 0x16be58u: goto label_16be58;
        case 0x16be5cu: goto label_16be5c;
        case 0x16be60u: goto label_16be60;
        case 0x16be64u: goto label_16be64;
        case 0x16be68u: goto label_16be68;
        case 0x16be6cu: goto label_16be6c;
        case 0x16be70u: goto label_16be70;
        case 0x16be74u: goto label_16be74;
        case 0x16be78u: goto label_16be78;
        case 0x16be7cu: goto label_16be7c;
        case 0x16be80u: goto label_16be80;
        case 0x16be84u: goto label_16be84;
        case 0x16be88u: goto label_16be88;
        case 0x16be8cu: goto label_16be8c;
        case 0x16be90u: goto label_16be90;
        case 0x16be94u: goto label_16be94;
        case 0x16be98u: goto label_16be98;
        case 0x16be9cu: goto label_16be9c;
        case 0x16bea0u: goto label_16bea0;
        case 0x16bea4u: goto label_16bea4;
        case 0x16bea8u: goto label_16bea8;
        case 0x16beacu: goto label_16beac;
        case 0x16beb0u: goto label_16beb0;
        case 0x16beb4u: goto label_16beb4;
        case 0x16beb8u: goto label_16beb8;
        case 0x16bebcu: goto label_16bebc;
        case 0x16bec0u: goto label_16bec0;
        case 0x16bec4u: goto label_16bec4;
        case 0x16bec8u: goto label_16bec8;
        case 0x16beccu: goto label_16becc;
        case 0x16bed0u: goto label_16bed0;
        case 0x16bed4u: goto label_16bed4;
        case 0x16bed8u: goto label_16bed8;
        case 0x16bedcu: goto label_16bedc;
        case 0x16bee0u: goto label_16bee0;
        case 0x16bee4u: goto label_16bee4;
        case 0x16bee8u: goto label_16bee8;
        case 0x16beecu: goto label_16beec;
        case 0x16bef0u: goto label_16bef0;
        case 0x16bef4u: goto label_16bef4;
        case 0x16bef8u: goto label_16bef8;
        case 0x16befcu: goto label_16befc;
        case 0x16bf00u: goto label_16bf00;
        case 0x16bf04u: goto label_16bf04;
        case 0x16bf08u: goto label_16bf08;
        case 0x16bf0cu: goto label_16bf0c;
        case 0x16bf10u: goto label_16bf10;
        case 0x16bf14u: goto label_16bf14;
        case 0x16bf18u: goto label_16bf18;
        case 0x16bf1cu: goto label_16bf1c;
        case 0x16bf20u: goto label_16bf20;
        case 0x16bf24u: goto label_16bf24;
        case 0x16bf28u: goto label_16bf28;
        case 0x16bf2cu: goto label_16bf2c;
        case 0x16bf30u: goto label_16bf30;
        case 0x16bf34u: goto label_16bf34;
        case 0x16bf38u: goto label_16bf38;
        case 0x16bf3cu: goto label_16bf3c;
        case 0x16bf40u: goto label_16bf40;
        case 0x16bf44u: goto label_16bf44;
        case 0x16bf48u: goto label_16bf48;
        case 0x16bf4cu: goto label_16bf4c;
        case 0x16bf50u: goto label_16bf50;
        case 0x16bf54u: goto label_16bf54;
        case 0x16bf58u: goto label_16bf58;
        case 0x16bf5cu: goto label_16bf5c;
        case 0x16bf60u: goto label_16bf60;
        case 0x16bf64u: goto label_16bf64;
        case 0x16bf68u: goto label_16bf68;
        case 0x16bf6cu: goto label_16bf6c;
        case 0x16bf70u: goto label_16bf70;
        case 0x16bf74u: goto label_16bf74;
        case 0x16bf78u: goto label_16bf78;
        case 0x16bf7cu: goto label_16bf7c;
        case 0x16bf80u: goto label_16bf80;
        case 0x16bf84u: goto label_16bf84;
        case 0x16bf88u: goto label_16bf88;
        case 0x16bf8cu: goto label_16bf8c;
        case 0x16bf90u: goto label_16bf90;
        case 0x16bf94u: goto label_16bf94;
        case 0x16bf98u: goto label_16bf98;
        case 0x16bf9cu: goto label_16bf9c;
        case 0x16bfa0u: goto label_16bfa0;
        case 0x16bfa4u: goto label_16bfa4;
        case 0x16bfa8u: goto label_16bfa8;
        case 0x16bfacu: goto label_16bfac;
        case 0x16bfb0u: goto label_16bfb0;
        case 0x16bfb4u: goto label_16bfb4;
        case 0x16bfb8u: goto label_16bfb8;
        case 0x16bfbcu: goto label_16bfbc;
        case 0x16bfc0u: goto label_16bfc0;
        case 0x16bfc4u: goto label_16bfc4;
        case 0x16bfc8u: goto label_16bfc8;
        case 0x16bfccu: goto label_16bfcc;
        case 0x16bfd0u: goto label_16bfd0;
        case 0x16bfd4u: goto label_16bfd4;
        case 0x16bfd8u: goto label_16bfd8;
        case 0x16bfdcu: goto label_16bfdc;
        case 0x16bfe0u: goto label_16bfe0;
        case 0x16bfe4u: goto label_16bfe4;
        case 0x16bfe8u: goto label_16bfe8;
        case 0x16bfecu: goto label_16bfec;
        case 0x16bff0u: goto label_16bff0;
        case 0x16bff4u: goto label_16bff4;
        case 0x16bff8u: goto label_16bff8;
        case 0x16bffcu: goto label_16bffc;
        case 0x16c000u: goto label_16c000;
        case 0x16c004u: goto label_16c004;
        case 0x16c008u: goto label_16c008;
        case 0x16c00cu: goto label_16c00c;
        case 0x16c010u: goto label_16c010;
        case 0x16c014u: goto label_16c014;
        case 0x16c018u: goto label_16c018;
        case 0x16c01cu: goto label_16c01c;
        case 0x16c020u: goto label_16c020;
        case 0x16c024u: goto label_16c024;
        case 0x16c028u: goto label_16c028;
        case 0x16c02cu: goto label_16c02c;
        case 0x16c030u: goto label_16c030;
        case 0x16c034u: goto label_16c034;
        case 0x16c038u: goto label_16c038;
        case 0x16c03cu: goto label_16c03c;
        case 0x16c040u: goto label_16c040;
        case 0x16c044u: goto label_16c044;
        case 0x16c048u: goto label_16c048;
        case 0x16c04cu: goto label_16c04c;
        case 0x16c050u: goto label_16c050;
        case 0x16c054u: goto label_16c054;
        case 0x16c058u: goto label_16c058;
        case 0x16c05cu: goto label_16c05c;
        case 0x16c060u: goto label_16c060;
        case 0x16c064u: goto label_16c064;
        case 0x16c068u: goto label_16c068;
        case 0x16c06cu: goto label_16c06c;
        case 0x16c070u: goto label_16c070;
        case 0x16c074u: goto label_16c074;
        case 0x16c078u: goto label_16c078;
        case 0x16c07cu: goto label_16c07c;
        case 0x16c080u: goto label_16c080;
        case 0x16c084u: goto label_16c084;
        case 0x16c088u: goto label_16c088;
        case 0x16c08cu: goto label_16c08c;
        case 0x16c090u: goto label_16c090;
        case 0x16c094u: goto label_16c094;
        case 0x16c098u: goto label_16c098;
        case 0x16c09cu: goto label_16c09c;
        case 0x16c0a0u: goto label_16c0a0;
        case 0x16c0a4u: goto label_16c0a4;
        case 0x16c0a8u: goto label_16c0a8;
        case 0x16c0acu: goto label_16c0ac;
        case 0x16c0b0u: goto label_16c0b0;
        case 0x16c0b4u: goto label_16c0b4;
        case 0x16c0b8u: goto label_16c0b8;
        case 0x16c0bcu: goto label_16c0bc;
        case 0x16c0c0u: goto label_16c0c0;
        case 0x16c0c4u: goto label_16c0c4;
        case 0x16c0c8u: goto label_16c0c8;
        case 0x16c0ccu: goto label_16c0cc;
        case 0x16c0d0u: goto label_16c0d0;
        case 0x16c0d4u: goto label_16c0d4;
        case 0x16c0d8u: goto label_16c0d8;
        case 0x16c0dcu: goto label_16c0dc;
        case 0x16c0e0u: goto label_16c0e0;
        case 0x16c0e4u: goto label_16c0e4;
        case 0x16c0e8u: goto label_16c0e8;
        case 0x16c0ecu: goto label_16c0ec;
        case 0x16c0f0u: goto label_16c0f0;
        default: break;
    }

    ctx->pc = 0x16be10u;

label_16be10:
    // 0x16be10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16be10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16be14:
    // 0x16be14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16be14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16be18:
    // 0x16be18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16be18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_16be1c:
    // 0x16be1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16be1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_16be20:
    // 0x16be20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16be20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_16be24:
    // 0x16be24: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16be24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_16be28:
    // 0x16be28: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16be28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16be2c:
    // 0x16be2c: 0x8c830230  lw          $v1, 0x230($a0)
    ctx->pc = 0x16be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
label_16be30:
    // 0x16be30: 0x106000a8  beqz        $v1, . + 4 + (0xA8 << 2)
label_16be34:
    if (ctx->pc == 0x16BE34u) {
        ctx->pc = 0x16BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE30u;
        // 0x16be34: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BE38u;
        goto label_16be38;
    }
    ctx->pc = 0x16BE30u;
    {
        const bool branch_taken_0x16be30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE30u;
        // 0x16be34: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be30) {
            ctx->pc = 0x16C0D4u;
            goto label_16c0d4;
        }
    }
    ctx->pc = 0x16BE38u;
label_16be38:
    // 0x16be38: 0x846501e8  lh          $a1, 0x1E8($v1)
    ctx->pc = 0x16be38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_16be3c:
    // 0x16be3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16be40:
    // 0x16be40: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
label_16be44:
    if (ctx->pc == 0x16BE44u) {
        ctx->pc = 0x16BE48u;
        goto label_16be48;
    }
    ctx->pc = 0x16BE40u;
    {
        const bool branch_taken_0x16be40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x16be40) {
            ctx->pc = 0x16BE60u;
            goto label_16be60;
        }
    }
    ctx->pc = 0x16BE48u;
label_16be48:
    // 0x16be48: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x16be48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16be4c:
    // 0x16be4c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x16be4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_16be50:
    // 0x16be50: 0x320f809  jalr        $t9
label_16be54:
    if (ctx->pc == 0x16BE54u) {
        ctx->pc = 0x16BE58u;
        goto label_16be58;
    }
    ctx->pc = 0x16BE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BE58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BE50u, 0x16BE58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16BE58u;
label_16be58:
    // 0x16be58: 0x1000009f  b           . + 4 + (0x9F << 2)
label_16be5c:
    if (ctx->pc == 0x16BE5Cu) {
        ctx->pc = 0x16BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE58u;
        // 0x16be5c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BE60u;
        goto label_16be60;
    }
    ctx->pc = 0x16BE58u;
    {
        const bool branch_taken_0x16be58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE58u;
        // 0x16be5c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be58) {
            ctx->pc = 0x16C0D8u;
            goto label_16c0d8;
        }
    }
    ctx->pc = 0x16BE60u;
label_16be60:
    // 0x16be60: 0xc7808020  lwc1        $f0, -0x7FE0($gp)
    ctx->pc = 0x16be60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16be64:
    // 0x16be64: 0x3c033e06  lui         $v1, 0x3E06
    ctx->pc = 0x16be64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15878 << 16));
label_16be68:
    // 0x16be68: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x16be68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_16be6c:
    // 0x16be6c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x16be6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_16be70:
    // 0x16be70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16be70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16be74:
    // 0x16be74: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x16be74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_16be78:
    // 0x16be78: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16be78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_16be7c:
    // 0x16be7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x16be7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16be80:
    // 0x16be80: 0xaf848604  sw          $a0, -0x79FC($gp)
    ctx->pc = 0x16be80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936068), GPR_U32(ctx, 4));
label_16be84:
    // 0x16be84: 0xc6200224  lwc1        $f0, 0x224($s1)
    ctx->pc = 0x16be84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16be88:
    // 0x16be88: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x16be88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16be8c:
    // 0x16be8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16be8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_16be90:
    // 0x16be90: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x16be90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16be94:
    // 0x16be94: 0x0  nop
    ctx->pc = 0x16be94u;
    // NOP
label_16be98:
    // 0x16be98: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_16be9c:
    if (ctx->pc == 0x16BE9Cu) {
        ctx->pc = 0x16BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE98u;
        // 0x16be9c: 0xe6200224  swc1        $f0, 0x224($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BEA0u;
        goto label_16bea0;
    }
    ctx->pc = 0x16BE98u;
    {
        const bool branch_taken_0x16be98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE98u;
        // 0x16be9c: 0xe6200224  swc1        $f0, 0x224($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be98) {
            ctx->pc = 0x16BEB4u;
            goto label_16beb4;
        }
    }
    ctx->pc = 0x16BEA0u;
label_16bea0:
    // 0x16bea0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x16bea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_16bea4:
    // 0x16bea4: 0xe6200224  swc1        $f0, 0x224($s1)
    ctx->pc = 0x16bea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
label_16bea8:
    // 0x16bea8: 0x86230220  lh          $v1, 0x220($s1)
    ctx->pc = 0x16bea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
label_16beac:
    // 0x16beac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16beacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16beb0:
    // 0x16beb0: 0xa6230220  sh          $v1, 0x220($s1)
    ctx->pc = 0x16beb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 3));
label_16beb4:
    // 0x16beb4: 0x8e2401d4  lw          $a0, 0x1D4($s1)
    ctx->pc = 0x16beb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_16beb8:
    // 0x16beb8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16bebc:
    // 0x16bebc: 0x14830050  bne         $a0, $v1, . + 4 + (0x50 << 2)
label_16bec0:
    if (ctx->pc == 0x16BEC0u) {
        ctx->pc = 0x16BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEBCu;
        // 0x16bec0: 0x8e300230  lw          $s0, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BEC4u;
        goto label_16bec4;
    }
    ctx->pc = 0x16BEBCu;
    {
        const bool branch_taken_0x16bebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEBCu;
        // 0x16bec0: 0x8e300230  lw          $s0, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bebc) {
            ctx->pc = 0x16C000u;
            goto label_16c000;
        }
    }
    ctx->pc = 0x16BEC4u;
label_16bec4:
    // 0x16bec4: 0xc6230228  lwc1        $f3, 0x228($s1)
    ctx->pc = 0x16bec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16bec8:
    // 0x16bec8: 0x3c033e06  lui         $v1, 0x3E06
    ctx->pc = 0x16bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15878 << 16));
label_16becc:
    // 0x16becc: 0xc6220224  lwc1        $f2, 0x224($s1)
    ctx->pc = 0x16beccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16bed0:
    // 0x16bed0: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x16bed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_16bed4:
    // 0x16bed4: 0xc7808020  lwc1        $f0, -0x7FE0($gp)
    ctx->pc = 0x16bed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16bed8:
    // 0x16bed8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16bed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16bedc:
    // 0x16bedc: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x16bedcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
label_16bee0:
    // 0x16bee0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16bee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16bee4:
    // 0x16bee4: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16bee4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_16bee8:
    // 0x16bee8: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x16bee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_16beec:
    // 0x16beec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16beecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16bef0:
    // 0x16bef0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x16bef0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_16bef4:
    // 0x16bef4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x16bef4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_16bef8:
    // 0x16bef8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16bef8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16befc:
    // 0x16befc: 0x0  nop
    ctx->pc = 0x16befcu;
    // NOP
label_16bf00:
    // 0x16bf00: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
label_16bf04:
    if (ctx->pc == 0x16BF04u) {
        ctx->pc = 0x16BF08u;
        goto label_16bf08;
    }
    ctx->pc = 0x16BF00u;
    {
        const bool branch_taken_0x16bf00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16bf00) {
            ctx->pc = 0x16C000u;
            goto label_16c000;
        }
    }
    ctx->pc = 0x16BF08u;
label_16bf08:
    // 0x16bf08: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16bf08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16bf0c:
    // 0x16bf0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16bf10:
    // 0x16bf10: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16bf10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16bf14:
    // 0x16bf14: 0x320f809  jalr        $t9
label_16bf18:
    if (ctx->pc == 0x16BF18u) {
        ctx->pc = 0x16BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF14u;
        // 0x16bf18: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BF1Cu;
        goto label_16bf1c;
    }
    ctx->pc = 0x16BF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BF1Cu);
        ctx->pc = 0x16BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF14u;
        // 0x16bf18: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BF14u, 0x16BF1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16BF1Cu;
label_16bf1c:
    // 0x16bf1c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_16bf20:
    // 0x16bf20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16bf24:
    // 0x16bf24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16bf24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16bf28:
    // 0x16bf28: 0xc0425a4  jal         func_109690
label_16bf2c:
    if (ctx->pc == 0x16BF2Cu) {
        ctx->pc = 0x16BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF28u;
        // 0x16bf2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BF30u;
        goto label_16bf30;
    }
    ctx->pc = 0x16BF28u;
    SET_GPR_U32(ctx, 31, 0x16BF30u);
    ctx->pc = 0x16BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF28u;
    // 0x16bf2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16BF28u, 0x16BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF30u;
label_16bf30:
    // 0x16bf30: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16bf30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16bf34:
    // 0x16bf34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16bf38:
    // 0x16bf38: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x16bf38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_16bf3c:
    // 0x16bf3c: 0x320f809  jalr        $t9
label_16bf40:
    if (ctx->pc == 0x16BF40u) {
        ctx->pc = 0x16BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF3Cu;
        // 0x16bf40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BF44u;
        goto label_16bf44;
    }
    ctx->pc = 0x16BF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BF44u);
        ctx->pc = 0x16BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF3Cu;
        // 0x16bf40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BF3Cu, 0x16BF44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16BF44u;
label_16bf44:
    // 0x16bf44: 0xc055c40  jal         func_157100
label_16bf48:
    if (ctx->pc == 0x16BF48u) {
        ctx->pc = 0x16BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF44u;
        // 0x16bf48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BF4Cu;
        goto label_16bf4c;
    }
    ctx->pc = 0x16BF44u;
    SET_GPR_U32(ctx, 31, 0x16BF4Cu);
    ctx->pc = 0x16BF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF44u;
    // 0x16bf48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16BF44u, 0x16BF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF4Cu;
label_16bf4c:
    // 0x16bf4c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x16bf4cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16bf50:
    // 0x16bf50: 0xc6200228  lwc1        $f0, 0x228($s1)
    ctx->pc = 0x16bf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16bf54:
    // 0x16bf54: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16bf54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16bf58:
    // 0x16bf58: 0xc0548a8  jal         func_1522A0
label_16bf5c:
    if (ctx->pc == 0x16BF5Cu) {
        ctx->pc = 0x16BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF58u;
        // 0x16bf5c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BF60u;
        goto label_16bf60;
    }
    ctx->pc = 0x16BF58u;
    SET_GPR_U32(ctx, 31, 0x16BF60u);
    ctx->pc = 0x16BF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF58u;
    // 0x16bf5c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x16BF58u, 0x16BF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF60u;
label_16bf60:
    // 0x16bf60: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16bf60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16bf64:
    // 0x16bf64: 0xc07edc4  jal         func_1FB710
label_16bf68:
    if (ctx->pc == 0x16BF68u) {
        ctx->pc = 0x16BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF64u;
        // 0x16bf68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BF6Cu;
        goto label_16bf6c;
    }
    ctx->pc = 0x16BF64u;
    SET_GPR_U32(ctx, 31, 0x16BF6Cu);
    ctx->pc = 0x16BF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF64u;
    // 0x16bf68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x16BF64u, 0x16BF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF6Cu;
label_16bf6c:
    // 0x16bf6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16bf70:
    // 0x16bf70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16bf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16bf74:
    // 0x16bf74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16bf74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16bf78:
    // 0x16bf78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16bf78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16bf7c:
    // 0x16bf7c: 0xe6000290  swc1        $f0, 0x290($s0)
    ctx->pc = 0x16bf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
label_16bf80:
    // 0x16bf80: 0xc07eea2  jal         func_1FBA88
label_16bf84:
    if (ctx->pc == 0x16BF84u) {
        ctx->pc = 0x16BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF80u;
        // 0x16bf84: 0xae000294  sw          $zero, 0x294($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BF88u;
        goto label_16bf88;
    }
    ctx->pc = 0x16BF80u;
    SET_GPR_U32(ctx, 31, 0x16BF88u);
    ctx->pc = 0x16BF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF80u;
    // 0x16bf84: 0xae000294  sw          $zero, 0x294($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x16BF80u, 0x16BF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF88u;
label_16bf88:
    // 0x16bf88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16bf8c:
    // 0x16bf8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16bf8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16bf90:
    // 0x16bf90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16bf90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16bf94:
    // 0x16bf94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16bf94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16bf98:
    // 0x16bf98: 0xe6000298  swc1        $f0, 0x298($s0)
    ctx->pc = 0x16bf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
label_16bf9c:
    // 0x16bf9c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16bfa0:
    // 0x16bfa0: 0xc44d0054  lwc1        $f13, 0x54($v0)
    ctx->pc = 0x16bfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_16bfa4:
    // 0x16bfa4: 0xc056194  jal         func_158650
label_16bfa8:
    if (ctx->pc == 0x16BFA8u) {
        ctx->pc = 0x16BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFA4u;
        // 0x16bfa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BFACu;
        goto label_16bfac;
    }
    ctx->pc = 0x16BFA4u;
    SET_GPR_U32(ctx, 31, 0x16BFACu);
    ctx->pc = 0x16BFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFA4u;
    // 0x16bfa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x16BFA4u, 0x16BFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BFACu;
label_16bfac:
    // 0x16bfac: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16bfb0:
    // 0x16bfb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16bfb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16bfb4:
    // 0x16bfb4: 0xc055dac  jal         func_1576B0
label_16bfb8:
    if (ctx->pc == 0x16BFB8u) {
        ctx->pc = 0x16BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFB4u;
        // 0x16bfb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BFBCu;
        goto label_16bfbc;
    }
    ctx->pc = 0x16BFB4u;
    SET_GPR_U32(ctx, 31, 0x16BFBCu);
    ctx->pc = 0x16BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFB4u;
    // 0x16bfb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x16BFB4u, 0x16BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BFBCu;
label_16bfbc:
    // 0x16bfbc: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16bfbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16bfc0:
    // 0x16bfc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16bfc4:
    // 0x16bfc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16bfc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16bfc8:
    // 0x16bfc8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x16bfc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_16bfcc:
    // 0x16bfcc: 0x320f809  jalr        $t9
label_16bfd0:
    if (ctx->pc == 0x16BFD0u) {
        ctx->pc = 0x16BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFCCu;
        // 0x16bfd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BFD4u;
        goto label_16bfd4;
    }
    ctx->pc = 0x16BFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BFD4u);
        ctx->pc = 0x16BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFCCu;
        // 0x16bfd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BFCCu, 0x16BFD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16BFD4u;
label_16bfd4:
    // 0x16bfd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16bfd8:
    // 0x16bfd8: 0xc042118  jal         func_108460
label_16bfdc:
    if (ctx->pc == 0x16BFDCu) {
        ctx->pc = 0x16BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFD8u;
        // 0x16bfdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BFE0u;
        goto label_16bfe0;
    }
    ctx->pc = 0x16BFD8u;
    SET_GPR_U32(ctx, 31, 0x16BFE0u);
    ctx->pc = 0x16BFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFD8u;
    // 0x16bfdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16BFD8u, 0x16BFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BFE0u;
label_16bfe0:
    // 0x16bfe0: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x16bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_16bfe4:
    // 0x16bfe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16bfe8:
    // 0x16bfe8: 0xa44001e8  sh          $zero, 0x1E8($v0)
    ctx->pc = 0x16bfe8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 488), (uint16_t)GPR_U32(ctx, 0));
label_16bfec:
    // 0x16bfec: 0xae200230  sw          $zero, 0x230($s1)
    ctx->pc = 0x16bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 0));
label_16bff0:
    // 0x16bff0: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16bff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16bff4:
    // 0x16bff4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16bff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16bff8:
    // 0x16bff8: 0x320f809  jalr        $t9
label_16bffc:
    if (ctx->pc == 0x16BFFCu) {
        ctx->pc = 0x16BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFF8u;
        // 0x16bffc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C000u;
        goto label_16c000;
    }
    ctx->pc = 0x16BFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C000u);
        ctx->pc = 0x16BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFF8u;
        // 0x16bffc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BFF8u, 0x16C000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C000u;
label_16c000:
    // 0x16c000: 0x8e2401d4  lw          $a0, 0x1D4($s1)
    ctx->pc = 0x16c000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_16c004:
    // 0x16c004: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16c004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16c008:
    // 0x16c008: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_16c00c:
    if (ctx->pc == 0x16C00Cu) {
        ctx->pc = 0x16C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C008u;
        // 0x16c00c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C010u;
        goto label_16c010;
    }
    ctx->pc = 0x16C008u;
    {
        const bool branch_taken_0x16c008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C008u;
        // 0x16c00c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c008) {
            ctx->pc = 0x16C02Cu;
            goto label_16c02c;
        }
    }
    ctx->pc = 0x16C010u;
label_16c010:
    // 0x16c010: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_16c014:
    if (ctx->pc == 0x16C014u) {
        ctx->pc = 0x16C018u;
        goto label_16c018;
    }
    ctx->pc = 0x16C010u;
    {
        const bool branch_taken_0x16c010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c010) {
            ctx->pc = 0x16C02Cu;
            goto label_16c02c;
        }
    }
    ctx->pc = 0x16C018u;
label_16c018:
    // 0x16c018: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16c018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c01c:
    // 0x16c01c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_16c020:
    if (ctx->pc == 0x16C020u) {
        ctx->pc = 0x16C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C01Cu;
        // 0x16c020: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C024u;
        goto label_16c024;
    }
    ctx->pc = 0x16C01Cu;
    {
        const bool branch_taken_0x16c01c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C01Cu;
        // 0x16c020: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c01c) {
            ctx->pc = 0x16C02Cu;
            goto label_16c02c;
        }
    }
    ctx->pc = 0x16C024u;
label_16c024:
    // 0x16c024: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
label_16c028:
    if (ctx->pc == 0x16C028u) {
        ctx->pc = 0x16C02Cu;
        goto label_16c02c;
    }
    ctx->pc = 0x16C024u;
    {
        const bool branch_taken_0x16c024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c024) {
            ctx->pc = 0x16C0D4u;
            goto label_16c0d4;
        }
    }
    ctx->pc = 0x16C02Cu;
label_16c02c:
    // 0x16c02c: 0xc055c40  jal         func_157100
label_16c030:
    if (ctx->pc == 0x16C030u) {
        ctx->pc = 0x16C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C02Cu;
        // 0x16c030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C034u;
        goto label_16c034;
    }
    ctx->pc = 0x16C02Cu;
    SET_GPR_U32(ctx, 31, 0x16C034u);
    ctx->pc = 0x16C030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C02Cu;
    // 0x16c030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16C02Cu, 0x16C034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C034u;
label_16c034:
    // 0x16c034: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c038:
    // 0x16c038: 0xc6210200  lwc1        $f1, 0x200($s1)
    ctx->pc = 0x16c038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c03c:
    // 0x16c03c: 0xc60001c0  lwc1        $f0, 0x1C0($s0)
    ctx->pc = 0x16c03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c040:
    // 0x16c040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c044:
    // 0x16c044: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16c044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c048:
    // 0x16c048: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x16c048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_16c04c:
    // 0x16c04c: 0x320f809  jalr        $t9
label_16c050:
    if (ctx->pc == 0x16C050u) {
        ctx->pc = 0x16C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C04Cu;
        // 0x16c050: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C054u;
        goto label_16c054;
    }
    ctx->pc = 0x16C04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C054u);
        ctx->pc = 0x16C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C04Cu;
        // 0x16c050: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C04Cu, 0x16C054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C054u;
label_16c054:
    // 0x16c054: 0xc0548a8  jal         func_1522A0
label_16c058:
    if (ctx->pc == 0x16C058u) {
        ctx->pc = 0x16C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C054u;
        // 0x16c058: 0xc62c0224  lwc1        $f12, 0x224($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C05Cu;
        goto label_16c05c;
    }
    ctx->pc = 0x16C054u;
    SET_GPR_U32(ctx, 31, 0x16C05Cu);
    ctx->pc = 0x16C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C054u;
    // 0x16c058: 0xc62c0224  lwc1        $f12, 0x224($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x16C054u, 0x16C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C05Cu;
label_16c05c:
    // 0x16c05c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x16c05cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_16c060:
    // 0x16c060: 0xc07edc4  jal         func_1FB710
label_16c064:
    if (ctx->pc == 0x16C064u) {
        ctx->pc = 0x16C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C060u;
        // 0x16c064: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C068u;
        goto label_16c068;
    }
    ctx->pc = 0x16C060u;
    SET_GPR_U32(ctx, 31, 0x16C068u);
    ctx->pc = 0x16C064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C060u;
    // 0x16c064: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x16C060u, 0x16C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C068u;
label_16c068:
    // 0x16c068: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16c068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_16c06c:
    // 0x16c06c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x16c06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_16c070:
    // 0x16c070: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16c070u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_16c074:
    // 0x16c074: 0xc07eea2  jal         func_1FBA88
label_16c078:
    if (ctx->pc == 0x16C078u) {
        ctx->pc = 0x16C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C074u;
        // 0x16c078: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C07Cu;
        goto label_16c07c;
    }
    ctx->pc = 0x16C074u;
    SET_GPR_U32(ctx, 31, 0x16C07Cu);
    ctx->pc = 0x16C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C074u;
    // 0x16c078: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x16C074u, 0x16C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C07Cu;
label_16c07c:
    // 0x16c07c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16c07cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_16c080:
    // 0x16c080: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x16c080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_16c084:
    // 0x16c084: 0xc082520  jal         func_209480
label_16c088:
    if (ctx->pc == 0x16C088u) {
        ctx->pc = 0x16C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C084u;
        // 0x16c088: 0xc60c01c0  lwc1        $f12, 0x1C0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C08Cu;
        goto label_16c08c;
    }
    ctx->pc = 0x16C084u;
    SET_GPR_U32(ctx, 31, 0x16C08Cu);
    ctx->pc = 0x16C088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C084u;
    // 0x16c088: 0xc60c01c0  lwc1        $f12, 0x1C0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x16C084u, 0x16C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C08Cu;
label_16c08c:
    // 0x16c08c: 0x3c043f50  lui         $a0, 0x3F50
    ctx->pc = 0x16c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16208 << 16));
label_16c090:
    // 0x16c090: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x16c090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54001);
label_16c094:
    // 0x16c094: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x16c094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)25165);
label_16c098:
    // 0x16c098: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x16c098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_16c09c:
    // 0x16c09c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x16c09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_16c0a0:
    // 0x16c0a0: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x16c0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43516);
label_16c0a4:
    // 0x16c0a4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x16c0a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_16c0a8:
    // 0x16c0a8: 0xc081ffe  jal         func_207FF8
label_16c0ac:
    if (ctx->pc == 0x16C0ACu) {
        ctx->pc = 0x16C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0A8u;
        // 0x16c0ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C0B0u;
        goto label_16c0b0;
    }
    ctx->pc = 0x16C0A8u;
    SET_GPR_U32(ctx, 31, 0x16C0B0u);
    ctx->pc = 0x16C0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C0A8u;
    // 0x16c0ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x16C0A8u, 0x16C0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C0B0u;
label_16c0b0:
    // 0x16c0b0: 0xc082222  jal         func_208888
label_16c0b4:
    if (ctx->pc == 0x16C0B4u) {
        ctx->pc = 0x16C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0B0u;
        // 0x16c0b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C0B8u;
        goto label_16c0b8;
    }
    ctx->pc = 0x16C0B0u;
    SET_GPR_U32(ctx, 31, 0x16C0B8u);
    ctx->pc = 0x16C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C0B0u;
    // 0x16c0b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208888u, 0x16C0B0u, 0x16C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C0B8u;
label_16c0b8:
    // 0x16c0b8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x16c0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_16c0bc:
    // 0x16c0bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16c0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c0c0:
    // 0x16c0c0: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c0c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c0c4:
    // 0x16c0c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c0c8:
    // 0x16c0c8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x16c0c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_16c0cc:
    // 0x16c0cc: 0x320f809  jalr        $t9
label_16c0d0:
    if (ctx->pc == 0x16C0D0u) {
        ctx->pc = 0x16C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0CCu;
        // 0x16c0d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C0D4u;
        goto label_16c0d4;
    }
    ctx->pc = 0x16C0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C0D4u);
        ctx->pc = 0x16C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0CCu;
        // 0x16c0d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C0CCu, 0x16C0D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C0D4u;
label_16c0d4:
    // 0x16c0d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16c0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16c0d8:
    // 0x16c0d8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16c0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16c0dc:
    // 0x16c0dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16c0dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16c0e0:
    // 0x16c0e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16c0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16c0e4:
    // 0x16c0e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16c0e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16c0e8:
    // 0x16c0e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16c0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16c0ec:
    // 0x16c0ec: 0x3e00008  jr          $ra
label_16c0f0:
    if (ctx->pc == 0x16C0F0u) {
        ctx->pc = 0x16C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0ECu;
        // 0x16c0f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C0F4u;
        goto label_fallthrough_0x16c0ec;
    }
    ctx->pc = 0x16C0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0ECu;
        // 0x16c0f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16c0ec:
    ctx->pc = 0x16C0F4u;
}
