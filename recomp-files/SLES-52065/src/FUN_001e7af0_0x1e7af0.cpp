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

// Function: FUN_001e7af0
// Address: 0x1e7af0 - 0x1e80c8
void FUN_001e7af0_0x1e7af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e7af0_0x1e7af0");
#endif

    switch (ctx->pc) {
        case 0x1e7b94u: goto label_1e7b94;
        case 0x1e7b9cu: goto label_1e7b9c;
        case 0x1e7bc8u: goto label_1e7bc8;
        case 0x1e7becu: goto label_1e7bec;
        case 0x1e7bfcu: goto label_1e7bfc;
        case 0x1e7c04u: goto label_1e7c04;
        case 0x1e7c20u: goto label_1e7c20;
        case 0x1e7c44u: goto label_1e7c44;
        case 0x1e7cacu: goto label_1e7cac;
        case 0x1e7d04u: goto label_1e7d04;
        case 0x1e7d6cu: goto label_1e7d6c;
        case 0x1e7df4u: goto label_1e7df4;
        case 0x1e7e30u: goto label_1e7e30;
        case 0x1e7ea4u: goto label_1e7ea4;
        case 0x1e7ee8u: goto label_1e7ee8;
        case 0x1e7f14u: goto label_1e7f14;
        case 0x1e7f68u: goto label_1e7f68;
        case 0x1e7fb4u: goto label_1e7fb4;
        case 0x1e8060u: goto label_1e8060;
        case 0x1e8098u: goto label_1e8098;
        default: break;
    }

    ctx->pc = 0x1e7af0u;

    // 0x1e7af0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1e7af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1e7af4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e7af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1e7af8: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x1e7af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x1e7afc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e7afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e7b00: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e7b00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    // 0x1e7b04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e7b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e7b08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e7b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e7b0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e7b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e7b10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e7b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e7b14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e7b14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7b1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e7b1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7b24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e7b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b28: 0x1220015b  beqz        $s1, . + 4 + (0x15B << 2)
    ctx->pc = 0x1E7B28u;
    {
        const bool branch_taken_0x1e7b28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7B28u;
        // 0x1e7b2c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b28) {
            ctx->pc = 0x1E8098u;
            goto label_1e8098;
        }
    }
    ctx->pc = 0x1E7B30u;
    // 0x1e7b30: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x1e7b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x1e7b34: 0x3463aaaa  ori         $v1, $v1, 0xAAAA
    ctx->pc = 0x1e7b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43690);
    // 0x1e7b38: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x1e7b38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e7b3c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7B3Cu;
    {
        const bool branch_taken_0x1e7b3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7b3c) {
            ctx->pc = 0x1E7B58u;
            goto label_1e7b58;
        }
    }
    ctx->pc = 0x1E7B44u;
    // 0x1e7b44: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1e7b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e7b48: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1e7b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1e7b4c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1e7b4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e7b50: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x1E7B50u;
    {
        const bool branch_taken_0x1e7b50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7b50) {
            ctx->pc = 0x1E7C44u;
            goto label_1e7c44;
        }
    }
    ctx->pc = 0x1E7B58u;
label_1e7b58:
    // 0x1e7b58: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e7b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e7b5c: 0x27d40168  addiu       $s4, $fp, 0x168
    ctx->pc = 0x1e7b5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 360));
    // 0x1e7b60: 0x2442c0c0  addiu       $v0, $v0, -0x3F40
    ctx->pc = 0x1e7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951104));
    // 0x1e7b64: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e7b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e7b68: 0xafc20168  sw          $v0, 0x168($fp)
    ctx->pc = 0x1e7b68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 360), GPR_U32(ctx, 2));
    // 0x1e7b6c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e7b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e7b70: 0xafd40188  sw          $s4, 0x188($fp)
    ctx->pc = 0x1e7b70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 392), GPR_U32(ctx, 20));
    // 0x1e7b74: 0x2463c320  addiu       $v1, $v1, -0x3CE0
    ctx->pc = 0x1e7b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951712));
    // 0x1e7b78: 0x8fc20188  lw          $v0, 0x188($fp)
    ctx->pc = 0x1e7b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 392)));
    // 0x1e7b7c: 0x24843ed0  addiu       $a0, $a0, 0x3ED0
    ctx->pc = 0x1e7b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16080));
    // 0x1e7b80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e7b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e7b84: 0x8fc20188  lw          $v0, 0x188($fp)
    ctx->pc = 0x1e7b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 392)));
    // 0x1e7b88: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e7b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e7b8c: 0xc080748  jal         func_201D20
    ctx->pc = 0x1E7B8Cu;
    SET_GPR_U32(ctx, 31, 0x1E7B94u);
    ctx->pc = 0x1E7B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B8Cu;
    // 0x1e7b90: 0xafc2018c  sw          $v0, 0x18C($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 396), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1E7B8Cu, 0x1E7B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7B94u;
