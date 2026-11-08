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

// Function: caseD_32
// Address: 0x1c41dc - 0x1c421c
void caseD_32_0x1c41dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_32_0x1c41dc");
#endif

    switch (ctx->pc) {
        case 0x1c41e8u: goto label_1c41e8;
        case 0x1c41f4u: goto label_1c41f4;
        case 0x1c4200u: goto label_1c4200;
        case 0x1c4210u: goto label_1c4210;
        default: break;
    }

    ctx->pc = 0x1c41dcu;

    // 0x1c41dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c41dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c41e0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C41E0u;
    SET_GPR_U32(ctx, 31, 0x1C41E8u);
    ctx->pc = 0x1C41E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C41E0u;
    // 0x1c41e4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C41E0u, 0x1C41E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C41E8u;
label_1c41e8:
    // 0x1c41e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c41e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c41ec: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C41ECu;
    SET_GPR_U32(ctx, 31, 0x1C41F4u);
    ctx->pc = 0x1C41F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C41ECu;
    // 0x1c41f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C41ECu, 0x1C41F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C41F4u;
label_1c41f4:
    // 0x1c41f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c41f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c41f8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C41F8u;
    SET_GPR_U32(ctx, 31, 0x1C4200u);
    ctx->pc = 0x1C41FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C41F8u;
    // 0x1c41fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C41F8u, 0x1C4200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4200u;
label_1c4200:
    // 0x1c4200: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c4200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c4204: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c4204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c4208: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C4208u;
    SET_GPR_U32(ctx, 31, 0x1C4210u);
    ctx->pc = 0x1C420Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4208u;
    // 0x1c420c: 0x24a51c40  addiu       $a1, $a1, 0x1C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C4208u, 0x1C4210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4210u;
label_1c4210:
    // 0x1c4210: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x1c4210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1c4214: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1C4214u;
    {
        const bool branch_taken_0x1c4214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4214u;
        // 0x1c4218: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4214) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C421Cu;
}
