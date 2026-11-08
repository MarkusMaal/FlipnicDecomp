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

// Function: entry_00186c94
// Address: 0x186c94 - 0x186cc4
void entry_00186c94_0x186c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186c94_0x186c94");
#endif

    switch (ctx->pc) {
        case 0x186ca0u: goto label_186ca0;
        case 0x186cb0u: goto label_186cb0;
        case 0x186cc0u: goto label_186cc0;
        default: break;
    }

    ctx->pc = 0x186c94u;

    // 0x186c94: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x186c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186c98: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x186C98u;
    SET_GPR_U32(ctx, 31, 0x186CA0u);
    ctx->pc = 0x186C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C98u;
    // 0x186c9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x186C98u, 0x186CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CA0u;
label_186ca0:
    // 0x186ca0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x186ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x186ca4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x186ca4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x186ca8: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x186CA8u;
    SET_GPR_U32(ctx, 31, 0x186CB0u);
    ctx->pc = 0x186CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186CA8u;
    // 0x186cac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x186CA8u, 0x186CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CB0u;
label_186cb0:
    // 0x186cb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186cb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x186cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186cb8: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x186CB8u;
    SET_GPR_U32(ctx, 31, 0x186CC0u);
    ctx->pc = 0x186CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186CB8u;
    // 0x186cbc: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x186CB8u, 0x186CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CC0u;
label_186cc0:
    // 0x186cc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x186cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x186cc4u;
}
