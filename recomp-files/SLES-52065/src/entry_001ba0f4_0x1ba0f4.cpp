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

// Function: entry_001ba0f4
// Address: 0x1ba0f4 - 0x1ba1e4
void entry_001ba0f4_0x1ba0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba0f4_0x1ba0f4");
#endif

    switch (ctx->pc) {
        case 0x1ba180u: goto label_1ba180;
        default: break;
    }

    ctx->pc = 0x1ba0f4u;

    // 0x1ba0f4: 0xc6830040  lwc1        $f3, 0x40($s4)
    ctx->pc = 0x1ba0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ba0f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ba0fc: 0xc6820090  lwc1        $f2, 0x90($s4)
    ctx->pc = 0x1ba0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ba100: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1ba100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1ba104: 0xc68100b0  lwc1        $f1, 0xB0($s4)
    ctx->pc = 0x1ba104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba108: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1ba108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ba10c: 0xc424f4b0  lwc1        $f4, -0xB50($at)
    ctx->pc = 0x1ba10cu;
    { uint32_t bits = FAST_READ32(0x36F4B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ba110: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1ba110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ba114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba118: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1ba118u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1ba11c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ba11cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ba120: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1ba120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1ba124: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1ba124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1ba128: 0xc6830044  lwc1        $f3, 0x44($s4)
    ctx->pc = 0x1ba128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ba12c: 0xc6820094  lwc1        $f2, 0x94($s4)
    ctx->pc = 0x1ba12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ba130: 0xc68100b4  lwc1        $f1, 0xB4($s4)
    ctx->pc = 0x1ba130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba134: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1ba134u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1ba138: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ba138u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ba13c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1ba13cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1ba140: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1ba140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1ba144: 0xc6830048  lwc1        $f3, 0x48($s4)
    ctx->pc = 0x1ba144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ba148: 0xc6820098  lwc1        $f2, 0x98($s4)
    ctx->pc = 0x1ba148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ba14c: 0xc68100b8  lwc1        $f1, 0xB8($s4)
    ctx->pc = 0x1ba14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba150: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1ba150u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1ba154: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ba154u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ba158: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1ba158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1ba15c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1ba15cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1ba160: 0xc683004c  lwc1        $f3, 0x4C($s4)
    ctx->pc = 0x1ba160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ba164: 0xc682009c  lwc1        $f2, 0x9C($s4)
    ctx->pc = 0x1ba164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ba168: 0xc68100bc  lwc1        $f1, 0xBC($s4)
    ctx->pc = 0x1ba168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba16c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1ba16cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1ba170: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ba170u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ba174: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ba174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ba178: 0xc07d3a0  jal         func_1F4E80
    ctx->pc = 0x1BA178u;
    SET_GPR_U32(ctx, 31, 0x1BA180u);
    ctx->pc = 0x1BA17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA178u;
    // 0x1ba17c: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E80u, 0x1BA178u, 0x1BA180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA180u;
label_1ba180:
    // 0x1ba180: 0xc6800130  lwc1        $f0, 0x130($s4)
    ctx->pc = 0x1ba180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba184: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1ba188: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ba188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba18c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba190: 0x0  nop
    ctx->pc = 0x1ba190u;
    // NOP
    // 0x1ba194: 0xe4202f70  swc1        $f0, 0x2F70($at)
    ctx->pc = 0x1ba194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x212F70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x212F70u, _value); } while (0); }
    // 0x1ba198: 0xc6800134  lwc1        $f0, 0x134($s4)
    ctx->pc = 0x1ba198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba19c: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1ba1a0: 0xe4202f84  swc1        $f0, 0x2F84($at)
    ctx->pc = 0x1ba1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x212F84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x212F84u, _value); } while (0); }
    // 0x1ba1a4: 0xc6800130  lwc1        $f0, 0x130($s4)
    ctx->pc = 0x1ba1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba1a8: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1ba1ac: 0xe4202f90  swc1        $f0, 0x2F90($at)
    ctx->pc = 0x1ba1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x212F90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x212F90u, _value); } while (0); }
    // 0x1ba1b0: 0xc6800134  lwc1        $f0, 0x134($s4)
    ctx->pc = 0x1ba1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba1b4: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1ba1b8: 0xe4202f94  swc1        $f0, 0x2F94($at)
    ctx->pc = 0x1ba1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x212F94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x212F94u, _value); } while (0); }
    // 0x1ba1bc: 0xc6800130  lwc1        $f0, 0x130($s4)
    ctx->pc = 0x1ba1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba1c0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ba1c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba1c4: 0x0  nop
    ctx->pc = 0x1ba1c4u;
    // NOP
    // 0x1ba1c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA1C8u;
    {
        const bool branch_taken_0x1ba1c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1C8u;
        // 0x1ba1cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba1c8) {
            ctx->pc = 0x1BA1E4u;
            return;
        }
    }
    ctx->pc = 0x1BA1D0u;
    // 0x1ba1d0: 0xc6800134  lwc1        $f0, 0x134($s4)
    ctx->pc = 0x1ba1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba1d4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ba1d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba1d8: 0x0  nop
    ctx->pc = 0x1ba1d8u;
    // NOP
    // 0x1ba1dc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA1DCu;
    {
        const bool branch_taken_0x1ba1dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba1dc) {
            ctx->pc = 0x1BA1ECu;
            return;
        }
    }
    ctx->pc = 0x1BA1E4u;
}
