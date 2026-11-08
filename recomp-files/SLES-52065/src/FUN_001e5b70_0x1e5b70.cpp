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

// Function: FUN_001e5b70
// Address: 0x1e5b70 - 0x1e5d38
void FUN_001e5b70_0x1e5b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e5b70_0x1e5b70");
#endif

    switch (ctx->pc) {
        case 0x1e5b70u: goto label_1e5b70;
        case 0x1e5b74u: goto label_1e5b74;
        case 0x1e5b78u: goto label_1e5b78;
        case 0x1e5b7cu: goto label_1e5b7c;
        case 0x1e5b80u: goto label_1e5b80;
        case 0x1e5b84u: goto label_1e5b84;
        case 0x1e5b88u: goto label_1e5b88;
        case 0x1e5b8cu: goto label_1e5b8c;
        case 0x1e5b90u: goto label_1e5b90;
        case 0x1e5b94u: goto label_1e5b94;
        case 0x1e5b98u: goto label_1e5b98;
        case 0x1e5b9cu: goto label_1e5b9c;
        case 0x1e5ba0u: goto label_1e5ba0;
        case 0x1e5ba4u: goto label_1e5ba4;
        case 0x1e5ba8u: goto label_1e5ba8;
        case 0x1e5bacu: goto label_1e5bac;
        case 0x1e5bb0u: goto label_1e5bb0;
        case 0x1e5bb4u: goto label_1e5bb4;
        case 0x1e5bb8u: goto label_1e5bb8;
        case 0x1e5bbcu: goto label_1e5bbc;
        case 0x1e5bc0u: goto label_1e5bc0;
        case 0x1e5bc4u: goto label_1e5bc4;
        case 0x1e5bc8u: goto label_1e5bc8;
        case 0x1e5bccu: goto label_1e5bcc;
        case 0x1e5bd0u: goto label_1e5bd0;
        case 0x1e5bd4u: goto label_1e5bd4;
        case 0x1e5bd8u: goto label_1e5bd8;
        case 0x1e5bdcu: goto label_1e5bdc;
        case 0x1e5be0u: goto label_1e5be0;
        case 0x1e5be4u: goto label_1e5be4;
        case 0x1e5be8u: goto label_1e5be8;
        case 0x1e5becu: goto label_1e5bec;
        case 0x1e5bf0u: goto label_1e5bf0;
        case 0x1e5bf4u: goto label_1e5bf4;
        case 0x1e5bf8u: goto label_1e5bf8;
        case 0x1e5bfcu: goto label_1e5bfc;
        case 0x1e5c00u: goto label_1e5c00;
        case 0x1e5c04u: goto label_1e5c04;
        case 0x1e5c08u: goto label_1e5c08;
        case 0x1e5c0cu: goto label_1e5c0c;
        case 0x1e5c10u: goto label_1e5c10;
        case 0x1e5c14u: goto label_1e5c14;
        case 0x1e5c18u: goto label_1e5c18;
        case 0x1e5c1cu: goto label_1e5c1c;
        case 0x1e5c20u: goto label_1e5c20;
        case 0x1e5c24u: goto label_1e5c24;
        case 0x1e5c28u: goto label_1e5c28;
        case 0x1e5c2cu: goto label_1e5c2c;
        case 0x1e5c30u: goto label_1e5c30;
        case 0x1e5c34u: goto label_1e5c34;
        case 0x1e5c38u: goto label_1e5c38;
        case 0x1e5c3cu: goto label_1e5c3c;
        case 0x1e5c40u: goto label_1e5c40;
        case 0x1e5c44u: goto label_1e5c44;
        case 0x1e5c48u: goto label_1e5c48;
        case 0x1e5c4cu: goto label_1e5c4c;
        case 0x1e5c50u: goto label_1e5c50;
        case 0x1e5c54u: goto label_1e5c54;
        case 0x1e5c58u: goto label_1e5c58;
        case 0x1e5c5cu: goto label_1e5c5c;
        case 0x1e5c60u: goto label_1e5c60;
        case 0x1e5c64u: goto label_1e5c64;
        case 0x1e5c68u: goto label_1e5c68;
        case 0x1e5c6cu: goto label_1e5c6c;
        case 0x1e5c70u: goto label_1e5c70;
        case 0x1e5c74u: goto label_1e5c74;
        case 0x1e5c78u: goto label_1e5c78;
        case 0x1e5c7cu: goto label_1e5c7c;
        case 0x1e5c80u: goto label_1e5c80;
        case 0x1e5c84u: goto label_1e5c84;
        case 0x1e5c88u: goto label_1e5c88;
        case 0x1e5c8cu: goto label_1e5c8c;
        case 0x1e5c90u: goto label_1e5c90;
        case 0x1e5c94u: goto label_1e5c94;
        case 0x1e5c98u: goto label_1e5c98;
        case 0x1e5c9cu: goto label_1e5c9c;
        case 0x1e5ca0u: goto label_1e5ca0;
        case 0x1e5ca4u: goto label_1e5ca4;
        case 0x1e5ca8u: goto label_1e5ca8;
        case 0x1e5cacu: goto label_1e5cac;
        case 0x1e5cb0u: goto label_1e5cb0;
        case 0x1e5cb4u: goto label_1e5cb4;
        case 0x1e5cb8u: goto label_1e5cb8;
        case 0x1e5cbcu: goto label_1e5cbc;
        case 0x1e5cc0u: goto label_1e5cc0;
        case 0x1e5cc4u: goto label_1e5cc4;
        case 0x1e5cc8u: goto label_1e5cc8;
        case 0x1e5cccu: goto label_1e5ccc;
        case 0x1e5cd0u: goto label_1e5cd0;
        case 0x1e5cd4u: goto label_1e5cd4;
        case 0x1e5cd8u: goto label_1e5cd8;
        case 0x1e5cdcu: goto label_1e5cdc;
        case 0x1e5ce0u: goto label_1e5ce0;
        case 0x1e5ce4u: goto label_1e5ce4;
        case 0x1e5ce8u: goto label_1e5ce8;
        case 0x1e5cecu: goto label_1e5cec;
        case 0x1e5cf0u: goto label_1e5cf0;
        case 0x1e5cf4u: goto label_1e5cf4;
        case 0x1e5cf8u: goto label_1e5cf8;
        case 0x1e5cfcu: goto label_1e5cfc;
        case 0x1e5d00u: goto label_1e5d00;
        case 0x1e5d04u: goto label_1e5d04;
        case 0x1e5d08u: goto label_1e5d08;
        case 0x1e5d0cu: goto label_1e5d0c;
        case 0x1e5d10u: goto label_1e5d10;
        case 0x1e5d14u: goto label_1e5d14;
        case 0x1e5d18u: goto label_1e5d18;
        case 0x1e5d1cu: goto label_1e5d1c;
        case 0x1e5d20u: goto label_1e5d20;
        case 0x1e5d24u: goto label_1e5d24;
        case 0x1e5d28u: goto label_1e5d28;
        case 0x1e5d2cu: goto label_1e5d2c;
        case 0x1e5d30u: goto label_1e5d30;
        case 0x1e5d34u: goto label_1e5d34;
        default: break;
    }

    ctx->pc = 0x1e5b70u;

