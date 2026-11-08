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

// Function: entry_001cafac
// Address: 0x1cafac - 0x1cafd4
void entry_001cafac_0x1cafac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cafac_0x1cafac");
#endif

    switch (ctx->pc) {
        case 0x1cafccu: goto label_1cafcc;
        default: break;
    }

    ctx->pc = 0x1cafacu;

    // 0x1cafac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cafacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cafb0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1cafb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1cafb4: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1cafb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1cafb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cafb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cafbc: 0x260a007c  addiu       $t2, $s0, 0x7C
    ctx->pc = 0x1cafbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x1cafc0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1cafc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cafc4: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CAFC4u;
    SET_GPR_U32(ctx, 31, 0x1CAFCCu);
    ctx->pc = 0x1CAFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFC4u;
    // 0x1cafc8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CAFC4u, 0x1CAFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFCCu;
label_1cafcc:
    // 0x1cafcc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CAFCCu;
    {
        const bool branch_taken_0x1cafcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cafcc) {
            ctx->pc = 0x1CAFECu;
            return;
        }
    }
    ctx->pc = 0x1CAFD4u;
}
