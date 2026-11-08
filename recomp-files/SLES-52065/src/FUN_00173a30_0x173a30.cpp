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

// Function: FUN_00173a30
// Address: 0x173a30 - 0x173f5c
void FUN_00173a30_0x173a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00173a30_0x173a30");
#endif

    switch (ctx->pc) {
        case 0x173b18u: goto label_173b18;
        case 0x173ba8u: goto label_173ba8;
        case 0x173c0cu: goto label_173c0c;
        case 0x173c18u: goto label_173c18;
        case 0x173c28u: goto label_173c28;
        case 0x173c34u: goto label_173c34;
        case 0x173cc8u: goto label_173cc8;
        case 0x173d48u: goto label_173d48;
        case 0x173df0u: goto label_173df0;
        case 0x173e80u: goto label_173e80;
        case 0x173ef8u: goto label_173ef8;
        default: break;
    }

    ctx->pc = 0x173a30u;

    // 0x173a30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x173a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x173a34: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x173a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x173a38: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x173a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x173a3c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x173a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x173a40: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x173a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x173a44: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x173a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x173a48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x173a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x173a4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x173a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x173a50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x173a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x173a54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x173a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a58: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x173a58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x173a5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a60: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x173a60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x173a64: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x173a64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x173a68: 0x83828618  lb          $v0, -0x79E8($gp)
    ctx->pc = 0x173a68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936088)));
    // 0x173a6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x173A6Cu;
    {
        const bool branch_taken_0x173a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A6Cu;
        // 0x173a70: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a6c) {
            ctx->pc = 0x173A80u;
            goto label_173a80;
        }
    }
    ctx->pc = 0x173A74u;
    // 0x173a74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173a78: 0xa3808614  sb          $zero, -0x79EC($gp)
    ctx->pc = 0x173a78u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936084), (uint8_t)GPR_U32(ctx, 0));
    // 0x173a7c: 0xa3828618  sb          $v0, -0x79E8($gp)
    ctx->pc = 0x173a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936088), (uint8_t)GPR_U32(ctx, 2));
label_173a80:
    // 0x173a80: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x173a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x173a84: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x173a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x173a88: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x173a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x173a8c: 0x93828488  lbu         $v0, -0x7B78($gp)
    ctx->pc = 0x173a8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x173a90: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x173a90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x173a94: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x173a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x173a98: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x173a98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x173a9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x173A9Cu;
    {
        const bool branch_taken_0x173a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A9Cu;
        // 0x173aa0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a9c) {
            ctx->pc = 0x173AB8u;
            goto label_173ab8;
        }
    }
    ctx->pc = 0x173AA4u;
    // 0x173aa4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x173aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x173aa8: 0x24422eb0  addiu       $v0, $v0, 0x2EB0
    ctx->pc = 0x173aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
    // 0x173aac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x173aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x173ab0: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x173ab0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173ab4: 0x0  nop
    ctx->pc = 0x173ab4u;
    // NOP
label_173ab8:
    // 0x173ab8: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x173AB8u;
    {
        const bool branch_taken_0x173ab8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x173ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AB8u;
        // 0x173abc: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ab8) {
            ctx->pc = 0x173AC8u;
            goto label_173ac8;
        }
    }
    ctx->pc = 0x173AC0u;
    // 0x173ac0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x173AC0u;
    {
        const bool branch_taken_0x173ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AC0u;
        // 0x173ac4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ac0) {
            ctx->pc = 0x173AE8u;
            goto label_173ae8;
        }
    }
    ctx->pc = 0x173AC8u;
label_173ac8:
    // 0x173ac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x173ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173acc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x173accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x173ad0: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x173ad0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x173ad4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x173AD4u;
    {
        const bool branch_taken_0x173ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x173ad4) {
            ctx->pc = 0x173AE4u;
            goto label_173ae4;
        }
    }
    ctx->pc = 0x173ADCu;
    // 0x173adc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x173ADCu;
    {
        const bool branch_taken_0x173adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173adc) {
            ctx->pc = 0x173AE8u;
            goto label_173ae8;
        }
    }
    ctx->pc = 0x173AE4u;