label_1e5b70:
    // 0x1e5b70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e5b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e5b74:
    // 0x1e5b74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e5b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e5b78:
    // 0x1e5b78: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1e5b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1e5b7c:
    // 0x1e5b7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e5b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e5b80:
    // 0x1e5b80: 0x27a8005c  addiu       $t0, $sp, 0x5C
    ctx->pc = 0x1e5b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1e5b84:
    // 0x1e5b84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e5b88:
    // 0x1e5b88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e5b88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e5b8c:
    // 0x1e5b8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e5b90:
    // 0x1e5b90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e5b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e5b94:
    // 0x1e5b94: 0xa3a60047  sb          $a2, 0x47($sp)
    ctx->pc = 0x1e5b94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 71), (uint8_t)GPR_U32(ctx, 6));
label_1e5b98:
    // 0x1e5b98: 0x26450028  addiu       $a1, $s2, 0x28
    ctx->pc = 0x1e5b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_1e5b9c:
    // 0x1e5b9c: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x1e5b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1e5ba0:
    // 0x1e5ba0: 0x27a60047  addiu       $a2, $sp, 0x47
    ctx->pc = 0x1e5ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 71));
label_1e5ba4:
    // 0x1e5ba4: 0x27a90048  addiu       $t1, $sp, 0x48
    ctx->pc = 0x1e5ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1e5ba8:
    // 0x1e5ba8: 0x27aa0054  addiu       $t2, $sp, 0x54
    ctx->pc = 0x1e5ba8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_1e5bac:
    // 0x1e5bac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e5bacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5bb0:
    // 0x1e5bb0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1e5bb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1e5bb4:
    // 0x1e5bb4: 0x320f809  jalr        $t9
