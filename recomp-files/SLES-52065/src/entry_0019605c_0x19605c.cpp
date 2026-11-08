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

// Function: entry_0019605c
// Address: 0x19605c - 0x196088
void entry_0019605c_0x19605c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019605c_0x19605c");
#endif

    switch (ctx->pc) {
        case 0x196068u: goto label_196068;
        default: break;
    }

    ctx->pc = 0x19605cu;

    // 0x19605c: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x19605cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x196060: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x196060u;
    SET_GPR_U32(ctx, 31, 0x196068u);
    ctx->pc = 0x196064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196060u;
    // 0x196064: 0x8c440450  lw          $a0, 0x450($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x196060u, 0x196068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196068u;
label_196068:
    // 0x196068: 0x26220200  addiu       $v0, $s1, 0x200
    ctx->pc = 0x196068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x19606c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19606cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196070: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x196070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x196074: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x196074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x196078: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x196078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x19607c: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x19607cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x196080: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x196080u;
    SET_GPR_U32(ctx, 31, 0x196088u);
    ctx->pc = 0x196084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196080u;
    // 0x196084: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x196080u, 0x196088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196088u;
}
