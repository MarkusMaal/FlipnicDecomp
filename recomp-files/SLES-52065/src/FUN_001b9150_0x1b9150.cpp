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

// Function: FUN_001b9150
// Address: 0x1b9150 - 0x1b9194
void FUN_001b9150_0x1b9150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b9150_0x1b9150");
#endif

    switch (ctx->pc) {
        case 0x1b9168u: goto label_1b9168;
        default: break;
    }

    ctx->pc = 0x1b9150u;

    // 0x1b9150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b9158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b9158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b915c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b915cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9160: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1B9160u;
    SET_GPR_U32(ctx, 31, 0x1B9168u);
    ctx->pc = 0x1B9164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9160u;
    // 0x1b9164: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1B9160u, 0x1B9168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9168u;
label_1b9168:
    // 0x1b9168: 0xa20000c1  sb          $zero, 0xC1($s0)
    ctx->pc = 0x1b9168u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 193), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b916c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b916cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9170: 0xa20300c0  sb          $v1, 0xC0($s0)
    ctx->pc = 0x1b9170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 192), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b9174: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b9174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b9178: 0xa20000c2  sb          $zero, 0xC2($s0)
    ctx->pc = 0x1b9178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 194), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b917c: 0xa20000c3  sb          $zero, 0xC3($s0)
    ctx->pc = 0x1b917cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 195), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b9180: 0xa20000c4  sb          $zero, 0xC4($s0)
    ctx->pc = 0x1b9180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 196), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b9184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b918c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B918Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B918Cu;
        // 0x1b9190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B918Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9194u;
}
