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

// Function: FUN_00106b60
// Address: 0x106b60 - 0x106c0c
void FUN_00106b60_0x106b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106b60_0x106b60");
#endif

    switch (ctx->pc) {
        case 0x106bacu: goto label_106bac;
        case 0x106bdcu: goto label_106bdc;
        case 0x106bf4u: goto label_106bf4;
        default: break;
    }

    ctx->pc = 0x106b60u;

    // 0x106b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106b64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x106b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x106b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x106b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x106b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x106b70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b74: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x106B74u;
    {
        const bool branch_taken_0x106b74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B74u;
        // 0x106b78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b74) {
            ctx->pc = 0x106BF4u;
            goto label_106bf4;
        }
    }
    ctx->pc = 0x106B7Cu;
    // 0x106b7c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x106b80: 0x24427e70  addiu       $v0, $v0, 0x7E70
    ctx->pc = 0x106b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32368));
    // 0x106b84: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x106B84u;
    {
        const bool branch_taken_0x106b84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B84u;
        // 0x106b88: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b84) {
            ctx->pc = 0x106BDCu;
            goto label_106bdc;
        }
    }
    ctx->pc = 0x106B8Cu;
    // 0x106b8c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x106b90: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x106b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
    // 0x106b94: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x106b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x106b98: 0x8e240228  lw          $a0, 0x228($s1)
    ctx->pc = 0x106b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x106b9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106B9Cu;
    {
        const bool branch_taken_0x106b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x106b9c) {
            ctx->pc = 0x106BACu;
            goto label_106bac;
        }
    }
    ctx->pc = 0x106BA4u;
    // 0x106ba4: 0xc04018c  jal         func_100630
    ctx->pc = 0x106BA4u;
    SET_GPR_U32(ctx, 31, 0x106BACu);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x106BA4u, 0x106BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106BACu;
label_106bac:
    // 0x106bac: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x106BACu;
    {
        const bool branch_taken_0x106bac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BACu;
        // 0x106bb0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106bac) {
            ctx->pc = 0x106BE0u;
            goto label_106be0;
        }
    }
    ctx->pc = 0x106BB4u;
    // 0x106bb4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x106bb8: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x106bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x106bbc: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x106BBCu;
    {
        const bool branch_taken_0x106bbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BBCu;
        // 0x106bc0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106bbc) {
            ctx->pc = 0x106BDCu;
            goto label_106bdc;
        }
    }
    ctx->pc = 0x106BC4u;
    // 0x106bc4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x106bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106bcc: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x106bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x106bd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106bd4: 0xc0418c0  jal         func_106300
    ctx->pc = 0x106BD4u;
    SET_GPR_U32(ctx, 31, 0x106BDCu);
    ctx->pc = 0x106BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106BD4u;
    // 0x106bd8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106300u, 0x106BD4u, 0x106BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106BDCu;
label_106bdc:
    // 0x106bdc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x106bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_106be0:
    // 0x106be0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x106be0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x106be4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106BE4u;
    {
        const bool branch_taken_0x106be4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x106BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BE4u;
        // 0x106be8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106be4) {
            ctx->pc = 0x106BF8u;
            goto label_106bf8;
        }
    }
    ctx->pc = 0x106BECu;
    // 0x106bec: 0xc0401a4  jal         func_100690
    ctx->pc = 0x106BECu;
    SET_GPR_U32(ctx, 31, 0x106BF4u);
    ctx->pc = 0x106BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106BECu;
    // 0x106bf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x106BECu, 0x106BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106BF4u;
label_106bf4:
    // 0x106bf4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x106bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_106bf8:
    // 0x106bf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x106bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106bfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x106bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106c00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106c04: 0x3e00008  jr          $ra
    ctx->pc = 0x106C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C04u;
        // 0x106c08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106C0Cu;
}
