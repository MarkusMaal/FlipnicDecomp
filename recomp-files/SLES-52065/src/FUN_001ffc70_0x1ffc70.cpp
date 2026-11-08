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

// Function: FUN_001ffc70
// Address: 0x1ffc70 - 0x1ffdb8
void FUN_001ffc70_0x1ffc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ffc70_0x1ffc70");
#endif

    switch (ctx->pc) {
        case 0x1ffcd8u: goto label_1ffcd8;
        case 0x1ffd0cu: goto label_1ffd0c;
        case 0x1ffd28u: goto label_1ffd28;
        case 0x1ffd40u: goto label_1ffd40;
        case 0x1ffd68u: goto label_1ffd68;
        case 0x1ffd84u: goto label_1ffd84;
        default: break;
    }

    ctx->pc = 0x1ffc70u;

    // 0x1ffc70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ffc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ffc74: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ffc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ffc78: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1ffc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1ffc7c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1ffc7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc80: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1ffc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1ffc84: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x1ffc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1ffc88: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ffc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1ffc8c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ffc8cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ffc90: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ffc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1ffc94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ffc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ffc98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ffc98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffc9c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ffc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1ffca0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ffca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffca4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ffca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ffca8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ffca8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffcac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ffcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ffcb0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1ffcb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffcb4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FFCB4u;
    {
        const bool branch_taken_0x1ffcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffcb4) {
            ctx->pc = 0x1FFCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFCB4u;
            // 0x1ffcb8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFCBCu;
            goto label_1ffcbc;
        }
    }
    ctx->pc = 0x1FFCBCu;
label_1ffcbc:
    // 0x1ffcbc: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1ffcbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffcc0: 0x1812  mflo        $v1
    ctx->pc = 0x1ffcc0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1ffcc4: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x1ffcc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ffcc8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FFCC8u;
    {
        const bool branch_taken_0x1ffcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCC8u;
        // 0x1ffccc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcc8) {
            ctx->pc = 0x1FFCFCu;
            goto label_1ffcfc;
        }
    }
    ctx->pc = 0x1FFCD0u;
    // 0x1ffcd0: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x1ffcd0u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ffcd4: 0x0  nop
    ctx->pc = 0x1ffcd4u;
    // NOP
label_1ffcd8:
    // 0x1ffcd8: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1ffcd8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1ffcdc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ffcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ffce0: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x1ffce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ffce4: 0x0  nop
    ctx->pc = 0x1ffce4u;
    // NOP
    // 0x1ffce8: 0x0  nop
    ctx->pc = 0x1ffce8u;
    // NOP
    // 0x1ffcec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FFCECu;
    {
        const bool branch_taken_0x1ffcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffcec) {
            ctx->pc = 0x1FFCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffcd8;
        }
    }
    ctx->pc = 0x1FFCF4u;
    // 0x1ffcf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFCF4u;
    {
        const bool branch_taken_0x1ffcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCF4u;
        // 0x1ffcf8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcf4) {
            ctx->pc = 0x1FFD04u;
            goto label_1ffd04;
        }
    }
    ctx->pc = 0x1FFCFCu;
label_1ffcfc:
    // 0x1ffcfc: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x1ffcfcu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ffd00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ffd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ffd04:
    // 0x1ffd04: 0xc07fea0  jal         func_1FFA80
    ctx->pc = 0x1FFD04u;
    SET_GPR_U32(ctx, 31, 0x1FFD0Cu);
    ctx->pc = 0x1FFD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD04u;
    // 0x1ffd08: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA80u, 0x1FFD04u, 0x1FFD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD0Cu;
label_1ffd0c:
    // 0x1ffd0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ffd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffd14: 0xacb60014  sw          $s6, 0x14($a1)
    ctx->pc = 0x1ffd14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 22));
    // 0x1ffd18: 0x1640000f  bnez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x1FFD18u;
    {
        const bool branch_taken_0x1ffd18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD18u;
        // 0x1ffd1c: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd18) {
            ctx->pc = 0x1FFD58u;
            goto label_1ffd58;
        }
    }
    ctx->pc = 0x1FFD20u;
    // 0x1ffd20: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x1ffd20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x1ffd24: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1ffd24u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ffd28:
    // 0x1ffd28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ffd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd2c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ffd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ffd30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ffd30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ffd34: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x1ffd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x1ffd38: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FFD38u;
    SET_GPR_U32(ctx, 31, 0x1FFD40u);
    ctx->pc = 0x1FFD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD38u;
    // 0x1ffd3c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FFD38u, 0x1FFD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD40u;
label_1ffd40:
    // 0x1ffd40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ffd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd44: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x1ffd44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1ffd48: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FFD48u;
    {
        const bool branch_taken_0x1ffd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffd48) {
            ctx->pc = 0x1FFD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFD48u;
            // 0x1ffd4c: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffd28;
        }
    }
    ctx->pc = 0x1FFD50u;
    // 0x1ffd50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFD50u;
    {
        const bool branch_taken_0x1ffd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD50u;
        // 0x1ffd54: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd50) {
            ctx->pc = 0x1FFD5Cu;
            goto label_1ffd5c;
        }
    }
    ctx->pc = 0x1FFD58u;
label_1ffd58:
    // 0x1ffd58: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x1ffd58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_1ffd5c:
    // 0x1ffd5c: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x1ffd5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1ffd60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FFD60u;
    {
        const bool branch_taken_0x1ffd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD60u;
        // 0x1ffd64: 0x2b18823  subu        $s1, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd60) {
            ctx->pc = 0x1FFD8Cu;
            goto label_1ffd8c;
        }
    }
    ctx->pc = 0x1FFD68u;
label_1ffd68:
    // 0x1ffd68: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1ffd68u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ffd6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ffd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd70: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ffd70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ffd74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ffd74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ffd78: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x1ffd78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x1ffd7c: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FFD7Cu;
    SET_GPR_U32(ctx, 31, 0x1FFD84u);
    ctx->pc = 0x1FFD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD7Cu;
    // 0x1ffd80: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FFD7Cu, 0x1FFD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD84u;
label_1ffd84:
    // 0x1ffd84: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FFD84u;
    {
        const bool branch_taken_0x1ffd84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD84u;
        // 0x1ffd88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd84) {
            ctx->pc = 0x1FFD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffd68;
        }
    }
    ctx->pc = 0x1FFD8Cu;
label_1ffd8c:
    // 0x1ffd8c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ffd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ffd90: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ffd90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd94: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1ffd94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ffd98: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1ffd98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ffd9c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ffd9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ffda0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ffda0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ffda4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ffda4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ffda8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ffda8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffdac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ffdacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffdb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDB0u;
        // 0x1ffdb4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFDB8u;
}
