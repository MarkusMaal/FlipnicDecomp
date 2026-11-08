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

// Function: entry_00104e78
// Address: 0x104e78 - 0x104eb0
void entry_00104e78_0x104e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104e78_0x104e78");
#endif

    switch (ctx->pc) {
        case 0x104e80u: goto label_104e80;
        case 0x104e90u: goto label_104e90;
        default: break;
    }

    ctx->pc = 0x104e78u;

    // 0x104e78: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104E78u;
    SET_GPR_U32(ctx, 31, 0x104E80u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104E78u, 0x104E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E80u;
label_104e80:
    // 0x104e80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x104E80u;
    {
        const bool branch_taken_0x104e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E80u;
        // 0x104e84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e80) {
            ctx->pc = 0x104EB0u;
            return;
        }
    }
    ctx->pc = 0x104E88u;
    // 0x104e88: 0xc056360  jal         func_158D80
    ctx->pc = 0x104E88u;
    SET_GPR_U32(ctx, 31, 0x104E90u);
    ctx->pc = 0x104E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104E88u;
    // 0x104e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104E88u, 0x104E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E90u;
label_104e90:
    // 0x104e90: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x104e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x104e94: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104e98: 0x24637a50  addiu       $v1, $v1, 0x7A50
    ctx->pc = 0x104e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31312));
    // 0x104e9c: 0x244280b0  addiu       $v0, $v0, -0x7F50
    ctx->pc = 0x104e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934704));
    // 0x104ea0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104ea4: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x104ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x104ea8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104eac: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x104eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    ctx->pc = 0x104eb0u;
}
