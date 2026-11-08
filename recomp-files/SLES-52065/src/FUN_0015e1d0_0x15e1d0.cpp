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

// Function: FUN_0015e1d0
// Address: 0x15e1d0 - 0x15e47c
void FUN_0015e1d0_0x15e1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015e1d0_0x15e1d0");
#endif

    switch (ctx->pc) {
        case 0x15e210u: goto label_15e210;
        case 0x15e3c0u: goto label_15e3c0;
        case 0x15e3ecu: goto label_15e3ec;
        case 0x15e444u: goto label_15e444;
        default: break;
    }

    ctx->pc = 0x15e1d0u;

    // 0x15e1d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15e1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15e1d4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x15e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15e1d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15e1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15e1dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15e1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15e1e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15e1e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15e1e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e1ec: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x15e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x15e1f0: 0xac6027a4  sw          $zero, 0x27A4($v1)
    ctx->pc = 0x15e1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10148), GPR_U32(ctx, 0));
    // 0x15e1f4: 0x8083002c  lb          $v1, 0x2C($a0)
    ctx->pc = 0x15e1f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x15e1f8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15E1F8u;
    {
        const bool branch_taken_0x15e1f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1F8u;
        // 0x15e1fc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e1f8) {
            ctx->pc = 0x15E204u;
            goto label_15e204;
        }
    }
    ctx->pc = 0x15E200u;
    // 0x15e200: 0xa260002c  sb          $zero, 0x2C($s3)
    ctx->pc = 0x15e200u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 44), (uint8_t)GPR_U32(ctx, 0));
label_15e204:
    // 0x15e204: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15e204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e208: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15e208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e20c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15e20cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e210:
    // 0x15e210: 0x2722021  addu        $a0, $s3, $s2
    ctx->pc = 0x15e210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x15e214: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15e218: 0x84830228  lh          $v1, 0x228($a0)
    ctx->pc = 0x15e218u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x15e21c: 0x1062007e  beq         $v1, $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x15E21Cu;
    {
        const bool branch_taken_0x15e21c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E21Cu;
        // 0x15e220: 0x24850228  addiu       $a1, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e21c) {
            ctx->pc = 0x15E418u;
            goto label_15e418;
        }
    }
    ctx->pc = 0x15E224u;
    // 0x15e224: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x15e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15e228: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x15E228u;
    {
        const bool branch_taken_0x15e228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15e228) {
            ctx->pc = 0x15E2D8u;
            goto label_15e2d8;
        }
    }
    ctx->pc = 0x15E230u;
    // 0x15e230: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x15e230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e234: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x15e234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x15e238: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15e238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15e23c: 0x0  nop
    ctx->pc = 0x15e23cu;
    // NOP
    // 0x15e240: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15e240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e244: 0x0  nop
    ctx->pc = 0x15e244u;
    // NOP
    // 0x15e248: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x15E248u;
    {
        const bool branch_taken_0x15e248 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E248u;
        // 0x15e24c: 0x3c024485  lui         $v0, 0x4485 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17541 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e248) {
            ctx->pc = 0x15E2C4u;
            goto label_15e2c4;
        }
    }
    ctx->pc = 0x15E250u;
    // 0x15e250: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x15e250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15e254: 0x0  nop
    ctx->pc = 0x15e254u;
    // NOP
    // 0x15e258: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x15e258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e25c: 0x0  nop
    ctx->pc = 0x15e25cu;
    // NOP
    // 0x15e260: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x15E260u;
    {
        const bool branch_taken_0x15e260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e260) {
            ctx->pc = 0x15E2C4u;
            goto label_15e2c4;
        }
    }
    ctx->pc = 0x15E268u;
    // 0x15e268: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x15e268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e26c: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x15e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
    // 0x15e270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e274: 0x0  nop
    ctx->pc = 0x15e274u;
    // NOP
    // 0x15e278: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15e278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e27c: 0x0  nop
    ctx->pc = 0x15e27cu;
    // NOP
    // 0x15e280: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x15E280u;
    {
        const bool branch_taken_0x15e280 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E280u;
        // 0x15e284: 0x3c02447a  lui         $v0, 0x447A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e280) {
            ctx->pc = 0x15E2C4u;
            goto label_15e2c4;
        }
    }
    ctx->pc = 0x15E288u;
    // 0x15e288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e28c: 0x0  nop
    ctx->pc = 0x15e28cu;
    // NOP
    // 0x15e290: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15e290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e294: 0x0  nop
    ctx->pc = 0x15e294u;
    // NOP
    // 0x15e298: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x15E298u;
    {
        const bool branch_taken_0x15e298 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e298) {
            ctx->pc = 0x15E2C4u;
            goto label_15e2c4;
        }
    }
    ctx->pc = 0x15E2A0u;
    // 0x15e2a0: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x15e2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e2a4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15e2a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e2a8: 0x0  nop
    ctx->pc = 0x15e2a8u;
    // NOP
    // 0x15e2ac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x15E2ACu;
    {
        const bool branch_taken_0x15e2ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e2ac) {
            ctx->pc = 0x15E2C4u;
            goto label_15e2c4;
        }
    }
    ctx->pc = 0x15E2B4u;
    // 0x15e2b4: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x15e2b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e2b8: 0x0  nop
    ctx->pc = 0x15e2b8u;
    // NOP
    // 0x15e2bc: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x15E2BCu;
    {
        const bool branch_taken_0x15e2bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e2bc) {
            ctx->pc = 0x15E388u;
            goto label_15e388;
        }
    }
    ctx->pc = 0x15E2C4u;
