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

// Function: FUN_0016d220
// Address: 0x16d220 - 0x16d410
void FUN_0016d220_0x16d220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016d220_0x16d220");
#endif

    switch (ctx->pc) {
        case 0x16d220u: goto label_16d220;
        case 0x16d224u: goto label_16d224;
        case 0x16d228u: goto label_16d228;
        case 0x16d22cu: goto label_16d22c;
        case 0x16d230u: goto label_16d230;
        case 0x16d234u: goto label_16d234;
        case 0x16d238u: goto label_16d238;
        case 0x16d23cu: goto label_16d23c;
        case 0x16d240u: goto label_16d240;
        case 0x16d244u: goto label_16d244;
        case 0x16d248u: goto label_16d248;
        case 0x16d24cu: goto label_16d24c;
        case 0x16d250u: goto label_16d250;
        case 0x16d254u: goto label_16d254;
        case 0x16d258u: goto label_16d258;
        case 0x16d25cu: goto label_16d25c;
        case 0x16d260u: goto label_16d260;
        case 0x16d264u: goto label_16d264;
        case 0x16d268u: goto label_16d268;
        case 0x16d26cu: goto label_16d26c;
        case 0x16d270u: goto label_16d270;
        case 0x16d274u: goto label_16d274;
        case 0x16d278u: goto label_16d278;
        case 0x16d27cu: goto label_16d27c;
        case 0x16d280u: goto label_16d280;
        case 0x16d284u: goto label_16d284;
        case 0x16d288u: goto label_16d288;
        case 0x16d28cu: goto label_16d28c;
        case 0x16d290u: goto label_16d290;
        case 0x16d294u: goto label_16d294;
        case 0x16d298u: goto label_16d298;
        case 0x16d29cu: goto label_16d29c;
        case 0x16d2a0u: goto label_16d2a0;
        case 0x16d2a4u: goto label_16d2a4;
        case 0x16d2a8u: goto label_16d2a8;
        case 0x16d2acu: goto label_16d2ac;
        case 0x16d2b0u: goto label_16d2b0;
        case 0x16d2b4u: goto label_16d2b4;
        case 0x16d2b8u: goto label_16d2b8;
        case 0x16d2bcu: goto label_16d2bc;
        case 0x16d2c0u: goto label_16d2c0;
        case 0x16d2c4u: goto label_16d2c4;
        case 0x16d2c8u: goto label_16d2c8;
        case 0x16d2ccu: goto label_16d2cc;
        case 0x16d2d0u: goto label_16d2d0;
        case 0x16d2d4u: goto label_16d2d4;
        case 0x16d2d8u: goto label_16d2d8;
        case 0x16d2dcu: goto label_16d2dc;
        case 0x16d2e0u: goto label_16d2e0;
        case 0x16d2e4u: goto label_16d2e4;
        case 0x16d2e8u: goto label_16d2e8;
        case 0x16d2ecu: goto label_16d2ec;
        case 0x16d2f0u: goto label_16d2f0;
        case 0x16d2f4u: goto label_16d2f4;
        case 0x16d2f8u: goto label_16d2f8;
        case 0x16d2fcu: goto label_16d2fc;
        case 0x16d300u: goto label_16d300;
        case 0x16d304u: goto label_16d304;
        case 0x16d308u: goto label_16d308;
        case 0x16d30cu: goto label_16d30c;
        case 0x16d310u: goto label_16d310;
        case 0x16d314u: goto label_16d314;
        case 0x16d318u: goto label_16d318;
        case 0x16d31cu: goto label_16d31c;
        case 0x16d320u: goto label_16d320;
        case 0x16d324u: goto label_16d324;
        case 0x16d328u: goto label_16d328;
        case 0x16d32cu: goto label_16d32c;
        case 0x16d330u: goto label_16d330;
        case 0x16d334u: goto label_16d334;
        case 0x16d338u: goto label_16d338;
        case 0x16d33cu: goto label_16d33c;
        case 0x16d340u: goto label_16d340;
        case 0x16d344u: goto label_16d344;
        case 0x16d348u: goto label_16d348;
        case 0x16d34cu: goto label_16d34c;
        case 0x16d350u: goto label_16d350;
        case 0x16d354u: goto label_16d354;
        case 0x16d358u: goto label_16d358;
        case 0x16d35cu: goto label_16d35c;
        case 0x16d360u: goto label_16d360;
        case 0x16d364u: goto label_16d364;
        case 0x16d368u: goto label_16d368;
        case 0x16d36cu: goto label_16d36c;
        case 0x16d370u: goto label_16d370;
        case 0x16d374u: goto label_16d374;
        case 0x16d378u: goto label_16d378;
        case 0x16d37cu: goto label_16d37c;
        case 0x16d380u: goto label_16d380;
        case 0x16d384u: goto label_16d384;
        case 0x16d388u: goto label_16d388;
        case 0x16d38cu: goto label_16d38c;
        case 0x16d390u: goto label_16d390;
        case 0x16d394u: goto label_16d394;
        case 0x16d398u: goto label_16d398;
        case 0x16d39cu: goto label_16d39c;
        case 0x16d3a0u: goto label_16d3a0;
        case 0x16d3a4u: goto label_16d3a4;
        case 0x16d3a8u: goto label_16d3a8;
        case 0x16d3acu: goto label_16d3ac;
        case 0x16d3b0u: goto label_16d3b0;
        case 0x16d3b4u: goto label_16d3b4;
        case 0x16d3b8u: goto label_16d3b8;
        case 0x16d3bcu: goto label_16d3bc;
        case 0x16d3c0u: goto label_16d3c0;
        case 0x16d3c4u: goto label_16d3c4;
        case 0x16d3c8u: goto label_16d3c8;
        case 0x16d3ccu: goto label_16d3cc;
        case 0x16d3d0u: goto label_16d3d0;
        case 0x16d3d4u: goto label_16d3d4;
        case 0x16d3d8u: goto label_16d3d8;
        case 0x16d3dcu: goto label_16d3dc;
        case 0x16d3e0u: goto label_16d3e0;
        case 0x16d3e4u: goto label_16d3e4;
        case 0x16d3e8u: goto label_16d3e8;
        case 0x16d3ecu: goto label_16d3ec;
        case 0x16d3f0u: goto label_16d3f0;
        case 0x16d3f4u: goto label_16d3f4;
        case 0x16d3f8u: goto label_16d3f8;
        case 0x16d3fcu: goto label_16d3fc;
        case 0x16d400u: goto label_16d400;
        case 0x16d404u: goto label_16d404;
        case 0x16d408u: goto label_16d408;
        case 0x16d40cu: goto label_16d40c;
        default: break;
    }

    ctx->pc = 0x16d220u;

