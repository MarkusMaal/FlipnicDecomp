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

// Function: entry_001ca954
// Address: 0x1ca954 - 0x1ca97c
void entry_001ca954_0x1ca954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca954_0x1ca954");
#endif

    switch (ctx->pc) {
        case 0x1ca95cu: goto label_1ca95c;
        case 0x1ca96cu: goto label_1ca96c;
        default: break;
    }

    ctx->pc = 0x1ca954u;

    // 0x1ca954: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CA954u;
    SET_GPR_U32(ctx, 31, 0x1CA95Cu);
    ctx->pc = 0x1CA958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA954u;
    // 0x1ca958: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CA954u, 0x1CA95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA95Cu;
label_1ca95c:
    // 0x1ca95c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA95Cu;
    {
        const bool branch_taken_0x1ca95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA95Cu;
        // 0x1ca960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca95c) {
            ctx->pc = 0x1CA980u;
            return;
        }
    }
    ctx->pc = 0x1CA964u;
    // 0x1ca964: 0xc060774  jal         func_181DD0
    ctx->pc = 0x1CA964u;
    SET_GPR_U32(ctx, 31, 0x1CA96Cu);
    ctx->pc = 0x181DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181DD0u, 0x1CA964u, 0x1CA96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA96Cu;
label_1ca96c:
    // 0x1ca96c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA96Cu;
    {
        const bool branch_taken_0x1ca96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA96Cu;
        // 0x1ca970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca96c) {
            ctx->pc = 0x1CA97Cu;
            return;
        }
    }
    ctx->pc = 0x1CA974u;
    // 0x1ca974: 0xc072adc  jal         func_1CAB70
    ctx->pc = 0x1CA974u;
    SET_GPR_U32(ctx, 31, 0x1CA97Cu);
    ctx->pc = 0x1CA978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA974u;
    // 0x1ca978: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAB70u, 0x1CA974u, 0x1CA97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA97Cu;
}
