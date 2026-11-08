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

// Function: FUN_00141a30
// Address: 0x141a30 - 0x141c48
void FUN_00141a30_0x141a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00141a30_0x141a30");
#endif

    switch (ctx->pc) {
        case 0x141a30u: goto label_141a30;
        case 0x141a34u: goto label_141a34;
        case 0x141a38u: goto label_141a38;
        case 0x141a3cu: goto label_141a3c;
        case 0x141a40u: goto label_141a40;
        case 0x141a44u: goto label_141a44;
        case 0x141a48u: goto label_141a48;
        case 0x141a4cu: goto label_141a4c;
        case 0x141a50u: goto label_141a50;
        case 0x141a54u: goto label_141a54;
        case 0x141a58u: goto label_141a58;
        case 0x141a5cu: goto label_141a5c;
        case 0x141a60u: goto label_141a60;
        case 0x141a64u: goto label_141a64;
        case 0x141a68u: goto label_141a68;
        case 0x141a6cu: goto label_141a6c;
        case 0x141a70u: goto label_141a70;
        case 0x141a74u: goto label_141a74;
        case 0x141a78u: goto label_141a78;
        case 0x141a7cu: goto label_141a7c;
        case 0x141a80u: goto label_141a80;
        case 0x141a84u: goto label_141a84;
        case 0x141a88u: goto label_141a88;
        case 0x141a8cu: goto label_141a8c;
        case 0x141a90u: goto label_141a90;
        case 0x141a94u: goto label_141a94;
        case 0x141a98u: goto label_141a98;
        case 0x141a9cu: goto label_141a9c;
        case 0x141aa0u: goto label_141aa0;
        case 0x141aa4u: goto label_141aa4;
        case 0x141aa8u: goto label_141aa8;
        case 0x141aacu: goto label_141aac;
        case 0x141ab0u: goto label_141ab0;
        case 0x141ab4u: goto label_141ab4;
        case 0x141ab8u: goto label_141ab8;
        case 0x141abcu: goto label_141abc;
        case 0x141ac0u: goto label_141ac0;
        case 0x141ac4u: goto label_141ac4;
        case 0x141ac8u: goto label_141ac8;
        case 0x141accu: goto label_141acc;
        case 0x141ad0u: goto label_141ad0;
        case 0x141ad4u: goto label_141ad4;
        case 0x141ad8u: goto label_141ad8;
        case 0x141adcu: goto label_141adc;
        case 0x141ae0u: goto label_141ae0;
        case 0x141ae4u: goto label_141ae4;
        case 0x141ae8u: goto label_141ae8;
        case 0x141aecu: goto label_141aec;
        case 0x141af0u: goto label_141af0;
        case 0x141af4u: goto label_141af4;
        case 0x141af8u: goto label_141af8;
        case 0x141afcu: goto label_141afc;
        case 0x141b00u: goto label_141b00;
        case 0x141b04u: goto label_141b04;
        case 0x141b08u: goto label_141b08;
        case 0x141b0cu: goto label_141b0c;
        case 0x141b10u: goto label_141b10;
        case 0x141b14u: goto label_141b14;
        case 0x141b18u: goto label_141b18;
        case 0x141b1cu: goto label_141b1c;
        case 0x141b20u: goto label_141b20;
        case 0x141b24u: goto label_141b24;
        case 0x141b28u: goto label_141b28;
        case 0x141b2cu: goto label_141b2c;
        case 0x141b30u: goto label_141b30;
        case 0x141b34u: goto label_141b34;
        case 0x141b38u: goto label_141b38;
        case 0x141b3cu: goto label_141b3c;
        case 0x141b40u: goto label_141b40;
        case 0x141b44u: goto label_141b44;
        case 0x141b48u: goto label_141b48;
        case 0x141b4cu: goto label_141b4c;
        case 0x141b50u: goto label_141b50;
        case 0x141b54u: goto label_141b54;
        case 0x141b58u: goto label_141b58;
        case 0x141b5cu: goto label_141b5c;
        case 0x141b60u: goto label_141b60;
        case 0x141b64u: goto label_141b64;
        case 0x141b68u: goto label_141b68;
        case 0x141b6cu: goto label_141b6c;
        case 0x141b70u: goto label_141b70;
        case 0x141b74u: goto label_141b74;
        case 0x141b78u: goto label_141b78;
        case 0x141b7cu: goto label_141b7c;
        case 0x141b80u: goto label_141b80;
        case 0x141b84u: goto label_141b84;
        case 0x141b88u: goto label_141b88;
        case 0x141b8cu: goto label_141b8c;
        case 0x141b90u: goto label_141b90;
        case 0x141b94u: goto label_141b94;
        case 0x141b98u: goto label_141b98;
        case 0x141b9cu: goto label_141b9c;
        case 0x141ba0u: goto label_141ba0;
        case 0x141ba4u: goto label_141ba4;
        case 0x141ba8u: goto label_141ba8;
        case 0x141bacu: goto label_141bac;
        case 0x141bb0u: goto label_141bb0;
        case 0x141bb4u: goto label_141bb4;
        case 0x141bb8u: goto label_141bb8;
        case 0x141bbcu: goto label_141bbc;
        case 0x141bc0u: goto label_141bc0;
        case 0x141bc4u: goto label_141bc4;
        case 0x141bc8u: goto label_141bc8;
        case 0x141bccu: goto label_141bcc;
        case 0x141bd0u: goto label_141bd0;
        case 0x141bd4u: goto label_141bd4;
        case 0x141bd8u: goto label_141bd8;
        case 0x141bdcu: goto label_141bdc;
        case 0x141be0u: goto label_141be0;
        case 0x141be4u: goto label_141be4;
        case 0x141be8u: goto label_141be8;
        case 0x141becu: goto label_141bec;
        case 0x141bf0u: goto label_141bf0;
        case 0x141bf4u: goto label_141bf4;
        case 0x141bf8u: goto label_141bf8;
        case 0x141bfcu: goto label_141bfc;
        case 0x141c00u: goto label_141c00;
        case 0x141c04u: goto label_141c04;
        case 0x141c08u: goto label_141c08;
        case 0x141c0cu: goto label_141c0c;
        case 0x141c10u: goto label_141c10;
        case 0x141c14u: goto label_141c14;
        case 0x141c18u: goto label_141c18;
        case 0x141c1cu: goto label_141c1c;
        case 0x141c20u: goto label_141c20;
        case 0x141c24u: goto label_141c24;
        case 0x141c28u: goto label_141c28;
        case 0x141c2cu: goto label_141c2c;
        case 0x141c30u: goto label_141c30;
        case 0x141c34u: goto label_141c34;
        case 0x141c38u: goto label_141c38;
        case 0x141c3cu: goto label_141c3c;
        case 0x141c40u: goto label_141c40;
        case 0x141c44u: goto label_141c44;
        default: break;
    }

    ctx->pc = 0x141a30u;