label_16d220:
    // 0x16d220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16d220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16d224:
    // 0x16d224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16d224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16d228:
    // 0x16d228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16d228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16d22c:
    // 0x16d22c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16d230:
    // 0x16d230: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16d230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16d234:
    // 0x16d234: 0x8c820230  lw          $v0, 0x230($a0)
    ctx->pc = 0x16d234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
label_16d238:
    // 0x16d238: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
label_16d23c:
    if (ctx->pc == 0x16D23Cu) {
        ctx->pc = 0x16D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D238u;
        // 0x16d23c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D240u;
        goto label_16d240;
    }
    ctx->pc = 0x16D238u;
    {
        const bool branch_taken_0x16d238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D238u;
        // 0x16d23c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d238) {
            ctx->pc = 0x16D3F8u;
            goto label_16d3f8;
        }
    }
    ctx->pc = 0x16D240u;
label_16d240:
    // 0x16d240: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x16d240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_16d244:
    // 0x16d244: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_16d248:
    if (ctx->pc == 0x16D248u) {
        ctx->pc = 0x16D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D244u;
        // 0x16d248: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D24Cu;
        goto label_16d24c;
    }
    ctx->pc = 0x16D244u;
    {
        const bool branch_taken_0x16d244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D244u;
        // 0x16d248: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d244) {
            ctx->pc = 0x16D254u;
            goto label_16d254;
        }
    }
    ctx->pc = 0x16D24Cu;
