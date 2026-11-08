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

// Function: FUN_0012d240
// Address: 0x12d240 - 0x12d764
void FUN_0012d240_0x12d240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012d240_0x12d240");
#endif

    switch (ctx->pc) {
        case 0x12d2a0u: goto label_12d2a0;
        case 0x12d6b4u: goto label_12d6b4;
        case 0x12d74cu: goto label_12d74c;
        default: break;
    }

    ctx->pc = 0x12d240u;

    // 0x12d240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12d240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12d244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12d244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12d248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12d248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12d24c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12d24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12d250: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12d250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d254: 0x8383849c  lb          $v1, -0x7B64($gp)
    ctx->pc = 0x12d254u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935708)));
    // 0x12d258: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x12D258u;
    {
        const bool branch_taken_0x12d258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D258u;
        // 0x12d25c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d258) {
            ctx->pc = 0x12D2A8u;
            goto label_12d2a8;
        }
    }
    ctx->pc = 0x12D260u;
    // 0x12d260: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x12d260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
    // 0x12d264: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x12d264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x12d268: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x12d268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d26c: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x12d26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x12d270: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x12d270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x12d274: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d278: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x12d278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x12d27c: 0xfc223078  sd          $v0, 0x3078($at)
    ctx->pc = 0x12d27cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B3078u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B3078u, _value); } while (0);
    // 0x12d280: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d284: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x12d284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x12d288: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x12d288u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x12d28c: 0xfc233070  sd          $v1, 0x3070($at)
    ctx->pc = 0x12d28cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B3070u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B3070u, _value); } while (0);
    // 0x12d290: 0x24843070  addiu       $a0, $a0, 0x3070
    ctx->pc = 0x12d290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12400));
    // 0x12d294: 0x24a5d770  addiu       $a1, $a1, -0x2890
    ctx->pc = 0x12d294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956912));
    // 0x12d298: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x12D298u;
    SET_GPR_U32(ctx, 31, 0x12D2A0u);
    ctx->pc = 0x12D29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D298u;
    // 0x12d29c: 0x24c63060  addiu       $a2, $a2, 0x3060 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x12D298u, 0x12D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D2A0u;
label_12d2a0:
    // 0x12d2a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d2a4: 0xa383849c  sb          $v1, -0x7B64($gp)
    ctx->pc = 0x12d2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935708), (uint8_t)GPR_U32(ctx, 3));
label_12d2a8:
    // 0x12d2a8: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x12d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x12d2ac: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x12d2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x12d2b0: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x12d2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x12d2b4: 0x2464ffe0  addiu       $a0, $v1, -0x20
    ctx->pc = 0x12d2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x12d2b8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x12d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12d2bc: 0x3085000f  andi        $a1, $a0, 0xF
    ctx->pc = 0x12d2bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12d2c0: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D2C0u;
    {
        const bool branch_taken_0x12d2c0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x12D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2C0u;
        // 0x12d2c4: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2c0) {
            ctx->pc = 0x12D2D4u;
            goto label_12d2d4;
        }
    }
    ctx->pc = 0x12D2C8u;
    // 0x12d2c8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D2C8u;
    {
        const bool branch_taken_0x12d2c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2C8u;
        // 0x12d2cc: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2c8) {
            ctx->pc = 0x12D2D8u;
            goto label_12d2d8;
        }
    }
    ctx->pc = 0x12D2D0u;
    // 0x12d2d0: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x12d2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_12d2d4:
    // 0x12d2d4: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x12d2d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
