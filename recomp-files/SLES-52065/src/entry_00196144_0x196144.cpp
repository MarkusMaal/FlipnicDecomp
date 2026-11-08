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

// Function: entry_00196144
// Address: 0x196144 - 0x196178
void entry_00196144_0x196144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196144_0x196144");
#endif

    switch (ctx->pc) {
        case 0x196154u: goto label_196154;
        case 0x196170u: goto label_196170;
        default: break;
    }

    ctx->pc = 0x196144u;

    // 0x196144: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x196144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x196148: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x196148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x19614c: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x19614Cu;
    SET_GPR_U32(ctx, 31, 0x196154u);
    ctx->pc = 0x196150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19614Cu;
    // 0x196150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x19614Cu, 0x196154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196154u;
label_196154:
    // 0x196154: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x196154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x196158: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x196158u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19615c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x19615cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x196160: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x196160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x196164: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x196164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x196168: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x196168u;
    SET_GPR_U32(ctx, 31, 0x196170u);
    ctx->pc = 0x19616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196168u;
    // 0x19616c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x196168u, 0x196170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196170u;
label_196170:
    // 0x196170: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x196170u;
    {
        const bool branch_taken_0x196170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196170) {
            ctx->pc = 0x1961D8u;
            return;
        }
    }
    ctx->pc = 0x196178u;
}
