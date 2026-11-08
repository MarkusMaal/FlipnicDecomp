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

// Function: FUN_0014cbd0
// Address: 0x14cbd0 - 0x14cc7c
void FUN_0014cbd0_0x14cbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014cbd0_0x14cbd0");
#endif

    switch (ctx->pc) {
        case 0x14cbd0u: goto label_14cbd0;
        case 0x14cbd4u: goto label_14cbd4;
        case 0x14cbd8u: goto label_14cbd8;
        case 0x14cbdcu: goto label_14cbdc;
        case 0x14cbe0u: goto label_14cbe0;
        case 0x14cbe4u: goto label_14cbe4;
        case 0x14cbe8u: goto label_14cbe8;
        case 0x14cbecu: goto label_14cbec;
        case 0x14cbf0u: goto label_14cbf0;
        case 0x14cbf4u: goto label_14cbf4;
        case 0x14cbf8u: goto label_14cbf8;
        case 0x14cbfcu: goto label_14cbfc;
        case 0x14cc00u: goto label_14cc00;
        case 0x14cc04u: goto label_14cc04;
        case 0x14cc08u: goto label_14cc08;
        case 0x14cc0cu: goto label_14cc0c;
        case 0x14cc10u: goto label_14cc10;
        case 0x14cc14u: goto label_14cc14;
        case 0x14cc18u: goto label_14cc18;
        case 0x14cc1cu: goto label_14cc1c;
        case 0x14cc20u: goto label_14cc20;
        case 0x14cc24u: goto label_14cc24;
        case 0x14cc28u: goto label_14cc28;
        case 0x14cc2cu: goto label_14cc2c;
        case 0x14cc30u: goto label_14cc30;
        case 0x14cc34u: goto label_14cc34;
        case 0x14cc38u: goto label_14cc38;
        case 0x14cc3cu: goto label_14cc3c;
        case 0x14cc40u: goto label_14cc40;
        case 0x14cc44u: goto label_14cc44;
        case 0x14cc48u: goto label_14cc48;
        case 0x14cc4cu: goto label_14cc4c;
        case 0x14cc50u: goto label_14cc50;
        case 0x14cc54u: goto label_14cc54;
        case 0x14cc58u: goto label_14cc58;
        case 0x14cc5cu: goto label_14cc5c;
        case 0x14cc60u: goto label_14cc60;
        case 0x14cc64u: goto label_14cc64;
        case 0x14cc68u: goto label_14cc68;
        case 0x14cc6cu: goto label_14cc6c;
        case 0x14cc70u: goto label_14cc70;
        case 0x14cc74u: goto label_14cc74;
        case 0x14cc78u: goto label_14cc78;
        default: break;
    }

    ctx->pc = 0x14cbd0u;

label_14cbd0:
    // 0x14cbd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14cbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_14cbd4:
    // 0x14cbd4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x14cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_14cbd8:
    // 0x14cbd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14cbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_14cbdc:
    // 0x14cbdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14cbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_14cbe0:
    // 0x14cbe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14cbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14cbe4:
    // 0x14cbe4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14cbe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14cbe8:
    // 0x14cbe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14cbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14cbec:
    // 0x14cbec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14cbecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_14cbf0:
    // 0x14cbf0: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x14cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_14cbf4:
    // 0x14cbf4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14cbf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14cbf8:
    // 0x14cbf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14cbfc:
    // 0x14cbfc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14cbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14cc00:
    // 0x14cc00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14cc00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14cc04:
    // 0x14cc04: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x14cc04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_14cc08:
    // 0x14cc08: 0x320f809  jalr        $t9
label_14cc0c:
    if (ctx->pc == 0x14CC0Cu) {
        ctx->pc = 0x14CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC08u;
        // 0x14cc0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CC10u;
        goto label_14cc10;
    }
    ctx->pc = 0x14CC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14CC10u);
        ctx->pc = 0x14CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC08u;
        // 0x14cc0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CC08u, 0x14CC10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CC10u;
label_14cc10:
    // 0x14cc10: 0x8e4200c8  lw          $v0, 0xC8($s2)
    ctx->pc = 0x14cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_14cc14:
    // 0x14cc14: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x14cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_14cc18:
    // 0x14cc18: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x14cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_14cc1c:
    // 0x14cc1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14cc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14cc20:
    // 0x14cc20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14cc24:
    // 0x14cc24: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x14cc24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_14cc28:
    // 0x14cc28: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14cc2c:
    // 0x14cc2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14cc30:
    // 0x14cc30: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x14cc30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_14cc34:
    // 0x14cc34: 0x1251000a  beq         $s2, $s1, . + 4 + (0xA << 2)
label_14cc38:
    if (ctx->pc == 0x14CC38u) {
        ctx->pc = 0x14CC3Cu;
        goto label_14cc3c;
    }
    ctx->pc = 0x14CC34u;
    {
        const bool branch_taken_0x14cc34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        if (branch_taken_0x14cc34) {
            ctx->pc = 0x14CC60u;
            goto label_14cc60;
        }
    }
    ctx->pc = 0x14CC3Cu;
label_14cc3c:
    // 0x14cc3c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14cc40:
    // 0x14cc40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14cc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14cc44:
    // 0x14cc44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14cc44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14cc48:
    // 0x14cc48: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x14cc48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_14cc4c:
    // 0x14cc4c: 0x320f809  jalr        $t9
label_14cc50:
    if (ctx->pc == 0x14CC50u) {
        ctx->pc = 0x14CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC4Cu;
        // 0x14cc50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CC54u;
        goto label_14cc54;
    }
    ctx->pc = 0x14CC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14CC54u);
        ctx->pc = 0x14CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC4Cu;
        // 0x14cc50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CC4Cu, 0x14CC54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CC54u;
label_14cc54:
    // 0x14cc54: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x14cc54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_14cc58:
    // 0x14cc58: 0x1651fff8  bne         $s2, $s1, . + 4 + (-0x8 << 2)
label_14cc5c:
    if (ctx->pc == 0x14CC5Cu) {
        ctx->pc = 0x14CC60u;
        goto label_14cc60;
    }
    ctx->pc = 0x14CC58u;
    {
        const bool branch_taken_0x14cc58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x14cc58) {
            ctx->pc = 0x14CC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14cc3c;
        }
    }
    ctx->pc = 0x14CC60u;
label_14cc60:
    // 0x14cc60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14cc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_14cc64:
    // 0x14cc64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14cc64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14cc68:
    // 0x14cc68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14cc68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14cc6c:
    // 0x14cc6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14cc6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14cc70:
    // 0x14cc70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14cc70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14cc74:
    // 0x14cc74: 0x3e00008  jr          $ra
label_14cc78:
    if (ctx->pc == 0x14CC78u) {
        ctx->pc = 0x14CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC74u;
        // 0x14cc78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CC7Cu;
        goto label_fallthrough_0x14cc74;
    }
    ctx->pc = 0x14CC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC74u;
        // 0x14cc78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14cc74:
    ctx->pc = 0x14CC7Cu;
}
