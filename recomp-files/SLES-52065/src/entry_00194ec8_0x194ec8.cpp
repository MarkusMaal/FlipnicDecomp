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

// Function: entry_00194ec8
// Address: 0x194ec8 - 0x194f0c
void entry_00194ec8_0x194ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194ec8_0x194ec8");
#endif

    switch (ctx->pc) {
        case 0x194ee4u: goto label_194ee4;
        default: break;
    }

    ctx->pc = 0x194ec8u;

    // 0x194ec8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x194ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x194ecc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x194eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x194ed0: 0x2243018  mult        $a2, $s1, $a0
    ctx->pc = 0x194ed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x194ed4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x194ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194ed8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x194ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x194edc: 0xc04bf38  jal         func_12FCE0
    ctx->pc = 0x194EDCu;
    SET_GPR_U32(ctx, 31, 0x194EE4u);
    ctx->pc = 0x194EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194EDCu;
    // 0x194ee0: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x194EDCu, 0x194EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194EE4u;
label_194ee4:
    // 0x194ee4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x194ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x194ee8: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x194ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x194eec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ef4: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x194ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
    // 0x194ef8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x194ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194efc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x194efcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f00: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x194f00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x194f04: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x194F04u;
    SET_GPR_U32(ctx, 31, 0x194F0Cu);
    ctx->pc = 0x194F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F04u;
    // 0x194f08: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x194F04u, 0x194F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194F0Cu;
}
