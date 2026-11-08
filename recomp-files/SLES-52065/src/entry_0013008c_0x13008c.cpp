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

// Function: entry_0013008c
// Address: 0x13008c - 0x1300c0
void entry_0013008c_0x13008c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013008c_0x13008c");
#endif

    switch (ctx->pc) {
        case 0x130094u: goto label_130094;
        case 0x13009cu: goto label_13009c;
        case 0x1300a4u: goto label_1300a4;
        case 0x1300b8u: goto label_1300b8;
        default: break;
    }

    ctx->pc = 0x13008cu;

    // 0x13008c: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x13008Cu;
    SET_GPR_U32(ctx, 31, 0x130094u);
    ctx->pc = 0x130090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13008Cu;
    // 0x130090: 0xaf90858c  sw          $s0, -0x7A74($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x13008Cu, 0x130094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130094u;
label_130094:
    // 0x130094: 0xc051480  jal         func_145200
    ctx->pc = 0x130094u;
    SET_GPR_U32(ctx, 31, 0x13009Cu);
    ctx->pc = 0x130098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130094u;
    // 0x130098: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145200u, 0x130094u, 0x13009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13009Cu;
label_13009c:
    // 0x13009c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13009Cu;
    SET_GPR_U32(ctx, 31, 0x1300A4u);
    ctx->pc = 0x1300A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13009Cu;
    // 0x1300a0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13009Cu, 0x1300A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300A4u;
label_1300a4:
    // 0x1300a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1300A4u;
    {
        const bool branch_taken_0x1300a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1300A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300A4u;
        // 0x1300a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300a4) {
            ctx->pc = 0x1300C0u;
            return;
        }
    }
    ctx->pc = 0x1300ACu;
    // 0x1300ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1300acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300b0: 0xc049dd8  jal         func_127760
    ctx->pc = 0x1300B0u;
    SET_GPR_U32(ctx, 31, 0x1300B8u);
    ctx->pc = 0x1300B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300B0u;
    // 0x1300b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127760u, 0x1300B0u, 0x1300B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300B8u;
label_1300b8:
    // 0x1300b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1300b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1300bc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1300bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x1300c0u;
}