label_1e7b94:
    // 0x1e7b94: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1E7B94u;
    SET_GPR_U32(ctx, 31, 0x1E7B9Cu);
    ctx->pc = 0x1E7B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B94u;
    // 0x1e7b98: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1E7B94u, 0x1E7B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7B9Cu;
label_1e7b9c:
    // 0x1e7b9c: 0x8fc3018c  lw          $v1, 0x18C($fp)
    ctx->pc = 0x1e7b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e7ba0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e7ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e7ba4: 0x8fc2018c  lw          $v0, 0x18C($fp)
    ctx->pc = 0x1e7ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e7ba8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e7ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e7bac: 0x8fc2018c  lw          $v0, 0x18C($fp)
    ctx->pc = 0x1e7bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e7bb0: 0xafdd0164  sw          $sp, 0x164($fp)
    ctx->pc = 0x1e7bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 356), GPR_U32(ctx, 29));
    // 0x1e7bb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e7bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7bb8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E7BB8u;
    {
        const bool branch_taken_0x1e7bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BB8u;
        // 0x1e7bbc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7bb8) {
            ctx->pc = 0x1E7C0Cu;
            goto label_1e7c0c;
        }
    }
    ctx->pc = 0x1E7BC0u;
    // 0x1e7bc0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E7BC0u;
    SET_GPR_U32(ctx, 31, 0x1E7BC8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E7BC0u, 0x1E7BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7BC8u;
label_1e7bc8:
    // 0x1e7bc8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7BC8u;
    {
        const bool branch_taken_0x1e7bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BC8u;
        // 0x1e7bcc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7bc8) {
            ctx->pc = 0x1E7BD4u;
            goto label_1e7bd4;
        }
    }
    ctx->pc = 0x1E7BD0u;
    // 0x1e7bd0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e7bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e7bd4:
    // 0x1e7bd4: 0x8fc3018c  lw          $v1, 0x18C($fp)
    ctx->pc = 0x1e7bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e7bd8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E7BD8u;
    {
        const bool branch_taken_0x1e7bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BD8u;
        // 0x1e7bdc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7bd8) {
            ctx->pc = 0x1E7C0Cu;
            goto label_1e7c0c;
        }
    }
    ctx->pc = 0x1E7BE0u;
    // 0x1e7be0: 0x8fc2018c  lw          $v0, 0x18C($fp)
    ctx->pc = 0x1e7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e7be4: 0xc04018c  jal         func_100630
    ctx->pc = 0x1E7BE4u;
    SET_GPR_U32(ctx, 31, 0x1E7BECu);
    ctx->pc = 0x1E7BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7BE4u;
    // 0x1e7be8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1E7BE4u, 0x1E7BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7BECu;
label_1e7bec:
    // 0x1e7bec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e7becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e7bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7bf4: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E7BF4u;
    SET_GPR_U32(ctx, 31, 0x1E7BFCu);
    ctx->pc = 0x1E7BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7BF4u;
    // 0x1e7bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E7BF4u, 0x1E7BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7BFCu;
label_1e7bfc:
    // 0x1e7bfc: 0xc07a5c4  jal         func_1E9710
    ctx->pc = 0x1E7BFCu;
    SET_GPR_U32(ctx, 31, 0x1E7C04u);
    ctx->pc = 0x1E7C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7BFCu;
    // 0x1e7c00: 0x27c40150  addiu       $a0, $fp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9710u, 0x1E7BFCu, 0x1E7C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C04u;
label_1e7c04:
    // 0x1e7c04: 0x8fdd0164  lw          $sp, 0x164($fp)
    ctx->pc = 0x1e7c04u;
    SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 356)));
    // 0x1e7c08: 0x0  nop
    ctx->pc = 0x1e7c08u;
    // NOP
label_1e7c0c:
    // 0x1e7c0c: 0x8fc2018c  lw          $v0, 0x18C($fp)
    ctx->pc = 0x1e7c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e7c10: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1e7c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1e7c14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e7c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7c18: 0xc080702  jal         func_201C08
    ctx->pc = 0x1E7C18u;
    SET_GPR_U32(ctx, 31, 0x1E7C20u);
    ctx->pc = 0x1E7C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C18u;
    // 0x1e7c1c: 0x24a53ed0  addiu       $a1, $a1, 0x3ED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1E7C18u, 0x1E7C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C20u;
