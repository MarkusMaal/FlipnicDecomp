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

// Function: entry_00193e70
// Address: 0x193e70 - 0x193eac
void entry_00193e70_0x193e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193e70_0x193e70");
#endif

    switch (ctx->pc) {
        case 0x193ea4u: goto label_193ea4;
        default: break;
    }

    ctx->pc = 0x193e70u;

    // 0x193e70: 0x8f838384  lw          $v1, -0x7C7C($gp)
    ctx->pc = 0x193e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x193e74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193e78: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x193e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x193e7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193e88: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193e88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193e8c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x193e8cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x193e90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x193e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193e94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x193e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x193e98: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x193e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x193e9c: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x193E9Cu;
    SET_GPR_U32(ctx, 31, 0x193EA4u);
    ctx->pc = 0x193EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E9Cu;
    // 0x193ea0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x193E9Cu, 0x193EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193EA4u;
label_193ea4:
    // 0x193ea4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x193EA4u;
    {
        const bool branch_taken_0x193ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193ea4) {
            ctx->pc = 0x193ECCu;
            return;
        }
    }
    ctx->pc = 0x193EACu;
}
