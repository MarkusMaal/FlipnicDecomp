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

// Function: entry_001226fc
// Address: 0x1226fc - 0x122724
void entry_001226fc_0x1226fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001226fc_0x1226fc");
#endif

    switch (ctx->pc) {
        case 0x122704u: goto label_122704;
        case 0x122710u: goto label_122710;
        case 0x122718u: goto label_122718;
        case 0x122720u: goto label_122720;
        default: break;
    }

    ctx->pc = 0x1226fcu;

    // 0x1226fc: 0xc048a1c  jal         func_122870
    ctx->pc = 0x1226FCu;
    SET_GPR_U32(ctx, 31, 0x122704u);
    ctx->pc = 0x122870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122870u, 0x1226FCu, 0x122704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122704u;
label_122704:
    // 0x122704: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x122704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x122708: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x122708u;
    SET_GPR_U32(ctx, 31, 0x122710u);
    ctx->pc = 0x12270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122708u;
    // 0x12270c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x122708u, 0x122710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122710u;
label_122710:
    // 0x122710: 0xc048a18  jal         func_122860
    ctx->pc = 0x122710u;
    SET_GPR_U32(ctx, 31, 0x122718u);
    ctx->pc = 0x122714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122710u;
    // 0x122714: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122860u, 0x122710u, 0x122718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122718u;
label_122718:
    // 0x122718: 0xc0401a4  jal         func_100690
    ctx->pc = 0x122718u;
    SET_GPR_U32(ctx, 31, 0x122720u);
    ctx->pc = 0x12271Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122718u;
    // 0x12271c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x122718u, 0x122720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122720u;
label_122720:
    // 0x122720: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x122720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->pc = 0x122724u;
}
