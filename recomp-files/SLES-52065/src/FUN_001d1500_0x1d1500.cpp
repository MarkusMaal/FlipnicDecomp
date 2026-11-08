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

// Function: FUN_001d1500
// Address: 0x1d1500 - 0x1d153c
void FUN_001d1500_0x1d1500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1500_0x1d1500");
#endif

    switch (ctx->pc) {
        case 0x1d1514u: goto label_1d1514;
        default: break;
    }

    ctx->pc = 0x1d1500u;

    // 0x1d1500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d150c: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1D150Cu;
    SET_GPR_U32(ctx, 31, 0x1D1514u);
    ctx->pc = 0x1D1510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D150Cu;
    // 0x1d1510: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1D150Cu, 0x1D1514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1514u;
label_1d1514:
    // 0x1d1514: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1d1514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1d1518: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d1518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d151c: 0x2463c040  addiu       $v1, $v1, -0x3FC0
    ctx->pc = 0x1d151cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950976));
    // 0x1d1520: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d1520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d1524: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x1d1524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d1528: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d1528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1d152c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d152cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1534: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1534u;
        // 0x1d1538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D153Cu;
}
