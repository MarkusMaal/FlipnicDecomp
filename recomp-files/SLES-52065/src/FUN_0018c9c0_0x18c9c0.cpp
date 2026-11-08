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

// Function: FUN_0018c9c0
// Address: 0x18c9c0 - 0x18cce4
void FUN_0018c9c0_0x18c9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018c9c0_0x18c9c0");
#endif

    switch (ctx->pc) {
        case 0x18cb40u: goto label_18cb40;
        case 0x18cb50u: goto label_18cb50;
        case 0x18cb6cu: goto label_18cb6c;
        case 0x18cb7cu: goto label_18cb7c;
        case 0x18cb98u: goto label_18cb98;
        case 0x18cbc0u: goto label_18cbc0;
        case 0x18cbccu: goto label_18cbcc;
        case 0x18cbdcu: goto label_18cbdc;
        case 0x18cc38u: goto label_18cc38;
        case 0x18cc44u: goto label_18cc44;
        default: break;
    }

    ctx->pc = 0x18c9c0u;

    // 0x18c9c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18c9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18c9c4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x18c9c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18c9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18c9cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18c9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18c9d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18c9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18c9d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c9d8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x18c9d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18c9dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c9e0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x18c9e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18c9e4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x18c9e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18c9e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18c9e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18c9ec: 0xc4810500  lwc1        $f1, 0x500($a0)
    ctx->pc = 0x18c9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c9f0: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x18c9f0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x18c9f4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x18c9f4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x18c9f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18c9f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c9fc: 0x0  nop
    ctx->pc = 0x18c9fcu;
    // NOP
    // 0x18ca00: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x18CA00u;
    {
        const bool branch_taken_0x18ca00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA00u;
        // 0x18ca04: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca00) {
            ctx->pc = 0x18CA20u;
            goto label_18ca20;
        }
    }
    ctx->pc = 0x18CA08u;
    // 0x18ca08: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x18ca0c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ca0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18ca10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ca14: 0x0  nop
    ctx->pc = 0x18ca14u;
    // NOP
    // 0x18ca18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18ca18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18ca1c: 0xe6000500  swc1        $f0, 0x500($s0)
    ctx->pc = 0x18ca1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1280), bits); }
label_18ca20:
    // 0x18ca20: 0xc6010500  lwc1        $f1, 0x500($s0)
    ctx->pc = 0x18ca20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ca24: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x18ca28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ca28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18ca2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ca30: 0x0  nop
    ctx->pc = 0x18ca30u;
    // NOP
    // 0x18ca34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ca34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ca38: 0x0  nop
    ctx->pc = 0x18ca38u;
    // NOP
    // 0x18ca3c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18CA3Cu;
    {
        const bool branch_taken_0x18ca3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA3Cu;
        // 0x18ca40: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca3c) {
            ctx->pc = 0x18CA58u;
            goto label_18ca58;
        }
    }
    ctx->pc = 0x18CA44u;
    // 0x18ca44: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ca44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18ca48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ca4c: 0x0  nop
    ctx->pc = 0x18ca4cu;
    // NOP
    // 0x18ca50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18ca50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18ca54: 0xe6000500  swc1        $f0, 0x500($s0)
    ctx->pc = 0x18ca54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1280), bits); }
label_18ca58:
    // 0x18ca58: 0xc6010504  lwc1        $f1, 0x504($s0)
    ctx->pc = 0x18ca58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ca5c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x18ca60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ca60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18ca64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ca68: 0x0  nop
    ctx->pc = 0x18ca68u;
    // NOP
    // 0x18ca6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18ca6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ca70: 0x0  nop
    ctx->pc = 0x18ca70u;
    // NOP
    // 0x18ca74: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x18CA74u;
    {
        const bool branch_taken_0x18ca74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA74u;
        // 0x18ca78: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca74) {
            ctx->pc = 0x18CA90u;
            goto label_18ca90;
        }
    }
    ctx->pc = 0x18CA7Cu;
    // 0x18ca7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ca7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18ca80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ca84: 0x0  nop
    ctx->pc = 0x18ca84u;
    // NOP
    // 0x18ca88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18ca88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18ca8c: 0xe6000504  swc1        $f0, 0x504($s0)
    ctx->pc = 0x18ca8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1284), bits); }
