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

// Function: entry_002068ec
// Address: 0x2068ec - 0x206908
void entry_002068ec_0x2068ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002068ec_0x2068ec");
#endif

    switch (ctx->pc) {
        case 0x2068f8u: goto label_2068f8;
        case 0x206904u: goto label_206904;
        default: break;
    }

    ctx->pc = 0x2068ecu;

    // 0x2068ec: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x2068ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x2068f0: 0xc081a60  jal         func_206980
    ctx->pc = 0x2068F0u;
    SET_GPR_U32(ctx, 31, 0x2068F8u);
    ctx->pc = 0x2068F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2068F0u;
    // 0x2068f4: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x2068F0u, 0x2068F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2068F8u;
label_2068f8:
    // 0x2068f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2068f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2068fc: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x2068FCu;
    SET_GPR_U32(ctx, 31, 0x206904u);
    ctx->pc = 0x206900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2068FCu;
    // 0x206900: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x2068FCu, 0x206904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206904u;
label_206904:
    // 0x206904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x206904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x206908u;
}
