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

// Function: FUN_00199f80
// Address: 0x199f80 - 0x19a0a8
void FUN_00199f80_0x199f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00199f80_0x199f80");
#endif

    switch (ctx->pc) {
        case 0x19a074u: goto label_19a074;
        default: break;
    }

    ctx->pc = 0x199f80u;

    // 0x199f80: 0x8c820670  lw          $v0, 0x670($a0)
    ctx->pc = 0x199f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x199f84: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x199F84u;
    {
        const bool branch_taken_0x199f84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x199F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F84u;
        // 0x199f88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f84) {
            ctx->pc = 0x199F98u;
            goto label_199f98;
        }
    }
    ctx->pc = 0x199F8Cu;
    // 0x199f8c: 0xac850328  sw          $a1, 0x328($a0)
    ctx->pc = 0x199f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 808), GPR_U32(ctx, 5));
    // 0x199f90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x199F90u;
    {
        const bool branch_taken_0x199f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F90u;
        // 0x199f94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f90) {
            ctx->pc = 0x199FA0u;
            goto label_199fa0;
        }
    }
    ctx->pc = 0x199F98u;
label_199f98:
    // 0x199f98: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x199F98u;
    {
        const bool branch_taken_0x199f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199f98) {
            ctx->pc = 0x19A0A0u;
            goto label_19a0a0;
        }
    }
    ctx->pc = 0x199FA0u;
label_199fa0:
    // 0x199fa0: 0x8c850328  lw          $a1, 0x328($a0)
    ctx->pc = 0x199fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
    // 0x199fa4: 0x8c880670  lw          $t0, 0x670($a0)
    ctx->pc = 0x199fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x199fa8: 0xa8082a  slt         $at, $a1, $t0
    ctx->pc = 0x199fa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x199fac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x199FACu;
    {
        const bool branch_taken_0x199fac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199fac) {
            ctx->pc = 0x199FB8u;
            goto label_199fb8;
        }
    }
    ctx->pc = 0x199FB4u;
    // 0x199fb4: 0x24a503e8  addiu       $a1, $a1, 0x3E8
    ctx->pc = 0x199fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1000));
label_199fb8:
    // 0x199fb8: 0x8c870344  lw          $a3, 0x344($a0)
    ctx->pc = 0x199fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x199fbc: 0x8c830340  lw          $v1, 0x340($a0)
    ctx->pc = 0x199fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 832)));
    // 0x199fc0: 0xe3082a  slt         $at, $a3, $v1
    ctx->pc = 0x199fc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x199fc4: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x199FC4u;
    {
        const bool branch_taken_0x199fc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199FC4u;
        // 0x199fc8: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199fc4) {
            ctx->pc = 0x19A054u;
            goto label_19a054;
        }
    }
    ctx->pc = 0x199FCCu;
    // 0x199fcc: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x199fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x199fd0: 0x8cc30510  lw          $v1, 0x510($a2)
    ctx->pc = 0x199fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1296)));
    // 0x199fd4: 0x4610016  bgez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x199FD4u;
    {
        const bool branch_taken_0x199fd4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x199fd4) {
            ctx->pc = 0x19A030u;
            goto label_19a030;
        }
    }
    ctx->pc = 0x199FDCu;
    // 0x199fdc: 0x8cc304d0  lw          $v1, 0x4D0($a2)
    ctx->pc = 0x199fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1232)));
    // 0x199fe0: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x199fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x199fe4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x199fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x199fe8: 0xacc304d0  sw          $v1, 0x4D0($a2)
    ctx->pc = 0x199fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1232), GPR_U32(ctx, 3));
    // 0x199fec: 0x8c830344  lw          $v1, 0x344($a0)
    ctx->pc = 0x199fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x199ff0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x199ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x199ff4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x199ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x199ff8: 0x8c6604d0  lw          $a2, 0x4D0($v1)
    ctx->pc = 0x199ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1232)));
    // 0x199ffc: 0x246704d0  addiu       $a3, $v1, 0x4D0
    ctx->pc = 0x199ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1232));
    // 0x19a000: 0x8c650510  lw          $a1, 0x510($v1)
    ctx->pc = 0x19a000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1296)));
    // 0x19a004: 0x51823  negu        $v1, $a1
    ctx->pc = 0x19a004u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x19a008: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x19a008u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19a00c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x19a00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x19a010: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19A010u;
    {
        const bool branch_taken_0x19a010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A010u;
        // 0x19a014: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a010) {
            ctx->pc = 0x19A054u;
            goto label_19a054;
        }
    }
    ctx->pc = 0x19A018u;
    // 0x19a018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a01c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x19a01cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x19a020: 0x8c830344  lw          $v1, 0x344($a0)
    ctx->pc = 0x19a020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x19a024: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a028: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19A028u;
    {
        const bool branch_taken_0x19a028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A028u;
        // 0x19a02c: 0xac83032c  sw          $v1, 0x32C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a028) {
            ctx->pc = 0x19A054u;
            goto label_19a054;
        }
    }
    ctx->pc = 0x19A030u;
