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

// Function: FUN_001e0e68
// Address: 0x1e0e68 - 0x1e0f40
void FUN_001e0e68_0x1e0e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e0e68_0x1e0e68");
#endif

    switch (ctx->pc) {
        case 0x1e0eacu: goto label_1e0eac;
        default: break;
    }

    ctx->pc = 0x1e0e68u;

    // 0x1e0e68: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1e0e68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e6c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0e6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0e70: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e0e74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0e78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0e7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e0e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e0e80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0e84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e0e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e0e88: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e0e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0e8c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e0e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e0e90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0e94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e0e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e98: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1e0e98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1e0e9c: 0x2610b340  addiu       $s0, $s0, -0x4CC0
    ctx->pc = 0x1e0e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947648));
    // 0x1e0ea0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e0ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e0ea4: 0xc07837a  jal         func_1E0DE8
    ctx->pc = 0x1E0EA4u;
    SET_GPR_U32(ctx, 31, 0x1E0EACu);
    ctx->pc = 0x1E0EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0EA4u;
    // 0x1e0ea8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0DE8u, 0x1E0EA4u, 0x1E0EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0EACu;
label_1e0eac:
    // 0x1e0eac: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1E0EACu;
    {
        const bool branch_taken_0x1e0eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0eac) {
            ctx->pc = 0x1E0EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0EACu;
            // 0x1e0eb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0F2Cu;
            goto label_1e0f2c;
        }
    }
    ctx->pc = 0x1E0EB4u;
    // 0x1e0eb4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1e0eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e0eb8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E0EB8u;
    {
        const bool branch_taken_0x1e0eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EB8u;
        // 0x1e0ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0eb8) {
            ctx->pc = 0x1E0F28u;
            goto label_1e0f28;
        }
    }
    ctx->pc = 0x1E0EC0u;
    // 0x1e0ec0: 0x8c66003c  lw          $a2, 0x3C($v1)
    ctx->pc = 0x1e0ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1e0ec4: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E0EC4u;
    {
        const bool branch_taken_0x1e0ec4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EC4u;
        // 0x1e0ec8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ec4) {
            ctx->pc = 0x1E0F2Cu;
            goto label_1e0f2c;
        }
    }
    ctx->pc = 0x1E0ECCu;
    // 0x1e0ecc: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x1e0eccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e0ed0: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x1e0ed0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e0ed4: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E0ED4u;
    {
        const bool branch_taken_0x1e0ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ed4) {
            ctx->pc = 0x1E0F2Cu;
            goto label_1e0f2c;
        }
    }
    ctx->pc = 0x1E0EDCu;
    // 0x1e0edc: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1e0edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0ee0: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1e0ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e0ee4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1e0ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e0ee8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1e0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1e0eec: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1e0eecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0ef0: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E0EF0u;
    {
        const bool branch_taken_0x1e0ef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1E0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EF0u;
        // 0x1e0ef4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ef0) {
            ctx->pc = 0x1E0F30u;
            goto label_1e0f30;
        }
    }
    ctx->pc = 0x1E0EF8u;
    // 0x1e0ef8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1e0ef8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0efc: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1e0efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1e0f00: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x1e0f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e0f04: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1e0f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e0f08: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1e0f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e0f0c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1e0f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1e0f10: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1e0f10u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0f14: 0x92202b  sltu        $a0, $a0, $s2
    ctx->pc = 0x1e0f14u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e0f18: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0F18u;
    {
        const bool branch_taken_0x1e0f18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F18u;
        // 0x1e0f1c: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f18) {
            ctx->pc = 0x1E0F30u;
            goto label_1e0f30;
        }
    }
    ctx->pc = 0x1E0F20u;
    // 0x1e0f20: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x1e0f20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e0f24: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1e0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1e0f28:
    // 0x1e0f28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0f2c:
    // 0x1e0f2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0f2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e0f30:
    // 0x1e0f30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e0f30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0f34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e0f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e0f38: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F38u;
        // 0x1e0f3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0F40u;
}
