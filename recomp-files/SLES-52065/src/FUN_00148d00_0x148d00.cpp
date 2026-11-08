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

// Function: FUN_00148d00
// Address: 0x148d00 - 0x148e08
void FUN_00148d00_0x148d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00148d00_0x148d00");
#endif

    switch (ctx->pc) {
        case 0x148d40u: goto label_148d40;
        case 0x148d4cu: goto label_148d4c;
        default: break;
    }

    ctx->pc = 0x148d00u;

    // 0x148d00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x148d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x148d04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x148d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x148d08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x148d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x148d0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148d10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x148d10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148d18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x148d18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d1c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x148d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x148d20: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x148d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d24: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x148d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x148d28: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x148d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x148d2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x148d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148d34: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x148d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148d38: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x148D38u;
    SET_GPR_U32(ctx, 31, 0x148D40u);
    ctx->pc = 0x148D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D38u;
    // 0x148d3c: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x148D38u, 0x148D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D40u;
label_148d40:
    // 0x148d40: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x148d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x148d44: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x148D44u;
    SET_GPR_U32(ctx, 31, 0x148D4Cu);
    ctx->pc = 0x148D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D44u;
    // 0x148d48: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x148D44u, 0x148D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D4Cu;
label_148d4c:
    // 0x148d4c: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x148d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148d50: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x148d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x148d54: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x148d54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148d58: 0x208082b  sltu        $at, $s0, $t0
    ctx->pc = 0x148d58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x148d5c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x148D5Cu;
    {
        const bool branch_taken_0x148d5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x148D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D5Cu;
        // 0x148d60: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d5c) {
            ctx->pc = 0x148D84u;
            goto label_148d84;
        }
    }
    ctx->pc = 0x148D64u;
    // 0x148d64: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x148d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x148d68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148D68u;
    {
        const bool branch_taken_0x148d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D68u;
        // 0x148d6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d68) {
            ctx->pc = 0x148D78u;
            goto label_148d78;
        }
    }
    ctx->pc = 0x148D70u;
    // 0x148d70: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x148d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x148d74: 0x0  nop
    ctx->pc = 0x148d74u;
    // NOP
label_148d78:
    // 0x148d78: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x148d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x148d7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x148D7Cu;
    {
        const bool branch_taken_0x148d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D7Cu;
        // 0x148d80: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d7c) {
            ctx->pc = 0x148DCCu;
            goto label_148dcc;
        }
    }
    ctx->pc = 0x148D84u;
label_148d84:
    // 0x148d84: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x148d84u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x148d88: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x148d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x148d8c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x148d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x148d90: 0x1812  mflo        $v1
    ctx->pc = 0x148d90u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x148d94: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x148d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x148d98: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x148d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x148d9c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x148d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x148da0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x148DA0u;
    {
        const bool branch_taken_0x148da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148da0) {
            ctx->pc = 0x148DACu;
            goto label_148dac;
        }
    }
    ctx->pc = 0x148DA8u;
    // 0x148da8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x148da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_148dac:
    // 0x148dac: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x148dacu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x148db0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x148db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x148db4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148db8: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x148db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148dbc: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x148dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x148dc0: 0x1010  mfhi        $v0
    ctx->pc = 0x148dc0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x148dc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x148dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x148dc8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x148dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_148dcc:
    // 0x148dcc: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x148dccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x148dd0: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x148dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x148dd4: 0xae460004  sw          $a2, 0x4($s2)
    ctx->pc = 0x148dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
    // 0x148dd8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x148dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x148ddc: 0xae470008  sw          $a3, 0x8($s2)
    ctx->pc = 0x148ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 7));
    // 0x148de0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x148de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148de4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x148de4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x148de8: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x148de8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x148dec: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x148decu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    // 0x148df0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x148df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148df4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x148df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148df8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148e00: 0x3e00008  jr          $ra
    ctx->pc = 0x148E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E00u;
        // 0x148e04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148E08u;
}
