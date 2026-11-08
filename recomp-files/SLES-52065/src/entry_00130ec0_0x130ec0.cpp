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

// Function: entry_00130ec0
// Address: 0x130ec0 - 0x130edc
void entry_00130ec0_0x130ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130ec0_0x130ec0");
#endif

    switch (ctx->pc) {
        case 0x130ec8u: goto label_130ec8;
        case 0x130ed0u: goto label_130ed0;
        case 0x130ed8u: goto label_130ed8;
        default: break;
    }

    ctx->pc = 0x130ec0u;

    // 0x130ec0: 0xc04c3f8  jal         func_130FE0
    ctx->pc = 0x130EC0u;
    SET_GPR_U32(ctx, 31, 0x130EC8u);
    ctx->pc = 0x130FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130FE0u, 0x130EC0u, 0x130EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130EC8u;
label_130ec8:
    // 0x130ec8: 0xc04c3f4  jal         func_130FD0
    ctx->pc = 0x130EC8u;
    SET_GPR_U32(ctx, 31, 0x130ED0u);
    ctx->pc = 0x130ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130EC8u;
    // 0x130ecc: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130FD0u, 0x130EC8u, 0x130ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130ED0u;
label_130ed0:
    // 0x130ed0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130ED0u;
    SET_GPR_U32(ctx, 31, 0x130ED8u);
    ctx->pc = 0x130ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130ED0u;
    // 0x130ed4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130ED0u, 0x130ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130ED8u;
label_130ed8:
    // 0x130ed8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130edcu;
}