label_141a30:
    // 0x141a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_141a34:
    // 0x141a34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x141a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_141a38:
    // 0x141a38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_141a3c:
    // 0x141a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_141a40:
    // 0x141a40: 0x9083002b  lbu         $v1, 0x2B($a0)
    ctx->pc = 0x141a40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 43)));
label_141a44:
    // 0x141a44: 0x1460007b  bnez        $v1, . + 4 + (0x7B << 2)
label_141a48:
    if (ctx->pc == 0x141A48u) {
        ctx->pc = 0x141A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A44u;
        // 0x141a48: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A4Cu;
        goto label_141a4c;
    }
    ctx->pc = 0x141A44u;
    {
        const bool branch_taken_0x141a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x141A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A44u;
        // 0x141a48: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a44) {
            ctx->pc = 0x141C34u;
            goto label_141c34;
        }
    }
    ctx->pc = 0x141A4Cu;
label_141a4c:
    // 0x141a4c: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x141a4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_141a50:
    // 0x141a50: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x141a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_141a54:
    // 0x141a54: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x141a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_141a58:
    // 0x141a58: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x141a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_141a5c:
    // 0x141a5c: 0xc04c728  jal         func_131CA0
label_141a60:
    if (ctx->pc == 0x141A60u) {
        ctx->pc = 0x141A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A5Cu;
        // 0x141a60: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A64u;
        goto label_141a64;
    }
    ctx->pc = 0x141A5Cu;
    SET_GPR_U32(ctx, 31, 0x141A64u);
    ctx->pc = 0x141A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141A5Cu;
    // 0x141a60: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CA0u, 0x141A5Cu, 0x141A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A64u;
label_141a64:
    // 0x141a64: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x141a64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_141a68:
    // 0x141a68: 0x0  nop
    ctx->pc = 0x141a68u;
    // NOP
