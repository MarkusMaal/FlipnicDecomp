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

// Function: FUN_001cab70
// Address: 0x1cab70 - 0x1cac44
void FUN_001cab70_0x1cab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cab70_0x1cab70");
#endif

    switch (ctx->pc) {
        case 0x1caba4u: goto label_1caba4;
        case 0x1cabb4u: goto label_1cabb4;
        case 0x1cabc8u: goto label_1cabc8;
        case 0x1cabd8u: goto label_1cabd8;
        case 0x1cabf0u: goto label_1cabf0;
        case 0x1cac04u: goto label_1cac04;
        case 0x1cac18u: goto label_1cac18;
        case 0x1cac2cu: goto label_1cac2c;
        default: break;
    }

    ctx->pc = 0x1cab70u;

    // 0x1cab70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cab74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cab74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cab78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cab78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cab7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cab7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cab80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cab80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cab84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cab84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cab88: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x1cab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1cab8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAB8Cu;
    {
        const bool branch_taken_0x1cab8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB8Cu;
        // 0x1cab90: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab8c) {
            ctx->pc = 0x1CAB9Cu;
            goto label_1cab9c;
        }
    }
    ctx->pc = 0x1CAB94u;
    // 0x1cab94: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CAB94u;
    {
        const bool branch_taken_0x1cab94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cab94) {
            ctx->pc = 0x1CABACu;
            goto label_1cabac;
        }
    }
    ctx->pc = 0x1CAB9Cu;
label_1cab9c:
    // 0x1cab9c: 0xc060894  jal         func_182250
    ctx->pc = 0x1CAB9Cu;
    SET_GPR_U32(ctx, 31, 0x1CABA4u);
    ctx->pc = 0x1CABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAB9Cu;
    // 0x1caba0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182250u, 0x1CAB9Cu, 0x1CABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABA4u;
label_1caba4:
    // 0x1caba4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CABA4u;
    {
        const bool branch_taken_0x1caba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABA4u;
        // 0x1caba8: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caba4) {
            ctx->pc = 0x1CABD8u;
            goto label_1cabd8;
        }
    }
    ctx->pc = 0x1CABACu;
label_1cabac:
    // 0x1cabac: 0xc072e54  jal         func_1CB950
    ctx->pc = 0x1CABACu;
    SET_GPR_U32(ctx, 31, 0x1CABB4u);
    ctx->pc = 0x1CABB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABACu;
    // 0x1cabb0: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB950u, 0x1CABACu, 0x1CABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABB4u;
label_1cabb4:
    // 0x1cabb4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cabb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cabb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cabb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabbc: 0x24a57510  addiu       $a1, $a1, 0x7510
    ctx->pc = 0x1cabbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29968));
    // 0x1cabc0: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1CABC0u;
    SET_GPR_U32(ctx, 31, 0x1CABC8u);
    ctx->pc = 0x1CABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABC0u;
    // 0x1cabc4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1CABC0u, 0x1CABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABC8u;
label_1cabc8:
    // 0x1cabc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cabc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabcc: 0x24110013  addiu       $s1, $zero, 0x13
    ctx->pc = 0x1cabccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1cabd0: 0xc06ddb8  jal         func_1B76E0
    ctx->pc = 0x1CABD0u;
    SET_GPR_U32(ctx, 31, 0x1CABD8u);
    ctx->pc = 0x1CABD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABD0u;
    // 0x1cabd4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76E0u, 0x1CABD0u, 0x1CABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABD8u;
label_1cabd8:
    // 0x1cabd8: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CABD8u;
    {
        const bool branch_taken_0x1cabd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABD8u;
        // 0x1cabdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabd8) {
            ctx->pc = 0x1CAC2Cu;
            goto label_1cac2c;
        }
    }
    ctx->pc = 0x1CABE0u;
    // 0x1cabe0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1cabe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cabe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabe8: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1CABE8u;
    SET_GPR_U32(ctx, 31, 0x1CABF0u);
    ctx->pc = 0x1CABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABE8u;
    // 0x1cabec: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1CABE8u, 0x1CABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABF0u;
label_1cabf0:
    // 0x1cabf0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cabf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cabf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cabf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabf8: 0x24a577e0  addiu       $a1, $a1, 0x77E0
    ctx->pc = 0x1cabf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30688));
    // 0x1cabfc: 0xc06de04  jal         func_1B7810
    ctx->pc = 0x1CABFCu;
    SET_GPR_U32(ctx, 31, 0x1CAC04u);
    ctx->pc = 0x1CAC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABFCu;
    // 0x1cac00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7810u, 0x1CABFCu, 0x1CAC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC04u;
label_1cac04:
    // 0x1cac04: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cac04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cac08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cac08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cac0c: 0x24a57800  addiu       $a1, $a1, 0x7800
    ctx->pc = 0x1cac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30720));
    // 0x1cac10: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CAC10u;
    SET_GPR_U32(ctx, 31, 0x1CAC18u);
    ctx->pc = 0x1CAC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC10u;
    // 0x1cac14: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CAC10u, 0x1CAC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC18u;
label_1cac18:
    // 0x1cac18: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cac18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cac1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cac1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cac20: 0x24a578c0  addiu       $a1, $a1, 0x78C0
    ctx->pc = 0x1cac20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30912));
    // 0x1cac24: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CAC24u;
    SET_GPR_U32(ctx, 31, 0x1CAC2Cu);
    ctx->pc = 0x1CAC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC24u;
    // 0x1cac28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CAC24u, 0x1CAC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC2Cu;
label_1cac2c:
    // 0x1cac2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cac2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cac30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cac30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cac34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cac34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cac38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cac38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cac3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC3Cu;
        // 0x1cac40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAC44u;
}
