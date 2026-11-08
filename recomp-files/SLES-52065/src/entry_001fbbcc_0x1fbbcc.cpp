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

// Function: entry_001fbbcc
// Address: 0x1fbbcc - 0x1fbbec
void entry_001fbbcc_0x1fbbcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbbcc_0x1fbbcc");
#endif

    switch (ctx->pc) {
        case 0x1fbbd4u: goto label_1fbbd4;
        default: break;
    }

    ctx->pc = 0x1fbbccu;

    // 0x1fbbcc: 0xc07e80c  jal         func_1FA030
    ctx->pc = 0x1FBBCCu;
    SET_GPR_U32(ctx, 31, 0x1FBBD4u);
    ctx->pc = 0x1FBBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBBCCu;
    // 0x1fbbd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA030u, 0x1FBBCCu, 0x1FBBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBBD4u;
label_1fbbd4:
    // 0x1fbbd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fbbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fbbd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fbbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbbdc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1fbbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1fbbe0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1fbbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fbbe4: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x1fbbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fbbe8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1fbbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x1fbbecu;
}
