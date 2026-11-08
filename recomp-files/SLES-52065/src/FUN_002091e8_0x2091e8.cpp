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

// Function: FUN_002091e8
// Address: 0x2091e8 - 0x209234
void FUN_002091e8_0x2091e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002091e8_0x2091e8");
#endif

    switch (ctx->pc) {
        case 0x209208u: goto label_209208;
        case 0x209218u: goto label_209218;
        case 0x209224u: goto label_209224;
        default: break;
    }

    ctx->pc = 0x2091e8u;

    // 0x2091e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2091e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2091ec: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2091ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2091f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2091f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2091f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2091f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2091f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2091f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2091fc: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x2091fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x209200: 0xc08227c  jal         func_2089F0
    ctx->pc = 0x209200u;
    SET_GPR_U32(ctx, 31, 0x209208u);
    ctx->pc = 0x209204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209200u;
    // 0x209204: 0xe7ad0024  swc1        $f13, 0x24($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2089F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2089F0u, 0x209200u, 0x209208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209208u;
label_209208:
    // 0x209208: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x209208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20920c: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x20920cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x209210: 0xc08227c  jal         func_2089F0
    ctx->pc = 0x209210u;
    SET_GPR_U32(ctx, 31, 0x209218u);
    ctx->pc = 0x209214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209210u;
    // 0x209214: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2089F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2089F0u, 0x209210u, 0x209218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209218u;
label_209218:
    // 0x209218: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x209218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20921c: 0xc082434  jal         func_2090D0
    ctx->pc = 0x20921Cu;
    SET_GPR_U32(ctx, 31, 0x209224u);
    ctx->pc = 0x209220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20921Cu;
    // 0x209220: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2090D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2090D0u, 0x20921Cu, 0x209224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209224u;
label_209224:
    // 0x209224: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x209224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x209228: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x209228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20922c: 0x3e00008  jr          $ra
    ctx->pc = 0x20922Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20922Cu;
        // 0x209230: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20922Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209234u;
}
