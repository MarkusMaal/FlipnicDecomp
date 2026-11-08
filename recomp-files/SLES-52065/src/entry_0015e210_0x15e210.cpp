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

// Function: entry_0015e210
// Address: 0x15e210 - 0x15e2c4
void entry_0015e210_0x15e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e210_0x15e210");
#endif

    ctx->pc = 0x15e210u;

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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x15E2C4u;
}