label_15e2c4:
    // 0x15e2c4: 0x0  nop
    ctx->pc = 0x15e2c4u;
    // NOP
    // 0x15e2c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15e2cc: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x15e2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x15e2d0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x15E2D0u;
    {
        const bool branch_taken_0x15e2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2D0u;
        // 0x15e2d4: 0xa482022a  sh          $v0, 0x22A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 554), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e2d0) {
            ctx->pc = 0x15E418u;
            goto label_15e418;
        }
    }
    ctx->pc = 0x15E2D8u;
label_15e2d8:
    // 0x15e2d8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x15e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x15e2dc: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x15e2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e2e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15e2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e2e4: 0xc4820040  lwc1        $f2, 0x40($a0)
    ctx->pc = 0x15e2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15e2e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15e2e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15e2ec: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15e2ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e2f0: 0x0  nop
    ctx->pc = 0x15e2f0u;
    // NOP
    // 0x15e2f4: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x15E2F4u;
    {
        const bool branch_taken_0x15e2f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e2f4) {
            ctx->pc = 0x15E37Cu;
            goto label_15e37c;
        }
    }
    ctx->pc = 0x15E2FCu;
    // 0x15e2fc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x15e2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e300: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15e300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15e304: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x15e304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e308: 0x0  nop
    ctx->pc = 0x15e308u;
    // NOP
    // 0x15e30c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x15E30Cu;
    {
        const bool branch_taken_0x15e30c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e30c) {
            ctx->pc = 0x15E37Cu;
            goto label_15e37c;
        }
    }
    ctx->pc = 0x15E314u;
    // 0x15e314: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x15e314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e318: 0xc4820044  lwc1        $f2, 0x44($a0)
    ctx->pc = 0x15e318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15e31c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15e31cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15e320: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15e320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e324: 0x0  nop
    ctx->pc = 0x15e324u;
    // NOP
    // 0x15e328: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x15E328u;
    {
        const bool branch_taken_0x15e328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e328) {
            ctx->pc = 0x15E37Cu;
            goto label_15e37c;
        }
    }
    ctx->pc = 0x15E330u;
    // 0x15e330: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x15e330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e334: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15e334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15e338: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x15e338u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e33c: 0x0  nop
    ctx->pc = 0x15e33cu;
    // NOP
    // 0x15e340: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x15E340u;
    {
        const bool branch_taken_0x15e340 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e340) {
            ctx->pc = 0x15E37Cu;
            goto label_15e37c;
        }
    }
    ctx->pc = 0x15E348u;
    // 0x15e348: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x15e348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e34c: 0xc4820048  lwc1        $f2, 0x48($a0)
    ctx->pc = 0x15e34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15e350: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15e350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15e354: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15e354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e358: 0x0  nop
    ctx->pc = 0x15e358u;
    // NOP
    // 0x15e35c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x15E35Cu;
    {
        const bool branch_taken_0x15e35c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e35c) {
            ctx->pc = 0x15E37Cu;
            goto label_15e37c;
        }
    }
    ctx->pc = 0x15E364u;
    // 0x15e364: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x15e364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e368: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15e368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15e36c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x15e36cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e370: 0x0  nop
    ctx->pc = 0x15e370u;
    // NOP
    // 0x15e374: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x15E374u;
    {
        const bool branch_taken_0x15e374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e374) {
            ctx->pc = 0x15E388u;
            goto label_15e388;
        }
    }
    ctx->pc = 0x15E37Cu;