label_1e7c20:
    // 0x1e7c20: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e7c24: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e7c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e7c28: 0x2442c310  addiu       $v0, $v0, -0x3CF0
    ctx->pc = 0x1e7c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951696));
    // 0x1e7c2c: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e7c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e7c30: 0x24843ef0  addiu       $a0, $a0, 0x3EF0
    ctx->pc = 0x1e7c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16112));
    // 0x1e7c34: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1e7c34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1e7c38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e7c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c3c: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E7C3Cu;
    SET_GPR_U32(ctx, 31, 0x1E7C44u);
    ctx->pc = 0x1E7C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C3Cu;
    // 0x1e7c40: 0x24c67980  addiu       $a2, $a2, 0x7980 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E7C3Cu, 0x1E7C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C44u;
label_1e7c44:
    // 0x1e7c44: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1e7c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e7c48: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e7c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e7c4c: 0xd12021  addu        $a0, $a2, $s1
    ctx->pc = 0x1e7c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1e7c50: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1e7c50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e7c54: 0x14200083  bnez        $at, . + 4 + (0x83 << 2)
    ctx->pc = 0x1E7C54u;
    {
        const bool branch_taken_0x1e7c54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7c54) {
            ctx->pc = 0x1E7E64u;
            goto label_1e7e64;
        }
    }
    ctx->pc = 0x1E7C5Cu;
    // 0x1e7c5c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1e7c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e7c60: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1e7c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1e7c64: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x1e7c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e7c68: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x1e7c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x1e7c6c: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x1e7c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e7c70: 0x3464aaab  ori         $a0, $v1, 0xAAAB
    ctx->pc = 0x1e7c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x1e7c74: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1e7c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e7c78: 0x722823  subu        $a1, $v1, $s2
    ctx->pc = 0x1e7c78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e7c7c: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x1e7c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e7c80: 0x0  nop
    ctx->pc = 0x1e7c80u;
    // NOP
    // 0x1e7c84: 0x0  nop
    ctx->pc = 0x1e7c84u;
    // NOP
    // 0x1e7c88: 0x2010  mfhi        $a0
    ctx->pc = 0x1e7c88u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1e7c8c: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1e7c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1e7c90: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x1e7c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e7c94: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x1e7c94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e7c98: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1E7C98u;
    {
        const bool branch_taken_0x1e7c98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C98u;
        // 0x1e7c9c: 0x112040  sll         $a0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c98) {
            ctx->pc = 0x1E7D54u;
            goto label_1e7d54;
        }
    }
    ctx->pc = 0x1E7CA0u;
    // 0x1e7ca0: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x1e7ca0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e7ca4: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E7CA4u;
    {
        const bool branch_taken_0x1e7ca4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CA4u;
        // 0x1e7ca8: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ca4) {
            ctx->pc = 0x1E7CF4u;
            goto label_1e7cf4;
        }
    }
    ctx->pc = 0x1E7CACu;
label_1e7cac:
    // 0x1e7cac: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7CACu;
    {
        const bool branch_taken_0x1e7cac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7cac) {
            ctx->pc = 0x1E7CD4u;
            goto label_1e7cd4;
        }
    }
    ctx->pc = 0x1E7CB4u;
    // 0x1e7cb4: 0x0  nop
    ctx->pc = 0x1e7cb4u;
    // NOP
    // 0x1e7cb8: 0xafdd00a4  sw          $sp, 0xA4($fp)
    ctx->pc = 0x1e7cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 164), GPR_U32(ctx, 29));
    // 0x1e7cbc: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x1e7cbcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e7cc0: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x1e7cc0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1e7cc4: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x1e7cc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e7cc8: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x1e7cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1e7ccc: 0xa5050002  sh          $a1, 0x2($t0)
    ctx->pc = 0x1e7cccu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1e7cd0: 0xa5040004  sh          $a0, 0x4($t0)
    ctx->pc = 0x1e7cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 4));
label_1e7cd4:
    // 0x1e7cd4: 0x0  nop
    ctx->pc = 0x1e7cd4u;
    // NOP
    // 0x1e7cd8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1e7cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e7cdc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e7cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e7ce0: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x1e7ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x1e7ce4: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x1e7ce4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e7ce8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e7ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e7cec: 0x1420ffef  bnez        $at, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E7CECu;
    {
        const bool branch_taken_0x1e7cec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CECu;
        // 0x1e7cf0: 0xae640004  sw          $a0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7cec) {
            ctx->pc = 0x1E7CACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7cac;
        }
    }
    ctx->pc = 0x1E7CF4u;
label_1e7cf4:
    // 0x1e7cf4: 0x0  nop
    ctx->pc = 0x1e7cf4u;
    // NOP
    // 0x1e7cf8: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x1e7cf8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e7cfc: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x1E7CFCu;
    {
        const bool branch_taken_0x1e7cfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CFCu;
        // 0x1e7d00: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7cfc) {
            ctx->pc = 0x1E7E24u;
            goto label_1e7e24;
        }
    }
    ctx->pc = 0x1E7D04u;
