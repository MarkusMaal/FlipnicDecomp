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

// Function: FUN_001e6ab0
// Address: 0x1e6ab0 - 0x1e6b10
void FUN_001e6ab0_0x1e6ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e6ab0_0x1e6ab0");
#endif

    switch (ctx->pc) {
        case 0x1e6afcu: goto label_1e6afc;
        default: break;
    }

    ctx->pc = 0x1e6ab0u;

    // 0x1e6ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e6ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6abc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6ac0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E6AC0u;
    {
        const bool branch_taken_0x1e6ac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6AC0u;
        // 0x1e6ac4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ac0) {
            ctx->pc = 0x1E6B00u;
            goto label_1e6b00;
        }
    }
    ctx->pc = 0x1E6AC8u;
    // 0x1e6ac8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e6acc: 0x2442c270  addiu       $v0, $v0, -0x3D90
    ctx->pc = 0x1e6accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951536));
    // 0x1e6ad0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6AD0u;
    {
        const bool branch_taken_0x1e6ad0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6AD0u;
        // 0x1e6ad4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ad0) {
            ctx->pc = 0x1E6AE4u;
            goto label_1e6ae4;
        }
    }
    ctx->pc = 0x1E6AD8u;
    // 0x1e6ad8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e6adc: 0x24428850  addiu       $v0, $v0, -0x77B0
    ctx->pc = 0x1e6adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936656));
    // 0x1e6ae0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e6ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e6ae4:
    // 0x1e6ae4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e6ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e6ae8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e6ae8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e6aec: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6AECu;
    {
        const bool branch_taken_0x1e6aec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6AECu;
        // 0x1e6af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6aec) {
            ctx->pc = 0x1E6AFCu;
            goto label_1e6afc;
        }
    }
    ctx->pc = 0x1E6AF4u;
    // 0x1e6af4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E6AF4u;
    SET_GPR_U32(ctx, 31, 0x1E6AFCu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E6AF4u, 0x1E6AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6AFCu;
label_1e6afc:
    // 0x1e6afc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e6afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e6b00:
    // 0x1e6b00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6b04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6b08: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B08u;
        // 0x1e6b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6B10u;
}
