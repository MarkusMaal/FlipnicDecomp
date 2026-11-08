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

// Function: entry_00129a14
// Address: 0x129a14 - 0x129a80
void entry_00129a14_0x129a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129a14_0x129a14");
#endif

    switch (ctx->pc) {
        case 0x129a1cu: goto label_129a1c;
        default: break;
    }

    ctx->pc = 0x129a14u;

    // 0x129a14: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x129A14u;
    SET_GPR_U32(ctx, 31, 0x129A1Cu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x129A14u, 0x129A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A1Cu;
label_129a1c:
    // 0x129a1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x129a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x129a20: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x129a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x129a24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129a24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129a28: 0x3c054380  lui         $a1, 0x4380
    ctx->pc = 0x129a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17280 << 16));
    // 0x129a2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x129a2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x129a30: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x129a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x129a34: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x129a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x129a38: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x129a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x129a3c: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x129a3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x129a40: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x129a40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129a44: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x129a44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x129a48: 0x0  nop
    ctx->pc = 0x129a48u;
    // NOP
    // 0x129a4c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x129a4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x129a50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x129a50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x129a54: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x129a54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x129a58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129a58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129a5c: 0x2483ff80  addiu       $v1, $a0, -0x80
    ctx->pc = 0x129a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x129a60: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x129a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x129a64: 0x0  nop
    ctx->pc = 0x129a64u;
    // NOP
    // 0x129a68: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x129a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x129a6c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x129a6cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x129a70: 0x0  nop
    ctx->pc = 0x129a70u;
    // NOP
    // 0x129a74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x129a74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x129a78: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x129A78u;
    {
        const bool branch_taken_0x129a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A78u;
        // 0x129a7c: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a78) {
            ctx->pc = 0x129B80u;
            return;
        }
    }
    ctx->pc = 0x129A80u;
}
