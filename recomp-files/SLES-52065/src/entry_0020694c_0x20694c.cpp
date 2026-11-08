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

// Function: entry_0020694c
// Address: 0x20694c - 0x206960
void entry_0020694c_0x20694c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020694c_0x20694c");
#endif

    switch (ctx->pc) {
        case 0x206954u: goto label_206954;
        default: break;
    }

    ctx->pc = 0x20694cu;

    // 0x20694c: 0xc0821e0  jal         func_208780
    ctx->pc = 0x20694Cu;
    SET_GPR_U32(ctx, 31, 0x206954u);
    ctx->pc = 0x206950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20694Cu;
    // 0x206950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208780u, 0x20694Cu, 0x206954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206954u;
label_206954:
    // 0x206954: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x206954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x206958: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x206958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x20695c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x20695cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    ctx->pc = 0x206960u;
}
