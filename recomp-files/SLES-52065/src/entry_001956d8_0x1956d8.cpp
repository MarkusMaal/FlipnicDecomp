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

// Function: entry_001956d8
// Address: 0x1956d8 - 0x195720
void entry_001956d8_0x1956d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001956d8_0x1956d8");
#endif

    switch (ctx->pc) {
        case 0x1956f0u: goto label_1956f0;
        case 0x195718u: goto label_195718;
        default: break;
    }

    ctx->pc = 0x1956d8u;

    // 0x1956d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1956d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1956dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1956dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1956e0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1956e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1956e4: 0x2484d5d0  addiu       $a0, $a0, -0x2A30
    ctx->pc = 0x1956e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    // 0x1956e8: 0xc04bf38  jal         func_12FCE0
    ctx->pc = 0x1956E8u;
    SET_GPR_U32(ctx, 31, 0x1956F0u);
    ctx->pc = 0x1956ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1956E8u;
    // 0x1956ec: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x1956E8u, 0x1956F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1956F0u;
label_1956f0:
    // 0x1956f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1956f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1956f4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1956f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1956f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1956f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1956fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1956fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195700: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x195700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
    // 0x195704: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x195704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195708: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x195708u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19570c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19570cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x195710: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x195710u;
    SET_GPR_U32(ctx, 31, 0x195718u);
    ctx->pc = 0x195714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195710u;
    // 0x195714: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x195710u, 0x195718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195718u;
label_195718:
    // 0x195718: 0x10000192  b           . + 4 + (0x192 << 2)
    ctx->pc = 0x195718u;
    {
        const bool branch_taken_0x195718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195718) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195720u;
}
