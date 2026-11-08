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

// Function: entry_001ba220
// Address: 0x1ba220 - 0x1ba2b4
void entry_001ba220_0x1ba220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba220_0x1ba220");
#endif

    switch (ctx->pc) {
        case 0x1ba29cu: goto label_1ba29c;
        case 0x1ba2acu: goto label_1ba2ac;
        default: break;
    }

    ctx->pc = 0x1ba220u;

    // 0x1ba220: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ba220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba224: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1ba224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ba228: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x1ba228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba22c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1ba22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1ba230: 0x24422fa0  addiu       $v0, $v0, 0x2FA0
    ctx->pc = 0x1ba230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12192));
    // 0x1ba234: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x1ba234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba238: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x1ba238u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x212FA0u));
    // 0x1ba23c: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x1ba23cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x212FB0u));
    // 0x1ba240: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ba240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ba244: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x1ba244u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x212FC0u));
    // 0x1ba248: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1ba248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1ba24c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba24cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ba250: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1ba250u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x212FD0u));
    // 0x1ba254: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba258: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1ba258u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1ba25c: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x1ba25cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x1ba260: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x1ba260u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x1ba264: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x1ba264u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x1ba268: 0x46030d00  add.s       $f20, $f1, $f3
    ctx->pc = 0x1ba268u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1ba26c: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1ba26cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1ba270: 0x46020540  add.s       $f21, $f0, $f2
    ctx->pc = 0x1ba270u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ba274: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1ba274u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x1ba278: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x1ba278u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1ba27c: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x1ba27cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1ba280: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x1ba280u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1ba284: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x1ba284u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1ba288: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x1ba288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1ba28c: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x1ba28cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ba290: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1ba290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1ba294: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x1BA294u;
    SET_GPR_U32(ctx, 31, 0x1BA29Cu);
    ctx->pc = 0x1BA298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA294u;
    // 0x1ba298: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x1BA294u, 0x1BA29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA29Cu;
label_1ba29c:
    // 0x1ba29c: 0xc68c00a4  lwc1        $f12, 0xA4($s4)
    ctx->pc = 0x1ba29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ba2a0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1ba2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1ba2a4: 0xc07d3d4  jal         func_1F4F50
    ctx->pc = 0x1BA2A4u;
    SET_GPR_U32(ctx, 31, 0x1BA2ACu);
    ctx->pc = 0x1BA2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA2A4u;
    // 0x1ba2a8: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x1BA2A4u, 0x1BA2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA2ACu;
label_1ba2ac:
    // 0x1ba2ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ba2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ba2b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ba2b4u;
}
