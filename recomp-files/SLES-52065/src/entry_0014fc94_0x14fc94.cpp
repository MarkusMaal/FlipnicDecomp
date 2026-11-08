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

// Function: entry_0014fc94
// Address: 0x14fc94 - 0x14fe48
void entry_0014fc94_0x14fc94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fc94_0x14fc94");
#endif

    switch (ctx->pc) {
        case 0x14fca0u: goto label_14fca0;
        case 0x14fca8u: goto label_14fca8;
        case 0x14fcb0u: goto label_14fcb0;
        case 0x14fcb8u: goto label_14fcb8;
        case 0x14fce4u: goto label_14fce4;
        case 0x14fd10u: goto label_14fd10;
        case 0x14fd60u: goto label_14fd60;
        case 0x14fd70u: goto label_14fd70;
        case 0x14fd80u: goto label_14fd80;
        case 0x14fda4u: goto label_14fda4;
        case 0x14fdb4u: goto label_14fdb4;
        case 0x14fdc4u: goto label_14fdc4;
        case 0x14fdd4u: goto label_14fdd4;
        default: break;
    }

    ctx->pc = 0x14fc94u;

    // 0x14fc94: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x14fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x14fc98: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x14FC98u;
    SET_GPR_U32(ctx, 31, 0x14FCA0u);
    ctx->pc = 0x14FC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FC98u;
    // 0x14fc9c: 0x528821  addu        $s1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x14FC98u, 0x14FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCA0u;