label_1e7d04:
    // 0x1e7d04: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7D04u;
    {
        const bool branch_taken_0x1e7d04 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7d04) {
            ctx->pc = 0x1E7D2Cu;
            goto label_1e7d2c;
        }
    }
    ctx->pc = 0x1E7D0Cu;
    // 0x1e7d0c: 0x0  nop
    ctx->pc = 0x1e7d0cu;
    // NOP
    // 0x1e7d10: 0xafdd00c4  sw          $sp, 0xC4($fp)
    ctx->pc = 0x1e7d10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 196), GPR_U32(ctx, 29));
    // 0x1e7d14: 0x84e60000  lh          $a2, 0x0($a3)
    ctx->pc = 0x1e7d14u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e7d18: 0x84e50002  lh          $a1, 0x2($a3)
    ctx->pc = 0x1e7d18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1e7d1c: 0x84e40004  lh          $a0, 0x4($a3)
    ctx->pc = 0x1e7d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1e7d20: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x1e7d20u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1e7d24: 0xa5050002  sh          $a1, 0x2($t0)
    ctx->pc = 0x1e7d24u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1e7d28: 0xa5040004  sh          $a0, 0x4($t0)
    ctx->pc = 0x1e7d28u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 4));
label_1e7d2c:
    // 0x1e7d2c: 0x0  nop
    ctx->pc = 0x1e7d2cu;
    // NOP
    // 0x1e7d30: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1e7d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e7d34: 0x24e70006  addiu       $a3, $a3, 0x6
    ctx->pc = 0x1e7d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x1e7d38: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x1e7d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x1e7d3c: 0xe3202b  sltu        $a0, $a3, $v1
    ctx->pc = 0x1e7d3cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e7d40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e7d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e7d44: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E7D44u;
    {
        const bool branch_taken_0x1e7d44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D44u;
        // 0x1e7d48: 0xae650004  sw          $a1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d44) {
            ctx->pc = 0x1E7D04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7d04;
        }
    }
    ctx->pc = 0x1E7D4Cu;
    // 0x1e7d4c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1E7D4Cu;
    {
        const bool branch_taken_0x1e7d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7d4c) {
            ctx->pc = 0x1E7E24u;
            goto label_1e7e24;
        }
    }
    ctx->pc = 0x1E7D54u;
label_1e7d54:
    // 0x1e7d54: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1e7d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1e7d58: 0x45040  sll         $t2, $a0, 1
    ctx->pc = 0x1e7d58u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e7d5c: 0x6a4023  subu        $t0, $v1, $t2
    ctx->pc = 0x1e7d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1e7d60: 0x103082b  sltu        $at, $t0, $v1
    ctx->pc = 0x1e7d60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e7d64: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E7D64u;
    {
        const bool branch_taken_0x1e7d64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D64u;
        // 0x1e7d68: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d64) {
            ctx->pc = 0x1E7DB4u;
            goto label_1e7db4;
        }
    }
    ctx->pc = 0x1E7D6Cu;
label_1e7d6c:
    // 0x1e7d6c: 0x11200009  beqz        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7D6Cu;
    {
        const bool branch_taken_0x1e7d6c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7d6c) {
            ctx->pc = 0x1E7D94u;
            goto label_1e7d94;
        }
    }
    ctx->pc = 0x1E7D74u;
    // 0x1e7d74: 0x0  nop
    ctx->pc = 0x1e7d74u;
    // NOP
    // 0x1e7d78: 0xafdd00e4  sw          $sp, 0xE4($fp)
    ctx->pc = 0x1e7d78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 228), GPR_U32(ctx, 29));
    // 0x1e7d7c: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x1e7d7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e7d80: 0x85050002  lh          $a1, 0x2($t0)
    ctx->pc = 0x1e7d80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1e7d84: 0x85040004  lh          $a0, 0x4($t0)
    ctx->pc = 0x1e7d84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1e7d88: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x1e7d88u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1e7d8c: 0xa5250002  sh          $a1, 0x2($t1)
    ctx->pc = 0x1e7d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1e7d90: 0xa5240004  sh          $a0, 0x4($t1)
    ctx->pc = 0x1e7d90u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 4));
