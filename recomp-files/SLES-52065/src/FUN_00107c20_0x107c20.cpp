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

// Function: FUN_00107c20
// Address: 0x107c20 - 0x1080d8
void FUN_00107c20_0x107c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00107c20_0x107c20");
#endif

    switch (ctx->pc) {
        case 0x107c4cu: goto label_107c4c;
        case 0x107c58u: goto label_107c58;
        case 0x107c9cu: goto label_107c9c;
        case 0x107ca8u: goto label_107ca8;
        case 0x107cc8u: goto label_107cc8;
        case 0x107d50u: goto label_107d50;
        case 0x107da0u: goto label_107da0;
        case 0x107dfcu: goto label_107dfc;
        case 0x107e4cu: goto label_107e4c;
        case 0x107e70u: goto label_107e70;
        case 0x107e80u: goto label_107e80;
        case 0x107e88u: goto label_107e88;
        case 0x107e98u: goto label_107e98;
        case 0x107eb4u: goto label_107eb4;
        case 0x107ec0u: goto label_107ec0;
        case 0x107ed4u: goto label_107ed4;
        case 0x107ee0u: goto label_107ee0;
        case 0x107f18u: goto label_107f18;
        case 0x107f48u: goto label_107f48;
        case 0x107f88u: goto label_107f88;
        case 0x107f98u: goto label_107f98;
        case 0x107fa8u: goto label_107fa8;
        case 0x107fd4u: goto label_107fd4;
        case 0x108000u: goto label_108000;
        case 0x108050u: goto label_108050;
        case 0x108064u: goto label_108064;
        case 0x108074u: goto label_108074;
        case 0x10807cu: goto label_10807c;
        case 0x10808cu: goto label_10808c;
        default: break;
    }

    ctx->pc = 0x107c20u;

    // 0x107c20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x107c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x107c24: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x107c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x107c28: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x107c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x107c2c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x107c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x107c30: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x107c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x107c34: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x107c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x107c38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x107c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x107c3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x107c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x107c40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x107c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x107c44: 0xc041e98  jal         func_107A60
    ctx->pc = 0x107C44u;
    SET_GPR_U32(ctx, 31, 0x107C4Cu);
    ctx->pc = 0x107C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C44u;
    // 0x107c48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107A60u, 0x107C44u, 0x107C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C4Cu;
label_107c4c:
    // 0x107c4c: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x107c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x107c50: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x107c50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x107c54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107c58:
    // 0x107c58: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x107c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x107c5c: 0x2463fd90  addiu       $v1, $v1, -0x270
    ctx->pc = 0x107c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966672));
    // 0x107c60: 0x729821  addu        $s3, $v1, $s2
    ctx->pc = 0x107c60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x107c64: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x107c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107c68: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x107C68u;
    {
        const bool branch_taken_0x107c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x107c68) {
            ctx->pc = 0x107E98u;
            goto label_107e98;
        }
    }
    ctx->pc = 0x107C70u;
    // 0x107c70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x107c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x107c74: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x107c74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x107c78: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x107c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107c7c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x107C7Cu;
    {
        const bool branch_taken_0x107c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x107c7c) {
            ctx->pc = 0x107CB0u;
            goto label_107cb0;
        }
    }
    ctx->pc = 0x107C84u;
    // 0x107c84: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x107c84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x107c88: 0x2a210000  slti        $at, $s1, 0x0
    ctx->pc = 0x107c88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x107c8c: 0x14200082  bnez        $at, . + 4 + (0x82 << 2)
    ctx->pc = 0x107C8Cu;
    {
        const bool branch_taken_0x107c8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x107c8c) {
            ctx->pc = 0x107E98u;
            goto label_107e98;
        }
    }
    ctx->pc = 0x107C94u;
    // 0x107c94: 0xc062d50  jal         func_18B540
    ctx->pc = 0x107C94u;
    SET_GPR_U32(ctx, 31, 0x107C9Cu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x107C94u, 0x107C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C9Cu;
label_107c9c:
    // 0x107c9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ca0: 0xc062b7c  jal         func_18ADF0
    ctx->pc = 0x107CA0u;
    SET_GPR_U32(ctx, 31, 0x107CA8u);
    ctx->pc = 0x107CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CA0u;
    // 0x107ca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADF0u, 0x107CA0u, 0x107CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CA8u;
label_107ca8:
    // 0x107ca8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x107CA8u;
    {
        const bool branch_taken_0x107ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107ca8) {
            ctx->pc = 0x107E98u;
            goto label_107e98;
        }
    }
    ctx->pc = 0x107CB0u;
