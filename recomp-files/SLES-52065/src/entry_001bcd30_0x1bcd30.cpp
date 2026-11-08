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

// Function: entry_001bcd30
// Address: 0x1bcd30 - 0x1bcd5c
void entry_001bcd30_0x1bcd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcd30_0x1bcd30");
#endif

    switch (ctx->pc) {
        case 0x1bcd44u: goto label_1bcd44;
        case 0x1bcd4cu: goto label_1bcd4c;
        default: break;
    }

    ctx->pc = 0x1bcd30u;

    // 0x1bcd30: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bcd30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bcd34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bcd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd38: 0x24a511d0  addiu       $a1, $a1, 0x11D0
    ctx->pc = 0x1bcd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4560));
    // 0x1bcd3c: 0xc04b3ac  jal         func_12CEB0
    ctx->pc = 0x1BCD3Cu;
    SET_GPR_U32(ctx, 31, 0x1BCD44u);
    ctx->pc = 0x1BCD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD3Cu;
    // 0x1bcd40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEB0u, 0x1BCD3Cu, 0x1BCD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD44u;
label_1bcd44:
    // 0x1bcd44: 0xc06e0fc  jal         func_1B83F0
    ctx->pc = 0x1BCD44u;
    SET_GPR_U32(ctx, 31, 0x1BCD4Cu);
    ctx->pc = 0x1BCD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD44u;
    // 0x1bcd48: 0x8ea4001c  lw          $a0, 0x1C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83F0u, 0x1BCD44u, 0x1BCD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD4Cu;
label_1bcd4c:
    // 0x1bcd4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bcd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcd50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bcd50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd54: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1BCD54u;
    {
        const bool branch_taken_0x1bcd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD54u;
        // 0x1bcd58: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd54) {
            ctx->pc = 0x1BCDFCu;
            return;
        }
    }
    ctx->pc = 0x1BCD5Cu;
}