label_12d2d8:
    // 0x12d2d8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D2D8u;
    {
        const bool branch_taken_0x12d2d8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x12d2d8) {
            ctx->pc = 0x12D2E8u;
            goto label_12d2e8;
        }
    }
    ctx->pc = 0x12D2E0u;
    // 0x12d2e0: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x12d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x12d2e4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x12d2e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_12d2e8:
    // 0x12d2e8: 0xc6260034  lwc1        $f6, 0x34($s1)
    ctx->pc = 0x12d2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x12d2ec: 0x3c044360  lui         $a0, 0x4360
    ctx->pc = 0x12d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17248 << 16));
    // 0x12d2f0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x12d2f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d2f4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x12d2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12d2f8: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x12d2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12d2fc: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x12d2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d300: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x12d300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d304: 0xc6250030  lwc1        $f5, 0x30($s1)
    ctx->pc = 0x12d304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x12d308: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x12d308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d30c: 0x468018a0  cvt.s.w     $f2, $f3
    ctx->pc = 0x12d30cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12d310: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x12d310u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12d314: 0x460231c0  add.s       $f7, $f6, $f2
    ctx->pc = 0x12d314u;
    ctx->f[7] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x12d318: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x12d318u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d31c: 0xc624000c  lwc1        $f4, 0xC($s1)
    ctx->pc = 0x12d31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12d320: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12d320u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12d324: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x12d324u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x12d328: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x12d328u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x12d32c: 0xc6280038  lwc1        $f8, 0x38($s1)
    ctx->pc = 0x12d32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x12d330: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x12D330u;
    {
        const bool branch_taken_0x12d330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D330u;
        // 0x12d334: 0x46022140  add.s       $f5, $f4, $f2 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d330) {
            ctx->pc = 0x12D354u;
            goto label_12d354;
        }
    }
    ctx->pc = 0x12D338u;
    // 0x12d338: 0x3c0443a0  lui         $a0, 0x43A0
    ctx->pc = 0x12d338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17312 << 16));
    // 0x12d33c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x12d33cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d340: 0x0  nop
    ctx->pc = 0x12d340u;
    // NOP
    // 0x12d344: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x12d344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d348: 0x0  nop
    ctx->pc = 0x12d348u;
    // NOP
    // 0x12d34c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x12D34Cu;
    {
        const bool branch_taken_0x12d34c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D34Cu;
        // 0x12d350: 0x3c04c360  lui         $a0, 0xC360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50016 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d34c) {
            ctx->pc = 0x12D364u;
            goto label_12d364;
        }
    }
    ctx->pc = 0x12D354u;
label_12d354:
    // 0x12d354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12d354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d358: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x12D358u;
    {
        const bool branch_taken_0x12d358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D358u;
        // 0x12d35c: 0xa2230010  sb          $v1, 0x10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d358) {
            ctx->pc = 0x12D750u;
            goto label_12d750;
        }
    }
    ctx->pc = 0x12D360u;
    // 0x12d360: 0x3c04c360  lui         $a0, 0xC360
    ctx->pc = 0x12d360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50016 << 16));
label_12d364:
    // 0x12d364: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x12d364u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d368: 0x0  nop
    ctx->pc = 0x12d368u;
    // NOP
    // 0x12d36c: 0x46023836  c.le.s      $f7, $f2
    ctx->pc = 0x12d36cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d370: 0x0  nop
    ctx->pc = 0x12d370u;
    // NOP
    // 0x12d374: 0x450100f6  bc1t        . + 4 + (0xF6 << 2)
    ctx->pc = 0x12D374u;
    {
        const bool branch_taken_0x12d374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d374) {
            ctx->pc = 0x12D750u;
            goto label_12d750;
        }
    }
    ctx->pc = 0x12D37Cu;
    // 0x12d37c: 0x3c04c3a0  lui         $a0, 0xC3A0
    ctx->pc = 0x12d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50080 << 16));
    // 0x12d380: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x12d380u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d384: 0x0  nop
    ctx->pc = 0x12d384u;
    // NOP
    // 0x12d388: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x12d388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d38c: 0x0  nop
    ctx->pc = 0x12d38cu;
    // NOP
    // 0x12d390: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12D390u;
    {
        const bool branch_taken_0x12d390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d390) {
            ctx->pc = 0x12D3A0u;
            goto label_12d3a0;
        }
    }
    ctx->pc = 0x12D398u;
    // 0x12d398: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x12D398u;
    {
        const bool branch_taken_0x12d398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D398u;
        // 0x12d39c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d398) {
            ctx->pc = 0x12D754u;
            goto label_12d754;
        }
    }
    ctx->pc = 0x12D3A0u;
