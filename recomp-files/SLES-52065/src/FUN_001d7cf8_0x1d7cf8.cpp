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

// Function: FUN_001d7cf8
// Address: 0x1d7cf8 - 0x1d7d9c
void FUN_001d7cf8_0x1d7cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d7cf8_0x1d7cf8");
#endif

    switch (ctx->pc) {
        case 0x1d7d54u: goto label_1d7d54;
        case 0x1d7d68u: goto label_1d7d68;
        case 0x1d7d7cu: goto label_1d7d7c;
        default: break;
    }

    ctx->pc = 0x1d7cf8u;

    // 0x1d7cf8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d7cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1d7cfc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d7cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d7d00: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1d7d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1d7d04: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1d7d04u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
    // 0x1d7d08: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x1d7d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x1d7d0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d10: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1d7d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1d7d14: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x1d7d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x1d7d18: 0x8e42054c  lw          $v0, 0x54C($s2)
    ctx->pc = 0x1d7d18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d7d1c: 0x8ca70550  lw          $a3, 0x550($a1)
    ctx->pc = 0x1d7d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x370550u));
    // 0x1d7d20: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1d7d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7d24: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x1d7d24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1d7d28: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1d7d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1d7d2c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d7d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d7d30: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1d7d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d34: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d7d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7d38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7d3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d7d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7d40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7d44: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d7d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d7d48: 0xac4502b8  sw          $a1, 0x2B8($v0)
    ctx->pc = 0x1d7d48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 696), GPR_U32(ctx, 5));
    // 0x1d7d4c: 0xc07730c  jal         func_1DCC30
    ctx->pc = 0x1D7D4Cu;
    SET_GPR_U32(ctx, 31, 0x1D7D54u);
    ctx->pc = 0x1D7D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D4Cu;
    // 0x1d7d50: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC30u, 0x1D7D4Cu, 0x1D7D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D54u;
label_1d7d54:
    // 0x1d7d54: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d7d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d7d58: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D7D58u;
    {
        const bool branch_taken_0x1d7d58 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D7D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D58u;
        // 0x1d7d5c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d58) {
            ctx->pc = 0x1D7D84u;
            goto label_1d7d84;
        }
    }
    ctx->pc = 0x1D7D60u;
    // 0x1d7d60: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d7d60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d7d64: 0x8e42054c  lw          $v0, 0x54C($s2)
    ctx->pc = 0x1d7d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1356)));
label_1d7d68:
    // 0x1d7d68: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d7d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d7d6c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d7d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7d70: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d7d70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d7d74: 0xc077424  jal         func_1DD090
    ctx->pc = 0x1D7D74u;
    SET_GPR_U32(ctx, 31, 0x1D7D7Cu);
    ctx->pc = 0x1D7D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D74u;
    // 0x1d7d78: 0x90450002  lbu         $a1, 0x2($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD090u, 0x1D7D74u, 0x1D7D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D7Cu;
label_1d7d7c:
    // 0x1d7d7c: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D7D7Cu;
    {
        const bool branch_taken_0x1d7d7c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1D7D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D7Cu;
        // 0x1d7d80: 0x8e42054c  lw          $v0, 0x54C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d7c) {
            ctx->pc = 0x1D7D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7d68;
        }
    }
    ctx->pc = 0x1D7D84u;
label_1d7d84:
    // 0x1d7d84: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1d7d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d7d88: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1d7d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d7d8c: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1d7d8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d7d90: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1d7d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d7d94: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D94u;
        // 0x1d7d98: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7D9Cu;
}