label_19a030:
    // 0x19a030: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x19a030u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19a034: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19A034u;
    {
        const bool branch_taken_0x19a034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a034) {
            ctx->pc = 0x19A054u;
            goto label_19a054;
        }
    }
    ctx->pc = 0x19A03Cu;
    // 0x19a03c: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x19a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19a040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a044: 0xac830344  sw          $v1, 0x344($a0)
    ctx->pc = 0x19a044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 836), GPR_U32(ctx, 3));
    // 0x19a048: 0x8c830344  lw          $v1, 0x344($a0)
    ctx->pc = 0x19a048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x19a04c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a050: 0xac83032c  sw          $v1, 0x32C($a0)
    ctx->pc = 0x19a050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 812), GPR_U32(ctx, 3));
label_19a054:
    // 0x19a054: 0x8c850328  lw          $a1, 0x328($a0)
    ctx->pc = 0x19a054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
    // 0x19a058: 0x8c830670  lw          $v1, 0x670($a0)
    ctx->pc = 0x19a058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x19a05c: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x19a05cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19a060: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x19A060u;
    {
        const bool branch_taken_0x19a060 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a060) {
            ctx->pc = 0x19A09Cu;
            goto label_19a09c;
        }
    }
    ctx->pc = 0x19A068u;
    // 0x19a068: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19a068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a06c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19A06Cu;
    {
        const bool branch_taken_0x19a06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A06Cu;
        // 0x19a070: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a06c) {
            ctx->pc = 0x19A080u;
            goto label_19a080;
        }
    }
    ctx->pc = 0x19A074u;
label_19a074:
    // 0x19a074: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19a074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19a078: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x19a078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
    // 0x19a07c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x19a07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_19a080:
    // 0x19a080: 0x8c830340  lw          $v1, 0x340($a0)
    ctx->pc = 0x19a080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 832)));
    // 0x19a084: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x19a084u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19a088: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19A088u;
    {
        const bool branch_taken_0x19a088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A088u;
        // 0x19a08c: 0x861821  addu        $v1, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a088) {
            ctx->pc = 0x19A074u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a074;
        }
    }
    ctx->pc = 0x19A090u;
    // 0x19a090: 0xac800344  sw          $zero, 0x344($a0)
    ctx->pc = 0x19a090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 836), GPR_U32(ctx, 0));
    // 0x19a094: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19A094u;
    {
        const bool branch_taken_0x19a094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A094u;
        // 0x19a098: 0xac800670  sw          $zero, 0x670($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a094) {
            ctx->pc = 0x19A0A0u;
            goto label_19a0a0;
        }
    }
    ctx->pc = 0x19A09Cu;
label_19a09c:
    // 0x19a09c: 0xac850670  sw          $a1, 0x670($a0)
    ctx->pc = 0x19a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1648), GPR_U32(ctx, 5));
label_19a0a0:
    // 0x19a0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x19A0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A0A8u;
}