label_1e5bb8:
    if (ctx->pc == 0x1E5BB8u) {
        ctx->pc = 0x1E5BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BB4u;
        // 0x1e5bb8: 0x27ab0058  addiu       $t3, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5BBCu;
        goto label_1e5bbc;
    }
    ctx->pc = 0x1E5BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5BBCu);
        ctx->pc = 0x1E5BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BB4u;
        // 0x1e5bb8: 0x27ab0058  addiu       $t3, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5BB4u, 0x1E5BBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5BBCu;
label_1e5bbc:
    // 0x1e5bbc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e5bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e5bc0:
    // 0x1e5bc0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_1e5bc4:
    if (ctx->pc == 0x1E5BC4u) {
        ctx->pc = 0x1E5BC8u;
        goto label_1e5bc8;
    }
    ctx->pc = 0x1E5BC0u;
    {
        const bool branch_taken_0x1e5bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5bc0) {
            ctx->pc = 0x1E5C18u;
            goto label_1e5c18;
        }
    }
    ctx->pc = 0x1E5BC8u;
label_1e5bc8:
    // 0x1e5bc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e5bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e5bcc:
    // 0x1e5bcc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1e5bd0:
    if (ctx->pc == 0x1E5BD0u) {
        ctx->pc = 0x1E5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BCCu;
        // 0x1e5bd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5BD4u;
        goto label_1e5bd4;
    }
    ctx->pc = 0x1E5BCCu;
    {
        const bool branch_taken_0x1e5bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BCCu;
        // 0x1e5bd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bcc) {
            ctx->pc = 0x1E5BFCu;
            goto label_1e5bfc;
        }
    }
    ctx->pc = 0x1E5BD4u;
label_1e5bd4:
    // 0x1e5bd4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1e5bd8:
    if (ctx->pc == 0x1E5BD8u) {
        ctx->pc = 0x1E5BDCu;
        goto label_1e5bdc;
    }
    ctx->pc = 0x1E5BD4u;
    {
        const bool branch_taken_0x1e5bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5bd4) {
            ctx->pc = 0x1E5BF0u;
            goto label_1e5bf0;
        }
    }
    ctx->pc = 0x1E5BDCu;
label_1e5bdc:
    // 0x1e5bdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e5bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5be0:
    // 0x1e5be0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1e5be4:
    if (ctx->pc == 0x1E5BE4u) {
        ctx->pc = 0x1E5BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BE0u;
        // 0x1e5be4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5BE8u;
        goto label_1e5be8;
    }
    ctx->pc = 0x1E5BE0u;
    {
        const bool branch_taken_0x1e5be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E5BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BE0u;
        // 0x1e5be4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5be0) {
            ctx->pc = 0x1E5BF4u;
            goto label_1e5bf4;
        }
    }
    ctx->pc = 0x1E5BE8u;
label_1e5be8:
    // 0x1e5be8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e5bec:
    if (ctx->pc == 0x1E5BECu) {
        ctx->pc = 0x1E5BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BE8u;
        // 0x1e5bec: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5BF0u;
        goto label_1e5bf0;
    }
    ctx->pc = 0x1E5BE8u;
    {
        const bool branch_taken_0x1e5be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BE8u;
        // 0x1e5bec: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5be8) {
            ctx->pc = 0x1E5C28u;
            goto label_1e5c28;
        }
    }
    ctx->pc = 0x1E5BF0u;
