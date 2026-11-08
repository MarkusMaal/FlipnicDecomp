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

// Function: entry_0018d33c
// Address: 0x18d33c - 0x18d390
void entry_0018d33c_0x18d33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d33c_0x18d33c");
#endif

    switch (ctx->pc) {
        case 0x18d344u: goto label_18d344;
        case 0x18d354u: goto label_18d354;
        case 0x18d364u: goto label_18d364;
        case 0x18d374u: goto label_18d374;
        default: break;
    }

    ctx->pc = 0x18d33cu;

    // 0x18d33c: 0xc053280  jal         func_14CA00
    ctx->pc = 0x18D33Cu;
    SET_GPR_U32(ctx, 31, 0x18D344u);
    ctx->pc = 0x18D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D33Cu;
    // 0x18d340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CA00u, 0x18D33Cu, 0x18D344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D344u;
label_18d344:
    // 0x18d344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d348: 0x264504a0  addiu       $a1, $s2, 0x4A0
    ctx->pc = 0x18d348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1184));
    // 0x18d34c: 0xc053320  jal         func_14CC80
    ctx->pc = 0x18D34Cu;
    SET_GPR_U32(ctx, 31, 0x18D354u);
    ctx->pc = 0x18D350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D34Cu;
    // 0x18d350: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC80u, 0x18D34Cu, 0x18D354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D354u;
label_18d354:
    // 0x18d354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d358: 0x264504b0  addiu       $a1, $s2, 0x4B0
    ctx->pc = 0x18d358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1200));
    // 0x18d35c: 0xc053320  jal         func_14CC80
    ctx->pc = 0x18D35Cu;
    SET_GPR_U32(ctx, 31, 0x18D364u);
    ctx->pc = 0x18D360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D35Cu;
    // 0x18d360: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC80u, 0x18D35Cu, 0x18D364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D364u;
label_18d364:
    // 0x18d364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d368: 0x264504c0  addiu       $a1, $s2, 0x4C0
    ctx->pc = 0x18d368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1216));
    // 0x18d36c: 0xc053320  jal         func_14CC80
    ctx->pc = 0x18D36Cu;
    SET_GPR_U32(ctx, 31, 0x18D374u);
    ctx->pc = 0x18D370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D36Cu;
    // 0x18d370: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC80u, 0x18D36Cu, 0x18D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D374u;
label_18d374:
    // 0x18d374: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18d374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d378: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18d378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18d37c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18d37cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d380: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18d380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d384: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18d384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d388: 0x3e00008  jr          $ra
    ctx->pc = 0x18D388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D388u;
        // 0x18d38c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D390u;
}
