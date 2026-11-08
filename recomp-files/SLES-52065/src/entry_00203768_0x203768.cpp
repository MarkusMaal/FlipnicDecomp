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

// Function: entry_00203768
// Address: 0x203768 - 0x203788
void entry_00203768_0x203768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203768_0x203768");
#endif

    switch (ctx->pc) {
        case 0x203778u: goto label_203778;
        default: break;
    }

    ctx->pc = 0x203768u;

    // 0x203768: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x203768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20376c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20376cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203770: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x203770u;
    SET_GPR_U32(ctx, 31, 0x203778u);
    ctx->pc = 0x203774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203770u;
    // 0x203774: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x203770u, 0x203778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203778u;
label_203778:
    // 0x203778: 0xae740034  sw          $s4, 0x34($s3)
    ctx->pc = 0x203778u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 20));
    // 0x20377c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20377cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203780: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x203780u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x203784: 0xae710030  sw          $s1, 0x30($s3)
    ctx->pc = 0x203784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 17));
    ctx->pc = 0x203788u;
}