label_16d24c:
    // 0x16d24c: 0x14620066  bne         $v1, $v0, . + 4 + (0x66 << 2)
label_16d250:
    if (ctx->pc == 0x16D250u) {
        ctx->pc = 0x16D254u;
        goto label_16d254;
    }
    ctx->pc = 0x16D24Cu;
    {
        const bool branch_taken_0x16d24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16d24c) {
            ctx->pc = 0x16D3E8u;
            goto label_16d3e8;
        }
    }
    ctx->pc = 0x16D254u;
label_16d254:
    // 0x16d254: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x16d254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16d258:
    // 0x16d258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d25c:
    // 0x16d25c: 0xc62d0200  lwc1        $f13, 0x200($s1)
    ctx->pc = 0x16d25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_16d260:
    // 0x16d260: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x16d260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_16d264:
    // 0x16d264: 0x26060310  addiu       $a2, $s0, 0x310
    ctx->pc = 0x16d264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_16d268:
    // 0x16d268: 0xc055038  jal         func_1540E0
label_16d26c:
    if (ctx->pc == 0x16D26Cu) {
        ctx->pc = 0x16D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D268u;
        // 0x16d26c: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D270u;
        goto label_16d270;
    }
    ctx->pc = 0x16D268u;
    SET_GPR_U32(ctx, 31, 0x16D270u);
    ctx->pc = 0x16D26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D268u;
    // 0x16d26c: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1540E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1540E0u, 0x16D268u, 0x16D270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D270u;
label_16d270:
    // 0x16d270: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16d270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16d274:
    // 0x16d274: 0x0  nop
    ctx->pc = 0x16d274u;
    // NOP
label_16d278:
    // 0x16d278: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16d278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d27c:
    // 0x16d27c: 0x0  nop
    ctx->pc = 0x16d27cu;
    // NOP
label_16d280:
    // 0x16d280: 0x45010057  bc1t        . + 4 + (0x57 << 2)
label_16d284:
    if (ctx->pc == 0x16D284u) {
        ctx->pc = 0x16D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D280u;
        // 0x16d284: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D288u;
        goto label_16d288;
    }
    ctx->pc = 0x16D280u;
    {
        const bool branch_taken_0x16d280 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D280u;
        // 0x16d284: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d280) {
            ctx->pc = 0x16D3E0u;
            goto label_16d3e0;
        }
    }
    ctx->pc = 0x16D288u;
label_16d288:
    // 0x16d288: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x16d288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16d28c:
    // 0x16d28c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x16d28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16d290:
    // 0x16d290: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16d290u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_16d294:
    // 0x16d294: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16d294u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_16d298:
    // 0x16d298: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16d298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_16d29c:
    // 0x16d29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d2a0:
    // 0x16d2a0: 0x0  nop
    ctx->pc = 0x16d2a0u;
    // NOP
label_16d2a4:
    // 0x16d2a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16d2a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d2a8:
    // 0x16d2a8: 0x0  nop
    ctx->pc = 0x16d2a8u;
    // NOP
label_16d2ac:
    // 0x16d2ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16d2b0:
    if (ctx->pc == 0x16D2B0u) {
        ctx->pc = 0x16D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2ACu;
        // 0x16d2b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D2B4u;
        goto label_16d2b4;
    }
    ctx->pc = 0x16D2ACu;
    {
        const bool branch_taken_0x16d2ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2ACu;
        // 0x16d2b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2ac) {
            ctx->pc = 0x16D2B8u;
            goto label_16d2b8;
        }
    }
    ctx->pc = 0x16D2B4u;
label_16d2b4:
    // 0x16d2b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d2b8:
    // 0x16d2b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d2bc:
    // 0x16d2bc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_16d2c0:
    if (ctx->pc == 0x16D2C0u) {
        ctx->pc = 0x16D2C4u;
        goto label_16d2c4;
    }
    ctx->pc = 0x16D2BCu;
    {
        const bool branch_taken_0x16d2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16d2bc) {
            ctx->pc = 0x16D2D0u;
            goto label_16d2d0;
        }
    }
    ctx->pc = 0x16D2C4u;
