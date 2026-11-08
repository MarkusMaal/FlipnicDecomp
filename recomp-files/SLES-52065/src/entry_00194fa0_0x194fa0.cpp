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

// Function: entry_00194fa0
// Address: 0x194fa0 - 0x194fe4
void entry_00194fa0_0x194fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194fa0_0x194fa0");
#endif

    switch (ctx->pc) {
        case 0x194fbcu: goto label_194fbc;
        default: break;
    }

    ctx->pc = 0x194fa0u;

    // 0x194fa0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x194fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x194fa4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x194fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x194fa8: 0x2243018  mult        $a2, $s1, $a0
    ctx->pc = 0x194fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x194fac: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x194facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194fb0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x194fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x194fb4: 0xc04bf38  jal         func_12FCE0
    ctx->pc = 0x194FB4u;
    SET_GPR_U32(ctx, 31, 0x194FBCu);
    ctx->pc = 0x194FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194FB4u;
    // 0x194fb8: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x194FB4u, 0x194FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194FBCu;
label_194fbc:
    // 0x194fbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x194fbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x194fc0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x194fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x194fc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194fc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194fcc: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x194fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
    // 0x194fd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x194fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194fd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x194fd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194fd8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x194fd8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x194fdc: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x194FDCu;
    SET_GPR_U32(ctx, 31, 0x194FE4u);
    ctx->pc = 0x194FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194FDCu;
    // 0x194fe0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x194FDCu, 0x194FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194FE4u;
}
