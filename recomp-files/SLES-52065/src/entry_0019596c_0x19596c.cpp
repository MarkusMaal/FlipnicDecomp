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

// Function: entry_0019596c
// Address: 0x19596c - 0x1959b8
void entry_0019596c_0x19596c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019596c_0x19596c");
#endif

    switch (ctx->pc) {
        case 0x195988u: goto label_195988;
        case 0x1959b0u: goto label_1959b0;
        default: break;
    }

    ctx->pc = 0x19596cu;

    // 0x19596c: 0x0  nop
    ctx->pc = 0x19596cu;
    // NOP
    // 0x195970: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x195970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x195974: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x195974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x195978: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x195978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x19597c: 0x2484d5d0  addiu       $a0, $a0, -0x2A30
    ctx->pc = 0x19597cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    // 0x195980: 0xc04bf38  jal         func_12FCE0
    ctx->pc = 0x195980u;
    SET_GPR_U32(ctx, 31, 0x195988u);
    ctx->pc = 0x195984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195980u;
    // 0x195984: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x195980u, 0x195988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195988u;
label_195988:
    // 0x195988: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19598c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x19598cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x195990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195998: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x195998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
    // 0x19599c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19599cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1959a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1959a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1959a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1959a8: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x1959A8u;
    SET_GPR_U32(ctx, 31, 0x1959B0u);
    ctx->pc = 0x1959ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1959A8u;
    // 0x1959ac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x1959A8u, 0x1959B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1959B0u;
label_1959b0:
    // 0x1959b0: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x1959B0u;
    {
        const bool branch_taken_0x1959b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1959b0) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x1959B8u;
}
