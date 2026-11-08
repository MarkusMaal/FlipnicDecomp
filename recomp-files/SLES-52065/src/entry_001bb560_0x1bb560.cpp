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

// Function: entry_001bb560
// Address: 0x1bb560 - 0x1bb584
void entry_001bb560_0x1bb560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb560_0x1bb560");
#endif

    switch (ctx->pc) {
        case 0x1bb568u: goto label_1bb568;
        case 0x1bb574u: goto label_1bb574;
        case 0x1bb57cu: goto label_1bb57c;
        default: break;
    }

    ctx->pc = 0x1bb560u;

    // 0x1bb560: 0xc06edcc  jal         func_1BB730
    ctx->pc = 0x1BB560u;
    SET_GPR_U32(ctx, 31, 0x1BB568u);
    ctx->pc = 0x1BB730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB730u, 0x1BB560u, 0x1BB568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB568u;
label_1bb568:
    // 0x1bb568: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x1bb568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1bb56c: 0xc06e1bc  jal         func_1B86F0
    ctx->pc = 0x1BB56Cu;
    SET_GPR_U32(ctx, 31, 0x1BB574u);
    ctx->pc = 0x1BB570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB56Cu;
    // 0x1bb570: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B86F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B86F0u, 0x1BB56Cu, 0x1BB574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB574u;
label_1bb574:
    // 0x1bb574: 0xc06edc8  jal         func_1BB720
    ctx->pc = 0x1BB574u;
    SET_GPR_U32(ctx, 31, 0x1BB57Cu);
    ctx->pc = 0x1BB578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB574u;
    // 0x1bb578: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB720u, 0x1BB574u, 0x1BB57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB57Cu;
label_1bb57c:
    // 0x1bb57c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB57Cu;
    SET_GPR_U32(ctx, 31, 0x1BB584u);
    ctx->pc = 0x1BB580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB57Cu;
    // 0x1bb580: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB57Cu, 0x1BB584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB584u;
}
