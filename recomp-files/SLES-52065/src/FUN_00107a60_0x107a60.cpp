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

// Function: FUN_00107a60
// Address: 0x107a60 - 0x107c14
void FUN_00107a60_0x107a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00107a60_0x107a60");
#endif

    switch (ctx->pc) {
        case 0x107ab0u: goto label_107ab0;
        case 0x107ae0u: goto label_107ae0;
        case 0x107b20u: goto label_107b20;
        case 0x107b30u: goto label_107b30;
        case 0x107b40u: goto label_107b40;
        case 0x107b7cu: goto label_107b7c;
        case 0x107b88u: goto label_107b88;
        default: break;
    }

    ctx->pc = 0x107a60u;

    // 0x107a60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x107a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x107a64: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x107a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x107a68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x107a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x107a6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x107a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x107a70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x107a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x107a74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x107a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x107a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x107a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x107a7c: 0xac200218  sw          $zero, 0x218($at)
    ctx->pc = 0x107a7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x210218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x210218u, _value); } while (0);
    // 0x107a80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x107a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a84: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x107a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x107a88: 0xac20021c  sw          $zero, 0x21C($at)
    ctx->pc = 0x107a88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21021Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21021Cu, _value); } while (0);
    // 0x107a8c: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x107a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x107a90: 0xac200220  sw          $zero, 0x220($at)
    ctx->pc = 0x107a90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x210220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x210220u, _value); } while (0);
    // 0x107a94: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x107a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x107a98: 0xac20023c  sw          $zero, 0x23C($at)
    ctx->pc = 0x107a98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21023Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21023Cu, _value); } while (0);
    // 0x107a9c: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x107a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x107aa0: 0xac200240  sw          $zero, 0x240($at)
    ctx->pc = 0x107aa0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x210240u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x210240u, _value); } while (0);
    // 0x107aa4: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x107aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x107aa8: 0xac200244  sw          $zero, 0x244($at)
    ctx->pc = 0x107aa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x210244u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x210244u, _value); } while (0);
    // 0x107aac: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x107aacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_107ab0:
    // 0x107ab0: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x107ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x107ab4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x107ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x107ab8: 0x2463fd90  addiu       $v1, $v1, -0x270
    ctx->pc = 0x107ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966672));
    // 0x107abc: 0x488c0  sll         $s1, $a0, 3
    ctx->pc = 0x107abcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x107ac0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x107ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x107ac4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x107ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x107ac8: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x107ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x107acc: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x107accu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x107ad0: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x107AD0u;
    {
        const bool branch_taken_0x107ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x107ad0) {
            ctx->pc = 0x107B4Cu;
            goto label_107b4c;
        }
    }
    ctx->pc = 0x107AD8u;
    // 0x107ad8: 0x600001c  bltz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x107AD8u;
    {
        const bool branch_taken_0x107ad8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x107ad8) {
            ctx->pc = 0x107B4Cu;
            goto label_107b4c;
        }
    }
    ctx->pc = 0x107AE0u;
label_107ae0:
    // 0x107ae0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x107ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x107ae4: 0x24a5fd90  addiu       $a1, $a1, -0x270
    ctx->pc = 0x107ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966672));
    // 0x107ae8: 0xb19021  addu        $s2, $a1, $s1
    ctx->pc = 0x107ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x107aec: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x107aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x107af0: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x107af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x107af4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x107af4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x107af8: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x107AF8u;
    {
        const bool branch_taken_0x107af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AF8u;
        // 0x107afc: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107af8) {
            ctx->pc = 0x107B4Cu;
            goto label_107b4c;
        }
    }
    ctx->pc = 0x107B00u;
    // 0x107b00: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x107b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x107b04: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x107b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x107b08: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x107b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x107b0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x107b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x107b10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x107b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x107b14: 0xa29821  addu        $s3, $a1, $v0
    ctx->pc = 0x107b14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x107b18: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x107B18u;
    SET_GPR_U32(ctx, 31, 0x107B20u);
    ctx->pc = 0x107B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B18u;
    // 0x107b1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x107B18u, 0x107B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B20u;
label_107b20:
    // 0x107b20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x107b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x107b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b28: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x107B28u;
    SET_GPR_U32(ctx, 31, 0x107B30u);
    ctx->pc = 0x107B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B28u;
    // 0x107b2c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x107B28u, 0x107B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B30u;
label_107b30:
    // 0x107b30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b34: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x107b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x107b38: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x107B38u;
    SET_GPR_U32(ctx, 31, 0x107B40u);
    ctx->pc = 0x107B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B38u;
    // 0x107b3c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x107B38u, 0x107B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B40u;