label_1e7d94:
    // 0x1e7d94: 0x0  nop
    ctx->pc = 0x1e7d94u;
    // NOP
    // 0x1e7d98: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1e7d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e7d9c: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x1e7d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x1e7da0: 0x25290006  addiu       $t1, $t1, 0x6
    ctx->pc = 0x1e7da0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x1e7da4: 0x103202b  sltu        $a0, $t0, $v1
    ctx->pc = 0x1e7da4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e7da8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e7da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e7dac: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E7DACu;
    {
        const bool branch_taken_0x1e7dac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7DACu;
        // 0x1e7db0: 0xae650004  sw          $a1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7dac) {
            ctx->pc = 0x1E7D6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7d6c;
        }
    }
    ctx->pc = 0x1E7DB4u;
label_1e7db4:
    // 0x1e7db4: 0x0  nop
    ctx->pc = 0x1e7db4u;
    // NOP
    // 0x1e7db8: 0xf12823  subu        $a1, $a3, $s1
    ctx->pc = 0x1e7db8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x1e7dbc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1e7dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1e7dc0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e7dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e7dc4: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1e7dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e7dc8: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x1e7dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e7dcc: 0x204082b  sltu        $at, $s0, $a0
    ctx->pc = 0x1e7dccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e7dd0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7DD0u;
    {
        const bool branch_taken_0x1e7dd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7DD0u;
        // 0x1e7dd4: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7dd0) {
            ctx->pc = 0x1E7DE4u;
            goto label_1e7de4;
        }
    }
    ctx->pc = 0x1E7DD8u;
    // 0x1e7dd8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7DD8u;
    {
        const bool branch_taken_0x1e7dd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7dd8) {
            ctx->pc = 0x1E7DE4u;
            goto label_1e7de4;
        }
    }
    ctx->pc = 0x1E7DE0u;
    // 0x1e7de0: 0x20a8021  addu        $s0, $s0, $t2
    ctx->pc = 0x1e7de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
label_1e7de4:
    // 0x1e7de4: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x1e7de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1e7de8: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x1e7de8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1e7dec: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1E7DECu;
    {
        const bool branch_taken_0x1e7dec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7dec) {
            ctx->pc = 0x1E7E24u;
            goto label_1e7e24;
        }
    }
    ctx->pc = 0x1E7DF4u;
label_1e7df4:
    // 0x1e7df4: 0x24a5fffa  addiu       $a1, $a1, -0x6
    ctx->pc = 0x1e7df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
    // 0x1e7df8: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x1e7df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1e7dfc: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x1e7dfcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e7e00: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x1e7e00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1e7e04: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x1e7e04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e7e08: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x1e7e08u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e7e0c: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x1e7e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e7e10: 0x90a40004  lbu         $a0, 0x4($a1)
    ctx->pc = 0x1e7e10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e7e14: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x1e7e14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e7e18: 0x90a40005  lbu         $a0, 0x5($a1)
    ctx->pc = 0x1e7e18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x1e7e1c: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E7E1Cu;
    {
        const bool branch_taken_0x1e7e1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E1Cu;
        // 0x1e7e20: 0xa0640005  sb          $a0, 0x5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e1c) {
            ctx->pc = 0x1E7DF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7df4;
        }
    }
    ctx->pc = 0x1E7E24u;
label_1e7e24:
    // 0x1e7e24: 0x0  nop
    ctx->pc = 0x1e7e24u;
    // NOP
    // 0x1e7e28: 0x1220009b  beqz        $s1, . + 4 + (0x9B << 2)
    ctx->pc = 0x1E7E28u;
    {
        const bool branch_taken_0x1e7e28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7e28) {
            ctx->pc = 0x1E8098u;
            goto label_1e8098;
        }
    }
    ctx->pc = 0x1E7E30u;
label_1e7e30:
    // 0x1e7e30: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1e7e30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e7e34: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e7e34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e7e38: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1e7e38u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e7e3c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1e7e3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1e7e40: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x1e7e40u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e7e44: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x1e7e44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e7e48: 0xa2430004  sb          $v1, 0x4($s2)
    ctx->pc = 0x1e7e48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e7e4c: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x1e7e4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1e7e50: 0xa2430005  sb          $v1, 0x5($s2)
    ctx->pc = 0x1e7e50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e7e54: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E7E54u;
    {
        const bool branch_taken_0x1e7e54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E54u;
        // 0x1e7e58: 0x26520006  addiu       $s2, $s2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e54) {
            ctx->pc = 0x1E7E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7e30;
        }
    }
    ctx->pc = 0x1E7E5Cu;
    // 0x1e7e5c: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1E7E5Cu;
    {
        const bool branch_taken_0x1e7e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E5Cu;
        // 0x1e7e60: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e5c) {
            ctx->pc = 0x1E809Cu;
            goto label_1e809c;
        }
    }
    ctx->pc = 0x1E7E64u;
