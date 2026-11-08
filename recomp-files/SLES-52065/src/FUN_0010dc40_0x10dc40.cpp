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

// Function: FUN_0010dc40
// Address: 0x10dc40 - 0x10dd44
void FUN_0010dc40_0x10dc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010dc40_0x10dc40");
#endif

    switch (ctx->pc) {
        case 0x10dca8u: goto label_10dca8;
        case 0x10dcbcu: goto label_10dcbc;
        case 0x10dcccu: goto label_10dccc;
        default: break;
    }

    ctx->pc = 0x10dc40u;

    // 0x10dc40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10dc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10dc44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10dc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10dc48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10dc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x10dc4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10dc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x10dc50: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x10dc50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10dc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10dc58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10dc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10dc5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10dc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10dc60: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x10dc60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10dc64: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x10dc64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10dc68: 0xac820220  sw          $v0, 0x220($a0)
    ctx->pc = 0x10dc68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 544), GPR_U32(ctx, 2));
    // 0x10dc6c: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x10dc6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10dc70: 0xac820224  sw          $v0, 0x224($a0)
    ctx->pc = 0x10dc70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 2));
    // 0x10dc74: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x10dc74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10dc78: 0xac820228  sw          $v0, 0x228($a0)
    ctx->pc = 0x10dc78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 2));
    // 0x10dc7c: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x10dc7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x10dc80: 0xac82022c  sw          $v0, 0x22C($a0)
    ctx->pc = 0x10dc80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 2));
    // 0x10dc84: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x10dc84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x10dc88: 0x8c820228  lw          $v0, 0x228($a0)
    ctx->pc = 0x10dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x10dc8c: 0x8c850220  lw          $a1, 0x220($a0)
    ctx->pc = 0x10dc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x10dc90: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x10dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x10dc94: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x10dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x10dc98: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x10dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10dc9c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x10dc9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10dca0: 0xc040168  jal         func_1005A0
    ctx->pc = 0x10DCA0u;
    SET_GPR_U32(ctx, 31, 0x10DCA8u);
    ctx->pc = 0x10DCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DCA0u;
    // 0x10dca4: 0x112040  sll         $a0, $s1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x10DCA0u, 0x10DCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DCA8u;
label_10dca8:
    // 0x10dca8: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x10dca8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x10dcac: 0xae820210  sw          $v0, 0x210($s4)
    ctx->pc = 0x10dcacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 528), GPR_U32(ctx, 2));
    // 0x10dcb0: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x10DCB0u;
    {
        const bool branch_taken_0x10dcb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCB0u;
        // 0x10dcb4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dcb0) {
            ctx->pc = 0x10DD14u;
            goto label_10dd14;
        }
    }
    ctx->pc = 0x10DCB8u;
    // 0x10dcb8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10dcb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10dcbc:
    // 0x10dcbc: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x10dcbcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10dcc0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10dcc4: 0xc057040  jal         func_15C100
    ctx->pc = 0x10DCC4u;
    SET_GPR_U32(ctx, 31, 0x10DCCCu);
    ctx->pc = 0x10DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DCC4u;
    // 0x10dcc8: 0x86050002  lh          $a1, 0x2($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x10DCC4u, 0x10DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DCCCu;
label_10dccc:
    // 0x10dccc: 0x8e840210  lw          $a0, 0x210($s4)
    ctx->pc = 0x10dcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 528)));
    // 0x10dcd0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10dcd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x10dcd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10dcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10dcd8: 0x251182a  slt         $v1, $s2, $s1
    ctx->pc = 0x10dcd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x10dcdc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10dcdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10dce0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x10dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x10dce4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x10dce4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x10dce8: 0x8e850210  lw          $a1, 0x210($s4)
    ctx->pc = 0x10dce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 528)));
    // 0x10dcec: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10dcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10dcf0: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x10dcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x10dcf4: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x10dcf4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10dcf8: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x10dcf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x10dcfc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x10dcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x10dd00: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x10dd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x10dd04: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x10dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x10dd08: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x10dd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10dd0c: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x10DD0Cu;
    {
        const bool branch_taken_0x10dd0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD0Cu;
        // 0x10dd10: 0xa0860028  sb          $a2, 0x28($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd0c) {
            ctx->pc = 0x10DCBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dcbc;
        }
    }
    ctx->pc = 0x10DD14u;
label_10dd14:
    // 0x10dd14: 0x0  nop
    ctx->pc = 0x10dd14u;
    // NOP
    // 0x10dd18: 0xae800230  sw          $zero, 0x230($s4)
    ctx->pc = 0x10dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 560), GPR_U32(ctx, 0));
    // 0x10dd1c: 0xae800234  sw          $zero, 0x234($s4)
    ctx->pc = 0x10dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 564), GPR_U32(ctx, 0));
    // 0x10dd20: 0xae800238  sw          $zero, 0x238($s4)
    ctx->pc = 0x10dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 568), GPR_U32(ctx, 0));
    // 0x10dd24: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10dd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10dd28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10dd28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10dd2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10dd2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10dd30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10dd30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dd34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10dd34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dd38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10dd38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x10DD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD3Cu;
        // 0x10dd40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DD44u;
}
