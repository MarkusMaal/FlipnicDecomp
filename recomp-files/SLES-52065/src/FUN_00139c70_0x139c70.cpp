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

// Function: FUN_00139c70
// Address: 0x139c70 - 0x139d30
void FUN_00139c70_0x139c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00139c70_0x139c70");
#endif

    switch (ctx->pc) {
        case 0x139cb0u: goto label_139cb0;
        case 0x139cc4u: goto label_139cc4;
        case 0x139cd4u: goto label_139cd4;
        case 0x139ce0u: goto label_139ce0;
        case 0x139cecu: goto label_139cec;
        case 0x139cfcu: goto label_139cfc;
        default: break;
    }

    ctx->pc = 0x139c70u;

    // 0x139c70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x139c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x139c74: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x139c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x139c78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x139c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x139c7c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x139c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x139c80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x139c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x139c84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x139c88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x139c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139c90: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x139c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x139c94: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x139c94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x139c98: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x139c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x139c9c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x139c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x139ca0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x139CA0u;
    {
        const bool branch_taken_0x139ca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x139CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139CA0u;
        // 0x139ca4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ca0) {
            ctx->pc = 0x139CBCu;
            goto label_139cbc;
        }
    }
    ctx->pc = 0x139CA8u;
    // 0x139ca8: 0xc0485bc  jal         func_1216F0
    ctx->pc = 0x139CA8u;
    SET_GPR_U32(ctx, 31, 0x139CB0u);
    ctx->pc = 0x1216F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216F0u, 0x139CA8u, 0x139CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139CB0u;
label_139cb0:
    // 0x139cb0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x139cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x139cb4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x139cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x139cb8: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x139cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_139cbc:
    // 0x139cbc: 0xc080748  jal         func_201D20
    ctx->pc = 0x139CBCu;
    SET_GPR_U32(ctx, 31, 0x139CC4u);
    ctx->pc = 0x139CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139CBCu;
    // 0x139cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x139CBCu, 0x139CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139CC4u;
label_139cc4:
    // 0x139cc4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x139CC4u;
    {
        const bool branch_taken_0x139cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139cc4) {
            ctx->pc = 0x139D0Cu;
            goto label_139d0c;
        }
    }
    ctx->pc = 0x139CCCu;
    // 0x139ccc: 0xc04c25c  jal         func_130970
    ctx->pc = 0x139CCCu;
    SET_GPR_U32(ctx, 31, 0x139CD4u);
    ctx->pc = 0x130970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130970u, 0x139CCCu, 0x139CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139CD4u;
label_139cd4:
    // 0x139cd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x139cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139cd8: 0xc080702  jal         func_201C08
    ctx->pc = 0x139CD8u;
    SET_GPR_U32(ctx, 31, 0x139CE0u);
    ctx->pc = 0x139CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139CD8u;
    // 0x139cdc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x139CD8u, 0x139CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139CE0u;
label_139ce0:
    // 0x139ce0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ce4: 0xc080664  jal         func_201990
    ctx->pc = 0x139CE4u;
    SET_GPR_U32(ctx, 31, 0x139CECu);
    ctx->pc = 0x139CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139CE4u;
    // 0x139ce8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x139CE4u, 0x139CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139CECu;
label_139cec:
    // 0x139cec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x139cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x139cf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139cf4: 0xc0485b4  jal         func_1216D0
    ctx->pc = 0x139CF4u;
    SET_GPR_U32(ctx, 31, 0x139CFCu);
    ctx->pc = 0x139CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139CF4u;
    // 0x139cf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x139CF4u, 0x139CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139CFCu;
label_139cfc:
    // 0x139cfc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x139cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x139d00: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x139d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x139d04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x139D04u;
    {
        const bool branch_taken_0x139d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D04u;
        // 0x139d08: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d04) {
            ctx->pc = 0x139D18u;
            goto label_139d18;
        }
    }
    ctx->pc = 0x139D0Cu;
label_139d0c:
    // 0x139d0c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x139d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x139d10: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x139d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x139d14: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x139d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_139d18:
    // 0x139d18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x139d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139d1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x139d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139d28: 0x3e00008  jr          $ra
    ctx->pc = 0x139D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D28u;
        // 0x139d2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139D30u;
}
