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

// Function: entry_0018e240
// Address: 0x18e240 - 0x18e26c
void entry_0018e240_0x18e240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e240_0x18e240");
#endif

    switch (ctx->pc) {
        case 0x18e248u: goto label_18e248;
        case 0x18e268u: goto label_18e268;
        default: break;
    }

    ctx->pc = 0x18e240u;

    // 0x18e240: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x18E240u;
    SET_GPR_U32(ctx, 31, 0x18E248u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x18E240u, 0x18E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E248u;
label_18e248:
    // 0x18e248: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E248u;
    {
        const bool branch_taken_0x18e248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E248u;
        // 0x18e24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e248) {
            ctx->pc = 0x18E26Cu;
            return;
        }
    }
    ctx->pc = 0x18E250u;
    // 0x18e250: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18e250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e254: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e258: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x18e258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18e25c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x18e25cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e260: 0xc064f00  jal         func_193C00
    ctx->pc = 0x18E260u;
    SET_GPR_U32(ctx, 31, 0x18E268u);
    ctx->pc = 0x18E264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E260u;
    // 0x18e264: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C00u, 0x18E260u, 0x18E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E268u;
label_18e268:
    // 0x18e268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18e26cu;
}
