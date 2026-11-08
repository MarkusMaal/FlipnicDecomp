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

// Function: entry_001e1320
// Address: 0x1e1320 - 0x1e1344
void entry_001e1320_0x1e1320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1320_0x1e1320");
#endif

    switch (ctx->pc) {
        case 0x1e1328u: goto label_1e1328;
        case 0x1e1330u: goto label_1e1330;
        default: break;
    }

    ctx->pc = 0x1e1320u;

    // 0x1e1320: 0xc077cbc  jal         func_1DF2F0
    ctx->pc = 0x1E1320u;
    SET_GPR_U32(ctx, 31, 0x1E1328u);
    ctx->pc = 0x1DF2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF2F0u, 0x1E1320u, 0x1E1328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1328u;
label_1e1328:
    // 0x1e1328: 0xc07657c  jal         func_1D95F0
    ctx->pc = 0x1E1328u;
    SET_GPR_U32(ctx, 31, 0x1E1330u);
    ctx->pc = 0x1E132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1328u;
    // 0x1e132c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95F0u, 0x1E1328u, 0x1E1330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1330u;
label_1e1330:
    // 0x1e1330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1334: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e1334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e133c: 0x80784d2  j           func_1E1348
    ctx->pc = 0x1E133Cu;
    ctx->pc = 0x1E1340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E133Cu;
    // 0x1e1340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1348u;
    FUN_001e1348_0x1e1348(rdram, ctx, runtime); return;
    ctx->pc = 0x1E1344u;
}
