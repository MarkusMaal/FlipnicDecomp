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

// Function: FUN_00207db8
// Address: 0x207db8 - 0x207ff8
void FUN_00207db8_0x207db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00207db8_0x207db8");
#endif

    switch (ctx->pc) {
        case 0x207dccu: goto label_207dcc;
        case 0x207de0u: goto label_207de0;
        case 0x207e98u: goto label_207e98;
        case 0x207ed0u: goto label_207ed0;
        case 0x207f80u: goto label_207f80;
        default: break;
    }

    ctx->pc = 0x207db8u;

    // 0x207db8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x207db8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207dbc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x207dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x207dc0: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x207dc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x207dc4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x207DC4u;
    {
        const bool branch_taken_0x207dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207dc4) {
            ctx->pc = 0x207DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207DC4u;
            // 0x207dc8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207DD4u;
            goto label_207dd4;
        }
    }
    ctx->pc = 0x207DCCu;
label_207dcc:
    // 0x207dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x207DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DCCu;
        // 0x207dd0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207DD4u;
label_207dd4:
    // 0x207dd4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x207dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x207dd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207DD8u;
    {
        const bool branch_taken_0x207dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DD8u;
        // 0x207ddc: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207dd8) {
            ctx->pc = 0x207DE8u;
            goto label_207de8;
        }
    }
    ctx->pc = 0x207DE0u;
label_207de0:
    // 0x207de0: 0x3e00008  jr          $ra
    ctx->pc = 0x207DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DE0u;
        // 0x207de4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207DE8u;
label_207de8:
    // 0x207de8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x207DE8u;
    {
        const bool branch_taken_0x207de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DE8u;
        // 0x207dec: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207de8) {
            ctx->pc = 0x207E10u;
            goto label_207e10;
        }
    }
    ctx->pc = 0x207DF0u;
    // 0x207df0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x207DF0u;
    {
        const bool branch_taken_0x207df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207df0) {
            ctx->pc = 0x207DCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207dcc;
        }
    }
    ctx->pc = 0x207DF8u;
    // 0x207df8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x207df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x207dfc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x207dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x207e00: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x207E00u;
    {
        const bool branch_taken_0x207e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x207E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E00u;
        // 0x207e04: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e00) {
            ctx->pc = 0x207DCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207dcc;
        }
    }
    ctx->pc = 0x207E08u;
    // 0x207e08: 0x3e00008  jr          $ra
    ctx->pc = 0x207E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E08u;
        // 0x207e0c: 0x24422c00  addiu       $v0, $v0, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207E10u;
label_207e10:
    // 0x207e10: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x207E10u;
    {
        const bool branch_taken_0x207e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E10u;
        // 0x207e14: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e10) {
            ctx->pc = 0x207DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207de0;
        }
    }
    ctx->pc = 0x207E18u;
    // 0x207e18: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x207E18u;
    {
        const bool branch_taken_0x207e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E18u;
        // 0x207e1c: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e18) {
            ctx->pc = 0x207E54u;
            goto label_207e54;
        }
    }
    ctx->pc = 0x207E20u;
    // 0x207e20: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x207E20u;
    {
        const bool branch_taken_0x207e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E20u;
        // 0x207e24: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e20) {
            ctx->pc = 0x207DCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207dcc;
        }
    }
    ctx->pc = 0x207E28u;
    // 0x207e28: 0xdd040000  ld          $a0, 0x0($t0)
    ctx->pc = 0x207e28u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x207e2c: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x207e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x207e30: 0xdd030008  ld          $v1, 0x8($t0)
    ctx->pc = 0x207e30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x207e34: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x207e34u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x207e38: 0xdd040010  ld          $a0, 0x10($t0)
    ctx->pc = 0x207e38u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x207e3c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x207e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x207e40: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x207e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x207e44: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x207e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x207e48: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x207e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x207e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x207E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E4Cu;
        // 0x207e50: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207E54u;
