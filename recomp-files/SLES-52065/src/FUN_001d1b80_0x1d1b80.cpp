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

// Function: FUN_001d1b80
// Address: 0x1d1b80 - 0x1d1c6c
void FUN_001d1b80_0x1d1b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1b80_0x1d1b80");
#endif

    switch (ctx->pc) {
        case 0x1d1be8u: goto label_1d1be8;
        case 0x1d1bfcu: goto label_1d1bfc;
        case 0x1d1c10u: goto label_1d1c10;
        case 0x1d1c2cu: goto label_1d1c2c;
        case 0x1d1c48u: goto label_1d1c48;
        case 0x1d1c60u: goto label_1d1c60;
        default: break;
    }

    ctx->pc = 0x1d1b80u;

    // 0x1d1b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1b84: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d1b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1b8c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1d1b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d1b90: 0x10e60033  beq         $a3, $a2, . + 4 + (0x33 << 2)
    ctx->pc = 0x1D1B90u;
    {
        const bool branch_taken_0x1d1b90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1D1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B90u;
        // 0x1d1b94: 0x72900  sll         $a1, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b90) {
            ctx->pc = 0x1D1C60u;
            goto label_1d1c60;
        }
    }
    ctx->pc = 0x1D1B98u;
    // 0x1d1b98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d1b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1b9c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1d1b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d1ba0: 0x8ca50020  lw          $a1, 0x20($a1)
    ctx->pc = 0x1d1ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1d1ba4: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1BA4u;
    {
        const bool branch_taken_0x1d1ba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BA4u;
        // 0x1d1ba8: 0x20e3ffea  addi        $v1, $a3, -0x16 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967274, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ba4) {
            ctx->pc = 0x1D1BB8u;
            goto label_1d1bb8;
        }
    }
    ctx->pc = 0x1D1BACu;
    // 0x1d1bac: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x1d1bacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x1d1bb0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1D1BB0u;
    {
        const bool branch_taken_0x1d1bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BB0u;
        // 0x1d1bb4: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bb0) {
            ctx->pc = 0x1D1C60u;
            goto label_1d1c60;
        }
    }
    ctx->pc = 0x1D1BB8u;
label_1d1bb8:
    // 0x1d1bb8: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x1d1bb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1d1bbc: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x1D1BBCu;
    {
        const bool branch_taken_0x1d1bbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BBCu;
        // 0x1d1bc0: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bbc) {
            ctx->pc = 0x1D1C60u;
            goto label_1d1c60;
        }
    }
    ctx->pc = 0x1D1BC4u;
    // 0x1d1bc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d1bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d1bc8: 0x24a53500  addiu       $a1, $a1, 0x3500
    ctx->pc = 0x1d1bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13568));
    // 0x1d1bcc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d1bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d1bd0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d1bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1bd4: 0x600008  jr          $v1
    ctx->pc = 0x1D1BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1BDCu: goto label_1d1bdc;
            case 0x1D1BF0u: goto label_1d1bf0;
            case 0x1D1C04u: goto label_1d1c04;
            case 0x1D1C18u: goto label_1d1c18;
            case 0x1D1C34u: goto label_1d1c34;
            case 0x1D1C50u: goto label_1d1c50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1BD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D1BDCu;
label_1d1bdc:
    // 0x1d1bdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1be0: 0xc074790  jal         func_1D1E40
    ctx->pc = 0x1D1BE0u;
    SET_GPR_U32(ctx, 31, 0x1D1BE8u);
    ctx->pc = 0x1D1BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BE0u;
    // 0x1d1be4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1E40u, 0x1D1BE0u, 0x1D1BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BE8u;
label_1d1be8:
    // 0x1d1be8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1D1BE8u;
    {
        const bool branch_taken_0x1d1be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BE8u;
        // 0x1d1bec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1be8) {
            ctx->pc = 0x1D1C64u;
            goto label_1d1c64;
        }
    }
    ctx->pc = 0x1D1BF0u;
label_1d1bf0:
    // 0x1d1bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bf4: 0xc074800  jal         func_1D2000
    ctx->pc = 0x1D1BF4u;
    SET_GPR_U32(ctx, 31, 0x1D1BFCu);
    ctx->pc = 0x1D1BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BF4u;
    // 0x1d1bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2000u, 0x1D1BF4u, 0x1D1BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BFCu;
label_1d1bfc:
    // 0x1d1bfc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D1BFCu;
    {
        const bool branch_taken_0x1d1bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1bfc) {
            ctx->pc = 0x1D1C60u;
            goto label_1d1c60;
        }
    }
    ctx->pc = 0x1D1C04u;
label_1d1c04:
    // 0x1d1c04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c08: 0xc0748dc  jal         func_1D2370
    ctx->pc = 0x1D1C08u;
    SET_GPR_U32(ctx, 31, 0x1D1C10u);
    ctx->pc = 0x1D1C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C08u;
    // 0x1d1c0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2370u, 0x1D1C08u, 0x1D1C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C10u;
label_1d1c10:
    // 0x1d1c10: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D1C10u;
    {
        const bool branch_taken_0x1d1c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c10) {
            ctx->pc = 0x1D1C60u;
            goto label_1d1c60;
        }
    }
    ctx->pc = 0x1D1C18u;
label_1d1c18:
    // 0x1d1c18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1c20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c24: 0xc074a58  jal         func_1D2960
    ctx->pc = 0x1D1C24u;
    SET_GPR_U32(ctx, 31, 0x1D1C2Cu);
    ctx->pc = 0x1D1C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C24u;
    // 0x1d1c28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2960u, 0x1D1C24u, 0x1D1C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C2Cu;
label_1d1c2c:
    // 0x1d1c2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D1C2Cu;
    {
        const bool branch_taken_0x1d1c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c2c) {
            ctx->pc = 0x1D1C60u;
            goto label_1d1c60;
        }
    }
    ctx->pc = 0x1D1C34u;
label_1d1c34:
    // 0x1d1c34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c40: 0xc074b00  jal         func_1D2C00
    ctx->pc = 0x1D1C40u;
    SET_GPR_U32(ctx, 31, 0x1D1C48u);
    ctx->pc = 0x1D1C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C40u;
    // 0x1d1c44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2C00u, 0x1D1C40u, 0x1D1C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C48u;
label_1d1c48:
    // 0x1d1c48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1C48u;
    {
        const bool branch_taken_0x1d1c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c48) {
            ctx->pc = 0x1D1C60u;
            goto label_1d1c60;
        }
    }
    ctx->pc = 0x1D1C50u;
label_1d1c50:
    // 0x1d1c50: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1d1c50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1d1c54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c58: 0xc074730  jal         func_1D1CC0
    ctx->pc = 0x1D1C58u;
    SET_GPR_U32(ctx, 31, 0x1D1C60u);
    ctx->pc = 0x1D1C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C58u;
    // 0x1d1c5c: 0x24c634f8  addiu       $a2, $a2, 0x34F8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1CC0u, 0x1D1C58u, 0x1D1C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C60u;
label_1d1c60:
    // 0x1d1c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1c64:
    // 0x1d1c64: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C64u;
        // 0x1d1c68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1C6Cu;
}
