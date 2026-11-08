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

// Function: FUN_00185870
// Address: 0x185870 - 0x1858b4
void FUN_00185870_0x185870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00185870_0x185870");
#endif

    switch (ctx->pc) {
        case 0x1858a0u: goto label_1858a0;
        default: break;
    }

    ctx->pc = 0x185870u;

    // 0x185870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x185870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x185874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x185874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x185878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18587c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18587cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185880: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x185880u;
    {
        const bool branch_taken_0x185880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x185884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185880u;
        // 0x185884: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185880) {
            ctx->pc = 0x1858A4u;
            goto label_1858a4;
        }
    }
    ctx->pc = 0x185888u;
    // 0x185888: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x185888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x18588c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18588cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x185890: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185890u;
    {
        const bool branch_taken_0x185890 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x185890) {
            ctx->pc = 0x1858A0u;
            goto label_1858a0;
        }
    }
    ctx->pc = 0x185898u;
    // 0x185898: 0xc0401a4  jal         func_100690
    ctx->pc = 0x185898u;
    SET_GPR_U32(ctx, 31, 0x1858A0u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x185898u, 0x1858A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858A0u;
label_1858a0:
    // 0x1858a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1858a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1858a4:
    // 0x1858a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1858a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1858a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1858a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1858ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1858ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1858B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858ACu;
        // 0x1858b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1858ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1858B4u;
}
