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

// Function: entry_001ee920
// Address: 0x1ee920 - 0x1ee934
void entry_001ee920_0x1ee920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee920_0x1ee920");
#endif

    switch (ctx->pc) {
        case 0x1ee928u: goto label_1ee928;
        case 0x1ee930u: goto label_1ee930;
        default: break;
    }

    ctx->pc = 0x1ee920u;

    // 0x1ee920: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EE920u;
    SET_GPR_U32(ctx, 31, 0x1EE928u);
    ctx->pc = 0x1EE924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE920u;
    // 0x1ee924: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EE920u, 0x1EE928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE928u;
label_1ee928:
    // 0x1ee928: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EE928u;
    SET_GPR_U32(ctx, 31, 0x1EE930u);
    ctx->pc = 0x1EE92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE928u;
    // 0x1ee92c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EE928u, 0x1EE930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE930u;
label_1ee930:
    // 0x1ee930: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ee930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ee934u;
}
