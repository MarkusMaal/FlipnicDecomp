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

// Function: FUN_00143aa0
// Address: 0x143aa0 - 0x143b08
void FUN_00143aa0_0x143aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00143aa0_0x143aa0");
#endif

    switch (ctx->pc) {
        case 0x143ac4u: goto label_143ac4;
        case 0x143ad8u: goto label_143ad8;
        case 0x143af0u: goto label_143af0;
        default: break;
    }

    ctx->pc = 0x143aa0u;

    // 0x143aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x143aa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x143aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x143aa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143ab0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x143ab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ab4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x143AB4u;
    {
        const bool branch_taken_0x143ab4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x143AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143AB4u;
        // 0x143ab8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ab4) {
            ctx->pc = 0x143AF0u;
            goto label_143af0;
        }
    }
    ctx->pc = 0x143ABCu;
    // 0x143abc: 0xc0510b8  jal         func_1442E0
    ctx->pc = 0x143ABCu;
    SET_GPR_U32(ctx, 31, 0x143AC4u);
    ctx->pc = 0x1442E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1442E0u, 0x143ABCu, 0x143AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143AC4u;
label_143ac4:
    // 0x143ac4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x143ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x143ac8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143AC8u;
    {
        const bool branch_taken_0x143ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x143ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143AC8u;
        // 0x143acc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ac8) {
            ctx->pc = 0x143ADCu;
            goto label_143adc;
        }
    }
    ctx->pc = 0x143AD0u;
    // 0x143ad0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x143AD0u;
    SET_GPR_U32(ctx, 31, 0x143AD8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x143AD0u, 0x143AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143AD8u;
label_143ad8:
    // 0x143ad8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x143ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_143adc:
    // 0x143adc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x143adcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x143ae0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143AE0u;
    {
        const bool branch_taken_0x143ae0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x143AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143AE0u;
        // 0x143ae4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ae0) {
            ctx->pc = 0x143AF4u;
            goto label_143af4;
        }
    }
    ctx->pc = 0x143AE8u;
    // 0x143ae8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x143AE8u;
    SET_GPR_U32(ctx, 31, 0x143AF0u);
    ctx->pc = 0x143AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143AE8u;
    // 0x143aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x143AE8u, 0x143AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143AF0u;
label_143af0:
    // 0x143af0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x143af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_143af4:
    // 0x143af4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x143af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143af8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143afc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143b00: 0x3e00008  jr          $ra
    ctx->pc = 0x143B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B00u;
        // 0x143b04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143B08u;
}