label_173ae4:
    // 0x173ae4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x173ae4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173ae8:
    // 0x173ae8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x173AE8u;
    {
        const bool branch_taken_0x173ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173ae8) {
            ctx->pc = 0x173B04u;
            goto label_173b04;
        }
    }
    ctx->pc = 0x173AF0u;
    // 0x173af0: 0x93828614  lbu         $v0, -0x79EC($gp)
    ctx->pc = 0x173af0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936084)));
    // 0x173af4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x173AF4u;
    {
        const bool branch_taken_0x173af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AF4u;
        // 0x173af8: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173af4) {
            ctx->pc = 0x173B00u;
            goto label_173b00;
        }
    }
    ctx->pc = 0x173AFCu;
    // 0x173afc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173b00:
    // 0x173b00: 0xa3828614  sb          $v0, -0x79EC($gp)
    ctx->pc = 0x173b00u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936084), (uint8_t)GPR_U32(ctx, 2));
label_173b04:
    // 0x173b04: 0x93828614  lbu         $v0, -0x79EC($gp)
    ctx->pc = 0x173b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936084)));
    // 0x173b08: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x173B08u;
    {
        const bool branch_taken_0x173b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B08u;
        // 0x173b0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b08) {
            ctx->pc = 0x173BE4u;
            goto label_173be4;
        }
    }
    ctx->pc = 0x173B10u;
    // 0x173b10: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x173B10u;
    {
        const bool branch_taken_0x173b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173b10) {
            ctx->pc = 0x173BCCu;
            goto label_173bcc;
        }
    }
    ctx->pc = 0x173B18u;
label_173b18:
    // 0x173b18: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x173b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x173b1c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x173b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x173b20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x173b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x173b24: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x173b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x173b28: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x173b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x173b2c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x173b2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173b30: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x173b30u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x173b34: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x173b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x173b38: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x173b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x173b3c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x173b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x173b40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173b44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x173b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x173b48: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x173b48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173b4c: 0x0  nop
    ctx->pc = 0x173b4cu;
    // NOP
    // 0x173b50: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x173B50u;
    {
        const bool branch_taken_0x173b50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x173B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B50u;
        // 0x173b54: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b50) {
            ctx->pc = 0x173BA0u;
            goto label_173ba0;
        }
    }
    ctx->pc = 0x173B58u;
    // 0x173b58: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x173b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173b5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173b60: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x173b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173b64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173b64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173b68: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173b6c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x173b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x173b70: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x173b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173b74: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x173b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173b78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173b78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x173b7c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173b7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173b80: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x173b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x173b84: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x173b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173b88: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x173b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173b8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173b8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x173b90: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173b90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173b94: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x173b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x173b98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x173B98u;
    {
        const bool branch_taken_0x173b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B98u;
        // 0x173b9c: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b98) {
            ctx->pc = 0x173BA8u;
            goto label_173ba8;
        }
    }
    ctx->pc = 0x173BA0u;
label_173ba0:
    // 0x173ba0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x173BA0u;
    SET_GPR_U32(ctx, 31, 0x173BA8u);
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x173BA0u, 0x173BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173BA8u;
label_173ba8:
    // 0x173ba8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x173ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x173bac: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x173bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x173bb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x173bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173bb4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x173bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x173bb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x173bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x173bbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x173bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x173bc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x173bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x173bc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173bc8: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x173bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_173bcc:
    // 0x173bcc: 0x0  nop
    ctx->pc = 0x173bccu;
    // NOP
    // 0x173bd0: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x173bd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x173bd4: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x173BD4u;
    {
        const bool branch_taken_0x173bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173BD4u;
        // 0x173bd8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173bd4) {
            ctx->pc = 0x173B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173b18;
        }
    }
    ctx->pc = 0x173BDCu;
    // 0x173bdc: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x173BDCu;
    {
        const bool branch_taken_0x173bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173bdc) {
            ctx->pc = 0x173E6Cu;
            goto label_173e6c;
        }
    }
    ctx->pc = 0x173BE4u;
label_173be4:
    // 0x173be4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x173be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x173be8: 0x3c03c180  lui         $v1, 0xC180
    ctx->pc = 0x173be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49536 << 16));
    // 0x173bec: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x173becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x173bf0: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x173bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x173bf4: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x173bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
    // 0x173bf8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x173bf8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173bfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173c00: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x173c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x173c04: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x173C04u;
    {
        const bool branch_taken_0x173c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C04u;
        // 0x173c08: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c04) {
            ctx->pc = 0x173E5Cu;
            goto label_173e5c;
        }
    }
    ctx->pc = 0x173C0Cu;