label_141a6c:
    // 0x141a6c: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x141a6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_141a70:
    // 0x141a70: 0x0  nop
    ctx->pc = 0x141a70u;
    // NOP
label_141a74:
    // 0x141a74: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_141a78:
    if (ctx->pc == 0x141A78u) {
        ctx->pc = 0x141A7Cu;
        goto label_141a7c;
    }
    ctx->pc = 0x141A74u;
    {
        const bool branch_taken_0x141a74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x141a74) {
            ctx->pc = 0x141A84u;
            goto label_141a84;
        }
    }
    ctx->pc = 0x141A7Cu;
label_141a7c:
    // 0x141a7c: 0x1000006d  b           . + 4 + (0x6D << 2)
label_141a80:
    if (ctx->pc == 0x141A80u) {
        ctx->pc = 0x141A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A7Cu;
        // 0x141a80: 0xa220002a  sb          $zero, 0x2A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A84u;
        goto label_141a84;
    }
    ctx->pc = 0x141A7Cu;
    {
        const bool branch_taken_0x141a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A7Cu;
        // 0x141a80: 0xa220002a  sb          $zero, 0x2A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a7c) {
            ctx->pc = 0x141C34u;
            goto label_141c34;
        }
    }
    ctx->pc = 0x141A84u;
label_141a84:
    // 0x141a84: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x141a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141a88:
    // 0x141a88: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x141a88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_141a8c:
    // 0x141a8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x141a8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_141a90:
    // 0x141a90: 0x45010052  bc1t        . + 4 + (0x52 << 2)
label_141a94:
    if (ctx->pc == 0x141A94u) {
        ctx->pc = 0x141A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A90u;
        // 0x141a94: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A98u;
        goto label_141a98;
    }
    ctx->pc = 0x141A90u;
    {
        const bool branch_taken_0x141a90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x141A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A90u;
        // 0x141a94: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a90) {
            ctx->pc = 0x141BDCu;
            goto label_141bdc;
        }
    }
    ctx->pc = 0x141A98u;
label_141a98:
    // 0x141a98: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x141a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_141a9c:
    // 0x141a9c: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x141a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
label_141aa0:
    // 0x141aa0: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x141aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_141aa4:
    // 0x141aa4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x141aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_141aa8:
    // 0x141aa8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x141aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_141aac:
    // 0x141aac: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x141aacu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_141ab0:
    // 0x141ab0: 0x0  nop
    ctx->pc = 0x141ab0u;
    // NOP
label_141ab4:
    // 0x141ab4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x141ab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_141ab8:
    // 0x141ab8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x141ab8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_141abc:
    // 0x141abc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x141abcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_141ac0:
    // 0x141ac0: 0x0  nop
    ctx->pc = 0x141ac0u;
    // NOP
label_141ac4:
    // 0x141ac4: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_141ac8:
    if (ctx->pc == 0x141AC8u) {
        ctx->pc = 0x141ACCu;
        goto label_141acc;
    }
    ctx->pc = 0x141AC4u;
    {
        const bool branch_taken_0x141ac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x141ac4) {
            ctx->pc = 0x141BD4u;
            goto label_141bd4;
        }
    }
    ctx->pc = 0x141ACCu;
label_141acc:
    // 0x141acc: 0x82230004  lb          $v1, 0x4($s1)
    ctx->pc = 0x141accu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_141ad0:
    // 0x141ad0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x141ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_141ad4:
    // 0x141ad4: 0x1065000b  beq         $v1, $a1, . + 4 + (0xB << 2)
label_141ad8:
    if (ctx->pc == 0x141AD8u) {
        ctx->pc = 0x141AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AD4u;
        // 0x141ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141ADCu;
        goto label_141adc;
    }
    ctx->pc = 0x141AD4u;
    {
        const bool branch_taken_0x141ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x141AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AD4u;
        // 0x141ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ad4) {
            ctx->pc = 0x141B04u;
            goto label_141b04;
        }
    }
    ctx->pc = 0x141ADCu;
label_141adc:
    // 0x141adc: 0xc050d08  jal         func_143420
label_141ae0:
    if (ctx->pc == 0x141AE0u) {
        ctx->pc = 0x141AE4u;
        goto label_141ae4;
    }
    ctx->pc = 0x141ADCu;
    SET_GPR_U32(ctx, 31, 0x141AE4u);
    ctx->pc = 0x143420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143420u, 0x141ADCu, 0x141AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141AE4u;
