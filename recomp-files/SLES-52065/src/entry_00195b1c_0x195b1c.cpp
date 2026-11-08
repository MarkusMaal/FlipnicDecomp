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

// Function: entry_00195b1c
// Address: 0x195b1c - 0x195b4c
void entry_00195b1c_0x195b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195b1c_0x195b1c");
#endif

    switch (ctx->pc) {
        case 0x195b44u: goto label_195b44;
        default: break;
    }

    ctx->pc = 0x195b1cu;

    // 0x195b1c: 0x0  nop
    ctx->pc = 0x195b1cu;
    // NOP
    // 0x195b20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195b24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x195b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x195b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195b34: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x195b34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x195b38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x195b38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b3c: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x195B3Cu;
    SET_GPR_U32(ctx, 31, 0x195B44u);
    ctx->pc = 0x195B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B3Cu;
    // 0x195b40: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x195B3Cu, 0x195B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B44u;
label_195b44:
    // 0x195b44: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x195B44u;
    {
        const bool branch_taken_0x195b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195b44) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195B4Cu;
}
