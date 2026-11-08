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

// Function: entry_0011c508
// Address: 0x11c508 - 0x11c54c
void entry_0011c508_0x11c508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c508_0x11c508");
#endif

    switch (ctx->pc) {
        case 0x11c514u: goto label_11c514;
        case 0x11c530u: goto label_11c530;
        case 0x11c538u: goto label_11c538;
        default: break;
    }

    ctx->pc = 0x11c508u;

    // 0x11c508: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c50c: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11C50Cu;
    SET_GPR_U32(ctx, 31, 0x11C514u);
    ctx->pc = 0x11C510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C50Cu;
    // 0x11c510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11C50Cu, 0x11C514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C514u;
label_11c514:
    // 0x11c514: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x11c514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x11c518: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11c518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11c51c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x11c51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x11c520: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c524: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c528: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11C528u;
    SET_GPR_U32(ctx, 31, 0x11C530u);
    ctx->pc = 0x11C52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C528u;
    // 0x11c52c: 0xac222000  sw          $v0, 0x2000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11C528u, 0x11C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C530u;
label_11c530:
    // 0x11c530: 0xc04705c  jal         func_11C170
    ctx->pc = 0x11C530u;
    SET_GPR_U32(ctx, 31, 0x11C538u);
    ctx->pc = 0x11C534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C530u;
    // 0x11c534: 0x262400e4  addiu       $a0, $s1, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C170u, 0x11C530u, 0x11C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C538u;
label_11c538:
    // 0x11c538: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x11c538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x11c53c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c540: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11c540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11c544: 0xae240068  sw          $a0, 0x68($s1)
    ctx->pc = 0x11c544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 4));
    // 0x11c548: 0xaf838038  sw          $v1, -0x7FC8($gp)
    ctx->pc = 0x11c548u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934584), GPR_U32(ctx, 3));
    ctx->pc = 0x11c54cu;
}
