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

// Function: entry_00206908
// Address: 0x206908 - 0x20694c
void entry_00206908_0x206908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206908_0x206908");
#endif

    switch (ctx->pc) {
        case 0x206910u: goto label_206910;
        case 0x206924u: goto label_206924;
        case 0x206934u: goto label_206934;
        case 0x20693cu: goto label_20693c;
        default: break;
    }

    ctx->pc = 0x206908u;

    // 0x206908: 0xc082014  jal         func_208050
    ctx->pc = 0x206908u;
    SET_GPR_U32(ctx, 31, 0x206910u);
    ctx->pc = 0x20690Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206908u;
    // 0x20690c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x206908u, 0x206910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206910u;
label_206910:
    // 0x206910: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x206910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206914: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x206914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206918: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x206918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20691c: 0xc082178  jal         func_2085E0
    ctx->pc = 0x20691Cu;
    SET_GPR_U32(ctx, 31, 0x206924u);
    ctx->pc = 0x206920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20691Cu;
    // 0x206920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x20691Cu, 0x206924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206924u;
label_206924:
    // 0x206924: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x206924u;
    {
        const bool branch_taken_0x206924 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x206928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206924u;
        // 0x206928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206924) {
            ctx->pc = 0x20694Cu;
            return;
        }
    }
    ctx->pc = 0x20692Cu;
    // 0x20692c: 0xc082014  jal         func_208050
    ctx->pc = 0x20692Cu;
    SET_GPR_U32(ctx, 31, 0x206934u);
    ctx->pc = 0x206930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20692Cu;
    // 0x206930: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x20692Cu, 0x206934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206934u;
label_206934:
    // 0x206934: 0xc0821e0  jal         func_208780
    ctx->pc = 0x206934u;
    SET_GPR_U32(ctx, 31, 0x20693Cu);
    ctx->pc = 0x206938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206934u;
    // 0x206938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208780u, 0x206934u, 0x20693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20693Cu;
label_20693c:
    // 0x20693c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20693cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x206940: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x206940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x206944: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x206944u;
    {
        const bool branch_taken_0x206944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206944u;
        // 0x206948: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206944) {
            ctx->pc = 0x206960u;
            return;
        }
    }
    ctx->pc = 0x20694Cu;
}
