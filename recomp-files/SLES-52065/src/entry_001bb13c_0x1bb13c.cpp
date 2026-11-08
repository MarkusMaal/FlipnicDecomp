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

// Function: entry_001bb13c
// Address: 0x1bb13c - 0x1bb170
void entry_001bb13c_0x1bb13c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb13c_0x1bb13c");
#endif

    switch (ctx->pc) {
        case 0x1bb144u: goto label_1bb144;
        case 0x1bb168u: goto label_1bb168;
        default: break;
    }

    ctx->pc = 0x1bb13cu;

    // 0x1bb13c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BB13Cu;
    SET_GPR_U32(ctx, 31, 0x1BB144u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BB13Cu, 0x1BB144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB144u;
label_1bb144:
    // 0x1bb144: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bb144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb148: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BB148u;
    {
        const bool branch_taken_0x1bb148 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb148) {
            ctx->pc = 0x1BB170u;
            return;
        }
    }
    ctx->pc = 0x1BB150u;
    // 0x1bb150: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bb150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bb154: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bb154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bb158: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bb158u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1bb15c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bb15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bb160: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BB160u;
    SET_GPR_U32(ctx, 31, 0x1BB168u);
    ctx->pc = 0x1BB164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB160u;
    // 0x1bb164: 0x24a510f0  addiu       $a1, $a1, 0x10F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BB160u, 0x1BB168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB168u;
label_1bb168:
    // 0x1bb168: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BB168u;
    SET_GPR_U32(ctx, 31, 0x1BB170u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BB168u, 0x1BB170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB170u;
}
