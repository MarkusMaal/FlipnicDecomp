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

// Function: entry_001c122c
// Address: 0x1c122c - 0x1c125c
void entry_001c122c_0x1c122c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c122c_0x1c122c");
#endif

    switch (ctx->pc) {
        case 0x1c1238u: goto label_1c1238;
        case 0x1c1240u: goto label_1c1240;
        case 0x1c1250u: goto label_1c1250;
        case 0x1c1258u: goto label_1c1258;
        default: break;
    }

    ctx->pc = 0x1c122cu;

    // 0x1c122c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c122cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c1230: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1230u;
    SET_GPR_U32(ctx, 31, 0x1C1238u);
    ctx->pc = 0x1C1234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1230u;
    // 0x1c1234: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1230u, 0x1C1238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1238u;
label_1c1238:
    // 0x1c1238: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C1238u;
    SET_GPR_U32(ctx, 31, 0x1C1240u);
    ctx->pc = 0x1C123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1238u;
    // 0x1c123c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C1238u, 0x1C1240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1240u;
label_1c1240:
    // 0x1c1240: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1c1240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1c1244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1248: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1248u;
    SET_GPR_U32(ctx, 31, 0x1C1250u);
    ctx->pc = 0x1C124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1248u;
    // 0x1c124c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1248u, 0x1C1250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1250u;
label_1c1250:
    // 0x1c1250: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C1250u;
    SET_GPR_U32(ctx, 31, 0x1C1258u);
    ctx->pc = 0x1C1254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1250u;
    // 0x1c1254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C1250u, 0x1C1258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1258u;
label_1c1258:
    // 0x1c1258: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c1258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1c125cu;
}