label_1e7e64:
    // 0x1e7e64: 0xafc00178  sw          $zero, 0x178($fp)
    ctx->pc = 0x1e7e64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 376), GPR_U32(ctx, 0));
    // 0x1e7e68: 0x27d5017c  addiu       $s5, $fp, 0x17C
    ctx->pc = 0x1e7e68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 380));
    // 0x1e7e6c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1e7e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1e7e70: 0x27d60180  addiu       $s6, $fp, 0x180
    ctx->pc = 0x1e7e70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 384));
    // 0x1e7e74: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1e7e74u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1e7e78: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1e7e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e7e7c: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x1e7e7cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e7e80: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7E80u;
    {
        const bool branch_taken_0x1e7e80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E80u;
        // 0x1e7e84: 0x511821  addu        $v1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e80) {
            ctx->pc = 0x1E7E90u;
            goto label_1e7e90;
        }
    }
    ctx->pc = 0x1E7E88u;
    // 0x1e7e88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7E88u;
    {
        const bool branch_taken_0x1e7e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E88u;
        // 0x1e7e8c: 0x283082b  sltu        $at, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e88) {
            ctx->pc = 0x1E7E98u;
            goto label_1e7e98;
        }
    }
    ctx->pc = 0x1E7E90u;
label_1e7e90:
    // 0x1e7e90: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1e7e90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7e94: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x1e7e94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e7e98:
    // 0x1e7e98: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1E7E98u;
    {
        const bool branch_taken_0x1e7e98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E98u;
        // 0x1e7e9c: 0x3c022aaa  lui         $v0, 0x2AAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e98) {
            ctx->pc = 0x1E7ED4u;
            goto label_1e7ed4;
        }
    }
    ctx->pc = 0x1E7EA0u;
    // 0x1e7ea0: 0x3c011555  lui         $at, 0x1555
    ctx->pc = 0x1e7ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5461 << 16));
label_1e7ea4:
    // 0x1e7ea4: 0x34215555  ori         $at, $at, 0x5555
    ctx->pc = 0x1e7ea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21845);
    // 0x1e7ea8: 0x281082b  sltu        $at, $s4, $at
    ctx->pc = 0x1e7ea8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e7eac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7EACu;
    {
        const bool branch_taken_0x1e7eac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7eac) {
            ctx->pc = 0x1E7EBCu;
            goto label_1e7ebc;
        }
    }
    ctx->pc = 0x1E7EB4u;
    // 0x1e7eb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7EB4u;
    {
        const bool branch_taken_0x1e7eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7EB4u;
        // 0x1e7eb8: 0x14a040  sll         $s4, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7eb4) {
            ctx->pc = 0x1E7EC4u;
            goto label_1e7ec4;
        }
    }
    ctx->pc = 0x1E7EBCu;
label_1e7ebc:
    // 0x1e7ebc: 0x0  nop
    ctx->pc = 0x1e7ebcu;
    // NOP
    // 0x1e7ec0: 0x3454aaaa  ori         $s4, $v0, 0xAAAA
    ctx->pc = 0x1e7ec0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43690);
label_1e7ec4:
    // 0x1e7ec4: 0x0  nop
    ctx->pc = 0x1e7ec4u;
    // NOP
    // 0x1e7ec8: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x1e7ec8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e7ecc: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E7ECCu;
    {
        const bool branch_taken_0x1e7ecc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7ECCu;
        // 0x1e7ed0: 0x3c011555  lui         $at, 0x1555 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5461 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ecc) {
            ctx->pc = 0x1E7EA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7ea4;
        }
    }
    ctx->pc = 0x1E7ED4u;
label_1e7ed4:
    // 0x1e7ed4: 0x0  nop
    ctx->pc = 0x1e7ed4u;
    // NOP
    // 0x1e7ed8: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1e7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1e7edc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1e7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1e7ee0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E7EE0u;
    SET_GPR_U32(ctx, 31, 0x1E7EE8u);
    ctx->pc = 0x1E7EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7EE0u;
    // 0x1e7ee4: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E7EE0u, 0x1E7EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7EE8u;
label_1e7ee8:
    // 0x1e7ee8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1e7ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1e7eec: 0xafd40178  sw          $s4, 0x178($fp)
    ctx->pc = 0x1e7eecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 376), GPR_U32(ctx, 20));
    // 0x1e7ef0: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1e7ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e7ef4: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1e7ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e7ef8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1e7ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e7efc: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x1e7efcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1e7f00: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1e7f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1e7f04: 0xb2082b  sltu        $at, $a1, $s2
    ctx->pc = 0x1e7f04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e7f08: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1e7f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e7f0c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E7F0Cu;
    {
        const bool branch_taken_0x1e7f0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F0Cu;
        // 0x1e7f10: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f0c) {
            ctx->pc = 0x1E7F5Cu;
            goto label_1e7f5c;
        }
    }
    ctx->pc = 0x1E7F14u;
