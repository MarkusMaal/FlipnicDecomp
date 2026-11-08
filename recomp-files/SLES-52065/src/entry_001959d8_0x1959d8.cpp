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

// Function: entry_001959d8
// Address: 0x1959d8 - 0x195a0c
void entry_001959d8_0x1959d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001959d8_0x1959d8");
#endif

    switch (ctx->pc) {
        case 0x195a04u: goto label_195a04;
        default: break;
    }

    ctx->pc = 0x1959d8u;

    // 0x1959d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1959d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1959dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1959dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1959e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1959e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1959e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1959e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1959e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1959e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959ec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1959ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1959f0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1959f0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1959f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1959f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1959f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959fc: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x1959FCu;
    SET_GPR_U32(ctx, 31, 0x195A04u);
    ctx->pc = 0x195A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1959FCu;
    // 0x195a00: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x1959FCu, 0x195A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195A04u;
label_195a04:
    // 0x195a04: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x195A04u;
    {
        const bool branch_taken_0x195a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195a04) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195A0Cu;
}