label_107cb0:
    // 0x107cb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x107cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107cb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x107cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107cb8: 0x8e740008  lw          $s4, 0x8($s3)
    ctx->pc = 0x107cb8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x107cbc: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x107cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x107cc0: 0x26770008  addiu       $s7, $s3, 0x8
    ctx->pc = 0x107cc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x107cc4: 0x24840210  addiu       $a0, $a0, 0x210
    ctx->pc = 0x107cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
label_107cc8:
    // 0x107cc8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x107cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x107ccc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x107cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x107cd0: 0x1683003a  bne         $s4, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x107CD0u;
    {
        const bool branch_taken_0x107cd0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x107CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CD0u;
        // 0x107cd4: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cd0) {
            ctx->pc = 0x107DBCu;
            goto label_107dbc;
        }
    }
    ctx->pc = 0x107CD8u;
    // 0x107cd8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x107cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x107cdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x107cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x107ce0: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x107ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x107ce4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x107ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x107ce8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x107ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x107cec: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x107cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x107cf0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x107cf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x107cf4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x107CF4u;
    {
        const bool branch_taken_0x107cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CF4u;
        // 0x107cf8: 0x24b60008  addiu       $s6, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cf4) {
            ctx->pc = 0x107D04u;
            goto label_107d04;
        }
    }
    ctx->pc = 0x107CFCu;
    // 0x107cfc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x107CFCu;
    {
        const bool branch_taken_0x107cfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x107cfc) {
            ctx->pc = 0x107D10u;
            goto label_107d10;
        }
    }
    ctx->pc = 0x107D04u;
label_107d04:
    // 0x107d04: 0x0  nop
    ctx->pc = 0x107d04u;
    // NOP
    // 0x107d08: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x107D08u;
    {
        const bool branch_taken_0x107d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D08u;
        // 0x107d0c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d08) {
            ctx->pc = 0x107DD0u;
            goto label_107dd0;
        }
    }
    ctx->pc = 0x107D10u;
label_107d10:
    // 0x107d10: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x107d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x107d14: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x107d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x107d18: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x107d18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x107d1c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x107D1Cu;
    {
        const bool branch_taken_0x107d1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D1Cu;
        // 0x107d20: 0x24a6000c  addiu       $a2, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d1c) {
            ctx->pc = 0x107D44u;
            goto label_107d44;
        }
    }
    ctx->pc = 0x107D24u;
    // 0x107d24: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x107d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x107d28: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x107d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x107d2c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x107d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x107d30: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x107d30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x107d34: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x107d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107d38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x107d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x107d3c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x107D3Cu;
    {
        const bool branch_taken_0x107d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D3Cu;
        // 0x107d40: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d3c) {
            ctx->pc = 0x107DA4u;
            goto label_107da4;
        }
    }
    ctx->pc = 0x107D44u;
label_107d44:
    // 0x107d44: 0x0  nop
    ctx->pc = 0x107d44u;
    // NOP
    // 0x107d48: 0xc062d50  jal         func_18B540
    ctx->pc = 0x107D48u;
    SET_GPR_U32(ctx, 31, 0x107D50u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x107D48u, 0x107D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D50u;
label_107d50:
    // 0x107d50: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x107d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x107d54: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x107d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x107d58: 0x2843824  and         $a3, $s4, $a0
    ctx->pc = 0x107d58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) & GPR_U64(ctx, 4));
    // 0x107d5c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x107d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x107d60: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x107d60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x107d64: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x107d64u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x107d68: 0x0  nop
    ctx->pc = 0x107d68u;
    // NOP
    // 0x107d6c: 0x2010  mfhi        $a0
    ctx->pc = 0x107d6cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x107d70: 0x3283ff00  andi        $v1, $s4, 0xFF00
    ctx->pc = 0x107d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65280);
    // 0x107d74: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x107d74u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x107d78: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x107d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x107d7c: 0x423c3  sra         $a0, $a0, 15
    ctx->pc = 0x107d7cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 15));
    // 0x107d80: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x107D80u;
    {
        const bool branch_taken_0x107d80 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x107D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D80u;
        // 0x107d84: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d80) {
            ctx->pc = 0x107D90u;
            goto label_107d90;
        }
    }
    ctx->pc = 0x107D88u;
    // 0x107d88: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x107d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x107d8c: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x107d8cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