label_141ae4:
    // 0x141ae4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x141ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_141ae8:
    // 0x141ae8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x141ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141aec:
    // 0x141aec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x141aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_141af0:
    // 0x141af0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x141af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_141af4:
    // 0x141af4: 0x320f809  jalr        $t9
label_141af8:
    if (ctx->pc == 0x141AF8u) {
        ctx->pc = 0x141AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AF4u;
        // 0x141af8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141AFCu;
        goto label_141afc;
    }
    ctx->pc = 0x141AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x141AFCu);
        ctx->pc = 0x141AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AF4u;
        // 0x141af8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141AF4u, 0x141AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141AFCu;
label_141afc:
    // 0x141afc: 0x10000033  b           . + 4 + (0x33 << 2)
label_141b00:
    if (ctx->pc == 0x141B00u) {
        ctx->pc = 0x141B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AFCu;
        // 0x141b00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141B04u;
        goto label_141b04;
    }
    ctx->pc = 0x141AFCu;
    {
        const bool branch_taken_0x141afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AFCu;
        // 0x141b00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141afc) {
            ctx->pc = 0x141BCCu;
            goto label_141bcc;
        }
    }
    ctx->pc = 0x141B04u;
label_141b04:
    // 0x141b04: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x141b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_141b08:
    // 0x141b08: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
label_141b0c:
    if (ctx->pc == 0x141B0Cu) {
        ctx->pc = 0x141B10u;
        goto label_141b10;
    }
    ctx->pc = 0x141B08u;
    {
        const bool branch_taken_0x141b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x141b08) {
            ctx->pc = 0x141B94u;
            goto label_141b94;
        }
    }
    ctx->pc = 0x141B10u;
label_141b10:
    // 0x141b10: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x141b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_141b14:
    // 0x141b14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x141b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_141b18:
    // 0x141b18: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x141b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_141b1c:
    // 0x141b1c: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x141b1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_141b20:
    // 0x141b20: 0x1065001c  beq         $v1, $a1, . + 4 + (0x1C << 2)
label_141b24:
    if (ctx->pc == 0x141B24u) {
        ctx->pc = 0x141B28u;
        goto label_141b28;
    }
    ctx->pc = 0x141B20u;
    {
        const bool branch_taken_0x141b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x141b20) {
            ctx->pc = 0x141B94u;
            goto label_141b94;
        }
    }
    ctx->pc = 0x141B28u;
label_141b28:
    // 0x141b28: 0x10000002  b           . + 4 + (0x2 << 2)
label_141b2c:
    if (ctx->pc == 0x141B2Cu) {
        ctx->pc = 0x141B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B28u;
        // 0x141b2c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141B30u;
        goto label_141b30;
    }
    ctx->pc = 0x141B28u;
    {
        const bool branch_taken_0x141b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B28u;
        // 0x141b2c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141b28) {
            ctx->pc = 0x141B34u;
            goto label_141b34;
        }
    }
    ctx->pc = 0x141B30u;
label_141b30:
    // 0x141b30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x141b30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_141b34:
    // 0x141b34: 0x0  nop
    ctx->pc = 0x141b34u;
    // NOP
label_141b38:
    // 0x141b38: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x141b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_141b3c:
    // 0x141b3c: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x141b3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_141b40:
    // 0x141b40: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
label_141b44:
    if (ctx->pc == 0x141B44u) {
        ctx->pc = 0x141B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B40u;
        // 0x141b44: 0x2a020008  slti        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x141B48u;
        goto label_141b48;
    }
    ctx->pc = 0x141B40u;
    {
        const bool branch_taken_0x141b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x141B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B40u;
        // 0x141b44: 0x2a020008  slti        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x141b40) {
            ctx->pc = 0x141B50u;
            goto label_141b50;
        }
    }
    ctx->pc = 0x141B48u;
label_141b48:
    // 0x141b48: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_141b4c:
    if (ctx->pc == 0x141B4Cu) {
        ctx->pc = 0x141B50u;
        goto label_141b50;
    }
    ctx->pc = 0x141B48u;
    {
        const bool branch_taken_0x141b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141b48) {
            ctx->pc = 0x141B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141b30;
        }
    }
    ctx->pc = 0x141B50u;
