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

// Function: FUN_001bebf0
// Address: 0x1bebf0 - 0x1bec50
void FUN_001bebf0_0x1bebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bebf0_0x1bebf0");
#endif

    switch (ctx->pc) {
        case 0x1bec20u: goto label_1bec20;
        case 0x1bec38u: goto label_1bec38;
        default: break;
    }

    ctx->pc = 0x1bebf0u;

    // 0x1bebf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bebf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bebf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bebf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bebf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bebf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bebfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bebfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bec00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bec00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec04: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BEC04u;
    {
        const bool branch_taken_0x1bec04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC04u;
        // 0x1bec08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec04) {
            ctx->pc = 0x1BEC38u;
            goto label_1bec38;
        }
    }
    ctx->pc = 0x1BEC0Cu;
    // 0x1bec0c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1bec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1bec10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bec10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec14: 0x2442ba40  addiu       $v0, $v0, -0x45C0
    ctx->pc = 0x1bec14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949440));
    // 0x1bec18: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1BEC18u;
    SET_GPR_U32(ctx, 31, 0x1BEC20u);
    ctx->pc = 0x1BEC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEC18u;
    // 0x1bec1c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1BEC18u, 0x1BEC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC20u;
label_1bec20:
    // 0x1bec20: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1bec20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1bec24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1bec24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1bec28: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEC28u;
    {
        const bool branch_taken_0x1bec28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BEC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC28u;
        // 0x1bec2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec28) {
            ctx->pc = 0x1BEC3Cu;
            goto label_1bec3c;
        }
    }
    ctx->pc = 0x1BEC30u;
    // 0x1bec30: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BEC30u;
    SET_GPR_U32(ctx, 31, 0x1BEC38u);
    ctx->pc = 0x1BEC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEC30u;
    // 0x1bec34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BEC30u, 0x1BEC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC38u;
label_1bec38:
    // 0x1bec38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1bec38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bec3c:
    // 0x1bec3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bec3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bec40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bec40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bec44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bec44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bec48: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC48u;
        // 0x1bec4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEC50u;
}