label_16d2c4:
    // 0x16d2c4: 0xc6200210  lwc1        $f0, 0x210($s1)
    ctx->pc = 0x16d2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16d2c8:
    // 0x16d2c8: 0x10000014  b           . + 4 + (0x14 << 2)
label_16d2cc:
    if (ctx->pc == 0x16D2CCu) {
        ctx->pc = 0x16D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2C8u;
        // 0x16d2cc: 0xe620022c  swc1        $f0, 0x22C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D2D0u;
        goto label_16d2d0;
    }
    ctx->pc = 0x16D2C8u;
    {
        const bool branch_taken_0x16d2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2C8u;
        // 0x16d2cc: 0xe620022c  swc1        $f0, 0x22C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2c8) {
            ctx->pc = 0x16D31Cu;
            goto label_16d31c;
        }
    }
    ctx->pc = 0x16D2D0u;
label_16d2d0:
    // 0x16d2d0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x16d2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16d2d4:
    // 0x16d2d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16d2d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d2d8:
    // 0x16d2d8: 0x0  nop
    ctx->pc = 0x16d2d8u;
    // NOP
label_16d2dc:
    // 0x16d2dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16d2dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16d2e0:
    // 0x16d2e0: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16d2e0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_16d2e4:
    // 0x16d2e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_16d2e8:
    // 0x16d2e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d2ec:
    // 0x16d2ec: 0x0  nop
    ctx->pc = 0x16d2ecu;
    // NOP
label_16d2f0:
    // 0x16d2f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16d2f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d2f4:
    // 0x16d2f4: 0x0  nop
    ctx->pc = 0x16d2f4u;
    // NOP
label_16d2f8:
    // 0x16d2f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_16d2fc:
    if (ctx->pc == 0x16D2FCu) {
        ctx->pc = 0x16D300u;
        goto label_16d300;
    }
    ctx->pc = 0x16D2F8u;
    {
        const bool branch_taken_0x16d2f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d2f8) {
            ctx->pc = 0x16D308u;
            goto label_16d308;
        }
    }
    ctx->pc = 0x16D300u;
label_16d300:
    // 0x16d300: 0x10000003  b           . + 4 + (0x3 << 2)
label_16d304:
    if (ctx->pc == 0x16D304u) {
        ctx->pc = 0x16D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D300u;
        // 0x16d304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D308u;
        goto label_16d308;
    }
    ctx->pc = 0x16D300u;
    {
        const bool branch_taken_0x16d300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D300u;
        // 0x16d304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d300) {
            ctx->pc = 0x16D310u;
            goto label_16d310;
        }
    }
    ctx->pc = 0x16D308u;
label_16d308:
    // 0x16d308: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16d308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d30c:
    // 0x16d30c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d310:
    // 0x16d310: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_16d314:
    if (ctx->pc == 0x16D314u) {
        ctx->pc = 0x16D318u;
        goto label_16d318;
    }
    ctx->pc = 0x16D310u;
    {
        const bool branch_taken_0x16d310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16d310) {
            ctx->pc = 0x16D31Cu;
            goto label_16d31c;
        }
    }
    ctx->pc = 0x16D318u;
label_16d318:
    // 0x16d318: 0xae20022c  sw          $zero, 0x22C($s1)
    ctx->pc = 0x16d318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 0));
label_16d31c:
    // 0x16d31c: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x16d31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_16d320:
    // 0x16d320: 0xc07ef40  jal         func_1FBD00
label_16d324:
    if (ctx->pc == 0x16D324u) {
        ctx->pc = 0x16D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D320u;
        // 0x16d324: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D328u;
        goto label_16d328;
    }
    ctx->pc = 0x16D320u;
    SET_GPR_U32(ctx, 31, 0x16D328u);
    ctx->pc = 0x16D324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D320u;
    // 0x16d324: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x16D320u, 0x16D328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D328u;
