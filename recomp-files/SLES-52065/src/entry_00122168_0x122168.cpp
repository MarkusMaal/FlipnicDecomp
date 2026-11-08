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

// Function: entry_00122168
// Address: 0x122168 - 0x1221b8
void entry_00122168_0x122168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122168_0x122168");
#endif

    switch (ctx->pc) {
        case 0x12217cu: goto label_12217c;
        case 0x122188u: goto label_122188;
        case 0x122194u: goto label_122194;
        case 0x1221acu: goto label_1221ac;
        default: break;
    }

    ctx->pc = 0x122168u;

    // 0x122168: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x122168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x12216c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12216Cu;
    {
        const bool branch_taken_0x12216c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x122170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12216Cu;
        // 0x122170: 0x26430004  addiu       $v1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12216c) {
            ctx->pc = 0x1221B8u;
            return;
        }
    }
    ctx->pc = 0x122174u;
    // 0x122174: 0xc048880  jal         func_122200
    ctx->pc = 0x122174u;
    SET_GPR_U32(ctx, 31, 0x12217Cu);
    ctx->pc = 0x122178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122174u;
    // 0x122178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x122174u, 0x12217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12217Cu;
label_12217c:
    // 0x12217c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12217cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122180: 0xc04887c  jal         func_1221F0
    ctx->pc = 0x122180u;
    SET_GPR_U32(ctx, 31, 0x122188u);
    ctx->pc = 0x122184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122180u;
    // 0x122184: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1221F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1221F0u, 0x122180u, 0x122188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122188u;
label_122188:
    // 0x122188: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x122188u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12218c: 0xc048880  jal         func_122200
    ctx->pc = 0x12218Cu;
    SET_GPR_U32(ctx, 31, 0x122194u);
    ctx->pc = 0x122190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12218Cu;
    // 0x122190: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x12218Cu, 0x122194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122194u;
label_122194:
    // 0x122194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122198: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x122198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12219c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x12219cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1221a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1221a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1221a4: 0xc048bbc  jal         func_122EF0
    ctx->pc = 0x1221A4u;
    SET_GPR_U32(ctx, 31, 0x1221ACu);
    ctx->pc = 0x1221A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1221A4u;
    // 0x1221a8: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EF0u, 0x1221A4u, 0x1221ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1221ACu;
label_1221ac:
    // 0x1221ac: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1221ACu;
    {
        const bool branch_taken_0x1221ac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1221ac) {
            ctx->pc = 0x1221C4u;
            return;
        }
    }
    ctx->pc = 0x1221B4u;
    // 0x1221b4: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x1221b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x1221b8u;
}
