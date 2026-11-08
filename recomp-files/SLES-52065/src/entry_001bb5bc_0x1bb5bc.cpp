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

// Function: entry_001bb5bc
// Address: 0x1bb5bc - 0x1bb5e4
void entry_001bb5bc_0x1bb5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb5bc_0x1bb5bc");
#endif

    switch (ctx->pc) {
        case 0x1bb5c4u: goto label_1bb5c4;
        case 0x1bb5d0u: goto label_1bb5d0;
        case 0x1bb5d8u: goto label_1bb5d8;
        case 0x1bb5e0u: goto label_1bb5e0;
        default: break;
    }

    ctx->pc = 0x1bb5bcu;

    // 0x1bb5bc: 0xc06edcc  jal         func_1BB730
    ctx->pc = 0x1BB5BCu;
    SET_GPR_U32(ctx, 31, 0x1BB5C4u);
    ctx->pc = 0x1BB730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB730u, 0x1BB5BCu, 0x1BB5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5C4u;
label_1bb5c4:
    // 0x1bb5c4: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x1bb5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1bb5c8: 0xc06e1bc  jal         func_1B86F0
    ctx->pc = 0x1BB5C8u;
    SET_GPR_U32(ctx, 31, 0x1BB5D0u);
    ctx->pc = 0x1BB5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5C8u;
    // 0x1bb5cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B86F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B86F0u, 0x1BB5C8u, 0x1BB5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5D0u;
label_1bb5d0:
    // 0x1bb5d0: 0xc06edc8  jal         func_1BB720
    ctx->pc = 0x1BB5D0u;
    SET_GPR_U32(ctx, 31, 0x1BB5D8u);
    ctx->pc = 0x1BB5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5D0u;
    // 0x1bb5d4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB720u, 0x1BB5D0u, 0x1BB5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5D8u;
label_1bb5d8:
    // 0x1bb5d8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB5D8u;
    SET_GPR_U32(ctx, 31, 0x1BB5E0u);
    ctx->pc = 0x1BB5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5D8u;
    // 0x1bb5dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB5D8u, 0x1BB5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5E0u;
label_1bb5e0:
    // 0x1bb5e0: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x1bb5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->pc = 0x1bb5e4u;
}
