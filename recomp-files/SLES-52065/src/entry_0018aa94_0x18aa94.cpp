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

// Function: entry_0018aa94
// Address: 0x18aa94 - 0x18aad4
void entry_0018aa94_0x18aa94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018aa94_0x18aa94");
#endif

    switch (ctx->pc) {
        case 0x18aa9cu: goto label_18aa9c;
        case 0x18aaa8u: goto label_18aaa8;
        case 0x18aac4u: goto label_18aac4;
        case 0x18aad0u: goto label_18aad0;
        default: break;
    }

    ctx->pc = 0x18aa94u;

    // 0x18aa94: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x18AA94u;
    SET_GPR_U32(ctx, 31, 0x18AA9Cu);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x18AA94u, 0x18AA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA9Cu;
label_18aa9c:
    // 0x18aa9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18aa9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aaa0: 0xc07c980  jal         func_1F2600
    ctx->pc = 0x18AAA0u;
    SET_GPR_U32(ctx, 31, 0x18AAA8u);
    ctx->pc = 0x18AAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AAA0u;
    // 0x18aaa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2600u, 0x18AAA0u, 0x18AAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AAA8u;
label_18aaa8:
    // 0x18aaa8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18aaa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aaac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18aaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aab0: 0xafb600a0  sw          $s6, 0xA0($sp)
    ctx->pc = 0x18aab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 22));
    // 0x18aab4: 0xafb300a4  sw          $s3, 0xA4($sp)
    ctx->pc = 0x18aab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 19));
    // 0x18aab8: 0xafb000a8  sw          $s0, 0xA8($sp)
    ctx->pc = 0x18aab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 16));
    // 0x18aabc: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x18AABCu;
    SET_GPR_U32(ctx, 31, 0x18AAC4u);
    ctx->pc = 0x18AAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AABCu;
    // 0x18aac0: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x18AABCu, 0x18AAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AAC4u;
label_18aac4:
    // 0x18aac4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x18aac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18aac8: 0xc07ae78  jal         func_1EB9E0
    ctx->pc = 0x18AAC8u;
    SET_GPR_U32(ctx, 31, 0x18AAD0u);
    ctx->pc = 0x18AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AAC8u;
    // 0x18aacc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9E0u, 0x18AAC8u, 0x18AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AAD0u;
label_18aad0:
    // 0x18aad0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x18aad0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18aad4u;
}