label_14fca0:
    // 0x14fca0: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x14FCA0u;
    SET_GPR_U32(ctx, 31, 0x14FCA8u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x14FCA0u, 0x14FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCA8u;
label_14fca8:
    // 0x14fca8: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x14FCA8u;
    SET_GPR_U32(ctx, 31, 0x14FCB0u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x14FCA8u, 0x14FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCB0u;
label_14fcb0:
    // 0x14fcb0: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x14FCB0u;
    SET_GPR_U32(ctx, 31, 0x14FCB8u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x14FCB0u, 0x14FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCB8u;
label_14fcb8:
    // 0x14fcb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fcb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fcbc: 0xc6610070  lwc1        $f1, 0x70($s3)
    ctx->pc = 0x14fcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fcc0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x14fcc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14fcc4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14fcc8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x14fcc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14fccc: 0xc6600068  lwc1        $f0, 0x68($s3)
    ctx->pc = 0x14fcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fcd0: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x14fcd0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x14fcd4: 0x0  nop
    ctx->pc = 0x14fcd4u;
    // NOP
    // 0x14fcd8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14fcd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14fcdc: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x14FCDCu;
    SET_GPR_U32(ctx, 31, 0x14FCE4u);
    ctx->pc = 0x14FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FCDCu;
    // 0x14fce0: 0x460105c0  add.s       $f23, $f0, $f1 (Delay Slot)
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x14FCDCu, 0x14FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCE4u;
label_14fce4:
    // 0x14fce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fce8: 0xc6610074  lwc1        $f1, 0x74($s3)
    ctx->pc = 0x14fce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fcec: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x14fcecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x14fcf0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14fcf4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14fcf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14fcf8: 0xc660006c  lwc1        $f0, 0x6C($s3)
    ctx->pc = 0x14fcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fcfc: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x14fcfcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x14fd00: 0x0  nop
    ctx->pc = 0x14fd00u;
    // NOP
    // 0x14fd04: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14fd04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14fd08: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x14FD08u;
    SET_GPR_U32(ctx, 31, 0x14FD10u);
    ctx->pc = 0x14FD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD08u;
    // 0x14fd0c: 0x46010600  add.s       $f24, $f0, $f1 (Delay Slot)
    ctx->f[24] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x14FD08u, 0x14FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD10u;
label_14fd10:
    // 0x14fd10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fd10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fd14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14fd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd18: 0xc662007c  lwc1        $f2, 0x7C($s3)
    ctx->pc = 0x14fd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fd1c: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x14fd1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x14fd20: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14fd24: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x14fd24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14fd28: 0xc6610078  lwc1        $f1, 0x78($s3)
    ctx->pc = 0x14fd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fd2c: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x14fd2cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x14fd30: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x14fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x14fd34: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x14fd34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x14fd38: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x14fd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fd3c: 0x46020e40  add.s       $f25, $f1, $f2
    ctx->pc = 0x14fd3cu;
    ctx->f[25] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14fd40: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14fd40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14fd44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fd44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fd48: 0x0  nop
    ctx->pc = 0x14fd48u;
    // NOP
    // 0x14fd4c: 0x46000e83  div.s       $f26, $f1, $f0
    ctx->pc = 0x14fd4cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14fd50: 0x0  nop
    ctx->pc = 0x14fd50u;
    // NOP
    // 0x14fd54: 0x0  nop
    ctx->pc = 0x14fd54u;
    // NOP
    // 0x14fd58: 0xc054160  jal         func_150580
    ctx->pc = 0x14FD58u;
    SET_GPR_U32(ctx, 31, 0x14FD60u);
    ctx->pc = 0x150580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150580u, 0x14FD58u, 0x14FD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD60u;
label_14fd60:
    // 0x14fd60: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x14fd60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x14fd64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14fd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd68: 0xc054160  jal         func_150580
    ctx->pc = 0x14FD68u;
    SET_GPR_U32(ctx, 31, 0x14FD70u);
    ctx->pc = 0x14FD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD68u;
    // 0x14fd6c: 0x4600eec0  add.s       $f27, $f29, $f0 (Delay Slot)
    ctx->f[27] = FPU_ADD_S(ctx->f[29], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x150580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150580u, 0x14FD68u, 0x14FD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD70u;
label_14fd70:
    // 0x14fd70: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x14fd70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x14fd74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14fd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd78: 0xc054160  jal         func_150580
    ctx->pc = 0x14FD78u;
    SET_GPR_U32(ctx, 31, 0x14FD80u);
    ctx->pc = 0x14FD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD78u;
    // 0x14fd7c: 0x4600f700  add.s       $f28, $f30, $f0 (Delay Slot)
    ctx->f[28] = FPU_ADD_S(ctx->f[30], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x150580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150580u, 0x14FD78u, 0x14FD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD80u;
label_14fd80:
    // 0x14fd80: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x14fd80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x14fd84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14fd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd88: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x14fd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14fd8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14fd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fd90: 0x4600f800  add.s       $f0, $f31, $f0
    ctx->pc = 0x14fd90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], ctx->f[0]);
    // 0x14fd94: 0xe63b0000  swc1        $f27, 0x0($s1)
    ctx->pc = 0x14fd94u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x14fd98: 0xe63c0004  swc1        $f28, 0x4($s1)
    ctx->pc = 0x14fd98u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x14fd9c: 0xc054110  jal         func_150440
    ctx->pc = 0x14FD9Cu;
    SET_GPR_U32(ctx, 31, 0x14FDA4u);
    ctx->pc = 0x14FDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD9Cu;
    // 0x14fda0: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x150440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150440u, 0x14FD9Cu, 0x14FDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDA4u;
label_14fda4:
    // 0x14fda4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x14fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14fda8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x14fda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14fdac: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x14FDACu;
    SET_GPR_U32(ctx, 31, 0x14FDB4u);
    ctx->pc = 0x14FDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FDACu;
    // 0x14fdb0: 0x266600d0  addiu       $a2, $s3, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x14FDACu, 0x14FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDB4u;
label_14fdb4:
    // 0x14fdb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14fdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fdb8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x14fdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14fdbc: 0xc054110  jal         func_150440
    ctx->pc = 0x14FDBCu;
    SET_GPR_U32(ctx, 31, 0x14FDC4u);
    ctx->pc = 0x14FDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FDBCu;
    // 0x14fdc0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150440u, 0x14FDBCu, 0x14FDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDC4u;
label_14fdc4:
    // 0x14fdc4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x14fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x14fdc8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x14fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14fdcc: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x14FDCCu;
    SET_GPR_U32(ctx, 31, 0x14FDD4u);
    ctx->pc = 0x14FDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FDCCu;
    // 0x14fdd0: 0x266600e0  addiu       $a2, $s3, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x14FDCCu, 0x14FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDD4u;
label_14fdd4:
    // 0x14fdd4: 0x4617c001  sub.s       $f0, $f24, $f23
    ctx->pc = 0x14fdd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[23]);
    // 0x14fdd8: 0x3c034480  lui         $v1, 0x4480
    ctx->pc = 0x14fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17536 << 16));
    // 0x14fddc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x14fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x14fde0: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x14fde0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x14fde4: 0x461a0043  div.s       $f1, $f0, $f26
    ctx->pc = 0x14fde4u;
    { if (ctx->f[26] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[26]); }
    // 0x14fde8: 0x461ad002  mul.s       $f0, $f26, $f26
    ctx->pc = 0x14fde8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[26]);
    // 0x14fdec: 0x4600c803  div.s       $f0, $f25, $f0
    ctx->pc = 0x14fdecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[25], ctx->f[0]); }
    // 0x14fdf0: 0xe637000c  swc1        $f23, 0xC($s1)
    ctx->pc = 0x14fdf0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x14fdf4: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x14fdf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x14fdf8: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x14fdf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x14fdfc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14fdfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14fe00: 0xc6620064  lwc1        $f2, 0x64($s3)
    ctx->pc = 0x14fe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fe04: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x14fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x14fe08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fe08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fe0c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x14fe0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14fe10: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x14fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x14fe14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14fe14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14fe18: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x14fe18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x14fe1c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x14fe1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14fe20: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x14fe20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x14fe24: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x14fe24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x14fe28: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x14fe28u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x14fe2c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x14fe2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x14fe30: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14fe30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14fe34: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x14fe34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14fe38: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14fe38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14fe3c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14fe3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14fe40: 0x0  nop
    ctx->pc = 0x14fe40u;
    // NOP
    // 0x14fe44: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x14fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x14fe48u;
}
