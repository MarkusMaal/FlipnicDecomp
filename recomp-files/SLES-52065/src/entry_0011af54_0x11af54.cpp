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

// Function: entry_0011af54
// Address: 0x11af54 - 0x11afa8
void entry_0011af54_0x11af54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011af54_0x11af54");
#endif

    switch (ctx->pc) {
        case 0x11af68u: goto label_11af68;
        case 0x11af74u: goto label_11af74;
        case 0x11af80u: goto label_11af80;
        case 0x11af98u: goto label_11af98;
        default: break;
    }

    ctx->pc = 0x11af54u;

    // 0x11af54: 0x8e620538  lw          $v0, 0x538($s3)
    ctx->pc = 0x11af54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1336)));
    // 0x11af58: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x11AF58u;
    {
        const bool branch_taken_0x11af58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF58u;
        // 0x11af5c: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af58) {
            ctx->pc = 0x11AFB4u;
            return;
        }
    }
    ctx->pc = 0x11AF60u;
    // 0x11af60: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AF60u;
    SET_GPR_U32(ctx, 31, 0x11AF68u);
    ctx->pc = 0x11AF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF60u;
    // 0x11af64: 0x26650104  addiu       $a1, $s3, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AF60u, 0x11AF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF68u;
label_11af68:
    // 0x11af68: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x11af68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x11af6c: 0xc080664  jal         func_201990
    ctx->pc = 0x11AF6Cu;
    SET_GPR_U32(ctx, 31, 0x11AF74u);
    ctx->pc = 0x11AF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF6Cu;
    // 0x11af70: 0x266503c4  addiu       $a1, $s3, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11AF6Cu, 0x11AF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF74u;
label_11af74:
    // 0x11af74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11af74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af78: 0xc080664  jal         func_201990
    ctx->pc = 0x11AF78u;
    SET_GPR_U32(ctx, 31, 0x11AF80u);
    ctx->pc = 0x11AF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF78u;
    // 0x11af7c: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11AF78u, 0x11AF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF80u;
label_11af80:
    // 0x11af80: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x11af80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11af84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af88: 0x266500f4  addiu       $a1, $s3, 0xF4
    ctx->pc = 0x11af88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 244));
    // 0x11af8c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x11af8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11af90: 0xc046e18  jal         func_11B860
    ctx->pc = 0x11AF90u;
    SET_GPR_U32(ctx, 31, 0x11AF98u);
    ctx->pc = 0x11AF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF90u;
    // 0x11af94: 0x27a701c0  addiu       $a3, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B860u, 0x11AF90u, 0x11AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF98u;
label_11af98:
    // 0x11af98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AF98u;
    {
        const bool branch_taken_0x11af98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11af98) {
            ctx->pc = 0x11AFA8u;
            return;
        }
    }
    ctx->pc = 0x11AFA0u;
    // 0x11afa0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x11AFA0u;
    {
        const bool branch_taken_0x11afa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFA0u;
        // 0x11afa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11afa0) {
            ctx->pc = 0x11B02Cu;
            return;
        }
    }
    ctx->pc = 0x11AFA8u;
}
