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

// Function: entry_001b84e4
// Address: 0x1b84e4 - 0x1b8540
void entry_001b84e4_0x1b84e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b84e4_0x1b84e4");
#endif

    switch (ctx->pc) {
        case 0x1b84fcu: goto label_1b84fc;
        case 0x1b8510u: goto label_1b8510;
        case 0x1b852cu: goto label_1b852c;
        case 0x1b8538u: goto label_1b8538;
        default: break;
    }

    ctx->pc = 0x1b84e4u;

    // 0x1b84e4: 0x0  nop
    ctx->pc = 0x1b84e4u;
    // NOP
    // 0x1b84e8: 0x27a401b4  addiu       $a0, $sp, 0x1B4
    ctx->pc = 0x1b84e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x1b84ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b84ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84f0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1b84f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b84f4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1B84F4u;
    SET_GPR_U32(ctx, 31, 0x1B84FCu);
    ctx->pc = 0x1B84F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84F4u;
    // 0x1b84f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1B84F4u, 0x1B84FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84FCu;
label_1b84fc:
    // 0x1b84fc: 0x27a401bc  addiu       $a0, $sp, 0x1BC
    ctx->pc = 0x1b84fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x1b8500: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1b8500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b8504: 0x27a601b8  addiu       $a2, $sp, 0x1B8
    ctx->pc = 0x1b8504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x1b8508: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B8508u;
    SET_GPR_U32(ctx, 31, 0x1B8510u);
    ctx->pc = 0x1B850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8508u;
    // 0x1b850c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B8508u, 0x1B8510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8510u;
label_1b8510:
    // 0x1b8510: 0x26c20014  addiu       $v0, $s6, 0x14
    ctx->pc = 0x1b8510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x1b8514: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x1b8514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x1b8518: 0xafa201c4  sw          $v0, 0x1C4($sp)
    ctx->pc = 0x1b8518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
    // 0x1b851c: 0x26c50010  addiu       $a1, $s6, 0x10
    ctx->pc = 0x1b851cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1b8520: 0x27a601c4  addiu       $a2, $sp, 0x1C4
    ctx->pc = 0x1b8520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x1b8524: 0xc06ee98  jal         func_1BBA60
    ctx->pc = 0x1B8524u;
    SET_GPR_U32(ctx, 31, 0x1B852Cu);
    ctx->pc = 0x1B8528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8524u;
    // 0x1b8528: 0x27a701bc  addiu       $a3, $sp, 0x1BC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA60u, 0x1B8524u, 0x1B852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B852Cu;
label_1b852c:
    // 0x1b852c: 0x27a401bc  addiu       $a0, $sp, 0x1BC
    ctx->pc = 0x1b852cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x1b8530: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B8530u;
    SET_GPR_U32(ctx, 31, 0x1B8538u);
    ctx->pc = 0x1B8534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8530u;
    // 0x1b8534: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B8530u, 0x1B8538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8538u;
label_1b8538:
    // 0x1b8538: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1B8538u;
    {
        const bool branch_taken_0x1b8538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8538u;
        // 0x1b853c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8538) {
            ctx->pc = 0x1B86A4u;
            return;
        }
    }
    ctx->pc = 0x1B8540u;
}
