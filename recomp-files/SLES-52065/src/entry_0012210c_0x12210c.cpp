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

// Function: entry_0012210c
// Address: 0x12210c - 0x122158
void entry_0012210c_0x12210c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012210c_0x12210c");
#endif

    switch (ctx->pc) {
        case 0x122114u: goto label_122114;
        case 0x122120u: goto label_122120;
        case 0x12212cu: goto label_12212c;
        case 0x122144u: goto label_122144;
        default: break;
    }

    ctx->pc = 0x12210cu;

    // 0x12210c: 0xc048880  jal         func_122200
    ctx->pc = 0x12210Cu;
    SET_GPR_U32(ctx, 31, 0x122114u);
    ctx->pc = 0x122110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12210Cu;
    // 0x122110: 0x26c4000c  addiu       $a0, $s6, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x12210Cu, 0x122114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122114u;
label_122114:
    // 0x122114: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x122114u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122118: 0xc04887c  jal         func_1221F0
    ctx->pc = 0x122118u;
    SET_GPR_U32(ctx, 31, 0x122120u);
    ctx->pc = 0x12211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122118u;
    // 0x12211c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1221F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1221F0u, 0x122118u, 0x122120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122120u;
label_122120:
    // 0x122120: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x122120u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122124: 0xc048880  jal         func_122200
    ctx->pc = 0x122124u;
    SET_GPR_U32(ctx, 31, 0x12212Cu);
    ctx->pc = 0x122128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122124u;
    // 0x122128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x122124u, 0x12212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12212Cu;
label_12212c:
    // 0x12212c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x12212cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122130: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x122130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122134: 0x26c4000c  addiu       $a0, $s6, 0xC
    ctx->pc = 0x122134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x122138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12213c: 0xc048bbc  jal         func_122EF0
    ctx->pc = 0x12213Cu;
    SET_GPR_U32(ctx, 31, 0x122144u);
    ctx->pc = 0x122140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12213Cu;
    // 0x122140: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EF0u, 0x12213Cu, 0x122144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122144u;
label_122144:
    // 0x122144: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x122144u;
    {
        const bool branch_taken_0x122144 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x122144) {
            ctx->pc = 0x122158u;
            return;
        }
    }
    ctx->pc = 0x12214Cu;
    // 0x12214c: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x12214cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122150: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x122150u;
    {
        const bool branch_taken_0x122150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122150u;
        // 0x122154: 0x8ed60000  lw          $s6, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122150) {
            ctx->pc = 0x122160u;
            return;
        }
    }
    ctx->pc = 0x122158u;
}
