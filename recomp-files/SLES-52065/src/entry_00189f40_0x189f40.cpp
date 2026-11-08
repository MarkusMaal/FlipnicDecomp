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

// Function: entry_00189f40
// Address: 0x189f40 - 0x189f80
void entry_00189f40_0x189f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189f40_0x189f40");
#endif

    switch (ctx->pc) {
        case 0x189f58u: goto label_189f58;
        case 0x189f68u: goto label_189f68;
        default: break;
    }

    ctx->pc = 0x189f40u;

    // 0x189f40: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x189f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x189f44: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x189f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x189f48: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x189f48u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189f4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x189f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189f50: 0xc061ea0  jal         func_187A80
    ctx->pc = 0x189F50u;
    SET_GPR_U32(ctx, 31, 0x189F58u);
    ctx->pc = 0x189F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F50u;
    // 0x189f54: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187A80u, 0x189F50u, 0x189F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189F58u;
label_189f58:
    // 0x189f58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x189f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f60: 0xc0623bc  jal         func_188EF0
    ctx->pc = 0x189F60u;
    SET_GPR_U32(ctx, 31, 0x189F68u);
    ctx->pc = 0x189F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F60u;
    // 0x189f64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188EF0u, 0x189F60u, 0x189F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189F68u;
label_189f68:
    // 0x189f68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x189f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x189f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189f70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189f78: 0x3e00008  jr          $ra
    ctx->pc = 0x189F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F78u;
        // 0x189f7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189F80u;
}
