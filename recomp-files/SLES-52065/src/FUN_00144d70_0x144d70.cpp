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

// Function: FUN_00144d70
// Address: 0x144d70 - 0x144e74
void FUN_00144d70_0x144d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144d70_0x144d70");
#endif

    switch (ctx->pc) {
        case 0x144d98u: goto label_144d98;
        case 0x144db4u: goto label_144db4;
        case 0x144dc0u: goto label_144dc0;
        case 0x144e18u: goto label_144e18;
        case 0x144e34u: goto label_144e34;
        case 0x144e40u: goto label_144e40;
        default: break;
    }

    ctx->pc = 0x144d70u;

    // 0x144d70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x144d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x144d74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x144d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x144d78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x144d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x144d7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144d80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144d84: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x144d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x144d88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x144d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d8c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x144d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x144d90: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x144D90u;
    {
        const bool branch_taken_0x144d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D90u;
        // 0x144d94: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144d90) {
            ctx->pc = 0x144DC4u;
            goto label_144dc4;
        }
    }
    ctx->pc = 0x144D98u;
label_144d98:
    // 0x144d98: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x144d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x144d9c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x144d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x144da0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x144da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x144da4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x144da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x144da8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x144da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x144dac: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x144DACu;
    SET_GPR_U32(ctx, 31, 0x144DB4u);
    ctx->pc = 0x144DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144DACu;
    // 0x144db0: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x144DACu, 0x144DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DB4u;
label_144db4:
    // 0x144db4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x144db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144db8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x144DB8u;
    SET_GPR_U32(ctx, 31, 0x144DC0u);
    ctx->pc = 0x144DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144DB8u;
    // 0x144dbc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x144DB8u, 0x144DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DC0u;
label_144dc0:
    // 0x144dc0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x144dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_144dc4:
    // 0x144dc4: 0x0  nop
    ctx->pc = 0x144dc4u;
    // NOP
    // 0x144dc8: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x144dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x144dcc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x144dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x144dd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x144dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x144dd4: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x144dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x144dd8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x144dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x144ddc: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x144ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x144de0: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x144de0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x144de4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x144de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x144de8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x144de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x144dec: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x144decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x144df0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x144df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x144df4: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x144df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x144df8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x144df8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x144dfc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x144dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x144e00: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x144E00u;
    {
        const bool branch_taken_0x144e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x144e00) {
            ctx->pc = 0x144D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144d98;
        }
    }
    ctx->pc = 0x144E08u;
    // 0x144e08: 0x14e00014  bnez        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x144E08u;
    {
        const bool branch_taken_0x144e08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x144E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E08u;
        // 0x144e0c: 0x2511fffe  addiu       $s1, $t0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e08) {
            ctx->pc = 0x144E5Cu;
            goto label_144e5c;
        }
    }
    ctx->pc = 0x144E10u;
    // 0x144e10: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x144E10u;
    {
        const bool branch_taken_0x144e10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x144e10) {
            ctx->pc = 0x144E4Cu;
            goto label_144e4c;
        }
    }
    ctx->pc = 0x144E18u;
label_144e18:
    // 0x144e18: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x144e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x144e1c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x144e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x144e20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x144e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x144e24: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x144e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x144e28: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x144e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x144e2c: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x144E2Cu;
    SET_GPR_U32(ctx, 31, 0x144E34u);
    ctx->pc = 0x144E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E2Cu;
    // 0x144e30: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x144E2Cu, 0x144E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E34u;
label_144e34:
    // 0x144e34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x144e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144e38: 0xc0401a4  jal         func_100690
    ctx->pc = 0x144E38u;
    SET_GPR_U32(ctx, 31, 0x144E40u);
    ctx->pc = 0x144E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E38u;
    // 0x144e3c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x144E38u, 0x144E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E40u;
label_144e40:
    // 0x144e40: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x144e40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x144e44: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x144E44u;
    {
        const bool branch_taken_0x144e44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x144E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E44u;
        // 0x144e48: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e44) {
            ctx->pc = 0x144E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144e18;
        }
    }
    ctx->pc = 0x144E4Cu;
label_144e4c:
    // 0x144e4c: 0x0  nop
    ctx->pc = 0x144e4cu;
    // NOP
    // 0x144e50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x144e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x144e54: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x144e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x144e58: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x144e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_144e5c:
    // 0x144e5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x144e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144e60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144e64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144e64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144e68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x144E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E6Cu;
        // 0x144e70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144E74u;
}