label_18ca90:
    // 0x18ca90: 0xc6010504  lwc1        $f1, 0x504($s0)
    ctx->pc = 0x18ca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ca94: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x18ca98: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ca98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18ca9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18caa0: 0x0  nop
    ctx->pc = 0x18caa0u;
    // NOP
    // 0x18caa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18caa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18caa8: 0x0  nop
    ctx->pc = 0x18caa8u;
    // NOP
    // 0x18caac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18CAACu;
    {
        const bool branch_taken_0x18caac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAACu;
        // 0x18cab0: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18caac) {
            ctx->pc = 0x18CAC8u;
            goto label_18cac8;
        }
    }
    ctx->pc = 0x18CAB4u;
    // 0x18cab4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18cab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18cab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18cab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cabc: 0x0  nop
    ctx->pc = 0x18cabcu;
    // NOP
    // 0x18cac0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18cac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18cac4: 0xe6000504  swc1        $f0, 0x504($s0)
    ctx->pc = 0x18cac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1284), bits); }
label_18cac8:
    // 0x18cac8: 0xc6010508  lwc1        $f1, 0x508($s0)
    ctx->pc = 0x18cac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cacc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18caccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x18cad0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18cad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18cad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18cad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cad8: 0x0  nop
    ctx->pc = 0x18cad8u;
    // NOP
    // 0x18cadc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18cadcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18cae0: 0x0  nop
    ctx->pc = 0x18cae0u;
    // NOP
    // 0x18cae4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x18CAE4u;
    {
        const bool branch_taken_0x18cae4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAE4u;
        // 0x18cae8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cae4) {
            ctx->pc = 0x18CB00u;
            goto label_18cb00;
        }
    }
    ctx->pc = 0x18CAECu;
    // 0x18caec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18caecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18caf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18caf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18caf4: 0x0  nop
    ctx->pc = 0x18caf4u;
    // NOP
    // 0x18caf8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18caf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18cafc: 0xe6000508  swc1        $f0, 0x508($s0)
    ctx->pc = 0x18cafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1288), bits); }
label_18cb00:
    // 0x18cb00: 0xc6010508  lwc1        $f1, 0x508($s0)
    ctx->pc = 0x18cb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cb04: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x18cb08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18cb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18cb0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18cb0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cb10: 0x0  nop
    ctx->pc = 0x18cb10u;
    // NOP
    // 0x18cb14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18cb14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18cb18: 0x0  nop
    ctx->pc = 0x18cb18u;
    // NOP
    // 0x18cb1c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18CB1Cu;
    {
        const bool branch_taken_0x18cb1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB1Cu;
        // 0x18cb20: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cb1c) {
            ctx->pc = 0x18CB38u;
            goto label_18cb38;
        }
    }
    ctx->pc = 0x18CB24u;
    // 0x18cb24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18cb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18cb28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18cb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cb2c: 0x0  nop
    ctx->pc = 0x18cb2cu;
    // NOP
    // 0x18cb30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18cb30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18cb34: 0xe6000508  swc1        $f0, 0x508($s0)
    ctx->pc = 0x18cb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1288), bits); }
label_18cb38:
    // 0x18cb38: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x18CB38u;
    SET_GPR_U32(ctx, 31, 0x18CB40u);
    ctx->pc = 0x18CB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB38u;
    // 0x18cb3c: 0xc60c0500  lwc1        $f12, 0x500($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x18CB38u, 0x18CB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB40u;
label_18cb40:
    // 0x18cb40: 0xc6010510  lwc1        $f1, 0x510($s0)
    ctx->pc = 0x18cb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cb44: 0xc60c0504  lwc1        $f12, 0x504($s0)
    ctx->pc = 0x18cb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18cb48: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18CB48u;
    SET_GPR_U32(ctx, 31, 0x18CB50u);
    ctx->pc = 0x18CB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB48u;
    // 0x18cb4c: 0x46000dc2  mul.s       $f23, $f1, $f0 (Delay Slot)
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18CB48u, 0x18CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB50u;
label_18cb50:
    // 0x18cb50: 0x46170042  mul.s       $f1, $f0, $f23
    ctx->pc = 0x18cb50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x18cb54: 0xc60004f0  lwc1        $f0, 0x4F0($s0)
    ctx->pc = 0x18cb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18cb58: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x18cb58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x18cb5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18cb5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18cb60: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x18cb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18cb64: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x18CB64u;
    SET_GPR_U32(ctx, 31, 0x18CB6Cu);
    ctx->pc = 0x18CB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB64u;
    // 0x18cb68: 0xc60c0500  lwc1        $f12, 0x500($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x18CB64u, 0x18CB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB6Cu;