label_16d328:
    // 0x16d328: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x16d328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_16d32c:
    // 0x16d32c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16d330:
    // 0x16d330: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16d330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_16d334:
    // 0x16d334: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16d334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16d338:
    // 0x16d338: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x16d338u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16d33c:
    // 0x16d33c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16d33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16d340:
    // 0x16d340: 0x10000002  b           . + 4 + (0x2 << 2)
label_16d344:
    if (ctx->pc == 0x16D344u) {
        ctx->pc = 0x16D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D340u;
        // 0x16d344: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D348u;
        goto label_16d348;
    }
    ctx->pc = 0x16D340u;
    {
        const bool branch_taken_0x16d340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D340u;
        // 0x16d344: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d340) {
            ctx->pc = 0x16D34Cu;
            goto label_16d34c;
        }
    }
    ctx->pc = 0x16D348u;
label_16d348:
    // 0x16d348: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16d348u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_16d34c:
    // 0x16d34c: 0x0  nop
    ctx->pc = 0x16d34cu;
    // NOP
label_16d350:
    // 0x16d350: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16d350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d354:
    // 0x16d354: 0x0  nop
    ctx->pc = 0x16d354u;
    // NOP
label_16d358:
    // 0x16d358: 0x0  nop
    ctx->pc = 0x16d358u;
    // NOP
label_16d35c:
    // 0x16d35c: 0x4500fffa  bc1f        . + 4 + (-0x6 << 2)
label_16d360:
    if (ctx->pc == 0x16D360u) {
        ctx->pc = 0x16D364u;
        goto label_16d364;
    }
    ctx->pc = 0x16D35Cu;
    {
        const bool branch_taken_0x16d35c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d35c) {
            ctx->pc = 0x16D348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d348;
        }
    }
    ctx->pc = 0x16D364u;
label_16d364:
    // 0x16d364: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16d364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16d368:
    // 0x16d368: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16d368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16d36c:
    // 0x16d36c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16d36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16d370:
    // 0x16d370: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16d370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16d374:
    // 0x16d374: 0x10000002  b           . + 4 + (0x2 << 2)
label_16d378:
    if (ctx->pc == 0x16D378u) {
        ctx->pc = 0x16D37Cu;
        goto label_16d37c;
    }
    ctx->pc = 0x16D374u;
    {
        const bool branch_taken_0x16d374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d374) {
            ctx->pc = 0x16D380u;
            goto label_16d380;
        }
    }
    ctx->pc = 0x16D37Cu;
label_16d37c:
    // 0x16d37c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x16d37cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_16d380:
    // 0x16d380: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16d380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d384:
    // 0x16d384: 0x0  nop
    ctx->pc = 0x16d384u;
    // NOP
label_16d388:
    // 0x16d388: 0x0  nop
    ctx->pc = 0x16d388u;
    // NOP
label_16d38c:
    // 0x16d38c: 0x4501fffb  bc1t        . + 4 + (-0x5 << 2)
label_16d390:
    if (ctx->pc == 0x16D390u) {
        ctx->pc = 0x16D394u;
        goto label_16d394;
    }
    ctx->pc = 0x16D38Cu;
    {
        const bool branch_taken_0x16d38c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d38c) {
            ctx->pc = 0x16D37Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d37c;
        }
    }
    ctx->pc = 0x16D394u;
label_16d394:
    // 0x16d394: 0xc6210228  lwc1        $f1, 0x228($s1)
    ctx->pc = 0x16d394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16d398:
    // 0x16d398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d39c:
    // 0x16d39c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x16d39cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_16d3a0:
    // 0x16d3a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16d3a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_16d3a4:
    // 0x16d3a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16d3a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_16d3a8:
    // 0x16d3a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16d3a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16d3ac:
    // 0x16d3ac: 0xc055c40  jal         func_157100
label_16d3b0:
    if (ctx->pc == 0x16D3B0u) {
        ctx->pc = 0x16D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3ACu;
        // 0x16d3b0: 0xe6200224  swc1        $f0, 0x224($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D3B4u;
        goto label_16d3b4;
    }
    ctx->pc = 0x16D3ACu;
    SET_GPR_U32(ctx, 31, 0x16D3B4u);
    ctx->pc = 0x16D3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D3ACu;
    // 0x16d3b0: 0xe6200224  swc1        $f0, 0x224($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16D3ACu, 0x16D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3B4u;