label_107b40:
    // 0x107b40: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x107b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x107b44: 0x601ffe6  bgez        $s0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x107B44u;
    {
        const bool branch_taken_0x107b44 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x107B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B44u;
        // 0x107b48: 0x2631ffe8  addiu       $s1, $s1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b44) {
            ctx->pc = 0x107AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107ae0;
        }
    }
    ctx->pc = 0x107B4Cu;
label_107b4c:
    // 0x107b4c: 0x0  nop
    ctx->pc = 0x107b4cu;
    // NOP
    // 0x107b50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x107b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x107b54: 0x2a030017  slti        $v1, $s0, 0x17
    ctx->pc = 0x107b54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x107b58: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x107B58u;
    {
        const bool branch_taken_0x107b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B58u;
        // 0x107b5c: 0x102040  sll         $a0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b58) {
            ctx->pc = 0x107AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107ab0;
        }
    }
    ctx->pc = 0x107B60u;
    // 0x107b60: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x107b60u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x107b64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b68: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x107b68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x107b6c: 0x3c070021  lui         $a3, 0x21
    ctx->pc = 0x107b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33 << 16));
    // 0x107b70: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x107b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107b74: 0x24c60210  addiu       $a2, $a2, 0x210
    ctx->pc = 0x107b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 528));
    // 0x107b78: 0x24e7fd90  addiu       $a3, $a3, -0x270
    ctx->pc = 0x107b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966672));
label_107b7c:
    // 0x107b7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x107b7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x107b80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b84: 0xca6021  addu        $t4, $a2, $t2
    ctx->pc = 0x107b84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_107b88:
    // 0x107b88: 0xe95821  addu        $t3, $a3, $t1
    ctx->pc = 0x107b88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x107b8c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x107b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x107b90: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x107B90u;
    {
        const bool branch_taken_0x107b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x107b90) {
            ctx->pc = 0x107BD8u;
            goto label_107bd8;
        }
    }
    ctx->pc = 0x107B98u;
    // 0x107b98: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x107b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x107b9c: 0x8d630008  lw          $v1, 0x8($t3)
    ctx->pc = 0x107b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x107ba0: 0x14a3000d  bne         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x107BA0u;
    {
        const bool branch_taken_0x107ba0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x107ba0) {
            ctx->pc = 0x107BD8u;
            goto label_107bd8;
        }
    }
    ctx->pc = 0x107BA8u;
    // 0x107ba8: 0x8d650004  lw          $a1, 0x4($t3)
    ctx->pc = 0x107ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x107bac: 0x28a10000  slti        $at, $a1, 0x0
    ctx->pc = 0x107bacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x107bb0: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x107BB0u;
    {
        const bool branch_taken_0x107bb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x107BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BB0u;
        // 0x107bb4: 0x256d0004  addiu       $t5, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bb0) {
            ctx->pc = 0x107BD8u;
            goto label_107bd8;
        }
    }
    ctx->pc = 0x107BB8u;
    // 0x107bb8: 0x8d830010  lw          $v1, 0x10($t4)
    ctx->pc = 0x107bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x107bbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x107bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x107bc0: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x107bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x107bc4: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x107bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    // 0x107bc8: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x107bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x107bcc: 0x8d830010  lw          $v1, 0x10($t4)
    ctx->pc = 0x107bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x107bd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x107bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x107bd4: 0xad830010  sw          $v1, 0x10($t4)
    ctx->pc = 0x107bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 3));
label_107bd8:
    // 0x107bd8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x107bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x107bdc: 0x29030018  slti        $v1, $t0, 0x18
    ctx->pc = 0x107bdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x107be0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x107BE0u;
    {
        const bool branch_taken_0x107be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BE0u;
        // 0x107be4: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107be0) {
            ctx->pc = 0x107B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107b88;
        }
    }
    ctx->pc = 0x107BE8u;
    // 0x107be8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x107be8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x107bec: 0x29c30002  slti        $v1, $t6, 0x2
    ctx->pc = 0x107becu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x107bf0: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x107BF0u;
    {
        const bool branch_taken_0x107bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BF0u;
        // 0x107bf4: 0x254a0024  addiu       $t2, $t2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bf0) {
            ctx->pc = 0x107B7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107b7c;
        }
    }
    ctx->pc = 0x107BF8u;
    // 0x107bf8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x107bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107bfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x107bfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107c00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x107c00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107c04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x107c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107c08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x107c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x107C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C0Cu;
        // 0x107c10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107C14u;
}