label_1e5bf0:
    // 0x1e5bf0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e5bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e5bf4:
    // 0x1e5bf4: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1e5bf8:
    if (ctx->pc == 0x1E5BF8u) {
        ctx->pc = 0x1E5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BF4u;
        // 0x1e5bf8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5BFCu;
        goto label_1e5bfc;
    }
    ctx->pc = 0x1E5BF4u;
    {
        const bool branch_taken_0x1e5bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BF4u;
        // 0x1e5bf8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bf4) {
            ctx->pc = 0x1E5D24u;
            goto label_1e5d24;
        }
    }
    ctx->pc = 0x1E5BFCu;
label_1e5bfc:
    // 0x1e5bfc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1e5bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5c00:
    // 0x1e5c00: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1e5c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1e5c04:
    // 0x1e5c04: 0x27a50047  addiu       $a1, $sp, 0x47
    ctx->pc = 0x1e5c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 71));
label_1e5c08:
    // 0x1e5c08: 0xc07fdfe  jal         func_1FF7F8
label_1e5c0c:
    if (ctx->pc == 0x1E5C0Cu) {
        ctx->pc = 0x1E5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C08u;
        // 0x1e5c0c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5C10u;
        goto label_1e5c10;
    }
    ctx->pc = 0x1E5C08u;
    SET_GPR_U32(ctx, 31, 0x1E5C10u);
    ctx->pc = 0x1E5C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C08u;
    // 0x1e5c0c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1E5C08u, 0x1E5C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5C10u;
label_1e5c10:
    // 0x1e5c10: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e5c14:
    if (ctx->pc == 0x1E5C14u) {
        ctx->pc = 0x1E5C18u;
        goto label_1e5c18;
    }
    ctx->pc = 0x1E5C10u;
    {
        const bool branch_taken_0x1e5c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c10) {
            ctx->pc = 0x1E5C24u;
            goto label_1e5c24;
        }
    }
    ctx->pc = 0x1E5C18u;
label_1e5c18:
    // 0x1e5c18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1e5c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1e5c1c:
    // 0x1e5c1c: 0x27a20048  addiu       $v0, $sp, 0x48
    ctx->pc = 0x1e5c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1e5c20:
    // 0x1e5c20: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x1e5c20u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e5c24:
    // 0x1e5c24: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1e5c24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1e5c28:
    // 0x1e5c28: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
label_1e5c2c:
    if (ctx->pc == 0x1E5C2Cu) {
        ctx->pc = 0x1E5C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C28u;
        // 0x1e5c2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5C30u;
        goto label_1e5c30;
    }
    ctx->pc = 0x1E5C28u;
    {
        const bool branch_taken_0x1e5c28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C28u;
        // 0x1e5c2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c28) {
            ctx->pc = 0x1E5D14u;
            goto label_1e5d14;
        }
    }
    ctx->pc = 0x1E5C30u;
label_1e5c30:
    // 0x1e5c30: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1e5c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e5c34:
    // 0x1e5c34: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e5c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e5c38:
    // 0x1e5c38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e5c3c:
    // 0x1e5c3c: 0x4410020  bgez        $v0, . + 4 + (0x20 << 2)
label_1e5c40:
    if (ctx->pc == 0x1E5C40u) {
        ctx->pc = 0x1E5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C3Cu;
        // 0x1e5c40: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5C44u;
        goto label_1e5c44;
    }
    ctx->pc = 0x1E5C3Cu;
    {
        const bool branch_taken_0x1e5c3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C3Cu;
        // 0x1e5c40: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c3c) {
            ctx->pc = 0x1E5CC0u;
            goto label_1e5cc0;
        }
    }
    ctx->pc = 0x1E5C44u;
