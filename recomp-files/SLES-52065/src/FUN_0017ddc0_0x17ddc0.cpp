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

// Function: FUN_0017ddc0
// Address: 0x17ddc0 - 0x17e134
void FUN_0017ddc0_0x17ddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017ddc0_0x17ddc0");
#endif

    switch (ctx->pc) {
        case 0x17deacu: goto label_17deac;
        case 0x17dec0u: goto label_17dec0;
        case 0x17dee0u: goto label_17dee0;
        case 0x17df44u: goto label_17df44;
        case 0x17df58u: goto label_17df58;
        case 0x17df88u: goto label_17df88;
        case 0x17e0b8u: goto label_17e0b8;
        default: break;
    }

    ctx->pc = 0x17ddc0u;

    // 0x17ddc0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17ddc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddc4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17ddc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddc8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17ddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17ddcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17ddccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddd0: 0x805f778  j           func_17DDE0
    ctx->pc = 0x17DDD0u;
    ctx->pc = 0x17DDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DDD0u;
    // 0x17ddd4: 0x24847730  addiu       $a0, $a0, 0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DDE0u;
    goto label_17dde0;
    ctx->pc = 0x17DDD8u;
    // 0x17ddd8: 0x0  nop
    ctx->pc = 0x17ddd8u;
    // NOP
    // 0x17dddc: 0x0  nop
    ctx->pc = 0x17dddcu;
    // NOP
label_17dde0:
    // 0x17dde0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x17dde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x17dde4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x17dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x17dde8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x17dde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x17ddec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17ddecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17ddf0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x17ddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x17ddf4: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x17ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x17ddf8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x17ddf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x17ddfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17de00: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17de00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x17de04: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x17de04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17de08: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17de08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x17de0c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x17de0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de10: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17de10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17de14: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17de14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de18: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17de18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17de1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17de1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17de20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17de20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17de24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17de24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17de28: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x17de28u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17de2c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x17de2cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17de30: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17de30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17de34: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17de34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17de38: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x17de38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
    // 0x17de3c: 0x4483b800  mtc1        $v1, $f23
    ctx->pc = 0x17de3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x17de40: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x17de40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17de44: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x17de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17de48: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x17de48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x17de4c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x17de4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17de50: 0x46170843  div.s       $f1, $f1, $f23
    ctx->pc = 0x17de50u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[23]); }
    // 0x17de54: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x17de54u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[23]); }
    // 0x17de58: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x17de58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x17de5c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x17de5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x17de60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17de60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x17de64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17de64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17de68: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x17de68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x17de6c: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x17de6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x17de70: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DE70u;
    {
        const bool branch_taken_0x17de70 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE70u;
        // 0x17de74: 0x4600bd06  mov.s       $f20, $f23 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de70) {
            ctx->pc = 0x17DE7Cu;
            goto label_17de7c;
        }
    }
    ctx->pc = 0x17DE78u;
    // 0x17de78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17de78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17de7c:
    // 0x17de7c: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DE7Cu;
    {
        const bool branch_taken_0x17de7c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE7Cu;
        // 0x17de80: 0x2a010021  slti        $at, $s0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de7c) {
            ctx->pc = 0x17DE88u;
            goto label_17de88;
        }
    }
    ctx->pc = 0x17DE84u;
    // 0x17de84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17de84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17de88:
    // 0x17de88: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DE88u;
    {
        const bool branch_taken_0x17de88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17de88) {
            ctx->pc = 0x17DE94u;
            goto label_17de94;
        }
    }
    ctx->pc = 0x17DE90u;
    // 0x17de90: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x17de90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_17de94:
    // 0x17de94: 0x2a210021  slti        $at, $s1, 0x21
    ctx->pc = 0x17de94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x17de98: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DE98u;
    {
        const bool branch_taken_0x17de98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE98u;
        // 0x17de9c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de98) {
            ctx->pc = 0x17DEA4u;
            goto label_17dea4;
        }
    }
    ctx->pc = 0x17DEA0u;
    // 0x17dea0: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x17dea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_17dea4:
    // 0x17dea4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x17dea4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17dea8: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x17dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_17deac:
    // 0x17deac: 0x28410020  slti        $at, $v0, 0x20
    ctx->pc = 0x17deacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x17deb0: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x17DEB0u;
    {
        const bool branch_taken_0x17deb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17deb0) {
            ctx->pc = 0x17DF18u;
            goto label_17df18;
        }
    }
    ctx->pc = 0x17DEB8u;
    // 0x17deb8: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17DEB8u;
    {
        const bool branch_taken_0x17deb8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEB8u;
        // 0x17debc: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17deb8) {
            ctx->pc = 0x17DF18u;
            goto label_17df18;
        }
    }
    ctx->pc = 0x17DEC0u;
