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

// Function: entry_00104678
// Address: 0x104678 - 0x1046b4
void entry_00104678_0x104678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104678_0x104678");
#endif

    switch (ctx->pc) {
        case 0x104680u: goto label_104680;
        case 0x104690u: goto label_104690;
        default: break;
    }

    ctx->pc = 0x104678u;

    // 0x104678: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104678u;
    SET_GPR_U32(ctx, 31, 0x104680u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104678u, 0x104680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104680u;
label_104680:
    // 0x104680: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104680u;
    {
        const bool branch_taken_0x104680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104680u;
        // 0x104684: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104680) {
            ctx->pc = 0x1046B4u;
            return;
        }
    }
    ctx->pc = 0x104688u;
    // 0x104688: 0xc04161c  jal         func_105870
    ctx->pc = 0x104688u;
    SET_GPR_U32(ctx, 31, 0x104690u);
    ctx->pc = 0x10468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104688u;
    // 0x10468c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105870u, 0x104688u, 0x104690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104690u;
label_104690:
    // 0x104690: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104694: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104698: 0x2442a490  addiu       $v0, $v0, -0x5B70
    ctx->pc = 0x104698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943888));
    // 0x10469c: 0x2463a3d0  addiu       $v1, $v1, -0x5C30
    ctx->pc = 0x10469cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943696));
    // 0x1046a0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1046a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1046a4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1046a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1046a8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1046a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1046ac: 0x24427c90  addiu       $v0, $v0, 0x7C90
    ctx->pc = 0x1046acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31888));
    // 0x1046b0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1046b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1046b4u;
}