label_107d90:
    // 0x107d90: 0x328700ff  andi        $a3, $s4, 0xFF
    ctx->pc = 0x107d90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x107d94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d98: 0xc062b74  jal         func_18ADD0
    ctx->pc = 0x107D98u;
    SET_GPR_U32(ctx, 31, 0x107DA0u);
    ctx->pc = 0x107D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D98u;
    // 0x107d9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADD0u, 0x107D98u, 0x107DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DA0u;
label_107da0:
    // 0x107da0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x107da0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_107da4:
    // 0x107da4: 0x0  nop
    ctx->pc = 0x107da4u;
    // NOP
    // 0x107da8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x107da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x107dac: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x107dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x107db0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x107db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x107db4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x107DB4u;
    {
        const bool branch_taken_0x107db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DB4u;
        // 0x107db8: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107db4) {
            ctx->pc = 0x107DD0u;
            goto label_107dd0;
        }
    }
    ctx->pc = 0x107DBCu;
label_107dbc:
    // 0x107dbc: 0x0  nop
    ctx->pc = 0x107dbcu;
    // NOP
    // 0x107dc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x107dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x107dc4: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x107dc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x107dc8: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x107DC8u;
    {
        const bool branch_taken_0x107dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DC8u;
        // 0x107dcc: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107dc8) {
            ctx->pc = 0x107CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107cc8;
        }
    }
    ctx->pc = 0x107DD0u;
label_107dd0:
    // 0x107dd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x107dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107dd4: 0x1623001f  bne         $s1, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x107DD4u;
    {
        const bool branch_taken_0x107dd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x107dd4) {
            ctx->pc = 0x107E54u;
            goto label_107e54;
        }
    }
    ctx->pc = 0x107DDCu;
    // 0x107ddc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x107ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x107de0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x107de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107de4: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x107DE4u;
    {
        const bool branch_taken_0x107de4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x107DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DE4u;
        // 0x107de8: 0x26740004  addiu       $s4, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107de4) {
            ctx->pc = 0x107E54u;
            goto label_107e54;
        }
    }
    ctx->pc = 0x107DECu;
    // 0x107dec: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x107DECu;
    {
        const bool branch_taken_0x107dec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x107dec) {
            ctx->pc = 0x107E54u;
            goto label_107e54;
        }
    }
    ctx->pc = 0x107DF4u;
    // 0x107df4: 0xc062d50  jal         func_18B540
    ctx->pc = 0x107DF4u;
    SET_GPR_U32(ctx, 31, 0x107DFCu);
    ctx->pc = 0x107DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107DF4u;
    // 0x107df8: 0x8ef10000  lw          $s1, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x107DF4u, 0x107DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DFCu;
label_107dfc:
    // 0x107dfc: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x107dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x107e00: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x107e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x107e04: 0x2243824  and         $a3, $s1, $a0
    ctx->pc = 0x107e04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x107e08: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x107e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x107e0c: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x107e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x107e10: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x107e10u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x107e14: 0x0  nop
    ctx->pc = 0x107e14u;
    // NOP
    // 0x107e18: 0x2010  mfhi        $a0
    ctx->pc = 0x107e18u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x107e1c: 0x3223ff00  andi        $v1, $s1, 0xFF00
    ctx->pc = 0x107e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65280);
    // 0x107e20: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x107e20u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x107e24: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x107e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x107e28: 0x423c3  sra         $a0, $a0, 15
    ctx->pc = 0x107e28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 15));
    // 0x107e2c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x107E2Cu;
    {
        const bool branch_taken_0x107e2c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x107E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E2Cu;
        // 0x107e30: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e2c) {
            ctx->pc = 0x107E3Cu;
            goto label_107e3c;
        }
    }
    ctx->pc = 0x107E34u;
    // 0x107e34: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x107e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x107e38: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x107e38u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
label_107e3c:
    // 0x107e3c: 0x322700ff  andi        $a3, $s1, 0xFF
    ctx->pc = 0x107e3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x107e40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e44: 0xc062b74  jal         func_18ADD0
    ctx->pc = 0x107E44u;
    SET_GPR_U32(ctx, 31, 0x107E4Cu);
    ctx->pc = 0x107E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E44u;
    // 0x107e48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADD0u, 0x107E44u, 0x107E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E4Cu;