label_15e37c:
    // 0x15e37c: 0x0  nop
    ctx->pc = 0x15e37cu;
    // NOP
    // 0x15e380: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x15e380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15e384: 0xa482022a  sh          $v0, 0x22A($a0)
    ctx->pc = 0x15e384u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 554), (uint16_t)GPR_U32(ctx, 2));
label_15e388:
    // 0x15e388: 0x8483022a  lh          $v1, 0x22A($a0)
    ctx->pc = 0x15e388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 554)));
    // 0x15e38c: 0x2861ffff  slti        $at, $v1, -0x1
    ctx->pc = 0x15e38cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x15e390: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x15E390u;
    {
        const bool branch_taken_0x15e390 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E390u;
        // 0x15e394: 0x2486022a  addiu       $a2, $a0, 0x22A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 554));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e390) {
            ctx->pc = 0x15E418u;
            goto label_15e418;
        }
    }
    ctx->pc = 0x15E398u;
    // 0x15e398: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x15e398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x15e39c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E39Cu;
    {
        const bool branch_taken_0x15e39c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E39Cu;
        // 0x15e3a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e39c) {
            ctx->pc = 0x15E3B0u;
            goto label_15e3b0;
        }
    }
    ctx->pc = 0x15E3A4u;
    // 0x15e3a4: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x15e3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x15e3a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15E3A8u;
    {
        const bool branch_taken_0x15e3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3A8u;
        // 0x15e3ac: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e3a8) {
            ctx->pc = 0x15E3B8u;
            goto label_15e3b8;
        }
    }
    ctx->pc = 0x15E3B0u;
label_15e3b0:
    // 0x15e3b0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x15e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15e3b4: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x15e3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_15e3b8:
    // 0x15e3b8: 0xc055c40  jal         func_157100
    ctx->pc = 0x15E3B8u;
    SET_GPR_U32(ctx, 31, 0x15E3C0u);
    ctx->pc = 0x15E3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E3B8u;
    // 0x15e3bc: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x15E3B8u, 0x15E3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3C0u;
label_15e3c0:
    // 0x15e3c0: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x15e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x15e3c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15e3c8: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x15e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x15e3cc: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x15e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x15e3d0: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15E3D0u;
    {
        const bool branch_taken_0x15e3d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3D0u;
        // 0x15e3d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e3d0) {
            ctx->pc = 0x15E3F8u;
            goto label_15e3f8;
        }
    }
    ctx->pc = 0x15E3D8u;
    // 0x15e3d8: 0x8e652cd0  lw          $a1, 0x2CD0($s3)
    ctx->pc = 0x15e3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x15e3dc: 0x14b10006  bne         $a1, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E3DCu;
    {
        const bool branch_taken_0x15e3dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x15E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3DCu;
        // 0x15e3e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e3dc) {
            ctx->pc = 0x15E3F8u;
            goto label_15e3f8;
        }
    }
    ctx->pc = 0x15E3E4u;
    // 0x15e3e4: 0xc058048  jal         func_160120
    ctx->pc = 0x15E3E4u;
    SET_GPR_U32(ctx, 31, 0x15E3ECu);
    ctx->pc = 0x160120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160120u, 0x15E3E4u, 0x15E3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3ECu;
