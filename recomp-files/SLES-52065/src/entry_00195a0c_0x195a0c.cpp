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

// Function: entry_00195a0c
// Address: 0x195a0c - 0x195a3c
void entry_00195a0c_0x195a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195a0c_0x195a0c");
#endif

    switch (ctx->pc) {
        case 0x195a34u: goto label_195a34;
        default: break;
    }

    ctx->pc = 0x195a0cu;

    // 0x195a0c: 0x0  nop
    ctx->pc = 0x195a0cu;
    // NOP
    // 0x195a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x195a18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x195a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195a24: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x195a24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x195a28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x195a28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a2c: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x195A2Cu;
    SET_GPR_U32(ctx, 31, 0x195A34u);
    ctx->pc = 0x195A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195A2Cu;
    // 0x195a30: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x195A2Cu, 0x195A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195A34u;
label_195a34:
    // 0x195a34: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x195A34u;
    {
        const bool branch_taken_0x195a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195a34) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195A3Cu;
}