label_1e5c44:
    // 0x1e5c44: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1e5c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e5c48:
    // 0x1e5c48: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1e5c4c:
    // 0x1e5c4c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1e5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1e5c50:
    // 0x1e5c50: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e5c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e5c54:
    // 0x1e5c54: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e5c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e5c58:
    // 0x1e5c58: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1e5c5c:
    if (ctx->pc == 0x1E5C5Cu) {
        ctx->pc = 0x1E5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C58u;
        // 0x1e5c5c: 0x27a30048  addiu       $v1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5C60u;
        goto label_1e5c60;
    }
    ctx->pc = 0x1E5C58u;
    {
        const bool branch_taken_0x1e5c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C58u;
        // 0x1e5c5c: 0x27a30048  addiu       $v1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c58) {
            ctx->pc = 0x1E5CA4u;
            goto label_1e5ca4;
        }
    }
    ctx->pc = 0x1E5C60u;
label_1e5c60:
    // 0x1e5c60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e5c64:
    // 0x1e5c64: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e5c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1e5c68:
    // 0x1e5c68: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e5c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e5c6c:
    // 0x1e5c6c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1e5c6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e5c70:
    // 0x1e5c70: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1e5c70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1e5c74:
    // 0x1e5c74: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1e5c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e5c78:
    // 0x1e5c78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e5c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e5c7c:
    // 0x1e5c7c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e5c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e5c80:
    // 0x1e5c80: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
label_1e5c84:
    if (ctx->pc == 0x1E5C84u) {
        ctx->pc = 0x1E5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C80u;
        // 0x1e5c84: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5C88u;
        goto label_1e5c88;
    }
    ctx->pc = 0x1E5C80u;
    {
        const bool branch_taken_0x1e5c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C80u;
        // 0x1e5c84: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c80) {
            ctx->pc = 0x1E5C94u;
            goto label_1e5c94;
        }
    }
    ctx->pc = 0x1E5C88u;
label_1e5c88:
    // 0x1e5c88: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e5c88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1e5c8c:
    // 0x1e5c8c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e5c90:
    if (ctx->pc == 0x1E5C90u) {
        ctx->pc = 0x1E5C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C8Cu;
        // 0x1e5c90: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5C94u;
        goto label_1e5c94;
    }
    ctx->pc = 0x1E5C8Cu;
    {
        const bool branch_taken_0x1e5c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C8Cu;
        // 0x1e5c90: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c8c) {
            ctx->pc = 0x1E5C9Cu;
            goto label_1e5c9c;
        }
    }
    ctx->pc = 0x1E5C94u;
label_1e5c94:
    // 0x1e5c94: 0xc0817ae  jal         func_205EB8
label_1e5c98:
    if (ctx->pc == 0x1E5C98u) {
        ctx->pc = 0x1E5C9Cu;
        goto label_1e5c9c;
    }
    ctx->pc = 0x1E5C94u;
    SET_GPR_U32(ctx, 31, 0x1E5C9Cu);
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E5C94u, 0x1E5C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5C9Cu;
label_1e5c9c:
    // 0x1e5c9c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e5ca0:
    if (ctx->pc == 0x1E5CA0u) {
        ctx->pc = 0x1E5CA4u;
        goto label_1e5ca4;
    }
    ctx->pc = 0x1E5C9Cu;
    {
        const bool branch_taken_0x1e5c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c9c) {
            ctx->pc = 0x1E5CB8u;
            goto label_1e5cb8;
        }
    }
    ctx->pc = 0x1E5CA4u;
label_1e5ca4:
    // 0x1e5ca4: 0x0  nop
    ctx->pc = 0x1e5ca4u;
    // NOP
label_1e5ca8:
    // 0x1e5ca8: 0x27a20048  addiu       $v0, $sp, 0x48
    ctx->pc = 0x1e5ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1e5cac:
    // 0x1e5cac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e5cb0:
    // 0x1e5cb0: 0xc0817ae  jal         func_205EB8
label_1e5cb4:
    if (ctx->pc == 0x1E5CB4u) {
        ctx->pc = 0x1E5CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CB0u;
        // 0x1e5cb4: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5CB8u;
        goto label_1e5cb8;
    }
    ctx->pc = 0x1E5CB0u;
    SET_GPR_U32(ctx, 31, 0x1E5CB8u);
    ctx->pc = 0x1E5CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5CB0u;
    // 0x1e5cb4: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E5CB0u, 0x1E5CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5CB8u;