label_107e4c:
    // 0x107e4c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x107e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x107e50: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x107e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_107e54:
    // 0x107e54: 0x0  nop
    ctx->pc = 0x107e54u;
    // NOP
    // 0x107e58: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x107e58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x107e5c: 0x2a210000  slti        $at, $s1, 0x0
    ctx->pc = 0x107e5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x107e60: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x107E60u;
    {
        const bool branch_taken_0x107e60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x107E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E60u;
        // 0x107e64: 0x26740004  addiu       $s4, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e60) {
            ctx->pc = 0x107E98u;
            goto label_107e98;
        }
    }
    ctx->pc = 0x107E68u;
    // 0x107e68: 0xc062d50  jal         func_18B540
    ctx->pc = 0x107E68u;
    SET_GPR_U32(ctx, 31, 0x107E70u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x107E68u, 0x107E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E70u;
label_107e70:
    // 0x107e70: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x107e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x107e74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e78: 0xc062b9c  jal         func_18AE70
    ctx->pc = 0x107E78u;
    SET_GPR_U32(ctx, 31, 0x107E80u);
    ctx->pc = 0x107E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E78u;
    // 0x107e7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE70u, 0x107E78u, 0x107E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E80u;
label_107e80:
    // 0x107e80: 0xc062d50  jal         func_18B540
    ctx->pc = 0x107E80u;
    SET_GPR_U32(ctx, 31, 0x107E88u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x107E80u, 0x107E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E88u;
label_107e88:
    // 0x107e88: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x107e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x107e8c: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x107e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x107e90: 0xc062ba0  jal         func_18AE80
    ctx->pc = 0x107E90u;
    SET_GPR_U32(ctx, 31, 0x107E98u);
    ctx->pc = 0x107E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E90u;
    // 0x107e94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE80u, 0x107E90u, 0x107E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E98u;
label_107e98:
    // 0x107e98: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x107e98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x107e9c: 0x2aa30018  slti        $v1, $s5, 0x18
    ctx->pc = 0x107e9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x107ea0: 0x1460ff6d  bnez        $v1, . + 4 + (-0x93 << 2)
    ctx->pc = 0x107EA0u;
    {
        const bool branch_taken_0x107ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EA0u;
        // 0x107ea4: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ea0) {
            ctx->pc = 0x107C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107c58;
        }
    }
    ctx->pc = 0x107EA8u;
    // 0x107ea8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x107ea8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107eac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x107EACu;
    {
        const bool branch_taken_0x107eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EACu;
        // 0x107eb0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107eac) {
            ctx->pc = 0x107EE0u;
            goto label_107ee0;
        }
    }
    ctx->pc = 0x107EB4u;
label_107eb4:
    // 0x107eb4: 0x0  nop
    ctx->pc = 0x107eb4u;
    // NOP
    // 0x107eb8: 0xc062d50  jal         func_18B540
    ctx->pc = 0x107EB8u;
    SET_GPR_U32(ctx, 31, 0x107EC0u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x107EB8u, 0x107EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107EC0u;
label_107ec0:
    // 0x107ec0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x107ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x107ec4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ec8: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x107ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x107ecc: 0xc062b7c  jal         func_18ADF0
    ctx->pc = 0x107ECCu;
    SET_GPR_U32(ctx, 31, 0x107ED4u);
    ctx->pc = 0x107ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107ECCu;
    // 0x107ed0: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADF0u, 0x107ECCu, 0x107ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107ED4u;
label_107ed4:
    // 0x107ed4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x107ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107ed8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x107ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x107edc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x107edcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_107ee0:
    // 0x107ee0: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x107ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x107ee4: 0x24630210  addiu       $v1, $v1, 0x210
    ctx->pc = 0x107ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x107ee8: 0x708821  addu        $s1, $v1, $s0
    ctx->pc = 0x107ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x107eec: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x107eecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x107ef0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x107ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x107ef4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x107ef4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x107ef8: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x107EF8u;
    {
        const bool branch_taken_0x107ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EF8u;
        // 0x107efc: 0x2633000c  addiu       $s3, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ef8) {
            ctx->pc = 0x107EB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107eb4;
        }
    }
    ctx->pc = 0x107F00u;
    // 0x107f00: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x107f00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x107f04: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x107f04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x107f08: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x107F08u;
    {
        const bool branch_taken_0x107f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F08u;
        // 0x107f0c: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f08) {
            ctx->pc = 0x107EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107ee0;
        }
    }
    ctx->pc = 0x107F10u;
    // 0x107f10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x107f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f14: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x107f14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_107f18:
    // 0x107f18: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x107f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x107f1c: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x107f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x107f20: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x107f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x107f24: 0x480c0  sll         $s0, $a0, 3
    ctx->pc = 0x107f24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x107f28: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x107f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x107f2c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x107f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x107f30: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x107f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x107f34: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x107f34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x107f38: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x107F38u;
    {
        const bool branch_taken_0x107f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x107f38) {
            ctx->pc = 0x107FB4u;
            goto label_107fb4;
        }
    }
    ctx->pc = 0x107F40u;
    // 0x107f40: 0x640001c  bltz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x107F40u;
    {
        const bool branch_taken_0x107f40 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x107f40) {
            ctx->pc = 0x107FB4u;
            goto label_107fb4;
        }
    }
    ctx->pc = 0x107F48u;