label_1e7f14:
    // 0x1e7f14: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7F14u;
    {
        const bool branch_taken_0x1e7f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7f14) {
            ctx->pc = 0x1E7F3Cu;
            goto label_1e7f3c;
        }
    }
    ctx->pc = 0x1E7F1Cu;
    // 0x1e7f1c: 0x0  nop
    ctx->pc = 0x1e7f1cu;
    // NOP
    // 0x1e7f20: 0xafdd0104  sw          $sp, 0x104($fp)
    ctx->pc = 0x1e7f20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 260), GPR_U32(ctx, 29));
    // 0x1e7f24: 0x84a80000  lh          $t0, 0x0($a1)
    ctx->pc = 0x1e7f24u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e7f28: 0x84a70002  lh          $a3, 0x2($a1)
    ctx->pc = 0x1e7f28u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e7f2c: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x1e7f2cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e7f30: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x1e7f30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e7f34: 0xa4670002  sh          $a3, 0x2($v1)
    ctx->pc = 0x1e7f34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e7f38: 0xa4660004  sh          $a2, 0x4($v1)
    ctx->pc = 0x1e7f38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 6));
label_1e7f3c:
    // 0x1e7f3c: 0x0  nop
    ctx->pc = 0x1e7f3cu;
    // NOP
    // 0x1e7f40: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x1e7f40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e7f44: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x1e7f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1e7f48: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x1e7f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1e7f4c: 0xb2302b  sltu        $a2, $a1, $s2
    ctx->pc = 0x1e7f4cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e7f50: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e7f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e7f54: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E7F54u;
    {
        const bool branch_taken_0x1e7f54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F54u;
        // 0x1e7f58: 0xaea70000  sw          $a3, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f54) {
            ctx->pc = 0x1E7F14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7f14;
        }
    }
    ctx->pc = 0x1E7F5Cu;
label_1e7f5c:
    // 0x1e7f5c: 0x0  nop
    ctx->pc = 0x1e7f5cu;
    // NOP
    // 0x1e7f60: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E7F60u;
    {
        const bool branch_taken_0x1e7f60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7f60) {
            ctx->pc = 0x1E7FA8u;
            goto label_1e7fa8;
        }
    }
    ctx->pc = 0x1E7F68u;
label_1e7f68:
    // 0x1e7f68: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7F68u;
    {
        const bool branch_taken_0x1e7f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7f68) {
            ctx->pc = 0x1E7F8Cu;
            goto label_1e7f8c;
        }
    }
    ctx->pc = 0x1E7F70u;
    // 0x1e7f70: 0xafdd0124  sw          $sp, 0x124($fp)
    ctx->pc = 0x1e7f70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 292), GPR_U32(ctx, 29));
    // 0x1e7f74: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x1e7f74u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e7f78: 0x86070002  lh          $a3, 0x2($s0)
    ctx->pc = 0x1e7f78u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1e7f7c: 0x86060004  lh          $a2, 0x4($s0)
    ctx->pc = 0x1e7f7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e7f80: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x1e7f80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e7f84: 0xa4670002  sh          $a3, 0x2($v1)
    ctx->pc = 0x1e7f84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e7f88: 0xa4660004  sh          $a2, 0x4($v1)
    ctx->pc = 0x1e7f88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 6));
label_1e7f8c:
    // 0x1e7f8c: 0x0  nop
    ctx->pc = 0x1e7f8cu;
    // NOP
    // 0x1e7f90: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x1e7f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e7f94: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e7f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e7f98: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x1e7f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1e7f9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e7f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e7fa0: 0x1620fff1  bnez        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1E7FA0u;
    {
        const bool branch_taken_0x1e7fa0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FA0u;
        // 0x1e7fa4: 0xaea60000  sw          $a2, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7fa0) {
            ctx->pc = 0x1E7F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7f68;
        }
    }
    ctx->pc = 0x1E7FA8u;
label_1e7fa8:
    // 0x1e7fa8: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x1e7fa8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e7fac: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E7FACu;
    {
        const bool branch_taken_0x1e7fac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7fac) {
            ctx->pc = 0x1E7FFCu;
            goto label_1e7ffc;
        }
    }
    ctx->pc = 0x1E7FB4u;