label_141b50:
    // 0x141b50: 0xc0802aa  jal         func_200AA8
label_141b54:
    if (ctx->pc == 0x141B54u) {
        ctx->pc = 0x141B58u;
        goto label_141b58;
    }
    ctx->pc = 0x141B50u;
    SET_GPR_U32(ctx, 31, 0x141B58u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x141B50u, 0x141B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B58u;
label_141b58:
    // 0x141b58: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x141b58u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_141b5c:
    // 0x141b5c: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x141b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_141b60:
    // 0x141b60: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x141b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_141b64:
    // 0x141b64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x141b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_141b68:
    // 0x141b68: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x141b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_141b6c:
    // 0x141b6c: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x141b6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_141b70:
    // 0x141b70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x141b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_141b74:
    // 0x141b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_141b78:
    // 0x141b78: 0x1810  mfhi        $v1
    ctx->pc = 0x141b78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_141b7c:
    // 0x141b7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x141b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_141b80:
    // 0x141b80: 0x80450004  lb          $a1, 0x4($v0)
    ctx->pc = 0x141b80u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_141b84:
    // 0x141b84: 0x320f809  jalr        $t9
label_141b88:
    if (ctx->pc == 0x141B88u) {
        ctx->pc = 0x141B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B84u;
        // 0x141b88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141B8Cu;
        goto label_141b8c;
    }
    ctx->pc = 0x141B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x141B8Cu);
        ctx->pc = 0x141B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B84u;
        // 0x141b88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141B84u, 0x141B8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141B8Cu;
label_141b8c:
    // 0x141b8c: 0x1000000e  b           . + 4 + (0xE << 2)
label_141b90:
    if (ctx->pc == 0x141B90u) {
        ctx->pc = 0x141B94u;
        goto label_141b94;
    }
    ctx->pc = 0x141B8Cu;
    {
        const bool branch_taken_0x141b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141b8c) {
            ctx->pc = 0x141BC8u;
            goto label_141bc8;
        }
    }
    ctx->pc = 0x141B94u;
label_141b94:
    // 0x141b94: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x141b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_141b98:
    // 0x141b98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_141b9c:
    if (ctx->pc == 0x141B9Cu) {
        ctx->pc = 0x141BA0u;
        goto label_141ba0;
    }
    ctx->pc = 0x141B98u;
    {
        const bool branch_taken_0x141b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141b98) {
            ctx->pc = 0x141BA8u;
            goto label_141ba8;
        }
    }
    ctx->pc = 0x141BA0u;
label_141ba0:
    // 0x141ba0: 0x10000009  b           . + 4 + (0x9 << 2)
label_141ba4:
    if (ctx->pc == 0x141BA4u) {
        ctx->pc = 0x141BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BA0u;
        // 0x141ba4: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141BA8u;
        goto label_141ba8;
    }
    ctx->pc = 0x141BA0u;
    {
        const bool branch_taken_0x141ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BA0u;
        // 0x141ba4: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ba0) {
            ctx->pc = 0x141BC8u;
            goto label_141bc8;
        }
    }
    ctx->pc = 0x141BA8u;
label_141ba8:
    // 0x141ba8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x141ba8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_141bac:
    // 0x141bac: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x141bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
label_141bb0:
    // 0x141bb0: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x141bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
label_141bb4:
    // 0x141bb4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x141bb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_141bb8:
    // 0x141bb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x141bb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_141bbc:
    // 0x141bbc: 0x0  nop
    ctx->pc = 0x141bbcu;
    // NOP
label_141bc0:
    // 0x141bc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x141bc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_141bc4:
    // 0x141bc4: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x141bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_141bc8:
    // 0x141bc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141bcc:
    // 0x141bcc: 0x10000019  b           . + 4 + (0x19 << 2)
label_141bd0:
    if (ctx->pc == 0x141BD0u) {
        ctx->pc = 0x141BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BCCu;
        // 0x141bd0: 0xa223002a  sb          $v1, 0x2A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141BD4u;
        goto label_141bd4;
    }
    ctx->pc = 0x141BCCu;
    {
        const bool branch_taken_0x141bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BCCu;
        // 0x141bd0: 0xa223002a  sb          $v1, 0x2A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141bcc) {
            ctx->pc = 0x141C34u;
            goto label_141c34;
        }
    }
    ctx->pc = 0x141BD4u;
