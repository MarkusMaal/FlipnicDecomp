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

// Function: FUN_0017ce00
// Address: 0x17ce00 - 0x17ce54
void FUN_0017ce00_0x17ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017ce00_0x17ce00");
#endif

    switch (ctx->pc) {
        case 0x17ce28u: goto label_17ce28;
        default: break;
    }

    ctx->pc = 0x17ce00u;

    // 0x17ce00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ce04: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17ce08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ce08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ce0c: 0x2442b118  addiu       $v0, $v0, -0x4EE8
    ctx->pc = 0x17ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947096));
    // 0x17ce10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ce10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ce14: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x17ce14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x17ce18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ce18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce1c: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x17ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x17ce20: 0xc048920  jal         func_122480
    ctx->pc = 0x17CE20u;
    SET_GPR_U32(ctx, 31, 0x17CE28u);
    ctx->pc = 0x17CE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE20u;
    // 0x17ce24: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x17CE20u, 0x17CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE28u;
label_17ce28:
    // 0x17ce28: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x17ce28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x17ce2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ce30: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x17ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x17ce34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17ce34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce38: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x17ce38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x17ce3c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x17ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x17ce40: 0xa2030034  sb          $v1, 0x34($s0)
    ctx->pc = 0x17ce40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 3));
    // 0x17ce44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ce44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ce48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ce48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ce4c: 0x3e00008  jr          $ra
    ctx->pc = 0x17CE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE4Cu;
        // 0x17ce50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CE54u;
}
