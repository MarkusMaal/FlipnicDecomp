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

// Function: entry_001baf1c
// Address: 0x1baf1c - 0x1baf68
void entry_001baf1c_0x1baf1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001baf1c_0x1baf1c");
#endif

    switch (ctx->pc) {
        case 0x1baf24u: goto label_1baf24;
        case 0x1baf30u: goto label_1baf30;
        case 0x1baf3cu: goto label_1baf3c;
        case 0x1baf54u: goto label_1baf54;
        default: break;
    }

    ctx->pc = 0x1baf1cu;

    // 0x1baf1c: 0xc048880  jal         func_122200
    ctx->pc = 0x1BAF1Cu;
    SET_GPR_U32(ctx, 31, 0x1BAF24u);
    ctx->pc = 0x1BAF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF1Cu;
    // 0x1baf20: 0x26c4000c  addiu       $a0, $s6, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1BAF1Cu, 0x1BAF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF24u;
label_1baf24:
    // 0x1baf24: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1baf24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf28: 0xc04887c  jal         func_1221F0
    ctx->pc = 0x1BAF28u;
    SET_GPR_U32(ctx, 31, 0x1BAF30u);
    ctx->pc = 0x1BAF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF28u;
    // 0x1baf2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1221F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1221F0u, 0x1BAF28u, 0x1BAF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF30u;
label_1baf30:
    // 0x1baf30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1baf30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf34: 0xc048880  jal         func_122200
    ctx->pc = 0x1BAF34u;
    SET_GPR_U32(ctx, 31, 0x1BAF3Cu);
    ctx->pc = 0x1BAF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF34u;
    // 0x1baf38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1BAF34u, 0x1BAF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF3Cu;
label_1baf3c:
    // 0x1baf3c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1baf3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf40: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1baf40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf44: 0x26c4000c  addiu       $a0, $s6, 0xC
    ctx->pc = 0x1baf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x1baf48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1baf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf4c: 0xc048bbc  jal         func_122EF0
    ctx->pc = 0x1BAF4Cu;
    SET_GPR_U32(ctx, 31, 0x1BAF54u);
    ctx->pc = 0x1BAF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF4Cu;
    // 0x1baf50: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EF0u, 0x1BAF4Cu, 0x1BAF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF54u;
label_1baf54:
    // 0x1baf54: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAF54u;
    {
        const bool branch_taken_0x1baf54 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1baf54) {
            ctx->pc = 0x1BAF68u;
            return;
        }
    }
    ctx->pc = 0x1BAF5Cu;
    // 0x1baf5c: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x1baf5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BAF60u;
    {
        const bool branch_taken_0x1baf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF60u;
        // 0x1baf64: 0x8ed60000  lw          $s6, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf60) {
            ctx->pc = 0x1BAF70u;
            return;
        }
    }
    ctx->pc = 0x1BAF68u;
}
