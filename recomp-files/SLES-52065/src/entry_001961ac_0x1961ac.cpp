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

// Function: entry_001961ac
// Address: 0x1961ac - 0x1961d8
void entry_001961ac_0x1961ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001961ac_0x1961ac");
#endif

    switch (ctx->pc) {
        case 0x1961b8u: goto label_1961b8;
        default: break;
    }

    ctx->pc = 0x1961acu;

    // 0x1961ac: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x1961acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x1961b0: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1961B0u;
    SET_GPR_U32(ctx, 31, 0x1961B8u);
    ctx->pc = 0x1961B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1961B0u;
    // 0x1961b4: 0x8c440450  lw          $a0, 0x450($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1961B0u, 0x1961B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1961B8u;
label_1961b8:
    // 0x1961b8: 0x26220200  addiu       $v0, $s1, 0x200
    ctx->pc = 0x1961b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x1961bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1961bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1961c0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1961c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1961c4: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x1961c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x1961c8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1961c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1961cc: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x1961ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x1961d0: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1961D0u;
    SET_GPR_U32(ctx, 31, 0x1961D8u);
    ctx->pc = 0x1961D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1961D0u;
    // 0x1961d4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1961D0u, 0x1961D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1961D8u;
}
