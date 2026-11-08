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

// Function: FUN_001bbc20
// Address: 0x1bbc20 - 0x1bbcc8
void FUN_001bbc20_0x1bbc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bbc20_0x1bbc20");
#endif

    switch (ctx->pc) {
        case 0x1bbc6cu: goto label_1bbc6c;
        case 0x1bbc8cu: goto label_1bbc8c;
        case 0x1bbc94u: goto label_1bbc94;
        case 0x1bbcacu: goto label_1bbcac;
        default: break;
    }

    ctx->pc = 0x1bbc20u;

    // 0x1bbc20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bbc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bbc24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbc28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bbc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1bbc2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bbc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bbc30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bbc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bbc34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bbc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bbc38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bbc38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc3c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bbc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bbc40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bbc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc44: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1bbc44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1bbc48: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bbc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bbc4c: 0x24650003  addiu       $a1, $v1, 0x3
    ctx->pc = 0x1bbc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1bbc50: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1bbc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1bbc54: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1bbc54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bbc58: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1bbc58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1bbc5c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1bbc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1bbc60: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1bbc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bbc64: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BBC64u;
    SET_GPR_U32(ctx, 31, 0x1BBC6Cu);
    ctx->pc = 0x1BBC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBC64u;
    // 0x1bbc68: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BBC64u, 0x1BBC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBC6Cu;
label_1bbc6c:
    // 0x1bbc6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bbc6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc70: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BBC70u;
    {
        const bool branch_taken_0x1bbc70 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC70u;
        // 0x1bbc74: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc70) {
            ctx->pc = 0x1BBC94u;
            goto label_1bbc94;
        }
    }
    ctx->pc = 0x1BBC78u;
    // 0x1bbc78: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bbc78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bbc7c: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bbc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1bbc80: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bbc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bbc84: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BBC84u;
    SET_GPR_U32(ctx, 31, 0x1BBC8Cu);
    ctx->pc = 0x1BBC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBC84u;
    // 0x1bbc88: 0x24a510f0  addiu       $a1, $a1, 0x10F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BBC84u, 0x1BBC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBC8Cu;
label_1bbc8c:
    // 0x1bbc8c: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BBC8Cu;
    SET_GPR_U32(ctx, 31, 0x1BBC94u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BBC8Cu, 0x1BBC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBC94u;
label_1bbc94:
    // 0x1bbc94: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x1bbc94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x1bbc98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bbc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bbc9c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1bbc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bbca0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1bbca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1bbca4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1BBCA4u;
    SET_GPR_U32(ctx, 31, 0x1BBCACu);
    ctx->pc = 0x1BBCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBCA4u;
    // 0x1bbca8: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1BBCA4u, 0x1BBCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBCACu;
label_1bbcac:
    // 0x1bbcac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1bbcacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bbcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbcb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bbcb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbcb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bbcb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbcbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bbcbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbcc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBCC0u;
        // 0x1bbcc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBCC8u;
}
