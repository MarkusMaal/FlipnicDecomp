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

// Function: entry_00104c18
// Address: 0x104c18 - 0x104c54
void entry_00104c18_0x104c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104c18_0x104c18");
#endif

    switch (ctx->pc) {
        case 0x104c20u: goto label_104c20;
        case 0x104c30u: goto label_104c30;
        default: break;
    }

    ctx->pc = 0x104c18u;

    // 0x104c18: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104C18u;
    SET_GPR_U32(ctx, 31, 0x104C20u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104C18u, 0x104C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C20u;
label_104c20:
    // 0x104c20: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104C20u;
    {
        const bool branch_taken_0x104c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C20u;
        // 0x104c24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c20) {
            ctx->pc = 0x104C54u;
            return;
        }
    }
    ctx->pc = 0x104C28u;
    // 0x104c28: 0xc056360  jal         func_158D80
    ctx->pc = 0x104C28u;
    SET_GPR_U32(ctx, 31, 0x104C30u);
    ctx->pc = 0x104C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C28u;
    // 0x104c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104C28u, 0x104C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C30u;
label_104c30:
    // 0x104c30: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104c34: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104c38: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x104c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x104c3c: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x104c40: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104c44: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104c48: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104c4c: 0x24429fb0  addiu       $v0, $v0, -0x6050
    ctx->pc = 0x104c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942640));
    // 0x104c50: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104c54u;
}
