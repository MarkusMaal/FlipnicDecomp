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

// Function: entry_00163378
// Address: 0x163378 - 0x1633b0
void entry_00163378_0x163378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163378_0x163378");
#endif

    switch (ctx->pc) {
        case 0x1633a0u: goto label_1633a0;
        default: break;
    }

    ctx->pc = 0x163378u;

    // 0x163378: 0x8e2301f0  lw          $v1, 0x1F0($s1)
    ctx->pc = 0x163378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x16337c: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x16337cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x163380: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x163380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x163384: 0x153100  sll         $a2, $s5, 4
    ctx->pc = 0x163384u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x163388: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16338c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16338cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163390: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x163390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x163394: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x163394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x163398: 0xc055a7c  jal         func_1569F0
    ctx->pc = 0x163398u;
    SET_GPR_U32(ctx, 31, 0x1633A0u);
    ctx->pc = 0x16339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163398u;
    // 0x16339c: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1569F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569F0u, 0x163398u, 0x1633A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1633A0u;
label_1633a0:
    // 0x1633a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1633a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1633a4: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1633A4u;
    {
        const bool branch_taken_0x1633a4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1633a4) {
            ctx->pc = 0x1633BCu;
            return;
        }
    }
    ctx->pc = 0x1633ACu;
    // 0x1633ac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1633acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x1633b0u;
}
