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

// Function: entry_00198140
// Address: 0x198140 - 0x198160
void entry_00198140_0x198140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198140_0x198140");
#endif

    switch (ctx->pc) {
        case 0x198148u: goto label_198148;
        case 0x198158u: goto label_198158;
        default: break;
    }

    ctx->pc = 0x198140u;

    // 0x198140: 0xc063e14  jal         func_18F850
    ctx->pc = 0x198140u;
    SET_GPR_U32(ctx, 31, 0x198148u);
    ctx->pc = 0x198144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198140u;
    // 0x198144: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x198140u, 0x198148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198148u;
label_198148:
    // 0x198148: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x198148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x19814c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19814cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198150: 0xc064918  jal         func_192460
    ctx->pc = 0x198150u;
    SET_GPR_U32(ctx, 31, 0x198158u);
    ctx->pc = 0x198154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198150u;
    // 0x198154: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x198150u, 0x198158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198158u;
label_198158:
    // 0x198158: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x198158u;
    {
        const bool branch_taken_0x198158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198158u;
        // 0x19815c: 0xaea20674  sw          $v0, 0x674($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198158) {
            ctx->pc = 0x198464u;
            return;
        }
    }
    ctx->pc = 0x198160u;
}
