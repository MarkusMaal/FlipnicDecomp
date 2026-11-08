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

// Function: FUN_00115c00
// Address: 0x115c00 - 0x115d54
void FUN_00115c00_0x115c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00115c00_0x115c00");
#endif

    switch (ctx->pc) {
        case 0x115c78u: goto label_115c78;
        case 0x115d1cu: goto label_115d1c;
        default: break;
    }

    ctx->pc = 0x115c00u;

    // 0x115c00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x115c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x115c04: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x115c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x115c08: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x115c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x115c0c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x115c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x115c10: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x115c10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c14: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x115c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x115c18: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x115c18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x115c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x115c20: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x115c20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x115c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x115c28: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x115c28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x115c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x115c30: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x115c30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x115c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x115c38: 0x8c820274  lw          $v0, 0x274($a0)
    ctx->pc = 0x115c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x115c3c: 0x1455000a  bne         $v0, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x115C3Cu;
    {
        const bool branch_taken_0x115c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x115C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C3Cu;
        // 0x115c40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c3c) {
            ctx->pc = 0x115C68u;
            goto label_115c68;
        }
    }
    ctx->pc = 0x115C44u;
    // 0x115c44: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x115c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x115c48: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x115c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x115c4c: 0x8c420230  lw          $v0, 0x230($v0)
    ctx->pc = 0x115c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
    // 0x115c50: 0x24430320  addiu       $v1, $v0, 0x320
    ctx->pc = 0x115c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x115c54: 0x8c420320  lw          $v0, 0x320($v0)
    ctx->pc = 0x115c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x115c58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115C58u;
    {
        const bool branch_taken_0x115c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C58u;
        // 0x115c5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c58) {
            ctx->pc = 0x115C68u;
            goto label_115c68;
        }
    }
    ctx->pc = 0x115C60u;
    // 0x115c60: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x115c60u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x115c64: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x115c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_115c68:
    // 0x115c68: 0x501000a  bgez        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x115C68u;
    {
        const bool branch_taken_0x115c68 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x115C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C68u;
        // 0x115c6c: 0x328200ff  andi        $v0, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c68) {
            ctx->pc = 0x115C94u;
            goto label_115c94;
        }
    }
    ctx->pc = 0x115C70u;
    // 0x115c70: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x115C70u;
    SET_GPR_U32(ctx, 31, 0x115C78u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x115C70u, 0x115C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C78u;
label_115c78:
    // 0x115c78: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x115c78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x115c7c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x115c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x115c80: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x115c80u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x115c84: 0x0  nop
    ctx->pc = 0x115c84u;
    // NOP
    // 0x115c88: 0x0  nop
    ctx->pc = 0x115c88u;
    // NOP
    // 0x115c8c: 0x4010  mfhi        $t0
    ctx->pc = 0x115c8cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x115c90: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x115c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_115c94:
    // 0x115c94: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115C94u;
    {
        const bool branch_taken_0x115c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C94u;
        // 0x115c98: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c94) {
            ctx->pc = 0x115CACu;
            goto label_115cac;
        }
    }
    ctx->pc = 0x115C9Cu;
    // 0x115c9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x115c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115ca0: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115CA0u;
    {
        const bool branch_taken_0x115ca0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x115CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CA0u;
        // 0x115ca4: 0x151040  sll         $v0, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ca0) {
            ctx->pc = 0x115CB0u;
            goto label_115cb0;
        }
    }
    ctx->pc = 0x115CA8u;
    // 0x115ca8: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x115ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_115cac:
    // 0x115cac: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x115cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_115cb0:
    // 0x115cb0: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x115cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x115cb4: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x115cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x115cb8: 0x246302e0  addiu       $v1, $v1, 0x2E0
    ctx->pc = 0x115cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x115cbc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x115cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x115cc0: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x115cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x115cc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x115cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x115cc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x115cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x115ccc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x115CCCu;
    {
        const bool branch_taken_0x115ccc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CCCu;
        // 0x115cd0: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ccc) {
            ctx->pc = 0x115CF0u;
            goto label_115cf0;
        }
    }
    ctx->pc = 0x115CD4u;
    // 0x115cd4: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x115CD4u;
    {
        const bool branch_taken_0x115cd4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CD4u;
        // 0x115cd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cd4) {
            ctx->pc = 0x115CF0u;
            goto label_115cf0;
        }
    }
    ctx->pc = 0x115CDCu;
    // 0x115cdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x115cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115ce0: 0x16a20002  bne         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x115CE0u;
    {
        const bool branch_taken_0x115ce0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x115CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CE0u;
        // 0x115ce4: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ce0) {
            ctx->pc = 0x115CECu;
            goto label_115cec;
        }
    }
    ctx->pc = 0x115CE8u;
    // 0x115ce8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x115ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_115cec:
    // 0x115cec: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x115cecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_115cf0:
    // 0x115cf0: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x115cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x115cf4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x115cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115cf8: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x115cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x115cfc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x115cfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d00: 0x8ec20220  lw          $v0, 0x220($s6)
    ctx->pc = 0x115d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 544)));
    // 0x115d04: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x115d04u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x115d08: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x115d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d0c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x115d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d10: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x115d10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d14: 0xc043e58  jal         func_10F960
    ctx->pc = 0x115D14u;
    SET_GPR_U32(ctx, 31, 0x115D1Cu);
    ctx->pc = 0x115D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115D14u;
    // 0x115d18: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F960u, 0x115D14u, 0x115D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D1Cu;
label_115d1c:
    // 0x115d1c: 0x8ec30220  lw          $v1, 0x220($s6)
    ctx->pc = 0x115d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 544)));
    // 0x115d20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x115d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d24: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x115d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x115d28: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x115d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x115d2c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x115d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115d30: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x115d30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115d34: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x115d34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115d38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x115d38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115d3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x115d3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115d40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x115d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x115d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x115d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x115D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D4Cu;
        // 0x115d50: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115D54u;
}