label_207e54:
    // 0x207e54: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x207E54u;
    {
        const bool branch_taken_0x207e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E54u;
        // 0x207e58: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e54) {
            ctx->pc = 0x207DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207de0;
        }
    }
    ctx->pc = 0x207E5Cu;
    // 0x207e5c: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x207e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x207e60: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x207e60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x207e64: 0xdd0b0010  ld          $t3, 0x10($t0)
    ctx->pc = 0x207e64u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x207e68: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x207e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x207e6c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x207e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x207e70: 0x32023  negu        $a0, $v1
    ctx->pc = 0x207e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x207e74: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x207e74u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x207e78: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x207e78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x207e7c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x207E7Cu;
    {
        const bool branch_taken_0x207e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E7Cu;
        // 0x207e80: 0xdcaa0010  ld          $t2, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e7c) {
            ctx->pc = 0x207EF4u;
            goto label_207ef4;
        }
    }
    ctx->pc = 0x207E84u;
    // 0x207e84: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x207e84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x207e88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x207E88u;
    {
        const bool branch_taken_0x207e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E88u;
        // 0x207e8c: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e88) {
            ctx->pc = 0x207EBCu;
            goto label_207ebc;
        }
    }
    ctx->pc = 0x207E90u;
    // 0x207e90: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x207e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x207e94: 0x0  nop
    ctx->pc = 0x207e94u;
    // NOP
label_207e98:
    // 0x207e98: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x207e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x207e9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x207e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x207ea0: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x207ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x207ea4: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x207ea4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x207ea8: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x207ea8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x207eac: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x207EACu;
    {
        const bool branch_taken_0x207eac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x207eac) {
            ctx->pc = 0x207E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207e98;
        }
    }
    ctx->pc = 0x207EB4u;
    // 0x207eb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x207EB4u;
    {
        const bool branch_taken_0x207eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EB4u;
        // 0x207eb8: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207eb4) {
            ctx->pc = 0x207EC4u;
            goto label_207ec4;
        }
    }
    ctx->pc = 0x207EBCu;
label_207ebc:
    // 0x207ebc: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x207ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x207ec0: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x207ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_207ec4:
    // 0x207ec4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x207EC4u;
    {
        const bool branch_taken_0x207ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207ec4) {
            ctx->pc = 0x207F18u;
            goto label_207f18;
        }
    }
    ctx->pc = 0x207ECCu;
    // 0x207ecc: 0x1273823  subu        $a3, $t1, $a3
    ctx->pc = 0x207eccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_207ed0:
    // 0x207ed0: 0xb187a  dsrl        $v1, $t3, 1
    ctx->pc = 0x207ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x207ed4: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x207ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x207ed8: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x207ed8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x207edc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x207edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x207ee0: 0x0  nop
    ctx->pc = 0x207ee0u;
    // NOP
    // 0x207ee4: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x207EE4u;
    {
        const bool branch_taken_0x207ee4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x207ee4) {
            ctx->pc = 0x207ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207ed0;
        }
    }
    ctx->pc = 0x207EECu;
    // 0x207eec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x207EECu;
    {
        const bool branch_taken_0x207eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EECu;
        // 0x207ef0: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207eec) {
            ctx->pc = 0x207F18u;
            goto label_207f18;
        }
    }
    ctx->pc = 0x207EF4u;
label_207ef4:
    // 0x207ef4: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x207ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x207ef8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207EF8u;
    {
        const bool branch_taken_0x207ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EF8u;
        // 0x207efc: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ef8) {
            ctx->pc = 0x207F0Cu;
            goto label_207f0c;
        }
    }
    ctx->pc = 0x207F00u;
    // 0x207f00: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x207f00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x207F04u;
    {
        const bool branch_taken_0x207f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F04u;
        // 0x207f08: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f04) {
            ctx->pc = 0x207F18u;
            goto label_207f18;
        }
    }
    ctx->pc = 0x207F0Cu;