label_12d3a0:
    // 0x12d3a0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d3a4: 0x3c024700  lui         $v0, 0x4700
    ctx->pc = 0x12d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18176 << 16));
    // 0x12d3a8: 0x942a3080  lhu         $t2, 0x3080($at)
    ctx->pc = 0x12d3a8u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)FAST_READ16(0x2B3080u));
    // 0x12d3ac: 0xa62018  mult        $a0, $a1, $a2
    ctx->pc = 0x12d3acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x12d3b0: 0x240bc000  addiu       $t3, $zero, -0x4000
    ctx->pc = 0x12d3b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x12d3b4: 0x24a80001  addiu       $t0, $a1, 0x1
    ctx->pc = 0x12d3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12d3b8: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x12d3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x12d3bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x12d3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x12d3c0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x12d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x12d3c4: 0x308c3fff  andi        $t4, $a0, 0x3FFF
    ctx->pc = 0x12d3c4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x12d3c8: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x12d3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d3cc: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d3d0: 0x14b5024  and         $t2, $t2, $t3
    ctx->pc = 0x12d3d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 11));
    // 0x12d3d4: 0x94293082  lhu         $t1, 0x3082($at)
    ctx->pc = 0x12d3d4u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 12418)));
    // 0x12d3d8: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x12d3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x12d3dc: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x12d3dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12d3e0: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x12d3e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x12d3e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12d3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d3e8: 0x0  nop
    ctx->pc = 0x12d3e8u;
    // NOP
    // 0x12d3ec: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x12d3ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x12d3f0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d3f4: 0x12b4824  and         $t1, $t1, $t3
    ctx->pc = 0x12d3f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 11));
    // 0x12d3f8: 0x94273090  lhu         $a3, 0x3090($at)
    ctx->pc = 0x12d3f8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 12432)));
    // 0x12d3fc: 0x460348c0  add.s       $f3, $f9, $f3
    ctx->pc = 0x12d3fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[9], ctx->f[3]);
    // 0x12d400: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x12d400u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d404: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d408: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x12d408u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x12d40c: 0x94253092  lhu         $a1, 0x3092($at)
    ctx->pc = 0x12d40cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 12434)));
    // 0x12d410: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d414: 0xab2824  and         $a1, $a1, $t3
    ctx->pc = 0x12d414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x12d418: 0xa42a3080  sh          $t2, 0x3080($at)
    ctx->pc = 0x12d418u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 12416), (uint16_t)GPR_U32(ctx, 10));
    // 0x12d41c: 0x8e2a0004  lw          $t2, 0x4($s1)
    ctx->pc = 0x12d41cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12d420: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d424: 0x706a1018  mult1       $v0, $v1, $t2
    ctx->pc = 0x12d424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12d428: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12d428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12d42c: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x12d42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x12d430: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x12d430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x12d434: 0xa4223082  sh          $v0, 0x3082($at)
    ctx->pc = 0x12d434u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 12418), (uint16_t)GPR_U32(ctx, 2));
    // 0x12d438: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x12d438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12d43c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d440: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x12d440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12d444: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12d444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12d448: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x12d448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x12d44c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x12d44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x12d450: 0xa4223090  sh          $v0, 0x3090($at)
    ctx->pc = 0x12d450u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 12432), (uint16_t)GPR_U32(ctx, 2));
    // 0x12d454: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x12d454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12d458: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d45c: 0x70c21018  mult1       $v0, $a2, $v0
    ctx->pc = 0x12d45cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12d460: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12d460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12d464: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x12d464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x12d468: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x12d468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x12d46c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x12D46Cu;
    {
        const bool branch_taken_0x12d46c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D46Cu;
        // 0x12d470: 0xa4223092  sh          $v0, 0x3092($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 12434), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d46c) {
            ctx->pc = 0x12D484u;
            goto label_12d484;
        }
    }
    ctx->pc = 0x12D474u;
    // 0x12d474: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d474u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x12d478: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x12d478u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12d47c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12D47Cu;
    {
        const bool branch_taken_0x12d47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D47Cu;
        // 0x12d480: 0x3c024700  lui         $v0, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18176 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d47c) {
            ctx->pc = 0x12D4A0u;
            goto label_12d4a0;
        }
    }
    ctx->pc = 0x12D484u;
label_12d484:
    // 0x12d484: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x12d484u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x12d488: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x12d488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x12d48c: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d48cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x12d490: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x12d490u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12d494: 0x0  nop
    ctx->pc = 0x12d494u;
    // NOP
    // 0x12d498: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12d498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12d49c: 0x3c024700  lui         $v0, 0x4700
    ctx->pc = 0x12d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18176 << 16));
label_12d4a0:
    // 0x12d4a0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d4a4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x12d4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12d4a8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x12d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x12d4ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x12d4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12d4b0: 0x0  nop
    ctx->pc = 0x12d4b0u;
    // NOP
    // 0x12d4b4: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x12d4b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x12d4b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x12d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x12d4bc: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x12d4bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x12d4c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12d4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d4c4: 0x0  nop
    ctx->pc = 0x12d4c4u;
    // NOP
    // 0x12d4c8: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x12d4c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d4cc: 0x0  nop
    ctx->pc = 0x12d4ccu;
    // NOP
    // 0x12d4d0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x12D4D0u;
    {
        const bool branch_taken_0x12d4d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4D0u;
        // 0x12d4d4: 0xa4233088  sh          $v1, 0x3088($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 12424), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4d0) {
            ctx->pc = 0x12D4E8u;
            goto label_12d4e8;
        }
    }
    ctx->pc = 0x12D4D8u;
    // 0x12d4d8: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d4d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x12d4dc: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x12d4dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12d4e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12D4E0u;
    {
        const bool branch_taken_0x12d4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d4e0) {
            ctx->pc = 0x12D500u;
            goto label_12d500;
        }
    }
    ctx->pc = 0x12D4E8u;
