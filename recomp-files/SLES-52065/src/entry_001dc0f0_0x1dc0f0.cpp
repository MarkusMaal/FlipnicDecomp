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

// Function: entry_001dc0f0
// Address: 0x1dc0f0 - 0x1dc130
void entry_001dc0f0_0x1dc0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc0f0_0x1dc0f0");
#endif

    switch (ctx->pc) {
        case 0x1dc0f8u: goto label_1dc0f8;
        default: break;
    }

    ctx->pc = 0x1dc0f0u;

    // 0x1dc0f0: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DC0F0u;
    SET_GPR_U32(ctx, 31, 0x1DC0F8u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DC0F0u, 0x1DC0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC0F8u;
label_1dc0f8:
    // 0x1dc0f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dc0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc0fc: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1dc0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1dc100: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1dc100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1dc104: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DC104u;
    {
        const bool branch_taken_0x1dc104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC104u;
        // 0x1dc108: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc104) {
            ctx->pc = 0x1DC170u;
            return;
        }
    }
    ctx->pc = 0x1DC10Cu;
    // 0x1dc10c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1dc10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1dc110: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dc110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc114: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1dc114u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dc118: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc11c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dc11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dc120: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dc120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dc124: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dc124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dc128: 0x24637344  addiu       $v1, $v1, 0x7344
    ctx->pc = 0x1dc128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29508));
    // 0x1dc12c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dc12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1dc130u;
}
