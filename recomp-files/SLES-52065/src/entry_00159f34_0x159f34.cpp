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

// Function: entry_00159f34
// Address: 0x159f34 - 0x159fa4
void entry_00159f34_0x159f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159f34_0x159f34");
#endif

    ctx->pc = 0x159f34u;

    // 0x159f34: 0x8604022a  lh          $a0, 0x22A($s0)
    ctx->pc = 0x159f34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
    // 0x159f38: 0xc6040220  lwc1        $f4, 0x220($s0)
    ctx->pc = 0x159f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x159f3c: 0x86050230  lh          $a1, 0x230($s0)
    ctx->pc = 0x159f3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x159f40: 0x86030228  lh          $v1, 0x228($s0)
    ctx->pc = 0x159f40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x159f44: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x159f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x159f48: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x159f48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f4c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x159f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x159f50: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x159f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x159f54: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x159f54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159f58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x159f58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f5c: 0x0  nop
    ctx->pc = 0x159f5cu;
    // NOP
    // 0x159f60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x159f60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x159f64: 0x460308c3  div.s       $f3, $f1, $f3
    ctx->pc = 0x159f64u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x159f68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159f6c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x159f6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x159f70: 0x46022043  div.s       $f1, $f4, $f2
    ctx->pc = 0x159f70u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x159f74: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x159f74u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x159f78: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x159f78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x159f7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x159f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x159f80: 0xe60001c4  swc1        $f0, 0x1C4($s0)
    ctx->pc = 0x159f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
    // 0x159f84: 0xc6010220  lwc1        $f1, 0x220($s0)
    ctx->pc = 0x159f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159f88: 0xc60001c4  lwc1        $f0, 0x1C4($s0)
    ctx->pc = 0x159f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159f8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x159f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x159f90: 0xe6000224  swc1        $f0, 0x224($s0)
    ctx->pc = 0x159f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
    // 0x159f94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x159f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159f98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x159F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F9Cu;
        // 0x159fa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159FA4u;
}
