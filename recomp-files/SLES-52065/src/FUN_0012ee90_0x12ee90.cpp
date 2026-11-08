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

// Function: FUN_0012ee90
// Address: 0x12ee90 - 0x12ef54
void FUN_0012ee90_0x12ee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012ee90_0x12ee90");
#endif

    switch (ctx->pc) {
        case 0x12eec4u: goto label_12eec4;
        case 0x12ef20u: goto label_12ef20;
        default: break;
    }

    ctx->pc = 0x12ee90u;

    // 0x12ee90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ee94: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x12ee94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12ee98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12ee9c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x12ee9cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x12eea0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12eea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12eea4: 0x24a90004  addiu       $t1, $a1, 0x4
    ctx->pc = 0x12eea4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12eea8: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x12eea8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12eeac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12eeacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eeb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12eeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eeb4: 0x11400010  beqz        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x12EEB4u;
    {
        const bool branch_taken_0x12eeb4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEB4u;
        // 0x12eeb8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eeb4) {
            ctx->pc = 0x12EEF8u;
            goto label_12eef8;
        }
    }
    ctx->pc = 0x12EEBCu;
    // 0x12eebc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x12eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12eec0: 0x0  nop
    ctx->pc = 0x12eec0u;
    // NOP
label_12eec4:
    // 0x12eec4: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x12eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x12eec8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x12eec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12eecc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EECCu;
    {
        const bool branch_taken_0x12eecc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EECCu;
        // 0x12eed0: 0x140482d  daddu       $t1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eecc) {
            ctx->pc = 0x12EEE0u;
            goto label_12eee0;
        }
    }
    ctx->pc = 0x12EED4u;
    // 0x12eed4: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x12eed4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x12eed8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12EED8u;
    {
        const bool branch_taken_0x12eed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EED8u;
        // 0x12eedc: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eed8) {
            ctx->pc = 0x12EEF0u;
            goto label_12eef0;
        }
    }
    ctx->pc = 0x12EEE0u;
label_12eee0:
    // 0x12eee0: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x12eee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eee4: 0x8d4a0004  lw          $t2, 0x4($t2)
    ctx->pc = 0x12eee4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x12eee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12eee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eeec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12eeecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12eef0:
    // 0x12eef0: 0x1540fff4  bnez        $t2, . + 4 + (-0xC << 2)
    ctx->pc = 0x12EEF0u;
    {
        const bool branch_taken_0x12eef0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x12eef0) {
            ctx->pc = 0x12EEC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12eec4;
        }
    }
    ctx->pc = 0x12EEF8u;
label_12eef8:
    // 0x12eef8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12EEF8u;
    {
        const bool branch_taken_0x12eef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eef8) {
            ctx->pc = 0x12EF14u;
            goto label_12ef14;
        }
    }
    ctx->pc = 0x12EF00u;
    // 0x12ef00: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x12ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12ef04: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x12ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12ef08: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x12ef08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12ef0c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x12EF0Cu;
    {
        const bool branch_taken_0x12ef0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ef0c) {
            ctx->pc = 0x12EF34u;
            goto label_12ef34;
        }
    }
    ctx->pc = 0x12EF14u;
label_12ef14:
    // 0x12ef14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ef14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef18: 0xc04bbf0  jal         func_12EFC0
    ctx->pc = 0x12EF18u;
    SET_GPR_U32(ctx, 31, 0x12EF20u);
    ctx->pc = 0x12EF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EF18u;
    // 0x12ef1c: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFC0u, 0x12EF18u, 0x12EF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF20u;
label_12ef20:
    // 0x12ef20: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12ef20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12ef24: 0x9383806c  lbu         $v1, -0x7F94($gp)
    ctx->pc = 0x12ef24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934636)));
    // 0x12ef28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12ef28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12EF2Cu;
    {
        const bool branch_taken_0x12ef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF2Cu;
        // 0x12ef30: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef2c) {
            ctx->pc = 0x12EF44u;
            goto label_12ef44;
        }
    }
    ctx->pc = 0x12EF34u;
label_12ef34:
    // 0x12ef34: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x12ef34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x12ef38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12ef38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef3c: 0x93838070  lbu         $v1, -0x7F90($gp)
    ctx->pc = 0x12ef3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934640)));
    // 0x12ef40: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x12ef40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_12ef44:
    // 0x12ef44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12ef44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ef48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12ef48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ef4c: 0x3e00008  jr          $ra
    ctx->pc = 0x12EF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF4Cu;
        // 0x12ef50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EF54u;
}
