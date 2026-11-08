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

// Function: entry_0016badc
// Address: 0x16badc - 0x16bb40
void entry_0016badc_0x16badc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016badc_0x16badc");
#endif

    switch (ctx->pc) {
        case 0x16bb18u: goto label_16bb18;
        default: break;
    }

    ctx->pc = 0x16badcu;

    // 0x16badc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x16badcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bae0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x16bae4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x16bae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16bae8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16bae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16baec: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x16baecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x16baf0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16baf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16baf4: 0x0  nop
    ctx->pc = 0x16baf4u;
    // NOP
    // 0x16baf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x16baf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16bafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16bafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bb00: 0x0  nop
    ctx->pc = 0x16bb00u;
    // NOP
    // 0x16bb04: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x16bb04u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16bb08: 0x0  nop
    ctx->pc = 0x16bb08u;
    // NOP
    // 0x16bb0c: 0x0  nop
    ctx->pc = 0x16bb0cu;
    // NOP
    // 0x16bb10: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x16BB10u;
    SET_GPR_U32(ctx, 31, 0x16BB18u);
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x16BB10u, 0x16BB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB18u;
label_16bb18:
    // 0x16bb18: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x16bb18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16bb1c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x16bb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x16bb20: 0xac207500  sw          $zero, 0x7500($at)
    ctx->pc = 0x16bb20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x367500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x367500u, _value); } while (0);
    // 0x16bb24: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x16bb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x16bb28: 0xac207508  sw          $zero, 0x7508($at)
    ctx->pc = 0x16bb28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x367508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x367508u, _value); } while (0);
    // 0x16bb2c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x16bb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x16bb30: 0xc78085fc  lwc1        $f0, -0x7A04($gp)
    ctx->pc = 0x16bb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bb34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16bb34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16bb38: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16bb38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16bb3c: 0xe4207504  swc1        $f0, 0x7504($at)
    ctx->pc = 0x16bb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x367504u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x367504u, _value); } while (0); }
    ctx->pc = 0x16bb40u;
}
