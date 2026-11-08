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

// Function: entry_00149710
// Address: 0x149710 - 0x149738
void entry_00149710_0x149710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149710_0x149710");
#endif

    switch (ctx->pc) {
        case 0x149728u: goto label_149728;
        default: break;
    }

    ctx->pc = 0x149710u;

    // 0x149710: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x149710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x149714: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x149714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149718: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x149718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x14971c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14971cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x149720: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149720u;
    SET_GPR_U32(ctx, 31, 0x149728u);
    ctx->pc = 0x149724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149720u;
    // 0x149724: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149720u, 0x149728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149728u;
label_149728:
    // 0x149728: 0xaeb1000c  sw          $s1, 0xC($s5)
    ctx->pc = 0x149728u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 17));
    // 0x14972c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x14972cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149730: 0xaeb20010  sw          $s2, 0x10($s5)
    ctx->pc = 0x149730u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 18));
    // 0x149734: 0xaeb00014  sw          $s0, 0x14($s5)
    ctx->pc = 0x149734u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 16));
    ctx->pc = 0x149738u;
}
