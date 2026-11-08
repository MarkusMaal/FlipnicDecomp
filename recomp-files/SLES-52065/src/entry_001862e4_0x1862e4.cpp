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

// Function: entry_001862e4
// Address: 0x1862e4 - 0x186338
void entry_001862e4_0x1862e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001862e4_0x1862e4");
#endif

    switch (ctx->pc) {
        case 0x18630cu: goto label_18630c;
        case 0x186330u: goto label_186330;
        default: break;
    }

    ctx->pc = 0x1862e4u;

    // 0x1862e4: 0x0  nop
    ctx->pc = 0x1862e4u;
    // NOP
    // 0x1862e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1862e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1862ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1862ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1862f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1862f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1862f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1862f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1862f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1862fc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1862fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x186300: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x186300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x186304: 0xc04b1c8  jal         func_12C720
    ctx->pc = 0x186304u;
    SET_GPR_U32(ctx, 31, 0x18630Cu);
    ctx->pc = 0x186308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186304u;
    // 0x186308: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C720u, 0x186304u, 0x18630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18630Cu;
label_18630c:
    // 0x18630c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x18630cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x186310: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x186310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x186314: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186314u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186318: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x186318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18631c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18631cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x186320: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186320u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x186324: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x186324u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x186328: 0xc04b1c8  jal         func_12C720
    ctx->pc = 0x186328u;
    SET_GPR_U32(ctx, 31, 0x186330u);
    ctx->pc = 0x18632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186328u;
    // 0x18632c: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C720u, 0x186328u, 0x186330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186330u;
label_186330:
    // 0x186330: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x186330u;
    {
        const bool branch_taken_0x186330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186330) {
            ctx->pc = 0x186360u;
            return;
        }
    }
    ctx->pc = 0x186338u;
}
