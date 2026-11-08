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

// Function: entry_00189fd0
// Address: 0x189fd0 - 0x18a010
void entry_00189fd0_0x189fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189fd0_0x189fd0");
#endif

    switch (ctx->pc) {
        case 0x189fe8u: goto label_189fe8;
        case 0x189ff8u: goto label_189ff8;
        default: break;
    }

    ctx->pc = 0x189fd0u;

    // 0x189fd0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x189fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x189fd4: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x189fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x189fd8: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x189fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189fdc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x189fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189fe0: 0xc061fc0  jal         func_187F00
    ctx->pc = 0x189FE0u;
    SET_GPR_U32(ctx, 31, 0x189FE8u);
    ctx->pc = 0x189FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189FE0u;
    // 0x189fe4: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187F00u, 0x189FE0u, 0x189FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FE8u;
label_189fe8:
    // 0x189fe8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x189fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ff0: 0xc0623bc  jal         func_188EF0
    ctx->pc = 0x189FF0u;
    SET_GPR_U32(ctx, 31, 0x189FF8u);
    ctx->pc = 0x189FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189FF0u;
    // 0x189ff4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188EF0u, 0x189FF0u, 0x189FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FF8u;
label_189ff8:
    // 0x189ff8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x189ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ffc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x189ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a008: 0x3e00008  jr          $ra
    ctx->pc = 0x18A008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A008u;
        // 0x18a00c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A010u;
}
