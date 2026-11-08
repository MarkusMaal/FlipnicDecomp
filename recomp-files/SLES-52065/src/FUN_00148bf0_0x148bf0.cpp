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

// Function: FUN_00148bf0
// Address: 0x148bf0 - 0x148c88
void FUN_00148bf0_0x148bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00148bf0_0x148bf0");
#endif

    switch (ctx->pc) {
        case 0x148c20u: goto label_148c20;
        default: break;
    }

    ctx->pc = 0x148bf0u;

    // 0x148bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x148bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x148bf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x148bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x148bf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x148bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x148bfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148c00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x148c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148c08: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x148c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x148c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c10: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x148c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x148c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c18: 0xc0485b4  jal         func_1216D0
    ctx->pc = 0x148C18u;
    SET_GPR_U32(ctx, 31, 0x148C20u);
    ctx->pc = 0x148C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148C18u;
    // 0x148c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x148C18u, 0x148C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C20u;
label_148c20:
    // 0x148c20: 0x1121c0  sll         $a0, $s1, 7
    ctx->pc = 0x148c20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x148c24: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x148c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x148c28: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x148c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x148c2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x148c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x148c30: 0xac6202c4  sw          $v0, 0x2C4($v1)
    ctx->pc = 0x148c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 708), GPR_U32(ctx, 2));
    // 0x148c34: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x148C34u;
    {
        const bool branch_taken_0x148c34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x148C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C34u;
        // 0x148c38: 0x246302c4  addiu       $v1, $v1, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c34) {
            ctx->pc = 0x148C6Cu;
            goto label_148c6c;
        }
    }
    ctx->pc = 0x148C3Cu;
    // 0x148c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x148c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148c40: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x148C40u;
    {
        const bool branch_taken_0x148c40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x148c40) {
            ctx->pc = 0x148C64u;
            goto label_148c64;
        }
    }
    ctx->pc = 0x148C48u;
    // 0x148c48: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x148C48u;
    {
        const bool branch_taken_0x148c48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x148c48) {
            ctx->pc = 0x148C58u;
            goto label_148c58;
        }
    }
    ctx->pc = 0x148C50u;
    // 0x148c50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x148C50u;
    {
        const bool branch_taken_0x148c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C50u;
        // 0x148c54: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c50) {
            ctx->pc = 0x148C70u;
            goto label_148c70;
        }
    }
    ctx->pc = 0x148C58u;
label_148c58:
    // 0x148c58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148c5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x148C5Cu;
    {
        const bool branch_taken_0x148c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C5Cu;
        // 0x148c60: 0xae4202bc  sw          $v0, 0x2BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c5c) {
            ctx->pc = 0x148C6Cu;
            goto label_148c6c;
        }
    }
    ctx->pc = 0x148C64u;
label_148c64:
    // 0x148c64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148c68: 0xae4202c0  sw          $v0, 0x2C0($s2)
    ctx->pc = 0x148c68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 704), GPR_U32(ctx, 2));
label_148c6c:
    // 0x148c6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x148c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_148c70:
    // 0x148c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x148c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148c74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x148c74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148c78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148c78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148c7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148c80: 0x3e00008  jr          $ra
    ctx->pc = 0x148C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C80u;
        // 0x148c84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148C88u;
}