label_16d3b4:
    // 0x16d3b4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16d3b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16d3b8:
    // 0x16d3b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d3bc:
    // 0x16d3bc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16d3bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16d3c0:
    // 0x16d3c0: 0x320f809  jalr        $t9
label_16d3c4:
    if (ctx->pc == 0x16D3C4u) {
        ctx->pc = 0x16D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3C0u;
        // 0x16d3c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D3C8u;
        goto label_16d3c8;
    }
    ctx->pc = 0x16D3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D3C8u);
        ctx->pc = 0x16D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3C0u;
        // 0x16d3c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D3C0u, 0x16D3C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D3C8u;
label_16d3c8:
    // 0x16d3c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d3cc:
    // 0x16d3cc: 0xc042118  jal         func_108460
label_16d3d0:
    if (ctx->pc == 0x16D3D0u) {
        ctx->pc = 0x16D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3CCu;
        // 0x16d3d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D3D4u;
        goto label_16d3d4;
    }
    ctx->pc = 0x16D3CCu;
    SET_GPR_U32(ctx, 31, 0x16D3D4u);
    ctx->pc = 0x16D3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D3CCu;
    // 0x16d3d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16D3CCu, 0x16D3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3D4u;
label_16d3d4:
    // 0x16d3d4: 0xae300230  sw          $s0, 0x230($s1)
    ctx->pc = 0x16d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 16));
label_16d3d8:
    // 0x16d3d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_16d3dc:
    if (ctx->pc == 0x16D3DCu) {
        ctx->pc = 0x16D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3D8u;
        // 0x16d3dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D3E0u;
        goto label_16d3e0;
    }
    ctx->pc = 0x16D3D8u;
    {
        const bool branch_taken_0x16d3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3D8u;
        // 0x16d3dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3d8) {
            ctx->pc = 0x16D3FCu;
            goto label_16d3fc;
        }
    }
    ctx->pc = 0x16D3E0u;
label_16d3e0:
    // 0x16d3e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_16d3e4:
    if (ctx->pc == 0x16D3E4u) {
        ctx->pc = 0x16D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3E0u;
        // 0x16d3e4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D3E8u;
        goto label_16d3e8;
    }
    ctx->pc = 0x16D3E0u;
    {
        const bool branch_taken_0x16d3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3E0u;
        // 0x16d3e4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3e0) {
            ctx->pc = 0x16D400u;
            goto label_16d400;
        }
    }
    ctx->pc = 0x16D3E8u;
label_16d3e8:
    // 0x16d3e8: 0xc059990  jal         func_166640
label_16d3ec:
    if (ctx->pc == 0x16D3ECu) {
        ctx->pc = 0x16D3F0u;
        goto label_16d3f0;
    }
    ctx->pc = 0x16D3E8u;
    SET_GPR_U32(ctx, 31, 0x16D3F0u);
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x16D3E8u, 0x16D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3F0u;
label_16d3f0:
    // 0x16d3f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_16d3f4:
    if (ctx->pc == 0x16D3F4u) {
        ctx->pc = 0x16D3F8u;
        goto label_16d3f8;
    }
    ctx->pc = 0x16D3F0u;
    {
        const bool branch_taken_0x16d3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d3f0) {
            ctx->pc = 0x16D3FCu;
            goto label_16d3fc;
        }
    }
    ctx->pc = 0x16D3F8u;
label_16d3f8:
    // 0x16d3f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d3fc:
    // 0x16d3fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16d3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16d400:
    // 0x16d400: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16d400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16d404:
    // 0x16d404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16d408:
    // 0x16d408: 0x3e00008  jr          $ra
label_16d40c:
    if (ctx->pc == 0x16D40Cu) {
        ctx->pc = 0x16D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D408u;
        // 0x16d40c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D410u;
        goto label_fallthrough_0x16d408;
    }
    ctx->pc = 0x16D408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D408u;
        // 0x16d40c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16d408:
    ctx->pc = 0x16D410u;
}
