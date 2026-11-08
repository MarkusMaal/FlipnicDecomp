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

// Function: FUN_0012a270
// Address: 0x12a270 - 0x12a2c8
void FUN_0012a270_0x12a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012a270_0x12a270");
#endif

    switch (ctx->pc) {
        case 0x12a284u: goto label_12a284;
        default: break;
    }

    ctx->pc = 0x12a270u;

    // 0x12a270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12a270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12a274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12a274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12a278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12a27c: 0xc04a814  jal         func_12A050
    ctx->pc = 0x12A27Cu;
    SET_GPR_U32(ctx, 31, 0x12A284u);
    ctx->pc = 0x12A280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A27Cu;
    // 0x12a280: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A050u, 0x12A27Cu, 0x12A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A284u;
label_12a284:
    // 0x12a284: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x12a284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x12a288: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12a288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a28c: 0x24638b20  addiu       $v1, $v1, -0x74E0
    ctx->pc = 0x12a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937376));
    // 0x12a290: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x12a290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x12a294: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x12a294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x12a298: 0x8f838470  lw          $v1, -0x7B90($gp)
    ctx->pc = 0x12a298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935664)));
    // 0x12a29c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x12a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x12a2a0: 0x8f838470  lw          $v1, -0x7B90($gp)
    ctx->pc = 0x12a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935664)));
    // 0x12a2a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12a2a8: 0xaf838470  sw          $v1, -0x7B90($gp)
    ctx->pc = 0x12a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935664), GPR_U32(ctx, 3));
    // 0x12a2ac: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x12a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x12a2b0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x12a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x12a2b4: 0xaf808474  sw          $zero, -0x7B8C($gp)
    ctx->pc = 0x12a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935668), GPR_U32(ctx, 0));
    // 0x12a2b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12a2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a2bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12a2bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x12A2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2C0u;
        // 0x12a2c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A2C8u;
}
