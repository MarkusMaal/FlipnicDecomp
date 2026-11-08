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

// Function: entry_00104e28
// Address: 0x104e28 - 0x104e6c
void entry_00104e28_0x104e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104e28_0x104e28");
#endif

    switch (ctx->pc) {
        case 0x104e30u: goto label_104e30;
        case 0x104e40u: goto label_104e40;
        default: break;
    }

    ctx->pc = 0x104e28u;

    // 0x104e28: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104E28u;
    SET_GPR_U32(ctx, 31, 0x104E30u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104E28u, 0x104E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E30u;
label_104e30:
    // 0x104e30: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x104E30u;
    {
        const bool branch_taken_0x104e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E30u;
        // 0x104e34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e30) {
            ctx->pc = 0x104E6Cu;
            return;
        }
    }
    ctx->pc = 0x104E38u;
    // 0x104e38: 0xc056360  jal         func_158D80
    ctx->pc = 0x104E38u;
    SET_GPR_U32(ctx, 31, 0x104E40u);
    ctx->pc = 0x104E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104E38u;
    // 0x104e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104E38u, 0x104E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E40u;
label_104e40:
    // 0x104e40: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x104e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x104e44: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104e48: 0x24427a50  addiu       $v0, $v0, 0x7A50
    ctx->pc = 0x104e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31312));
    // 0x104e4c: 0x246380b0  addiu       $v1, $v1, -0x7F50
    ctx->pc = 0x104e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934704));
    // 0x104e50: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104e54: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x104e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x104e58: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x104e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x104e5c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104e60: 0x24427ff0  addiu       $v0, $v0, 0x7FF0
    ctx->pc = 0x104e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32752));
    // 0x104e64: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x104e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x104e68: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104e6cu;
}