label_17dec0:
    // 0x17dec0: 0x2333021  addu        $a2, $s1, $s3
    ctx->pc = 0x17dec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x17dec4: 0x28c10020  slti        $at, $a2, 0x20
    ctx->pc = 0x17dec4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x17dec8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x17DEC8u;
    {
        const bool branch_taken_0x17dec8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dec8) {
            ctx->pc = 0x17DF08u;
            goto label_17df08;
        }
    }
    ctx->pc = 0x17DED0u;
    // 0x17ded0: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x17DED0u;
    {
        const bool branch_taken_0x17ded0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x17DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DED0u;
        // 0x17ded4: 0x2122821  addu        $a1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ded0) {
            ctx->pc = 0x17DF08u;
            goto label_17df08;
        }
    }
    ctx->pc = 0x17DED8u;
    // 0x17ded8: 0xc05faf8  jal         func_17EBE0
    ctx->pc = 0x17DED8u;
    SET_GPR_U32(ctx, 31, 0x17DEE0u);
    ctx->pc = 0x17DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DED8u;
    // 0x17dedc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EBE0u, 0x17DED8u, 0x17DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DEE0u;
label_17dee0:
    // 0x17dee0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17DEE0u;
    {
        const bool branch_taken_0x17dee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dee0) {
            ctx->pc = 0x17DF08u;
            goto label_17df08;
        }
    }
    ctx->pc = 0x17DEE8u;
    // 0x17dee8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x17dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x17deec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17DEECu;
    {
        const bool branch_taken_0x17deec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17deec) {
            ctx->pc = 0x17DF08u;
            goto label_17df08;
        }
    }
    ctx->pc = 0x17DEF4u;
    // 0x17def4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x17def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17def8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x17def8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17defc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DEFCu;
    {
        const bool branch_taken_0x17defc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17defc) {
            ctx->pc = 0x17DF08u;
            goto label_17df08;
        }
    }
    ctx->pc = 0x17DF04u;
    // 0x17df04: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x17df04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17df08:
    // 0x17df08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17df08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17df0c: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x17df0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17df10: 0x1420ffeb  bnez        $at, . + 4 + (-0x15 << 2)
    ctx->pc = 0x17DF10u;
    {
        const bool branch_taken_0x17df10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17df10) {
            ctx->pc = 0x17DEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dec0;
        }
    }
    ctx->pc = 0x17DF18u;
label_17df18:
    // 0x17df18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17df18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17df1c: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x17df1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17df20: 0x1420ffe2  bnez        $at, . + 4 + (-0x1E << 2)
    ctx->pc = 0x17DF20u;
    {
        const bool branch_taken_0x17df20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF20u;
        // 0x17df24: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df20) {
            ctx->pc = 0x17DEACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17deac;
        }
    }
    ctx->pc = 0x17DF28u;
    // 0x17df28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17df28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17df2c: 0x16820043  bne         $s4, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x17DF2Cu;
    {
        const bool branch_taken_0x17df2c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x17DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF2Cu;
        // 0x17df30: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df2c) {
            ctx->pc = 0x17E03Cu;
            goto label_17e03c;
        }
    }
    ctx->pc = 0x17DF34u;
    // 0x17df34: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x17df34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17df38: 0x2e0f02d  daddu       $fp, $s7, $zero
    ctx->pc = 0x17df38u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df3c: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x17df3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df40: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x17df40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17df44:
    // 0x17df44: 0x0  nop
    ctx->pc = 0x17df44u;
    // NOP
    // 0x17df48: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x17df48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x17df4c: 0x2333021  addu        $a2, $s1, $s3
    ctx->pc = 0x17df4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x17df50: 0xc05faf8  jal         func_17EBE0
    ctx->pc = 0x17DF50u;
    SET_GPR_U32(ctx, 31, 0x17DF58u);
    ctx->pc = 0x17DF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF50u;
    // 0x17df54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EBE0u, 0x17DF50u, 0x17DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF58u;
