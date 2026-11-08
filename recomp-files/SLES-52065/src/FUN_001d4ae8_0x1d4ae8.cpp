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

// Function: FUN_001d4ae8
// Address: 0x1d4ae8 - 0x1d4b78
void FUN_001d4ae8_0x1d4ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d4ae8_0x1d4ae8");
#endif

    switch (ctx->pc) {
        case 0x1d4b2cu: goto label_1d4b2c;
        case 0x1d4b40u: goto label_1d4b40;
        case 0x1d4b64u: goto label_1d4b64;
        default: break;
    }

    ctx->pc = 0x1d4ae8u;

    // 0x1d4ae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d4ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d4aec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d4aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4af0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d4af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d4af4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d4af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4af8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d4af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d4afc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d4afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d4b00: 0x14650019  bne         $v1, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D4B00u;
    {
        const bool branch_taken_0x1d4b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D4B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B00u;
        // 0x1d4b04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b00) {
            ctx->pc = 0x1D4B68u;
            goto label_1d4b68;
        }
    }
    ctx->pc = 0x1D4B08u;
    // 0x1d4b08: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d4b0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d4b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4b10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d4b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d4b14: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4B14u;
    {
        const bool branch_taken_0x1d4b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B14u;
        // 0x1d4b18: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b14) {
            ctx->pc = 0x1D4B2Cu;
            goto label_1d4b2c;
        }
    }
    ctx->pc = 0x1D4B1Cu;
    // 0x1d4b1c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d4b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4b20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b24: 0xc075184  jal         func_1D4610
    ctx->pc = 0x1D4B24u;
    SET_GPR_U32(ctx, 31, 0x1D4B2Cu);
    ctx->pc = 0x1D4B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B24u;
    // 0x1d4b28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4610u, 0x1D4B24u, 0x1D4B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B2Cu;
label_1d4b2c:
    // 0x1d4b2c: 0x8e060230  lw          $a2, 0x230($s0)
    ctx->pc = 0x1d4b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x1d4b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b34: 0x8e070234  lw          $a3, 0x234($s0)
    ctx->pc = 0x1d4b34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x1d4b38: 0xc075184  jal         func_1D4610
    ctx->pc = 0x1D4B38u;
    SET_GPR_U32(ctx, 31, 0x1D4B40u);
    ctx->pc = 0x1D4B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B38u;
    // 0x1d4b3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4610u, 0x1D4B38u, 0x1D4B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B40u;
label_1d4b40:
    // 0x1d4b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b44: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d4b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d4b48: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d4b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d4b4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b50: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1d4b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1d4b54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4B54u;
    {
        const bool branch_taken_0x1d4b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B54u;
        // 0x1d4b58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b54) {
            ctx->pc = 0x1D4B64u;
            goto label_1d4b64;
        }
    }
    ctx->pc = 0x1D4B5Cu;
    // 0x1d4b5c: 0xc075184  jal         func_1D4610
    ctx->pc = 0x1D4B5Cu;
    SET_GPR_U32(ctx, 31, 0x1D4B64u);
    ctx->pc = 0x1D4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4610u, 0x1D4B5Cu, 0x1D4B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B64u;
label_1d4b64:
    // 0x1d4b64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d4b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b68:
    // 0x1d4b68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d4b68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4b6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d4b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d4b70: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B70u;
        // 0x1d4b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4B78u;
}
