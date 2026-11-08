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

// Function: FUN_001e5e20
// Address: 0x1e5e20 - 0x1e5ef8
void FUN_001e5e20_0x1e5e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e5e20_0x1e5e20");
#endif

    switch (ctx->pc) {
        case 0x1e5e84u: goto label_1e5e84;
        case 0x1e5eccu: goto label_1e5ecc;
        default: break;
    }

    ctx->pc = 0x1e5e20u;

    // 0x1e5e20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e5e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e5e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e5e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e5e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e5e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e5e30: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x1e5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1e5e34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5E34u;
    {
        const bool branch_taken_0x1e5e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E34u;
        // 0x1e5e38: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5e34) {
            ctx->pc = 0x1E5E4Cu;
            goto label_1e5e4c;
        }
    }
    ctx->pc = 0x1E5E3Cu;
    // 0x1e5e3c: 0x8f82875c  lw          $v0, -0x78A4($gp)
    ctx->pc = 0x1e5e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x1e5e40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e5e44: 0xaf82875c  sw          $v0, -0x78A4($gp)
    ctx->pc = 0x1e5e44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 2));
    // 0x1e5e48: 0xaf828784  sw          $v0, -0x787C($gp)
    ctx->pc = 0x1e5e48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 2));
label_1e5e4c:
    // 0x1e5e4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e5e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5e50: 0x8f908784  lw          $s0, -0x787C($gp)
    ctx->pc = 0x1e5e50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1e5e54: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e5e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e5e58: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1e5e58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e5e5c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5E5Cu;
    {
        const bool branch_taken_0x1e5e5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E5Cu;
        // 0x1e5e60: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5e5c) {
            ctx->pc = 0x1E5E7Cu;
            goto label_1e5e7c;
        }
    }
    ctx->pc = 0x1E5E64u;
    // 0x1e5e64: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e5e68: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e5e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e5e6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5e70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e5e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5e74: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E5E74u;
    {
        const bool branch_taken_0x1e5e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5e74) {
            ctx->pc = 0x1E5EE4u;
            goto label_1e5ee4;
        }
    }
    ctx->pc = 0x1E5E7Cu;
label_1e5e7c:
    // 0x1e5e7c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E5E7Cu;
    SET_GPR_U32(ctx, 31, 0x1E5E84u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E5E7Cu, 0x1E5E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5E84u;
label_1e5e84:
    // 0x1e5e84: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5E84u;
    {
        const bool branch_taken_0x1e5e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E84u;
        // 0x1e5e88: 0x3c040023  lui         $a0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5e84) {
            ctx->pc = 0x1E5EA4u;
            goto label_1e5ea4;
        }
    }
    ctx->pc = 0x1E5E8Cu;
    // 0x1e5e8c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e5e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e5e90: 0x24848850  addiu       $a0, $a0, -0x77B0
    ctx->pc = 0x1e5e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936656));
    // 0x1e5e94: 0x2463c2a0  addiu       $v1, $v1, -0x3D60
    ctx->pc = 0x1e5e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951584));
    // 0x1e5e98: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1e5e98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1e5e9c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e5e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e5ea0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e5ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e5ea4:
    // 0x1e5ea4: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x1e5ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1e5ea8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5EA8u;
    {
        const bool branch_taken_0x1e5ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5EA8u;
        // 0x1e5eac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ea8) {
            ctx->pc = 0x1E5EC0u;
            goto label_1e5ec0;
        }
    }
    ctx->pc = 0x1E5EB0u;
    // 0x1e5eb0: 0x8f83875c  lw          $v1, -0x78A4($gp)
    ctx->pc = 0x1e5eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x1e5eb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e5eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e5eb8: 0xaf83875c  sw          $v1, -0x78A4($gp)
    ctx->pc = 0x1e5eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 3));
    // 0x1e5ebc: 0xaf838784  sw          $v1, -0x787C($gp)
    ctx->pc = 0x1e5ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 3));
label_1e5ec0:
    // 0x1e5ec0: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x1e5ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1e5ec4: 0xc04839c  jal         func_120E70
    ctx->pc = 0x1E5EC4u;
    SET_GPR_U32(ctx, 31, 0x1E5ECCu);
    ctx->pc = 0x1E5EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5EC4u;
    // 0x1e5ec8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120E70u, 0x1E5EC4u, 0x1E5ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5ECCu;
label_1e5ecc:
    // 0x1e5ecc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5ed0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e5ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e5ed4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e5ed8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5edc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5ee0: 0x0  nop
    ctx->pc = 0x1e5ee0u;
    // NOP
label_1e5ee4:
    // 0x1e5ee4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e5ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5EF0u;
        // 0x1e5ef4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5EF8u;
}
