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

// Function: entry_001ca154
// Address: 0x1ca154 - 0x1ca194
void entry_001ca154_0x1ca154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca154_0x1ca154");
#endif

    switch (ctx->pc) {
        case 0x1ca168u: goto label_1ca168;
        case 0x1ca178u: goto label_1ca178;
        case 0x1ca188u: goto label_1ca188;
        default: break;
    }

    ctx->pc = 0x1ca154u;

    // 0x1ca154: 0x0  nop
    ctx->pc = 0x1ca154u;
    // NOP
    // 0x1ca158: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ca158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ca15c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ca15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca160: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CA160u;
    SET_GPR_U32(ctx, 31, 0x1CA168u);
    ctx->pc = 0x1CA164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA160u;
    // 0x1ca164: 0x24a569e0  addiu       $a1, $a1, 0x69E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CA160u, 0x1CA168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA168u;
label_1ca168:
    // 0x1ca168: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ca168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ca16c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca170: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CA170u;
    SET_GPR_U32(ctx, 31, 0x1CA178u);
    ctx->pc = 0x1CA174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA170u;
    // 0x1ca174: 0x24a569e0  addiu       $a1, $a1, 0x69E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CA170u, 0x1CA178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA178u;
label_1ca178:
    // 0x1ca178: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ca178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca17c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ca17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ca180: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA180u;
    SET_GPR_U32(ctx, 31, 0x1CA188u);
    ctx->pc = 0x1CA184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA180u;
    // 0x1ca184: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA180u, 0x1CA188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA188u;
label_1ca188:
    // 0x1ca188: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1ca188u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca18c: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1ca18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1ca190: 0xa040008c  sb          $zero, 0x8C($v0)
    ctx->pc = 0x1ca190u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1ca194u;
}
