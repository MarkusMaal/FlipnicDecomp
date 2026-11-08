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

// Function: entry_0015eebc
// Address: 0x15eebc - 0x15eef8
void entry_0015eebc_0x15eebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015eebc_0x15eebc");
#endif

    switch (ctx->pc) {
        case 0x15eee8u: goto label_15eee8;
        default: break;
    }

    ctx->pc = 0x15eebcu;

    // 0x15eebc: 0x0  nop
    ctx->pc = 0x15eebcu;
    // NOP
    // 0x15eec0: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x15eec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15eec4: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x15EEC4u;
    {
        const bool branch_taken_0x15eec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EEC4u;
        // 0x15eec8: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eec4) {
            ctx->pc = 0x15ECF8u;
            return;
        }
    }
    ctx->pc = 0x15EECCu;
    // 0x15eecc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15eeccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15eed0: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x15eed0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x15eed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15eed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eed8: 0x24a574c0  addiu       $a1, $a1, 0x74C0
    ctx->pc = 0x15eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29888));
    // 0x15eedc: 0x24c67490  addiu       $a2, $a2, 0x7490
    ctx->pc = 0x15eedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29840));
    // 0x15eee0: 0xc059568  jal         func_1655A0
    ctx->pc = 0x15EEE0u;
    SET_GPR_U32(ctx, 31, 0x15EEE8u);
    ctx->pc = 0x15EEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EEE0u;
    // 0x15eee4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1655A0u, 0x15EEE0u, 0x15EEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EEE8u;
label_15eee8:
    // 0x15eee8: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x15eee8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x15eeec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15eeecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eef0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15EEF0u;
    {
        const bool branch_taken_0x15eef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EEF0u;
        // 0x15eef4: 0x24c67490  addiu       $a2, $a2, 0x7490 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eef0) {
            ctx->pc = 0x15EF28u;
            return;
        }
    }
    ctx->pc = 0x15EEF8u;
}