label_173c0c:
    // 0x173c0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x173c0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c10: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x173C10u;
    {
        const bool branch_taken_0x173c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C10u;
        // 0x173c14: 0xafa20094  sw          $v0, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c10) {
            ctx->pc = 0x173E3Cu;
            goto label_173e3c;
        }
    }
    ctx->pc = 0x173C18u;
label_173c18:
    // 0x173c18: 0x3c02c180  lui         $v0, 0xC180
    ctx->pc = 0x173c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49536 << 16));
    // 0x173c1c: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x173c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x173c20: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x173C20u;
    {
        const bool branch_taken_0x173c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C20u;
        // 0x173c24: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c20) {
            ctx->pc = 0x173E20u;
            goto label_173e20;
        }
    }
    ctx->pc = 0x173C28u;
label_173c28:
    // 0x173c28: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x173c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x173c2c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x173C2Cu;
    {
        const bool branch_taken_0x173c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C2Cu;
        // 0x173c30: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c2c) {
            ctx->pc = 0x173CE4u;
            goto label_173ce4;
        }
    }
    ctx->pc = 0x173C34u;
label_173c34:
    // 0x173c34: 0x0  nop
    ctx->pc = 0x173c34u;
    // NOP
    // 0x173c38: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x173c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x173c3c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x173c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x173c40: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x173c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x173c44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x173c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x173c48: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x173c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x173c4c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x173c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x173c50: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x173c50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173c54: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x173c54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x173c58: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x173c58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x173c5c: 0x4bc1086a  vmul.xyz    $vf1, $vf1, $vf1
    ctx->pc = 0x173c5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x173c60: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x173c60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x173c64: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x173c64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x173c68: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x173c68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x173c6c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x173c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x173c70: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x173c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173c74: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x173c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x173c78: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x173c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173c7c: 0x0  nop
    ctx->pc = 0x173c7cu;
    // NOP
    // 0x173c80: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x173C80u;
    {
        const bool branch_taken_0x173c80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173c80) {
            ctx->pc = 0x173CDCu;
            goto label_173cdc;
        }
    }
    ctx->pc = 0x173C88u;
    // 0x173c88: 0xc4640064  lwc1        $f4, 0x64($v1)
    ctx->pc = 0x173c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x173c8c: 0x0  nop
    ctx->pc = 0x173c8cu;
    // NOP
    // 0x173c90: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x173c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x173c94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173c98: 0x460300c4  c1          0x300C4
    ctx->pc = 0x173c98u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x173c9c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x173c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x173ca0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x173ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x173ca4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x173ca4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x173ca8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x173ca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x173cac: 0x0  nop
    ctx->pc = 0x173cacu;
    // NOP
    // 0x173cb0: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x173cb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x173cb4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x173cb4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x173cb8: 0x0  nop
    ctx->pc = 0x173cb8u;
    // NOP
    // 0x173cbc: 0x0  nop
    ctx->pc = 0x173cbcu;
    // NOP
    // 0x173cc0: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x173CC0u;
    SET_GPR_U32(ctx, 31, 0x173CC8u);
    ctx->pc = 0x173CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173CC0u;
    // 0x173cc4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x173CC0u, 0x173CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173CC8u;
