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

// Function: FUN_0013afc0
// Address: 0x13afc0 - 0x13b084
void FUN_0013afc0_0x13afc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013afc0_0x13afc0");
#endif

    switch (ctx->pc) {
        case 0x13aff4u: goto label_13aff4;
        case 0x13b050u: goto label_13b050;
        default: break;
    }

    ctx->pc = 0x13afc0u;

    // 0x13afc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13afc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13afc4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x13afc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13afc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13afc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13afcc: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x13afccu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13afd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13afd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13afd4: 0x24a90004  addiu       $t1, $a1, 0x4
    ctx->pc = 0x13afd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13afd8: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x13afd8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13afdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13afdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13afe0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13afe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13afe4: 0x11400010  beqz        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x13AFE4u;
    {
        const bool branch_taken_0x13afe4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFE4u;
        // 0x13afe8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13afe4) {
            ctx->pc = 0x13B028u;
            goto label_13b028;
        }
    }
    ctx->pc = 0x13AFECu;
    // 0x13afec: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x13afecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13aff0: 0x0  nop
    ctx->pc = 0x13aff0u;
    // NOP
label_13aff4:
    // 0x13aff4: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x13aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x13aff8: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x13aff8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13affc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AFFCu;
    {
        const bool branch_taken_0x13affc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFFCu;
        // 0x13b000: 0x140482d  daddu       $t1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13affc) {
            ctx->pc = 0x13B010u;
            goto label_13b010;
        }
    }
    ctx->pc = 0x13B004u;
    // 0x13b004: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x13b004u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x13b008: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13B008u;
    {
        const bool branch_taken_0x13b008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B008u;
        // 0x13b00c: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b008) {
            ctx->pc = 0x13B020u;
            goto label_13b020;
        }
    }
    ctx->pc = 0x13B010u;
label_13b010:
    // 0x13b010: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x13b010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b014: 0x8d4a0004  lw          $t2, 0x4($t2)
    ctx->pc = 0x13b014u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x13b018: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13b018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b01c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13b01cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13b020:
    // 0x13b020: 0x1540fff4  bnez        $t2, . + 4 + (-0xC << 2)
    ctx->pc = 0x13B020u;
    {
        const bool branch_taken_0x13b020 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b020) {
            ctx->pc = 0x13AFF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13aff4;
        }
    }
    ctx->pc = 0x13B028u;
label_13b028:
    // 0x13b028: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13B028u;
    {
        const bool branch_taken_0x13b028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b028) {
            ctx->pc = 0x13B044u;
            goto label_13b044;
        }
    }
    ctx->pc = 0x13B030u;
    // 0x13b030: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x13b030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13b034: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x13b034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13b038: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x13b038u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13b03c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13B03Cu;
    {
        const bool branch_taken_0x13b03c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b03c) {
            ctx->pc = 0x13B064u;
            goto label_13b064;
        }
    }
    ctx->pc = 0x13B044u;
label_13b044:
    // 0x13b044: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13b044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b048: 0xc04ef64  jal         func_13BD90
    ctx->pc = 0x13B048u;
    SET_GPR_U32(ctx, 31, 0x13B050u);
    ctx->pc = 0x13B04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B048u;
    // 0x13b04c: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BD90u, 0x13B048u, 0x13B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B050u;
label_13b050:
    // 0x13b050: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13b050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13b054: 0x93838088  lbu         $v1, -0x7F78($gp)
    ctx->pc = 0x13b054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934664)));
    // 0x13b058: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13b058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b05c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13B05Cu;
    {
        const bool branch_taken_0x13b05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B05Cu;
        // 0x13b060: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b05c) {
            ctx->pc = 0x13B074u;
            goto label_13b074;
        }
    }
    ctx->pc = 0x13B064u;
label_13b064:
    // 0x13b064: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x13b064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x13b068: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13b068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b06c: 0x9383808c  lbu         $v1, -0x7F74($gp)
    ctx->pc = 0x13b06cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934668)));
    // 0x13b070: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x13b070u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_13b074:
    // 0x13b074: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13b074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b078: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b07c: 0x3e00008  jr          $ra
    ctx->pc = 0x13B07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B07Cu;
        // 0x13b080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B084u;
}