label_12d4e8:
    // 0x12d4e8: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x12d4e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x12d4ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x12d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x12d4f0: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d4f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x12d4f4: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x12d4f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12d4f8: 0x0  nop
    ctx->pc = 0x12d4f8u;
    // NOP
    // 0x12d4fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12d4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_12d500:
    // 0x12d500: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d504: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x12d504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x12d508: 0xa423308a  sh          $v1, 0x308A($at)
    ctx->pc = 0x12d508u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B308Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x2B308Au, _value); } while (0);
    // 0x12d50c: 0x460040a4  .word       0x460040A4                   # cvt.w.s     $f2, $f8 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d50cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[8]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x12d510: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x12d510u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12d514: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x12d514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x12d518: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d51c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d520: 0xdc273088  ld          $a3, 0x3088($at)
    ctx->pc = 0x12d520u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x2B3088u));
    // 0x12d524: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x12d524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d528: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12d528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12d52c: 0x3c044700  lui         $a0, 0x4700
    ctx->pc = 0x12d52cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18176 << 16));
    // 0x12d530: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12d530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12d534: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x12d534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12d538: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x12d538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12d53c: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x12d53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x12d540: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x12d540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x12d544: 0x70451389  pcpyld      $v0, $v0, $a1
    ctx->pc = 0x12d544u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x12d548: 0x1283021  addu        $a2, $t1, $t0
    ctx->pc = 0x12d548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x12d54c: 0xe22824  and         $a1, $a3, $v0
    ctx->pc = 0x12d54cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x12d550: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x12d550u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12d554: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x12d554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x12d558: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x12d558u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x12d55c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x12d55cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x12d560: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d564: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x12d564u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12d568: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12d568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d56c: 0x0  nop
    ctx->pc = 0x12d56cu;
    // NOP
    // 0x12d570: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x12d570u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x12d574: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x12d574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12d578: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x12d578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x12d57c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x12d57cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12d580: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x12d580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x12d584: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x12d584u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d588: 0x0  nop
    ctx->pc = 0x12d588u;
    // NOP
    // 0x12d58c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x12D58Cu;
    {
        const bool branch_taken_0x12d58c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D58Cu;
        // 0x12d590: 0xfc243088  sd          $a0, 0x3088($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 12424), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d58c) {
            ctx->pc = 0x12D5A4u;
            goto label_12d5a4;
        }
    }
    ctx->pc = 0x12D594u;
    // 0x12d594: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d594u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x12d598: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x12d598u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12d59c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12D59Cu;
    {
        const bool branch_taken_0x12d59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D59Cu;
        // 0x12d5a0: 0x3c024700  lui         $v0, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18176 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d59c) {
            ctx->pc = 0x12D5C0u;
            goto label_12d5c0;
        }
    }
    ctx->pc = 0x12D5A4u;
label_12d5a4:
    // 0x12d5a4: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x12d5a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x12d5a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x12d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x12d5ac: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d5acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x12d5b0: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x12d5b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12d5b4: 0x0  nop
    ctx->pc = 0x12d5b4u;
    // NOP
    // 0x12d5b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12d5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12d5bc: 0x3c024700  lui         $v0, 0x4700
    ctx->pc = 0x12d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18176 << 16));
label_12d5c0:
    // 0x12d5c0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d5c4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x12d5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12d5c8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x12d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x12d5cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x12d5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12d5d0: 0x0  nop
    ctx->pc = 0x12d5d0u;
    // NOP
    // 0x12d5d4: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x12d5d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x12d5d8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x12d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x12d5dc: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x12d5dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x12d5e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12d5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d5e4: 0x0  nop
    ctx->pc = 0x12d5e4u;
    // NOP
    // 0x12d5e8: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x12d5e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d5ec: 0x0  nop
    ctx->pc = 0x12d5ecu;
    // NOP
    // 0x12d5f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x12D5F0u;
    {
        const bool branch_taken_0x12d5f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5F0u;
        // 0x12d5f4: 0xa4233098  sh          $v1, 0x3098($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 12440), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5f0) {
            ctx->pc = 0x12D608u;
            goto label_12d608;
        }
    }
    ctx->pc = 0x12D5F8u;
    // 0x12d5f8: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d5f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x12d5fc: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x12d5fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12d600: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12D600u;
    {
        const bool branch_taken_0x12d600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d600) {
            ctx->pc = 0x12D620u;
            goto label_12d620;
        }
    }
    ctx->pc = 0x12D608u;
