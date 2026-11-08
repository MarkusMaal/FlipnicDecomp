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

// Function: entry_00164ee8
// Address: 0x164ee8 - 0x164f38
void entry_00164ee8_0x164ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164ee8_0x164ee8");
#endif

    switch (ctx->pc) {
        case 0x164f00u: goto label_164f00;
        case 0x164f28u: goto label_164f28;
        default: break;
    }

    ctx->pc = 0x164ee8u;

    // 0x164ee8: 0xc66c0348  lwc1        $f12, 0x348($s3)
    ctx->pc = 0x164ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x164eec: 0x8e840248  lw          $a0, 0x248($s4)
    ctx->pc = 0x164eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 584)));
    // 0x164ef0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x164ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x164ef4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x164ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x164ef8: 0xc054888  jal         func_152220
    ctx->pc = 0x164EF8u;
    SET_GPR_U32(ctx, 31, 0x164F00u);
    ctx->pc = 0x164EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164EF8u;
    // 0x164efc: 0x8685024c  lh          $a1, 0x24C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152220u, 0x164EF8u, 0x164F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F00u;
label_164f00:
    // 0x164f00: 0x8685024c  lh          $a1, 0x24C($s4)
    ctx->pc = 0x164f00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 588)));
    // 0x164f04: 0x8e840244  lw          $a0, 0x244($s4)
    ctx->pc = 0x164f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 580)));
    // 0x164f08: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x164f08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164f0c: 0x0  nop
    ctx->pc = 0x164f0cu;
    // NOP
    // 0x164f10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x164f10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x164f14: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x164f14u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x164f18: 0x0  nop
    ctx->pc = 0x164f18u;
    // NOP
    // 0x164f1c: 0x0  nop
    ctx->pc = 0x164f1cu;
    // NOP
    // 0x164f20: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x164F20u;
    SET_GPR_U32(ctx, 31, 0x164F28u);
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x164F20u, 0x164F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F28u;
label_164f28:
    // 0x164f28: 0xc681022c  lwc1        $f1, 0x22C($s4)
    ctx->pc = 0x164f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164f2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x164f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x164f30: 0xe66002f0  swc1        $f0, 0x2F0($s3)
    ctx->pc = 0x164f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
    // 0x164f34: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x164f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x164f38u;
}
