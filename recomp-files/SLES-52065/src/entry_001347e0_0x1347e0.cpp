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

// Function: entry_001347e0
// Address: 0x1347e0 - 0x13480c
void entry_001347e0_0x1347e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001347e0_0x1347e0");
#endif

    switch (ctx->pc) {
        case 0x1347ecu: goto label_1347ec;
        case 0x1347f8u: goto label_1347f8;
        case 0x134804u: goto label_134804;
        default: break;
    }

    ctx->pc = 0x1347e0u;

    // 0x1347e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1347e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1347e4: 0xc05404c  jal         func_150130
    ctx->pc = 0x1347E4u;
    SET_GPR_U32(ctx, 31, 0x1347ECu);
    ctx->pc = 0x1347E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1347E4u;
    // 0x1347e8: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150130u, 0x1347E4u, 0x1347ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1347ECu;
label_1347ec:
    // 0x1347ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1347ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1347f0: 0xc054050  jal         func_150140
    ctx->pc = 0x1347F0u;
    SET_GPR_U32(ctx, 31, 0x1347F8u);
    ctx->pc = 0x1347F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1347F0u;
    // 0x1347f4: 0xaeb20008  sw          $s2, 0x8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150140u, 0x1347F0u, 0x1347F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1347F8u;
label_1347f8:
    // 0x1347f8: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1347f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1347fc: 0xc04fb3c  jal         func_13ECF0
    ctx->pc = 0x1347FCu;
    SET_GPR_U32(ctx, 31, 0x134804u);
    ctx->pc = 0x134800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1347FCu;
    // 0x134800: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECF0u, 0x1347FCu, 0x134804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134804u;
label_134804:
    // 0x134804: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x134804u;
    {
        const bool branch_taken_0x134804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134804) {
            ctx->pc = 0x134828u;
            return;
        }
    }
    ctx->pc = 0x13480Cu;
}
