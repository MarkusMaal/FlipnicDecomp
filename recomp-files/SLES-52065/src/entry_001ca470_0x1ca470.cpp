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

// Function: entry_001ca470
// Address: 0x1ca470 - 0x1ca4bc
void entry_001ca470_0x1ca470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca470_0x1ca470");
#endif

    switch (ctx->pc) {
        case 0x1ca478u: goto label_1ca478;
        case 0x1ca490u: goto label_1ca490;
        case 0x1ca4a0u: goto label_1ca4a0;
        case 0x1ca4b4u: goto label_1ca4b4;
        default: break;
    }

    ctx->pc = 0x1ca470u;

    // 0x1ca470: 0xc073098  jal         func_1CC260
    ctx->pc = 0x1CA470u;
    SET_GPR_U32(ctx, 31, 0x1CA478u);
    ctx->pc = 0x1CA474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA470u;
    // 0x1ca474: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1CA470u, 0x1CA478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA478u;
label_1ca478:
    // 0x1ca478: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ca478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ca47c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca480: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CA480u;
    {
        const bool branch_taken_0x1ca480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA480u;
        // 0x1ca484: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca480) {
            ctx->pc = 0x1CA4F0u;
            return;
        }
    }
    ctx->pc = 0x1CA488u;
    // 0x1ca488: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1CA488u;
    SET_GPR_U32(ctx, 31, 0x1CA490u);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1CA488u, 0x1CA490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA490u;
label_1ca490:
    // 0x1ca490: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ca490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ca494: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca498: 0xc053c38  jal         func_14F0E0
    ctx->pc = 0x1CA498u;
    SET_GPR_U32(ctx, 31, 0x1CA4A0u);
    ctx->pc = 0x1CA49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA498u;
    // 0x1ca49c: 0x24a569a0  addiu       $a1, $a1, 0x69A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0E0u, 0x1CA498u, 0x1CA4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4A0u;
label_1ca4a0:
    // 0x1ca4a0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ca4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ca4a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4a8: 0x24a56990  addiu       $a1, $a1, 0x6990
    ctx->pc = 0x1ca4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27024));
    // 0x1ca4ac: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1CA4ACu;
    SET_GPR_U32(ctx, 31, 0x1CA4B4u);
    ctx->pc = 0x1CA4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4ACu;
    // 0x1ca4b0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1CA4ACu, 0x1CA4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4B4u;
label_1ca4b4:
    // 0x1ca4b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CA4B4u;
    {
        const bool branch_taken_0x1ca4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca4b4) {
            ctx->pc = 0x1CA4ECu;
            return;
        }
    }
    ctx->pc = 0x1CA4BCu;
}