label_17df58:
    // 0x17df58: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17df58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df5c: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x17DF5Cu;
    {
        const bool branch_taken_0x17df5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x17df5c) {
            ctx->pc = 0x17DFB4u;
            goto label_17dfb4;
        }
    }
    ctx->pc = 0x17DF64u;
    // 0x17df64: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x17df64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x17df68: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17DF68u;
    {
        const bool branch_taken_0x17df68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17df68) {
            ctx->pc = 0x17DFB4u;
            goto label_17dfb4;
        }
    }
    ctx->pc = 0x17DF70u;
    // 0x17df70: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x17df70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x17df74: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17df74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17df78: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17DF78u;
    {
        const bool branch_taken_0x17df78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF78u;
        // 0x17df7c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df78) {
            ctx->pc = 0x17DFB4u;
            goto label_17dfb4;
        }
    }
    ctx->pc = 0x17DF80u;
    // 0x17df80: 0xc05f570  jal         func_17D5C0
    ctx->pc = 0x17DF80u;
    SET_GPR_U32(ctx, 31, 0x17DF88u);
    ctx->pc = 0x17D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D5C0u, 0x17DF80u, 0x17DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF88u;
label_17df88:
    // 0x17df88: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17DF88u;
    {
        const bool branch_taken_0x17df88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17df88) {
            ctx->pc = 0x17DFB4u;
            goto label_17dfb4;
        }
    }
    ctx->pc = 0x17DF90u;
    // 0x17df90: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x17df90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x17df94: 0x212f021  addu        $fp, $s0, $s2
    ctx->pc = 0x17df94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x17df98: 0x233b821  addu        $s7, $s1, $s3
    ctx->pc = 0x17df98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x17df9c: 0xc455001c  lwc1        $f21, 0x1C($v0)
    ctx->pc = 0x17df9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17dfa0: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x17dfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17dfa4: 0xc4560024  lwc1        $f22, 0x24($v0)
    ctx->pc = 0x17dfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17dfa8: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x17dfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17dfac: 0x46150dc1  sub.s       $f23, $f1, $f21
    ctx->pc = 0x17dfacu;
    ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x17dfb0: 0x46160501  sub.s       $f20, $f0, $f22
    ctx->pc = 0x17dfb0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_17dfb4:
    // 0x17dfb4: 0x0  nop
    ctx->pc = 0x17dfb4u;
    // NOP
    // 0x17dfb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17dfb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17dfbc: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x17dfbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17dfc0: 0x1420ffe0  bnez        $at, . + 4 + (-0x20 << 2)
    ctx->pc = 0x17DFC0u;
    {
        const bool branch_taken_0x17dfc0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dfc0) {
            ctx->pc = 0x17DF44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17df44;
        }
    }
    ctx->pc = 0x17DFC8u;
    // 0x17dfc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17dfc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17dfcc: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x17dfccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17dfd0: 0x1420ffdc  bnez        $at, . + 4 + (-0x24 << 2)
    ctx->pc = 0x17DFD0u;
    {
        const bool branch_taken_0x17dfd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFD0u;
        // 0x17dfd4: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfd0) {
            ctx->pc = 0x17DF44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17df44;
        }
    }
    ctx->pc = 0x17DFD8u;
    // 0x17dfd8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17dfdc: 0x13c20005  beq         $fp, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17DFDCu;
    {
        const bool branch_taken_0x17dfdc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x17dfdc) {
            ctx->pc = 0x17DFF4u;
            goto label_17dff4;
        }
    }
    ctx->pc = 0x17DFE4u;
    // 0x17dfe4: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DFE4u;
    {
        const bool branch_taken_0x17dfe4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x17dfe4) {
            ctx->pc = 0x17DFF4u;
            goto label_17dff4;
        }
    }
    ctx->pc = 0x17DFECu;
    // 0x17dfec: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x17dfecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dff0: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x17dff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_17dff4:
    // 0x17dff4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17dff8: 0x17c2001c  bne         $fp, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x17DFF8u;
    {
        const bool branch_taken_0x17dff8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x17dff8) {
            ctx->pc = 0x17E06Cu;
            goto label_17e06c;
        }
    }
    ctx->pc = 0x17E000u;
    // 0x17e000: 0x16e2001a  bne         $s7, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x17E000u;
    {
        const bool branch_taken_0x17e000 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E000u;
        // 0x17e004: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e000) {
            ctx->pc = 0x17E06Cu;
            goto label_17e06c;
        }
    }
    ctx->pc = 0x17E008u;
    // 0x17e008: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17e008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17e00c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17e010: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17e014: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17e014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17e018: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17e018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17e01c: 0x2463ffc4  addiu       $v1, $v1, -0x3C
    ctx->pc = 0x17e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
    // 0x17e020: 0x2442ffc4  addiu       $v0, $v0, -0x3C
    ctx->pc = 0x17e020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
    // 0x17e024: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17e024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17e028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e02c: 0x0  nop
    ctx->pc = 0x17e02cu;
    // NOP
    // 0x17e030: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x17e030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x17e034: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17E034u;
    {
        const bool branch_taken_0x17e034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E034u;
        // 0x17e038: 0x468005a0  cvt.s.w     $f22, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e034) {
            ctx->pc = 0x17E06Cu;
            goto label_17e06c;
        }
    }
    ctx->pc = 0x17E03Cu;