label_107f48:
    // 0x107f48: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x107f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x107f4c: 0x24a5ffd0  addiu       $a1, $a1, -0x30
    ctx->pc = 0x107f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
    // 0x107f50: 0xb08821  addu        $s1, $a1, $s0
    ctx->pc = 0x107f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x107f54: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x107f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x107f58: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x107f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x107f5c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x107f5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x107f60: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x107F60u;
    {
        const bool branch_taken_0x107f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F60u;
        // 0x107f64: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f60) {
            ctx->pc = 0x107FB4u;
            goto label_107fb4;
        }
    }
    ctx->pc = 0x107F68u;
    // 0x107f68: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x107f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x107f6c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x107f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x107f70: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x107f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x107f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x107f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x107f78: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x107f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x107f7c: 0xa29821  addu        $s3, $a1, $v0
    ctx->pc = 0x107f7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x107f80: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x107F80u;
    SET_GPR_U32(ctx, 31, 0x107F88u);
    ctx->pc = 0x107F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107F80u;
    // 0x107f84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x107F80u, 0x107F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F88u;
label_107f88:
    // 0x107f88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x107f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f90: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x107F90u;
    SET_GPR_U32(ctx, 31, 0x107F98u);
    ctx->pc = 0x107F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107F90u;
    // 0x107f94: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x107F90u, 0x107F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F98u;
label_107f98:
    // 0x107f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f9c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x107f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x107fa0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x107FA0u;
    SET_GPR_U32(ctx, 31, 0x107FA8u);
    ctx->pc = 0x107FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107FA0u;
    // 0x107fa4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x107FA0u, 0x107FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107FA8u;
label_107fa8:
    // 0x107fa8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x107fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x107fac: 0x641ffe6  bgez        $s2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x107FACu;
    {
        const bool branch_taken_0x107fac = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x107FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FACu;
        // 0x107fb0: 0x2610ffe8  addiu       $s0, $s0, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fac) {
            ctx->pc = 0x107F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107f48;
        }
    }
    ctx->pc = 0x107FB4u;
label_107fb4:
    // 0x107fb4: 0x0  nop
    ctx->pc = 0x107fb4u;
    // NOP
    // 0x107fb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x107fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x107fbc: 0x2a430017  slti        $v1, $s2, 0x17
    ctx->pc = 0x107fbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x107fc0: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x107FC0u;
    {
        const bool branch_taken_0x107fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FC0u;
        // 0x107fc4: 0x122040  sll         $a0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fc0) {
            ctx->pc = 0x107F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107f18;
        }
    }
    ctx->pc = 0x107FC8u;
    // 0x107fc8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x107fc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x107fcc: 0x24140017  addiu       $s4, $zero, 0x17
    ctx->pc = 0x107fccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x107fd0: 0x24100228  addiu       $s0, $zero, 0x228
    ctx->pc = 0x107fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_107fd4:
    // 0x107fd4: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x107fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x107fd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x107fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107fdc: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x107fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x107fe0: 0x908821  addu        $s1, $a0, $s0
    ctx->pc = 0x107fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x107fe4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x107fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x107fe8: 0x1483002a  bne         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x107FE8u;
    {
        const bool branch_taken_0x107fe8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x107fe8) {
            ctx->pc = 0x108094u;
            goto label_108094;
        }
    }
    ctx->pc = 0x107FF0u;
    // 0x107ff0: 0x12600028  beqz        $s3, . + 4 + (0x28 << 2)
    ctx->pc = 0x107FF0u;
    {
        const bool branch_taken_0x107ff0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x107ff0) {
            ctx->pc = 0x108094u;
            goto label_108094;
        }
    }
    ctx->pc = 0x107FF8u;
    // 0x107ff8: 0xc062d50  jal         func_18B540
    ctx->pc = 0x107FF8u;
    SET_GPR_U32(ctx, 31, 0x108000u);
    ctx->pc = 0x107FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107FF8u;
    // 0x107ffc: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x107FF8u, 0x108000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108000u;
