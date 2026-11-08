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

// Function: entry_001308f0
// Address: 0x1308f0 - 0x130930
void entry_001308f0_0x1308f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001308f0_0x1308f0");
#endif

    switch (ctx->pc) {
        case 0x130904u: goto label_130904;
        case 0x13092cu: goto label_13092c;
        default: break;
    }

    ctx->pc = 0x1308f0u;

    // 0x1308f0: 0x27b20150  addiu       $s2, $sp, 0x150
    ctx->pc = 0x1308f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1308f4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1308f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1308f8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1308f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1308fc: 0xc080702  jal         func_201C08
    ctx->pc = 0x1308FCu;
    SET_GPR_U32(ctx, 31, 0x130904u);
    ctx->pc = 0x130900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1308FCu;
    // 0x130900: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1308FCu, 0x130904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130904u;
label_130904:
    // 0x130904: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x130904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130908: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x130908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13090c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13090cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130910: 0x27a4015c  addiu       $a0, $sp, 0x15C
    ctx->pc = 0x130910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x130914: 0x27a60158  addiu       $a2, $sp, 0x158
    ctx->pc = 0x130914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x130918: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x130918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13091c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13091cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x130920: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x130920u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x130924: 0xc04c450  jal         func_131140
    ctx->pc = 0x130924u;
    SET_GPR_U32(ctx, 31, 0x13092Cu);
    ctx->pc = 0x130928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130924u;
    // 0x130928: 0xafa30158  sw          $v1, 0x158($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131140u, 0x130924u, 0x13092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13092Cu;
label_13092c:
    // 0x13092c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13092cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130930u;
}