label_18cb6c:
    // 0x18cb6c: 0xc6010510  lwc1        $f1, 0x510($s0)
    ctx->pc = 0x18cb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cb70: 0xc60c0504  lwc1        $f12, 0x504($s0)
    ctx->pc = 0x18cb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18cb74: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x18CB74u;
    SET_GPR_U32(ctx, 31, 0x18CB7Cu);
    ctx->pc = 0x18CB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB74u;
    // 0x18cb78: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x18CB74u, 0x18CB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB7Cu;
label_18cb7c:
    // 0x18cb7c: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x18cb7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18cb80: 0xc60004f8  lwc1        $f0, 0x4F8($s0)
    ctx->pc = 0x18cb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18cb84: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x18cb84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x18cb88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18cb88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18cb8c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x18cb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x18cb90: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18CB90u;
    SET_GPR_U32(ctx, 31, 0x18CB98u);
    ctx->pc = 0x18CB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB90u;
    // 0x18cb94: 0xc60c0500  lwc1        $f12, 0x500($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18CB90u, 0x18CB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB98u;
label_18cb98:
    // 0x18cb98: 0xc6020510  lwc1        $f2, 0x510($s0)
    ctx->pc = 0x18cb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18cb9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18cba0: 0xc60104f4  lwc1        $f1, 0x4F4($s0)
    ctx->pc = 0x18cba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cba4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18cba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18cba8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18cba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18cbac: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x18cbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x18cbb0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x18cbb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x18cbb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18cbb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18cbb8: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x18CBB8u;
    SET_GPR_U32(ctx, 31, 0x18CBC0u);
    ctx->pc = 0x18CBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CBB8u;
    // 0x18cbbc: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x18CBB8u, 0x18CBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CBC0u;
label_18cbc0:
    // 0x18cbc0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18cbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18cbc4: 0xc07d334  jal         func_1F4CD0
    ctx->pc = 0x18CBC4u;
    SET_GPR_U32(ctx, 31, 0x18CBCCu);
    ctx->pc = 0x18CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CBC4u;
    // 0x18cbc8: 0x260505c0  addiu       $a1, $s0, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CD0u, 0x18CBC4u, 0x18CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CBCCu;
label_18cbcc:
    // 0x18cbcc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18cbd0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x18cbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18cbd4: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x18CBD4u;
    SET_GPR_U32(ctx, 31, 0x18CBDCu);
    ctx->pc = 0x18CBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CBD4u;
    // 0x18cbd8: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x18CBD4u, 0x18CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CBDCu;
label_18cbdc:
    // 0x18cbdc: 0xc60204d0  lwc1        $f2, 0x4D0($s0)
    ctx->pc = 0x18cbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18cbe0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x18cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x18cbe4: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x18cbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cbe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cbec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18cbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cbf0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18cbf4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x18cbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18cbf8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18cbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18cbfc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x18cbfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x18cc00: 0xe6010550  swc1        $f1, 0x550($s0)
    ctx->pc = 0x18cc00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1360), bits); }
    // 0x18cc04: 0xc60204d8  lwc1        $f2, 0x4D8($s0)
    ctx->pc = 0x18cc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18cc08: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x18cc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cc0c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x18cc0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x18cc10: 0xe6010558  swc1        $f1, 0x558($s0)
    ctx->pc = 0x18cc10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1368), bits); }
    // 0x18cc14: 0xc60204d4  lwc1        $f2, 0x4D4($s0)
    ctx->pc = 0x18cc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18cc18: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x18cc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cc1c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x18cc1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x18cc20: 0xe6010554  swc1        $f1, 0x554($s0)
    ctx->pc = 0x18cc20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1364), bits); }
    // 0x18cc24: 0xae030540  sw          $v1, 0x540($s0)
    ctx->pc = 0x18cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1344), GPR_U32(ctx, 3));
    // 0x18cc28: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x18cc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cc2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18cc2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18cc30: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x18CC30u;
    SET_GPR_U32(ctx, 31, 0x18CC38u);
    ctx->pc = 0x18CC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC30u;
    // 0x18cc34: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x18CC30u, 0x18CC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CC38u;