label_108000:
    // 0x108000: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x108000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x108004: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x108004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x108008: 0x2443824  and         $a3, $s2, $a0
    ctx->pc = 0x108008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x10800c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x10800cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x108010: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x108010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x108014: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x108014u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x108018: 0x0  nop
    ctx->pc = 0x108018u;
    // NOP
    // 0x10801c: 0x2010  mfhi        $a0
    ctx->pc = 0x10801cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x108020: 0x3243ff00  andi        $v1, $s2, 0xFF00
    ctx->pc = 0x108020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65280);
    // 0x108024: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x108024u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x108028: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x108028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x10802c: 0x423c3  sra         $a0, $a0, 15
    ctx->pc = 0x10802cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 15));
    // 0x108030: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108030u;
    {
        const bool branch_taken_0x108030 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x108034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108030u;
        // 0x108034: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108030) {
            ctx->pc = 0x108040u;
            goto label_108040;
        }
    }
    ctx->pc = 0x108038u;
    // 0x108038: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x108038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x10803c: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x10803cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
label_108040:
    // 0x108040: 0x324700ff  andi        $a3, $s2, 0xFF
    ctx->pc = 0x108040u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x108044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108048: 0xc062b74  jal         func_18ADD0
    ctx->pc = 0x108048u;
    SET_GPR_U32(ctx, 31, 0x108050u);
    ctx->pc = 0x10804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108048u;
    // 0x10804c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADD0u, 0x108048u, 0x108050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108050u;
label_108050:
    // 0x108050: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x108050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108054: 0x640000d  bltz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x108054u;
    {
        const bool branch_taken_0x108054 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x108054) {
            ctx->pc = 0x10808Cu;
            goto label_10808c;
        }
    }
    ctx->pc = 0x10805Cu;
    // 0x10805c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x10805Cu;
    SET_GPR_U32(ctx, 31, 0x108064u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x10805Cu, 0x108064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108064u;
label_108064:
    // 0x108064: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x108064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x108068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10806c: 0xc062b9c  jal         func_18AE70
    ctx->pc = 0x10806Cu;
    SET_GPR_U32(ctx, 31, 0x108074u);
    ctx->pc = 0x108070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10806Cu;
    // 0x108070: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE70u, 0x10806Cu, 0x108074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108074u;
label_108074:
    // 0x108074: 0xc062d50  jal         func_18B540
    ctx->pc = 0x108074u;
    SET_GPR_U32(ctx, 31, 0x10807Cu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x108074u, 0x10807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10807Cu;
label_10807c:
    // 0x10807c: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x10807cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x108080: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x108080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108084: 0xc062ba0  jal         func_18AE80
    ctx->pc = 0x108084u;
    SET_GPR_U32(ctx, 31, 0x10808Cu);
    ctx->pc = 0x108088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108084u;
    // 0x108088: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE80u, 0x108084u, 0x10808Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10808Cu;
label_10808c:
    // 0x10808c: 0x0  nop
    ctx->pc = 0x10808cu;
    // NOP
    // 0x108090: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x108090u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_108094:
    // 0x108094: 0x0  nop
    ctx->pc = 0x108094u;
    // NOP
    // 0x108098: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x108098u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x10809c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x10809cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1080a0: 0x681ffcc  bgez        $s4, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1080A0u;
    {
        const bool branch_taken_0x1080a0 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1080A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080A0u;
        // 0x1080a4: 0x2610ffe8  addiu       $s0, $s0, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080a0) {
            ctx->pc = 0x107FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107fd4;
        }
    }
    ctx->pc = 0x1080A8u;
    // 0x1080a8: 0xaf80821c  sw          $zero, -0x7DE4($gp)
    ctx->pc = 0x1080a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935068), GPR_U32(ctx, 0));
    // 0x1080ac: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1080acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1080b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1080b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1080b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1080b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1080b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1080b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1080bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1080bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1080c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1080c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1080c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1080c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1080c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1080c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1080cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1080ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1080d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1080D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1080D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080D0u;
        // 0x1080d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1080D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1080D8u;
}