label_1e5cb8:
    // 0x1e5cb8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1e5cbc:
    if (ctx->pc == 0x1E5CBCu) {
        ctx->pc = 0x1E5CC0u;
        goto label_1e5cc0;
    }
    ctx->pc = 0x1E5CB8u;
    {
        const bool branch_taken_0x1e5cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5cb8) {
            ctx->pc = 0x1E5CF0u;
            goto label_1e5cf0;
        }
    }
    ctx->pc = 0x1E5CC0u;
label_1e5cc0:
    // 0x1e5cc0: 0x27a20048  addiu       $v0, $sp, 0x48
    ctx->pc = 0x1e5cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1e5cc4:
    // 0x1e5cc4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1e5cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e5cc8:
    // 0x1e5cc8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1e5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e5ccc:
    // 0x1e5ccc: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1e5cccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e5cd0:
    // 0x1e5cd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e5cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e5cd4:
    // 0x1e5cd4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1e5cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1e5cd8:
    // 0x1e5cd8: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1e5cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e5cdc:
    // 0x1e5cdc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5ce0:
    // 0x1e5ce0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e5ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e5ce4:
    // 0x1e5ce4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e5ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e5ce8:
    // 0x1e5ce8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e5ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e5cec:
    // 0x1e5cec: 0x0  nop
    ctx->pc = 0x1e5cecu;
    // NOP
label_1e5cf0:
    // 0x1e5cf0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e5cf4:
    // 0x1e5cf4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e5cf8:
    if (ctx->pc == 0x1E5CF8u) {
        ctx->pc = 0x1E5CFCu;
        goto label_1e5cfc;
    }
    ctx->pc = 0x1E5CF4u;
    {
        const bool branch_taken_0x1e5cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e5cf4) {
            ctx->pc = 0x1E5D04u;
            goto label_1e5d04;
        }
    }
    ctx->pc = 0x1E5CFCu;
label_1e5cfc:
    // 0x1e5cfc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e5d00:
    if (ctx->pc == 0x1E5D00u) {
        ctx->pc = 0x1E5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CFCu;
        // 0x1e5d00: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5D04u;
        goto label_1e5d04;
    }
    ctx->pc = 0x1E5CFCu;
    {
        const bool branch_taken_0x1e5cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CFCu;
        // 0x1e5d00: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cfc) {
            ctx->pc = 0x1E5D20u;
            goto label_1e5d20;
        }
    }
    ctx->pc = 0x1E5D04u;
label_1e5d04:
    // 0x1e5d04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e5d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e5d08:
    // 0x1e5d08: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1e5d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1e5d0c:
    // 0x1e5d0c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_1e5d10:
    if (ctx->pc == 0x1E5D10u) {
        ctx->pc = 0x1E5D14u;
        goto label_1e5d14;
    }
    ctx->pc = 0x1E5D0Cu;
    {
        const bool branch_taken_0x1e5d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d0c) {
            ctx->pc = 0x1E5C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5c30;
        }
    }
    ctx->pc = 0x1E5D14u;
label_1e5d14:
    // 0x1e5d14: 0x0  nop
    ctx->pc = 0x1e5d14u;
    // NOP
label_1e5d18:
    // 0x1e5d18: 0x93a20047  lbu         $v0, 0x47($sp)
    ctx->pc = 0x1e5d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 71)));
label_1e5d1c:
    // 0x1e5d1c: 0x0  nop
    ctx->pc = 0x1e5d1cu;
    // NOP
label_1e5d20:
    // 0x1e5d20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e5d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e5d24:
    // 0x1e5d24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5d24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e5d28:
    // 0x1e5d28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5d28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5d2c:
    // 0x1e5d2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5d30:
    // 0x1e5d30: 0x3e00008  jr          $ra
label_1e5d34:
    if (ctx->pc == 0x1E5D34u) {
        ctx->pc = 0x1E5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D30u;
        // 0x1e5d34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5D38u;
        goto label_fallthrough_0x1e5d30;
    }
    ctx->pc = 0x1E5D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D30u;
        // 0x1e5d34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e5d30:
    ctx->pc = 0x1E5D38u;
}