label_1e7fb4:
    // 0x1e7fb4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7FB4u;
    {
        const bool branch_taken_0x1e7fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7fb4) {
            ctx->pc = 0x1E7FDCu;
            goto label_1e7fdc;
        }
    }
    ctx->pc = 0x1E7FBCu;
    // 0x1e7fbc: 0x0  nop
    ctx->pc = 0x1e7fbcu;
    // NOP
    // 0x1e7fc0: 0xafdd0144  sw          $sp, 0x144($fp)
    ctx->pc = 0x1e7fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 324), GPR_U32(ctx, 29));
    // 0x1e7fc4: 0x84a80000  lh          $t0, 0x0($a1)
    ctx->pc = 0x1e7fc4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e7fc8: 0x84a70002  lh          $a3, 0x2($a1)
    ctx->pc = 0x1e7fc8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e7fcc: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x1e7fccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e7fd0: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x1e7fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e7fd4: 0xa4670002  sh          $a3, 0x2($v1)
    ctx->pc = 0x1e7fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e7fd8: 0xa4660004  sh          $a2, 0x4($v1)
    ctx->pc = 0x1e7fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 6));
label_1e7fdc:
    // 0x1e7fdc: 0x0  nop
    ctx->pc = 0x1e7fdcu;
    // NOP
    // 0x1e7fe0: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x1e7fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e7fe4: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x1e7fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1e7fe8: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x1e7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1e7fec: 0xa4302b  sltu        $a2, $a1, $a0
    ctx->pc = 0x1e7fecu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e7ff0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e7ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e7ff4: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E7FF4u;
    {
        const bool branch_taken_0x1e7ff4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FF4u;
        // 0x1e7ff8: 0xaea70000  sw          $a3, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ff4) {
            ctx->pc = 0x1E7FB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7fb4;
        }
    }
    ctx->pc = 0x1E7FFCu;
label_1e7ffc:
    // 0x1e7ffc: 0x0  nop
    ctx->pc = 0x1e7ffcu;
    // NOP
    // 0x1e8000: 0x27c30178  addiu       $v1, $fp, 0x178
    ctx->pc = 0x1e8000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 376));
    // 0x1e8004: 0x1073000d  beq         $v1, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1E8004u;
    {
        const bool branch_taken_0x1e8004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x1e8004) {
            ctx->pc = 0x1E803Cu;
            goto label_1e803c;
        }
    }
    ctx->pc = 0x1E800Cu;
    // 0x1e800c: 0x8fc40178  lw          $a0, 0x178($fp)
    ctx->pc = 0x1e800cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 376)));
    // 0x1e8010: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e8010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e8014: 0xafc30178  sw          $v1, 0x178($fp)
    ctx->pc = 0x1e8014u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 376), GPR_U32(ctx, 3));
    // 0x1e8018: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1e8018u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1e801c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1e801cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e8020: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1e8020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e8024: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1e8024u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x1e8028: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x1e8028u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
    // 0x1e802c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1e802cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e8030: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1e8030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e8034: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1e8034u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1e8038: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x1e8038u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
label_1e803c:
    // 0x1e803c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1e803cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e8040: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x1e8040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e8044: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1e8044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e8048: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e8048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e804c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1e804cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e8050: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1e8050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e8054: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1e8054u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e8058: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8058u;
    {
        const bool branch_taken_0x1e8058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8058) {
            ctx->pc = 0x1E8080u;
            goto label_1e8080;
        }
    }
    ctx->pc = 0x1E8060u;
label_1e8060:
    // 0x1e8060: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x1e8060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1e8064: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1e8064u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e8068: 0x0  nop
    ctx->pc = 0x1e8068u;
    // NOP
    // 0x1e806c: 0x0  nop
    ctx->pc = 0x1e806cu;
    // NOP
    // 0x1e8070: 0x0  nop
    ctx->pc = 0x1e8070u;
    // NOP
    // 0x1e8074: 0x0  nop
    ctx->pc = 0x1e8074u;
    // NOP
    // 0x1e8078: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E8078u;
    {
        const bool branch_taken_0x1e8078 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8078) {
            ctx->pc = 0x1E8060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8060;
        }
    }
    ctx->pc = 0x1E8080u;
label_1e8080:
    // 0x1e8080: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1e8080u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1e8084: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1e8084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e8088: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8088u;
    {
        const bool branch_taken_0x1e8088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8088) {
            ctx->pc = 0x1E8098u;
            goto label_1e8098;
        }
    }
    ctx->pc = 0x1E8090u;
    // 0x1e8090: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E8090u;
    SET_GPR_U32(ctx, 31, 0x1E8098u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E8090u, 0x1E8098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8098u;
label_1e8098:
    // 0x1e8098: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e8098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e809c:
    // 0x1e809c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e809cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e80a0: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1e80a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e80a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e80a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e80a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e80a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e80ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e80acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e80b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e80b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e80b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e80b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e80b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e80b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e80bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e80bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e80c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E80C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80C0u;
        // 0x1e80c4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E80C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E80C8u;
}
