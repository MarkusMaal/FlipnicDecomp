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

// Function: FUN_001d1ad0
// Address: 0x1d1ad0 - 0x1d1b74
void FUN_001d1ad0_0x1d1ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1ad0_0x1d1ad0");
#endif

    switch (ctx->pc) {
        case 0x1d1af8u: goto label_1d1af8;
        default: break;
    }

    ctx->pc = 0x1d1ad0u;

    // 0x1d1ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1ad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1adc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1ae0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ae4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d1ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ae8: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x1d1ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1d1aec: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x1d1aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1d1af0: 0xc07e320  jal         func_1F8C80
    ctx->pc = 0x1D1AF0u;
    SET_GPR_U32(ctx, 31, 0x1D1AF8u);
    ctx->pc = 0x1D1AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AF0u;
    // 0x1d1af4: 0x2608001c  addiu       $t0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8C80u, 0x1D1AF0u, 0x1D1AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AF8u;
label_1d1af8:
    // 0x1d1af8: 0x2403ff2e  addiu       $v1, $zero, -0xD2
    ctx->pc = 0x1d1af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
    // 0x1d1afc: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D1AFCu;
    {
        const bool branch_taken_0x1d1afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D1B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AFCu;
        // 0x1d1b00: 0xa20001e0  sb          $zero, 0x1E0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 480), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1afc) {
            ctx->pc = 0x1D1B4Cu;
            goto label_1d1b4c;
        }
    }
    ctx->pc = 0x1D1B04u;
    // 0x1d1b04: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x1d1b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x1d1b08: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D1B08u;
    {
        const bool branch_taken_0x1d1b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B08u;
        // 0x1d1b0c: 0x2403ff9c  addiu       $v1, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b08) {
            ctx->pc = 0x1D1B4Cu;
            goto label_1d1b4c;
        }
    }
    ctx->pc = 0x1D1B10u;
    // 0x1d1b10: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D1B10u;
    {
        const bool branch_taken_0x1d1b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1b10) {
            ctx->pc = 0x1D1B4Cu;
            goto label_1d1b4c;
        }
    }
    ctx->pc = 0x1D1B18u;
    // 0x1d1b18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1B18u;
    {
        const bool branch_taken_0x1d1b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B18u;
        // 0x1d1b1c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b18) {
            ctx->pc = 0x1D1B28u;
            goto label_1d1b28;
        }
    }
    ctx->pc = 0x1D1B20u;
    // 0x1d1b20: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D1B20u;
    {
        const bool branch_taken_0x1d1b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B20u;
        // 0x1d1b24: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b20) {
            ctx->pc = 0x1D1B50u;
            goto label_1d1b50;
        }
    }
    ctx->pc = 0x1D1B28u;
label_1d1b28:
    // 0x1d1b28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d1b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1b2c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1d1b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1d1b30: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x1d1b30u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1d1b34: 0xa20301e0  sb          $v1, 0x1E0($s0)
    ctx->pc = 0x1d1b34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 480), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d1b38: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d1b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d1b3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1b40: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d1b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d1b44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1B44u;
    {
        const bool branch_taken_0x1d1b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B44u;
        // 0x1d1b48: 0xac640020  sw          $a0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b44) {
            ctx->pc = 0x1D1B64u;
            goto label_1d1b64;
        }
    }
    ctx->pc = 0x1D1B4Cu;
label_1d1b4c:
    // 0x1d1b4c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d1b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d1b50:
    // 0x1d1b50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d1b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d1b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b58: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1b5c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d1b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d1b60: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1d1b60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_1d1b64:
    // 0x1d1b64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1b68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B6Cu;
        // 0x1d1b70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B74u;
}