label_15e3ec:
    // 0x15e3ec: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15E3ECu;
    {
        const bool branch_taken_0x15e3ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15e3ec) {
            ctx->pc = 0x15E3F8u;
            goto label_15e3f8;
        }
    }
    ctx->pc = 0x15E3F4u;
    // 0x15e3f4: 0xae622cd0  sw          $v0, 0x2CD0($s3)
    ctx->pc = 0x15e3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 11472), GPR_U32(ctx, 2));
label_15e3f8:
    // 0x15e3f8: 0x8262002c  lb          $v0, 0x2C($s3)
    ctx->pc = 0x15e3f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x15e3fc: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E3FCu;
    {
        const bool branch_taken_0x15e3fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15e3fc) {
            ctx->pc = 0x15E418u;
            goto label_15e418;
        }
    }
    ctx->pc = 0x15E404u;
    // 0x15e404: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x15e404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x15e408: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x15e408u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15e40c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15E40Cu;
    {
        const bool branch_taken_0x15e40c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E40Cu;
        // 0x15e410: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e40c) {
            ctx->pc = 0x15E418u;
            goto label_15e418;
        }
    }
    ctx->pc = 0x15E414u;
    // 0x15e414: 0xa262002c  sb          $v0, 0x2C($s3)
    ctx->pc = 0x15e414u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 44), (uint8_t)GPR_U32(ctx, 2));
label_15e418:
    // 0x15e418: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15e418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15e41c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x15e41cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15e420: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x15E420u;
    {
        const bool branch_taken_0x15e420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E420u;
        // 0x15e424: 0x265203d0  addiu       $s2, $s2, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e420) {
            ctx->pc = 0x15E210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e210;
        }
    }
    ctx->pc = 0x15E428u;
    // 0x15e428: 0x1a00000d  blez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x15E428u;
    {
        const bool branch_taken_0x15e428 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x15E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E428u;
        // 0x15e42c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e428) {
            ctx->pc = 0x15E460u;
            goto label_15e460;
        }
    }
    ctx->pc = 0x15E430u;
    // 0x15e430: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x15e430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x15e434: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E434u;
    {
        const bool branch_taken_0x15e434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E434u;
        // 0x15e438: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e434) {
            ctx->pc = 0x15E450u;
            goto label_15e450;
        }
    }
    ctx->pc = 0x15E43Cu;
    // 0x15e43c: 0xc057f74  jal         func_15FDD0
    ctx->pc = 0x15E43Cu;
    SET_GPR_U32(ctx, 31, 0x15E444u);
    ctx->pc = 0x15FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FDD0u, 0x15E43Cu, 0x15E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E444u;
label_15e444:
    // 0x15e444: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15e444u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x15e448: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E448u;
    {
        const bool branch_taken_0x15e448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e448) {
            ctx->pc = 0x15E45Cu;
            goto label_15e45c;
        }
    }
    ctx->pc = 0x15E450u;
label_15e450:
    // 0x15e450: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x15e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x15e454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15e454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e458: 0xac4327a4  sw          $v1, 0x27A4($v0)
    ctx->pc = 0x15e458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10148), GPR_U32(ctx, 3));
label_15e45c:
    // 0x15e45c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15e45cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e460:
    // 0x15e460: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15e460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e464: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15e464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e468: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e46c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e46cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e470: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e474: 0x3e00008  jr          $ra
    ctx->pc = 0x15E474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E474u;
        // 0x15e478: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E47Cu;
}