label_17e03c:
    // 0x17e03c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17e040: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17e044: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17e044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17e048: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17e048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17e04c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17e050: 0x2463ffc4  addiu       $v1, $v1, -0x3C
    ctx->pc = 0x17e050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
    // 0x17e054: 0x2442ffc4  addiu       $v0, $v0, -0x3C
    ctx->pc = 0x17e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
    // 0x17e058: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17e058u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17e05c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e060: 0x0  nop
    ctx->pc = 0x17e060u;
    // NOP
    // 0x17e064: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x17e064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x17e068: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x17e068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_17e06c:
    // 0x17e06c: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x17e06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e070: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x17e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x17e074: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x17e074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e078: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17e078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e07c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e080: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17e080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e084: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x17e084u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x17e088: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x17e088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x17e08c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x17e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x17e090: 0x46170843  div.s       $f1, $f1, $f23
    ctx->pc = 0x17e090u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[23]); }
    // 0x17e094: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x17e094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x17e098: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x17e098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x17e09c: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x17e09cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x17e0a0: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x17e0a0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x17e0a4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x17e0a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x17e0a8: 0x0  nop
    ctx->pc = 0x17e0a8u;
    // NOP
    // 0x17e0ac: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x17e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x17e0b0: 0xc05faf8  jal         func_17EBE0
    ctx->pc = 0x17E0B0u;
    SET_GPR_U32(ctx, 31, 0x17E0B8u);
    ctx->pc = 0x17E0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E0B0u;
    // 0x17e0b4: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EBE0u, 0x17E0B0u, 0x17E0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E0B8u;
label_17e0b8:
    // 0x17e0b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E0B8u;
    {
        const bool branch_taken_0x17e0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e0b8) {
            ctx->pc = 0x17E0CCu;
            goto label_17e0cc;
        }
    }
    ctx->pc = 0x17E0C0u;
    // 0x17e0c0: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x17e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x17e0c4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E0C4u;
    {
        const bool branch_taken_0x17e0c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e0c4) {
            ctx->pc = 0x17E0D8u;
            goto label_17e0d8;
        }
    }
    ctx->pc = 0x17E0CCu;
label_17e0cc:
    // 0x17e0cc: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x17e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x17e0d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17E0D0u;
    {
        const bool branch_taken_0x17e0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0D0u;
        // 0x17e0d4: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0d0) {
            ctx->pc = 0x17E0F4u;
            goto label_17e0f4;
        }
    }
    ctx->pc = 0x17E0D8u;
label_17e0d8:
    // 0x17e0d8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x17e0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x17e0dc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x17e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x17e0e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17e0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17e0e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17e0e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17e0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e0ec: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x17e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x17e0f0: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x17e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_17e0f4:
    // 0x17e0f4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x17e0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17e0f8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x17e0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x17e0fc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x17e0fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17e100: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x17e100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17e104: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x17e104u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17e108: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17e108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17e10c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x17e10cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17e110: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17e110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17e114: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17e114u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17e118: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17e118u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e11c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17e11cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e120: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17e120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e124: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17e124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e128: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17e128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e12c: 0x3e00008  jr          $ra
    ctx->pc = 0x17E12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E12Cu;
        // 0x17e130: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E134u;
}
