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

// Function: FUN_001bc510
// Address: 0x1bc510 - 0x1bc554
void FUN_001bc510_0x1bc510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bc510_0x1bc510");
#endif

    switch (ctx->pc) {
        case 0x1bc524u: goto label_1bc524;
        default: break;
    }

    ctx->pc = 0x1bc510u;

    // 0x1bc510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bc518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bc51c: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1BC51Cu;
    SET_GPR_U32(ctx, 31, 0x1BC524u);
    ctx->pc = 0x1BC520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC51Cu;
    // 0x1bc520: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1BC51Cu, 0x1BC524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC524u;
label_1bc524:
    // 0x1bc524: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1bc524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1bc528: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1bc528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bc52c: 0x2442b9e0  addiu       $v0, $v0, -0x4620
    ctx->pc = 0x1bc52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949344));
    // 0x1bc530: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bc530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1bc534: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1bc534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1bc538: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bc538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc53c: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x1bc53cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc540: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1bc540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1bc544: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc54c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC54Cu;
        // 0x1bc550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC554u;
}
