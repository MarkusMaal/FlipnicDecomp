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

// Function: entry_001957cc
// Address: 0x1957cc - 0x195800
void entry_001957cc_0x1957cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001957cc_0x1957cc");
#endif

    switch (ctx->pc) {
        case 0x1957f8u: goto label_1957f8;
        default: break;
    }

    ctx->pc = 0x1957ccu;

    // 0x1957cc: 0x0  nop
    ctx->pc = 0x1957ccu;
    // NOP
    // 0x1957d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1957d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1957d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1957d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1957d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1957d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1957dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1957dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1957e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1957e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1957e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1957e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1957e8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1957e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1957ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1957ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1957f0: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x1957F0u;
    SET_GPR_U32(ctx, 31, 0x1957F8u);
    ctx->pc = 0x1957F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1957F0u;
    // 0x1957f4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x1957F0u, 0x1957F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1957F8u;
label_1957f8:
    // 0x1957f8: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x1957F8u;
    {
        const bool branch_taken_0x1957f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1957f8) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195800u;
}