label_12d608:
    // 0x12d608: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x12d608u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x12d60c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x12d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x12d610: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d610u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x12d614: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x12d614u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12d618: 0x0  nop
    ctx->pc = 0x12d618u;
    // NOP
    // 0x12d61c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12d61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_12d620:
    // 0x12d620: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d624: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x12d624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12d628: 0xa423309a  sh          $v1, 0x309A($at)
    ctx->pc = 0x12d628u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 12442), (uint16_t)GPR_U32(ctx, 3));
    // 0x12d62c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12d62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12d630: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d634: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x12d634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d638: 0xdc273098  ld          $a3, 0x3098($at)
    ctx->pc = 0x12d638u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 1), 12440)));
    // 0x12d63c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12d63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d640: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12d640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12d644: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x12d644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12d648: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12d648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12d64c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d650: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x12d650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12d654: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x12d654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12d658: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x12d658u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12d65c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x12d65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x12d660: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d664: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x12d664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x12d668: 0xfc223098  sd          $v0, 0x3098($at)
    ctx->pc = 0x12d668u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B3098u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B3098u, _value); } while (0);
    // 0x12d66c: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x12d66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12d670: 0xc6230040  lwc1        $f3, 0x40($s1)
    ctx->pc = 0x12d670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12d674: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x12d674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d678: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x12d678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x12d67c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x12d67cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x12d680: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x12d680u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x12d684: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x12d684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12d688: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x12d688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x12d68c: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x12d68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d690: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x12d690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d694: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12d694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12d698: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12d698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12d69c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x12d69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x12d6a0: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x12d6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d6a4: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x12d6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d6a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12d6a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12d6ac: 0xc04b67c  jal         func_12D9F0
    ctx->pc = 0x12D6ACu;
    SET_GPR_U32(ctx, 31, 0x12D6B4u);
    ctx->pc = 0x12D6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D6ACu;
    // 0x12d6b0: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D9F0u, 0x12D6ACu, 0x12D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6B4u;
label_12d6b4:
    // 0x12d6b4: 0x8e270078  lw          $a3, 0x78($s1)
    ctx->pc = 0x12d6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12d6b8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x12d6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12d6bc: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x12d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x12d6c0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x12d6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12d6c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12d6c8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x12d6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x12d6cc: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d6d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6d4: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x12d6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x12d6d8: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x12d6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d6dc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x12d6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x12d6e0: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x12d6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x12d6e4: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x12d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x12d6e8: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x12d6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x12d6ec: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x12d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12d6f0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12d6f4: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x12d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    // 0x12d6f8: 0x78233070  lq          $v1, 0x3070($at)
    ctx->pc = 0x12d6f8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x2B3070u));
    // 0x12d6fc: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x12d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12d700: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d704: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x12d704u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x12d708: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x12d708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12d70c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12d710: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x12d710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    // 0x12d714: 0x78233080  lq          $v1, 0x3080($at)
    ctx->pc = 0x12d714u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x2B3080u));
    // 0x12d718: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x12d718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12d71c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d720: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x12d720u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x12d724: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x12d724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12d728: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12d728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12d72c: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x12d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    // 0x12d730: 0x78233090  lq          $v1, 0x3090($at)
    ctx->pc = 0x12d730u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x2B3090u));
    // 0x12d734: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x12d734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12d738: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x12d738u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x12d73c: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x12d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12d740: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12d740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12d744: 0xc04b67c  jal         func_12D9F0
    ctx->pc = 0x12D744u;
    SET_GPR_U32(ctx, 31, 0x12D74Cu);
    ctx->pc = 0x12D748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D744u;
    // 0x12d748: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D9F0u, 0x12D744u, 0x12D74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D74Cu;
label_12d74c:
    // 0x12d74c: 0xa2200010  sb          $zero, 0x10($s1)
    ctx->pc = 0x12d74cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 0));
label_12d750:
    // 0x12d750: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12d750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12d754:
    // 0x12d754: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12d754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d758: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12d758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d75c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D75Cu;
        // 0x12d760: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D764u;
}
