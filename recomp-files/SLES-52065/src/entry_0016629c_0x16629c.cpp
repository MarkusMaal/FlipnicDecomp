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

// Function: entry_0016629c
// Address: 0x16629c - 0x166320
void entry_0016629c_0x16629c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016629c_0x16629c");
#endif

    switch (ctx->pc) {
        case 0x16630cu: goto label_16630c;
        default: break;
    }

    ctx->pc = 0x16629cu;

    // 0x16629c: 0x86030222  lh          $v1, 0x222($s0)
    ctx->pc = 0x16629cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x1662a0: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x1662a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x1662a4: 0x8604022c  lh          $a0, 0x22C($s0)
    ctx->pc = 0x1662a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x1662a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1662a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1662ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1662acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1662b0: 0xc6050228  lwc1        $f5, 0x228($s0)
    ctx->pc = 0x1662b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1662b4: 0x86020220  lh          $v0, 0x220($s0)
    ctx->pc = 0x1662b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1662b8: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1662b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1662bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1662bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1662c0: 0x0  nop
    ctx->pc = 0x1662c0u;
    // NOP
    // 0x1662c4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1662c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1662c8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1662c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1662cc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1662ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1662d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1662d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1662d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1662d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1662d8: 0x46041103  div.s       $f4, $f2, $f4
    ctx->pc = 0x1662d8u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[2], ctx->f[4]); }
    // 0x1662dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1662dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1662e0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1662e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1662e4: 0x46032883  div.s       $f2, $f5, $f3
    ctx->pc = 0x1662e4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x1662e8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1662e8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1662ec: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1662ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1662f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1662f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1662f4: 0xe60001c4  swc1        $f0, 0x1C4($s0)
    ctx->pc = 0x1662f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
    // 0x1662f8: 0xc6000228  lwc1        $f0, 0x228($s0)
    ctx->pc = 0x1662f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1662fc: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x1662fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
    // 0x166300: 0xc60001c4  lwc1        $f0, 0x1C4($s0)
    ctx->pc = 0x166300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166304: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x166304u;
    SET_GPR_U32(ctx, 31, 0x16630Cu);
    ctx->pc = 0x166308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166304u;
    // 0x166308: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x166304u, 0x16630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16630Cu;
label_16630c:
    // 0x16630c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16630cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x166310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x166310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166318: 0x3e00008  jr          $ra
    ctx->pc = 0x166318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166318u;
        // 0x16631c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166320u;
}