label_141bd4:
    // 0x141bd4: 0x10000017  b           . + 4 + (0x17 << 2)
label_141bd8:
    if (ctx->pc == 0x141BD8u) {
        ctx->pc = 0x141BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BD4u;
        // 0x141bd8: 0xa220002a  sb          $zero, 0x2A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141BDCu;
        goto label_141bdc;
    }
    ctx->pc = 0x141BD4u;
    {
        const bool branch_taken_0x141bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BD4u;
        // 0x141bd8: 0xa220002a  sb          $zero, 0x2A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141bd4) {
            ctx->pc = 0x141C34u;
            goto label_141c34;
        }
    }
    ctx->pc = 0x141BDCu;
label_141bdc:
    // 0x141bdc: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x141bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_141be0:
    // 0x141be0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x141be0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_141be4:
    // 0x141be4: 0x0  nop
    ctx->pc = 0x141be4u;
    // NOP
label_141be8:
    // 0x141be8: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_141bec:
    if (ctx->pc == 0x141BECu) {
        ctx->pc = 0x141BF0u;
        goto label_141bf0;
    }
    ctx->pc = 0x141BE8u;
    {
        const bool branch_taken_0x141be8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x141be8) {
            ctx->pc = 0x141C30u;
            goto label_141c30;
        }
    }
    ctx->pc = 0x141BF0u;
label_141bf0:
    // 0x141bf0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x141bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_141bf4:
    // 0x141bf4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_141bf8:
    if (ctx->pc == 0x141BF8u) {
        ctx->pc = 0x141BFCu;
        goto label_141bfc;
    }
    ctx->pc = 0x141BF4u;
    {
        const bool branch_taken_0x141bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141bf4) {
            ctx->pc = 0x141C20u;
            goto label_141c20;
        }
    }
    ctx->pc = 0x141BFCu;
label_141bfc:
    // 0x141bfc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x141bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141c00:
    // 0x141c00: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x141c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
label_141c04:
    // 0x141c04: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x141c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
label_141c08:
    // 0x141c08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x141c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_141c0c:
    // 0x141c0c: 0x0  nop
    ctx->pc = 0x141c0cu;
    // NOP
label_141c10:
    // 0x141c10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x141c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_141c14:
    // 0x141c14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x141c14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_141c18:
    // 0x141c18: 0x10000002  b           . + 4 + (0x2 << 2)
label_141c1c:
    if (ctx->pc == 0x141C1Cu) {
        ctx->pc = 0x141C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C18u;
        // 0x141c1c: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x141C20u;
        goto label_141c20;
    }
    ctx->pc = 0x141C18u;
    {
        const bool branch_taken_0x141c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C18u;
        // 0x141c1c: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x141c18) {
            ctx->pc = 0x141C24u;
            goto label_141c24;
        }
    }
    ctx->pc = 0x141C20u;
label_141c20:
    // 0x141c20: 0xe622000c  swc1        $f2, 0xC($s1)
    ctx->pc = 0x141c20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_141c24:
    // 0x141c24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141c28:
    // 0x141c28: 0x10000002  b           . + 4 + (0x2 << 2)
label_141c2c:
    if (ctx->pc == 0x141C2Cu) {
        ctx->pc = 0x141C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C28u;
        // 0x141c2c: 0xa223002a  sb          $v1, 0x2A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141C30u;
        goto label_141c30;
    }
    ctx->pc = 0x141C28u;
    {
        const bool branch_taken_0x141c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C28u;
        // 0x141c2c: 0xa223002a  sb          $v1, 0x2A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141c28) {
            ctx->pc = 0x141C34u;
            goto label_141c34;
        }
    }
    ctx->pc = 0x141C30u;
label_141c30:
    // 0x141c30: 0xa220002a  sb          $zero, 0x2A($s1)
    ctx->pc = 0x141c30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 0));
label_141c34:
    // 0x141c34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x141c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_141c38:
    // 0x141c38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_141c3c:
    // 0x141c3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_141c40:
    // 0x141c40: 0x3e00008  jr          $ra
label_141c44:
    if (ctx->pc == 0x141C44u) {
        ctx->pc = 0x141C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C40u;
        // 0x141c44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141C48u;
        goto label_fallthrough_0x141c40;
    }
    ctx->pc = 0x141C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C40u;
        // 0x141c44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x141c40:
    ctx->pc = 0x141C48u;
}
