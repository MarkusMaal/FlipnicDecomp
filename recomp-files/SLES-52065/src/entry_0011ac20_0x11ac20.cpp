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

// Function: entry_0011ac20
// Address: 0x11ac20 - 0x11ac64
void entry_0011ac20_0x11ac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ac20_0x11ac20");
#endif

    switch (ctx->pc) {
        case 0x11ac34u: goto label_11ac34;
        case 0x11ac3cu: goto label_11ac3c;
        case 0x11ac50u: goto label_11ac50;
        default: break;
    }

    ctx->pc = 0x11ac20u;

    // 0x11ac20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ac20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11ac24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac28: 0x26260104  addiu       $a2, $s1, 0x104
    ctx->pc = 0x11ac28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x11ac2c: 0xc046cd4  jal         func_11B350
    ctx->pc = 0x11AC2Cu;
    SET_GPR_U32(ctx, 31, 0x11AC34u);
    ctx->pc = 0x11AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC2Cu;
    // 0x11ac30: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B350u, 0x11AC2Cu, 0x11AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC34u;
label_11ac34:
    // 0x11ac34: 0xc046a6c  jal         func_11A9B0
    ctx->pc = 0x11AC34u;
    SET_GPR_U32(ctx, 31, 0x11AC3Cu);
    ctx->pc = 0x11AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC34u;
    // 0x11ac38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A9B0u, 0x11AC34u, 0x11AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC3Cu;
label_11ac3c:
    // 0x11ac3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11ac3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ac40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac44: 0x26260264  addiu       $a2, $s1, 0x264
    ctx->pc = 0x11ac44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 612));
    // 0x11ac48: 0xc046d2c  jal         func_11B4B0
    ctx->pc = 0x11AC48u;
    SET_GPR_U32(ctx, 31, 0x11AC50u);
    ctx->pc = 0x11AC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC48u;
    // 0x11ac4c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B4B0u, 0x11AC48u, 0x11AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC50u;
label_11ac50:
    // 0x11ac50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11AC50u;
    {
        const bool branch_taken_0x11ac50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC50u;
        // 0x11ac54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac50) {
            ctx->pc = 0x11AC64u;
            return;
        }
    }
    ctx->pc = 0x11AC58u;
    // 0x11ac58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ac5c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11AC5Cu;
    {
        const bool branch_taken_0x11ac5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC5Cu;
        // 0x11ac60: 0xae220538  sw          $v0, 0x538($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac5c) {
            ctx->pc = 0x11AC84u;
            return;
        }
    }
    ctx->pc = 0x11AC64u;
}
