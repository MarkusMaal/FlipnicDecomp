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

// Function: FUN_001ffb58
// Address: 0x1ffb58 - 0x1ffc6c
void FUN_001ffb58_0x1ffb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ffb58_0x1ffb58");
#endif

    switch (ctx->pc) {
        case 0x1ffb98u: goto label_1ffb98;
        case 0x1ffc04u: goto label_1ffc04;
        case 0x1ffc20u: goto label_1ffc20;
        case 0x1ffc2cu: goto label_1ffc2c;
        default: break;
    }

    ctx->pc = 0x1ffb58u;

    // 0x1ffb58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ffb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ffb5c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1ffb5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb60: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ffb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1ffb64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ffb64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb68: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ffb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1ffb6c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ffb6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ffb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ffb74: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1ffb74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ffb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ffb7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ffb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ffb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ffb84: 0x262a0014  addiu       $t2, $s1, 0x14
    ctx->pc = 0x1ffb84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1ffb88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ffb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ffb8c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x1ffb8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb90: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x1ffb90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ffb94: 0x0  nop
    ctx->pc = 0x1ffb94u;
    // NOP
label_1ffb98:
    // 0x1ffb98: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1ffb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ffb9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1ffb9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1ffba0: 0x132302a  slt         $a2, $t1, $s2
    ctx->pc = 0x1ffba0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1ffba4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1ffba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ffba8: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x1ffba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ffbac: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1ffbacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1ffbb0: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x1ffbb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ffbb4: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1ffbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1ffbb8: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x1ffbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1ffbbc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ffbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ffbc0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1ffbc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1ffbc4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1ffbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1ffbc8: 0x39c02  srl         $s3, $v1, 16
    ctx->pc = 0x1ffbc8u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1ffbcc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ffbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ffbd0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1ffbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1ffbd4: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1FFBD4u;
    {
        const bool branch_taken_0x1ffbd4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBD4u;
        // 0x1ffbd8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbd4) {
            ctx->pc = 0x1FFB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffb98;
        }
    }
    ctx->pc = 0x1FFBDCu;
    // 0x1ffbdc: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FFBDCu;
    {
        const bool branch_taken_0x1ffbdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBDCu;
        // 0x1ffbe0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbdc) {
            ctx->pc = 0x1FFC4Cu;
            goto label_1ffc4c;
        }
    }
    ctx->pc = 0x1FFBE4u;
    // 0x1ffbe4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ffbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ffbe8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1ffbe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ffbec: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FFBECu;
    {
        const bool branch_taken_0x1ffbec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBECu;
        // 0x1ffbf0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbec) {
            ctx->pc = 0x1FFC38u;
            goto label_1ffc38;
        }
    }
    ctx->pc = 0x1FFBF4u;
    // 0x1ffbf4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1ffbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ffbf8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ffbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffbfc: 0xc07fea0  jal         func_1FFA80
    ctx->pc = 0x1FFBFCu;
    SET_GPR_U32(ctx, 31, 0x1FFC04u);
    ctx->pc = 0x1FFC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFBFCu;
    // 0x1ffc00: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA80u, 0x1FFBFCu, 0x1FFC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC04u;
label_1ffc04:
    // 0x1ffc04: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1ffc04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ffc08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ffc08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc0c: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x1ffc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1ffc10: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1ffc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1ffc14: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1ffc14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ffc18: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1FFC18u;
    SET_GPR_U32(ctx, 31, 0x1FFC20u);
    ctx->pc = 0x1FFC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC18u;
    // 0x1ffc1c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1FFC18u, 0x1FFC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC20u;
label_1ffc20:
    // 0x1ffc20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ffc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc24: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x1FFC24u;
    SET_GPR_U32(ctx, 31, 0x1FFC2Cu);
    ctx->pc = 0x1FFC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC24u;
    // 0x1ffc28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x1FFC24u, 0x1FFC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC2Cu;
label_1ffc2c:
    // 0x1ffc2c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1ffc2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc30: 0x262a0014  addiu       $t2, $s1, 0x14
    ctx->pc = 0x1ffc30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1ffc34: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1ffc34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1ffc38:
    // 0x1ffc38: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x1ffc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1ffc3c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ffc3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ffc40: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1ffc40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x1ffc44: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x1ffc44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x1ffc48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ffc48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ffc4c:
    // 0x1ffc4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ffc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ffc50: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ffc50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ffc54: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ffc54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ffc58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ffc58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ffc5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ffc5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffc60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ffc60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffc64: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC64u;
        // 0x1ffc68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFC6Cu;
}