label_173cc8:
    // 0x173cc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173ccc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173cd0: 0x0  nop
    ctx->pc = 0x173cd0u;
    // NOP
    // 0x173cd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173cd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173cd8: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x173cd8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_173cdc:
    // 0x173cdc: 0x0  nop
    ctx->pc = 0x173cdcu;
    // NOP
    // 0x173ce0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x173ce0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_173ce4:
    // 0x173ce4: 0x0  nop
    ctx->pc = 0x173ce4u;
    // NOP
    // 0x173ce8: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x173ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x173cec: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x173CECu;
    {
        const bool branch_taken_0x173cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173cec) {
            ctx->pc = 0x173C34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173c34;
        }
    }
    ctx->pc = 0x173CF4u;
    // 0x173cf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173cf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173cf8: 0x0  nop
    ctx->pc = 0x173cf8u;
    // NOP
    // 0x173cfc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x173cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173d00: 0x0  nop
    ctx->pc = 0x173d00u;
    // NOP
    // 0x173d04: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x173D04u;
    {
        const bool branch_taken_0x173d04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173d04) {
            ctx->pc = 0x173D10u;
            goto label_173d10;
        }
    }
    ctx->pc = 0x173D0Cu;
    // 0x173d0c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x173d0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_173d10:
    // 0x173d10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173d18: 0x0  nop
    ctx->pc = 0x173d18u;
    // NOP
    // 0x173d1c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x173d1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173d20: 0x0  nop
    ctx->pc = 0x173d20u;
    // NOP
    // 0x173d24: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x173D24u;
    {
        const bool branch_taken_0x173d24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173d24) {
            ctx->pc = 0x173D30u;
            goto label_173d30;
        }
    }
    ctx->pc = 0x173D2Cu;
    // 0x173d2c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x173d2cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_173d30:
    // 0x173d30: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x173d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x173d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173d38: 0x0  nop
    ctx->pc = 0x173d38u;
    // NOP
    // 0x173d3c: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x173d3cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x173d40: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x173D40u;
    SET_GPR_U32(ctx, 31, 0x173D48u);
    ctx->pc = 0x173D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173D40u;
    // 0x173d44: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x173D40u, 0x173D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173D48u;
label_173d48:
    // 0x173d48: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x173d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x173d4c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x173d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x173d50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173d54: 0x0  nop
    ctx->pc = 0x173d54u;
    // NOP
    // 0x173d58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x173d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173d5c: 0x0  nop
    ctx->pc = 0x173d5cu;
    // NOP
    // 0x173d60: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x173D60u;
    {
        const bool branch_taken_0x173d60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173d60) {
            ctx->pc = 0x173E10u;
            goto label_173e10;
        }
    }
    ctx->pc = 0x173D68u;
    // 0x173d68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x173d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x173d6c: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x173d6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x173d70: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x173D70u;
    {
        const bool branch_taken_0x173d70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x173D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D70u;
        // 0x173d74: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d70) {
            ctx->pc = 0x173E10u;
            goto label_173e10;
        }
    }
    ctx->pc = 0x173D78u;
    // 0x173d78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x173d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x173d7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173d80: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x173d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x173d84: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x173d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x173d88: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x173d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x173d8c: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x173d8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173d90: 0x0  nop
    ctx->pc = 0x173d90u;
    // NOP
    // 0x173d94: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x173D94u;
    {
        const bool branch_taken_0x173d94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x173D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D94u;
        // 0x173d98: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d94) {
            ctx->pc = 0x173DE4u;
            goto label_173de4;
        }
    }
    ctx->pc = 0x173D9Cu;
    // 0x173d9c: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x173d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173da0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173da4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x173da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173da8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173da8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173dac: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173db0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x173db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x173db4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x173db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173db8: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x173db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173dbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173dbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x173dc0: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173dc4: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x173dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x173dc8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x173dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173dcc: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x173dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173dd0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173dd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x173dd4: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173dd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173dd8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x173dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x173ddc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x173DDCu;
    {
        const bool branch_taken_0x173ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DDCu;
        // 0x173de0: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ddc) {
            ctx->pc = 0x173DF0u;
            goto label_173df0;
        }
    }
    ctx->pc = 0x173DE4u;
label_173de4:
    // 0x173de4: 0x0  nop
    ctx->pc = 0x173de4u;
    // NOP
    // 0x173de8: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x173DE8u;
    SET_GPR_U32(ctx, 31, 0x173DF0u);
    ctx->pc = 0x173DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173DE8u;
    // 0x173dec: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x173DE8u, 0x173DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173DF0u;
