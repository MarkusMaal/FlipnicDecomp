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

// Function: entry_00195740
// Address: 0x195740 - 0x195774
void entry_00195740_0x195740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195740_0x195740");
#endif

    switch (ctx->pc) {
        case 0x19576cu: goto label_19576c;
        default: break;
    }

    ctx->pc = 0x195740u;

    // 0x195740: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x195740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x195744: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x195744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x195748: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19574c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19574cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195750: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x195750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195754: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x195754u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x195758: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x195758u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x19575c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19575cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195764: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x195764u;
    SET_GPR_U32(ctx, 31, 0x19576Cu);
    ctx->pc = 0x195768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195764u;
    // 0x195768: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x195764u, 0x19576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19576Cu;
label_19576c:
    // 0x19576c: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x19576Cu;
    {
        const bool branch_taken_0x19576c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19576c) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195774u;
}