label_18cc38:
    // 0x18cc38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc3c: 0xc063154  jal         func_18C550
    ctx->pc = 0x18CC3Cu;
    SET_GPR_U32(ctx, 31, 0x18CC44u);
    ctx->pc = 0x18CC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC3Cu;
    // 0x18cc40: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C550u, 0x18CC3Cu, 0x18CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CC44u;
label_18cc44:
    // 0x18cc44: 0x8e030540  lw          $v1, 0x540($s0)
    ctx->pc = 0x18cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1344)));
    // 0x18cc48: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18CC48u;
    {
        const bool branch_taken_0x18cc48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cc48) {
            ctx->pc = 0x18CC8Cu;
            goto label_18cc8c;
        }
    }
    ctx->pc = 0x18CC50u;
    // 0x18cc50: 0xc60104d0  lwc1        $f1, 0x4D0($s0)
    ctx->pc = 0x18cc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cc54: 0xc6000550  lwc1        $f0, 0x550($s0)
    ctx->pc = 0x18cc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18cc58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18cc58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18cc5c: 0xe60004d0  swc1        $f0, 0x4D0($s0)
    ctx->pc = 0x18cc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1232), bits); }
    // 0x18cc60: 0xc60104d4  lwc1        $f1, 0x4D4($s0)
    ctx->pc = 0x18cc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cc64: 0xc6000554  lwc1        $f0, 0x554($s0)
    ctx->pc = 0x18cc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18cc68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18cc68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18cc6c: 0xe60004d4  swc1        $f0, 0x4D4($s0)
    ctx->pc = 0x18cc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1236), bits); }
    // 0x18cc70: 0xc60104d8  lwc1        $f1, 0x4D8($s0)
    ctx->pc = 0x18cc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cc74: 0xc6000558  lwc1        $f0, 0x558($s0)
    ctx->pc = 0x18cc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18cc78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18cc78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18cc7c: 0xe60004d8  swc1        $f0, 0x4D8($s0)
    ctx->pc = 0x18cc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1240), bits); }
    // 0x18cc80: 0x8e030540  lw          $v1, 0x540($s0)
    ctx->pc = 0x18cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1344)));
    // 0x18cc84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18cc88: 0xae030540  sw          $v1, 0x540($s0)
    ctx->pc = 0x18cc88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1344), GPR_U32(ctx, 3));
label_18cc8c:
    // 0x18cc8c: 0x8e030560  lw          $v1, 0x560($s0)
    ctx->pc = 0x18cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x18cc90: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18CC90u;
    {
        const bool branch_taken_0x18cc90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cc90) {
            ctx->pc = 0x18CCC4u;
            goto label_18ccc4;
        }
    }
    ctx->pc = 0x18CC98u;
    // 0x18cc98: 0xc60104e0  lwc1        $f1, 0x4E0($s0)
    ctx->pc = 0x18cc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cc9c: 0xc6000570  lwc1        $f0, 0x570($s0)
    ctx->pc = 0x18cc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18cca0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18cca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18cca4: 0xe60004e0  swc1        $f0, 0x4E0($s0)
    ctx->pc = 0x18cca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1248), bits); }
    // 0x18cca8: 0xc60104e4  lwc1        $f1, 0x4E4($s0)
    ctx->pc = 0x18cca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ccac: 0xc6000574  lwc1        $f0, 0x574($s0)
    ctx->pc = 0x18ccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ccb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18ccb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18ccb4: 0xe60004e4  swc1        $f0, 0x4E4($s0)
    ctx->pc = 0x18ccb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1252), bits); }
    // 0x18ccb8: 0x8e030560  lw          $v1, 0x560($s0)
    ctx->pc = 0x18ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x18ccbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18ccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ccc0: 0xae030560  sw          $v1, 0x560($s0)
    ctx->pc = 0x18ccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 3));
label_18ccc4:
    // 0x18ccc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18ccc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ccc8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x18ccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x18cccc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18ccccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ccd0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x18ccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x18ccd4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x18ccd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18ccd8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18ccd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18ccdc: 0x3e00008  jr          $ra
    ctx->pc = 0x18CCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCDCu;
        // 0x18cce0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CCE4u;
}
