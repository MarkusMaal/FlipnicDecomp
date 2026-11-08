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

// Function: entry_00129a80
// Address: 0x129a80 - 0x129b00
void entry_00129a80_0x129a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129a80_0x129a80");
#endif

    switch (ctx->pc) {
        case 0x129a88u: goto label_129a88;
        case 0x129ac4u: goto label_129ac4;
        default: break;
    }

    ctx->pc = 0x129a80u;

    // 0x129a80: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x129A80u;
    SET_GPR_U32(ctx, 31, 0x129A88u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x129A80u, 0x129A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A88u;
label_129a88:
    // 0x129a88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x129a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x129a8c: 0x0  nop
    ctx->pc = 0x129a8cu;
    // NOP
    // 0x129a90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x129a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x129a94: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x129a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x129a98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129a9c: 0x0  nop
    ctx->pc = 0x129a9cu;
    // NOP
    // 0x129aa0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x129aa0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x129aa4: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x129aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x129aa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x129aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x129aac: 0x0  nop
    ctx->pc = 0x129aacu;
    // NOP
    // 0x129ab0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x129ab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x129ab4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x129ab4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x129ab8: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x129ab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x129abc: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x129ABCu;
    SET_GPR_U32(ctx, 31, 0x129AC4u);
    ctx->pc = 0x129AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129ABCu;
    // 0x129ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x129ABCu, 0x129AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129AC4u;
label_129ac4:
    // 0x129ac4: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x129ac4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x129ac8: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x129ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x129acc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129ad0: 0x0  nop
    ctx->pc = 0x129ad0u;
    // NOP
    // 0x129ad4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x129ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x129ad8: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x129ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x129adc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x129adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x129ae0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x129ae0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x129ae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129ae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129ae8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x129ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x129aec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x129aecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x129af0: 0x46801060  cvt.s.w     $f1, $f2
    ctx->pc = 0x129af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x129af4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x129af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x129af8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x129AF8u;
    {
        const bool branch_taken_0x129af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129AF8u;
        // 0x129afc: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129af8) {
            ctx->pc = 0x129B80u;
            return;
        }
    }
    ctx->pc = 0x129B00u;
}
