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

// Function: FUN_001cfb00
// Address: 0x1cfb00 - 0x1cfb38
void FUN_001cfb00_0x1cfb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cfb00_0x1cfb00");
#endif

    switch (ctx->pc) {
        case 0x1cfb14u: goto label_1cfb14;
        default: break;
    }

    ctx->pc = 0x1cfb00u;

    // 0x1cfb00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cfb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cfb04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cfb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cfb08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cfb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cfb0c: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1CFB0Cu;
    SET_GPR_U32(ctx, 31, 0x1CFB14u);
    ctx->pc = 0x1CFB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFB0Cu;
    // 0x1cfb10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1CFB0Cu, 0x1CFB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFB14u;
label_1cfb14:
    // 0x1cfb14: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1cfb14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1cfb18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cfb18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfb1c: 0x2463bf20  addiu       $v1, $v1, -0x40E0
    ctx->pc = 0x1cfb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950688));
    // 0x1cfb20: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1cfb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1cfb24: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1cfb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1cfb28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cfb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfb2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cfb2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfb30: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB30u;
        // 0x1cfb34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFB38u;
}