label_173df0:
    // 0x173df0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x173df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x173df4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x173df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x173df8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x173df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173dfc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x173dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x173e00: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x173e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x173e04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x173e04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x173e08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173e0c: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x173e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_173e10:
    // 0x173e10: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x173e10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x173e14: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x173e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173e18: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x173e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x173e1c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x173e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_173e20:
    // 0x173e20: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x173e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x173e24: 0x1440ff80  bnez        $v0, . + 4 + (-0x80 << 2)
    ctx->pc = 0x173E24u;
    {
        const bool branch_taken_0x173e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173e24) {
            ctx->pc = 0x173C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173c28;
        }
    }
    ctx->pc = 0x173E2Cu;
    // 0x173e2c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x173e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173e30: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x173e30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x173e34: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x173e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x173e38: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x173e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_173e3c:
    // 0x173e3c: 0x0  nop
    ctx->pc = 0x173e3cu;
    // NOP
    // 0x173e40: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x173e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x173e44: 0x1440ff74  bnez        $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x173E44u;
    {
        const bool branch_taken_0x173e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173e44) {
            ctx->pc = 0x173C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173c18;
        }
    }
    ctx->pc = 0x173E4Cu;
    // 0x173e4c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x173e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173e50: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x173e50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x173e54: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x173e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x173e58: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x173e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_173e5c:
    // 0x173e5c: 0x0  nop
    ctx->pc = 0x173e5cu;
    // NOP
    // 0x173e60: 0x2ac20010  slti        $v0, $s6, 0x10
    ctx->pc = 0x173e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x173e64: 0x1440ff69  bnez        $v0, . + 4 + (-0x97 << 2)
    ctx->pc = 0x173E64u;
    {
        const bool branch_taken_0x173e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E64u;
        // 0x173e68: 0x3c02c180  lui         $v0, 0xC180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49536 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e64) {
            ctx->pc = 0x173C0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173c0c;
        }
    }
    ctx->pc = 0x173E6Cu;
label_173e6c:
    // 0x173e6c: 0x0  nop
    ctx->pc = 0x173e6cu;
    // NOP
    // 0x173e70: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x173e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x173e74: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x173e74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x173e78: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x173E78u;
    {
        const bool branch_taken_0x173e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E78u;
        // 0x173e7c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e78) {
            ctx->pc = 0x173F14u;
            goto label_173f14;
        }
    }
    ctx->pc = 0x173E80u;
label_173e80:
    // 0x173e80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x173e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x173e84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173e84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173e88: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x173e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x173e8c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x173e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x173e90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x173e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x173e94: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x173e94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173e98: 0x0  nop
    ctx->pc = 0x173e98u;
    // NOP
    // 0x173e9c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x173E9Cu;
    {
        const bool branch_taken_0x173e9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x173EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E9Cu;
        // 0x173ea0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e9c) {
            ctx->pc = 0x173EECu;
            goto label_173eec;
        }
    }
    ctx->pc = 0x173EA4u;
    // 0x173ea4: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x173ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173ea8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173eac: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x173eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173eb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173eb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173eb4: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173eb8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x173eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x173ebc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x173ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173ec0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x173ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173ec4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173ec4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x173ec8: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173ecc: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x173eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x173ed0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x173ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173ed4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x173ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173ed8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173ed8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x173edc: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173ee0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x173ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x173ee4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x173EE4u;
    {
        const bool branch_taken_0x173ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EE4u;
        // 0x173ee8: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ee4) {
            ctx->pc = 0x173EF8u;
            goto label_173ef8;
        }
    }
    ctx->pc = 0x173EECu;
label_173eec:
    // 0x173eec: 0x0  nop
    ctx->pc = 0x173eecu;
    // NOP
    // 0x173ef0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x173EF0u;
    SET_GPR_U32(ctx, 31, 0x173EF8u);
    ctx->pc = 0x173EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173EF0u;
    // 0x173ef4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x173EF0u, 0x173EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173EF8u;
label_173ef8:
    // 0x173ef8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x173ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x173efc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x173efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x173f00: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x173f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x173f04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x173f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x173f08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x173f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x173f0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173f10: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x173f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_173f14:
    // 0x173f14: 0x0  nop
    ctx->pc = 0x173f14u;
    // NOP
    // 0x173f18: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x173f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x173f1c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x173f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x173f20: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x173F20u;
    {
        const bool branch_taken_0x173f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F20u;
        // 0x173f24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f20) {
            ctx->pc = 0x173E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173e80;
        }
    }
    ctx->pc = 0x173F28u;
    // 0x173f28: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x173f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173f2c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x173f2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x173f30: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x173f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x173f34: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x173f34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x173f38: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x173f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x173f3c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x173f3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173f40: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x173f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x173f44: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x173f44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173f48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x173f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173f4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x173f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173f50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x173f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173f54: 0x3e00008  jr          $ra
    ctx->pc = 0x173F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F54u;
        // 0x173f58: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173F5Cu;
}