label_207f0c:
    // 0x207f0c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x207f0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f10: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x207f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x207f14: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x207f14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207f18:
    // 0x207f18: 0x11050024  beq         $t0, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x207F18u;
    {
        const bool branch_taken_0x207f18 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x207F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F18u;
        // 0x207f1c: 0x16a102d  daddu       $v0, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f18) {
            ctx->pc = 0x207FACu;
            goto label_207fac;
        }
    }
    ctx->pc = 0x207F20u;
    // 0x207f20: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x207F20u;
    {
        const bool branch_taken_0x207f20 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x207F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F20u;
        // 0x207f24: 0x14b102f  dsubu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f20) {
            ctx->pc = 0x207F2Cu;
            goto label_207f2c;
        }
    }
    ctx->pc = 0x207F28u;
    // 0x207f28: 0x16a102f  dsubu       $v0, $t3, $t2
    ctx->pc = 0x207f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
label_207f2c:
    // 0x207f2c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207F2Cu;
    {
        const bool branch_taken_0x207f2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x207F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F2Cu;
        // 0x207f30: 0x2182f  dsubu       $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f2c) {
            ctx->pc = 0x207F44u;
            goto label_207f44;
        }
    }
    ctx->pc = 0x207F34u;
    // 0x207f34: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x207f34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x207f38: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x207f38u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x207f3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x207F3Cu;
    {
        const bool branch_taken_0x207f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F3Cu;
        // 0x207f40: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f3c) {
            ctx->pc = 0x207F54u;
            goto label_207f54;
        }
    }
    ctx->pc = 0x207F44u;
label_207f44:
    // 0x207f44: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x207f44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x207f48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207f4c: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x207f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x207f50: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x207f50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_207f54:
    // 0x207f54: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x207f54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x207f58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x207f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207f5c: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x207f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x207f60: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x207f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x207f64: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x207f64u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x207f68: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x207f68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x207f6c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x207F6Cu;
    {
        const bool branch_taken_0x207f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F6Cu;
        // 0x207f70: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f6c) {
            ctx->pc = 0x207FBCu;
            goto label_207fbc;
        }
    }
    ctx->pc = 0x207F74u;
    // 0x207f74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x207f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207f78: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x207f78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x207f7c: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x207f7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_207f80:
    // 0x207f80: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x207f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x207f84: 0x72078  dsll        $a0, $a3, 1
    ctx->pc = 0x207f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x207f88: 0x6483ffff  daddiu      $v1, $a0, -0x1
    ctx->pc = 0x207f88u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x207f8c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x207f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x207f90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x207f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x207f94: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x207f94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x207f98: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x207f98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x207f9c: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x207F9Cu;
    {
        const bool branch_taken_0x207f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F9Cu;
        // 0x207fa0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f9c) {
            ctx->pc = 0x207F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207f80;
        }
    }
    ctx->pc = 0x207FA4u;
    // 0x207fa4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x207FA4u;
    {
        const bool branch_taken_0x207fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FA4u;
        // 0x207fa8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fa4) {
            ctx->pc = 0x207FBCu;
            goto label_207fbc;
        }
    }
    ctx->pc = 0x207FACu;
label_207fac:
    // 0x207fac: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x207facu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x207fb0: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x207fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x207fb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207fb8: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x207fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_207fbc:
    // 0x207fbc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x207fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x207fc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x207fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207fc4: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x207fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x207fc8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x207fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x207fcc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x207FCCu;
    {
        const bool branch_taken_0x207fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FCCu;
        // 0x207fd0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fcc) {
            ctx->pc = 0x207FF0u;
            goto label_207ff0;
        }
    }
    ctx->pc = 0x207FD4u;
    // 0x207fd4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x207fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x207fd8: 0x5207a  dsrl        $a0, $a1, 1
    ctx->pc = 0x207fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x207fdc: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x207fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x207fe0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x207fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x207fe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x207fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x207fe8: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x207fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x207fec: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x207fecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_207ff0:
    // 0x207ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x207FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FF0u;
        // 0x207ff4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207FF8u;
}
