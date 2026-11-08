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

// Function: entry_001a5148
// Address: 0x1a5148 - 0x1a5178
void entry_001a5148_0x1a5148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5148_0x1a5148");
#endif

    switch (ctx->pc) {
        case 0x1a5150u: goto label_1a5150;
        default: break;
    }

    ctx->pc = 0x1a5148u;

    // 0x1a5148: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A5148u;
    SET_GPR_U32(ctx, 31, 0x1A5150u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A5148u, 0x1A5150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5150u;
label_1a5150:
    // 0x1a5150: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a5150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5154: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1a5154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1a5158: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a5158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a515c: 0x26640930  addiu       $a0, $s3, 0x930
    ctx->pc = 0x1a515cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2352));
    // 0x1a5160: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5164: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1a5164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1a5168: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a5168u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a516c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a516cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a5170: 0xc0699e0  jal         func_1A6780
    ctx->pc = 0x1A5170u;
    SET_GPR_U32(ctx, 31, 0x1A5178u);
    ctx->pc = 0x1A5174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5170u;
    // 0x1a5174: 0xae620758  sw          $v0, 0x758($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 1880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6780u, 0x1A5170u, 0x1A5178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5178u;
}
