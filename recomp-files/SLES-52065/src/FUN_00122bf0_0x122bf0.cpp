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

// Function: FUN_00122bf0
// Address: 0x122bf0 - 0x122eec
void FUN_00122bf0_0x122bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122bf0_0x122bf0");
#endif

    switch (ctx->pc) {
        case 0x122c54u: goto label_122c54;
        case 0x122c5cu: goto label_122c5c;
        case 0x122c98u: goto label_122c98;
        case 0x122cb8u: goto label_122cb8;
        case 0x122cc0u: goto label_122cc0;
        case 0x122cf0u: goto label_122cf0;
        case 0x122d10u: goto label_122d10;
        case 0x122d18u: goto label_122d18;
        case 0x122d58u: goto label_122d58;
        case 0x122d84u: goto label_122d84;
        case 0x122ddcu: goto label_122ddc;
        case 0x122dfcu: goto label_122dfc;
        case 0x122e04u: goto label_122e04;
        case 0x122e1cu: goto label_122e1c;
        case 0x122e24u: goto label_122e24;
        case 0x122e40u: goto label_122e40;
        case 0x122e60u: goto label_122e60;
        case 0x122e68u: goto label_122e68;
        case 0x122e80u: goto label_122e80;
        case 0x122e88u: goto label_122e88;
        default: break;
    }

    ctx->pc = 0x122bf0u;

    // 0x122bf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x122bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x122bf4: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x122bf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x122bf8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x122bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x122bfc: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x122bfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x122c00: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x122c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x122c04: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x122c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x122c08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x122c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x122c0c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x122c0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x122c10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x122c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x122c14: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x122c14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x122c18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x122c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x122c1c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x122c1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c20: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x122c20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x122c24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x122c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x122c28: 0x261082b  sltu        $at, $s3, $at
    ctx->pc = 0x122c28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x122c2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x122c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x122c30: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x122c30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c34: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x122C34u;
    {
        const bool branch_taken_0x122c34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x122C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C34u;
        // 0x122c38: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c34) {
            ctx->pc = 0x122C5Cu;
            goto label_122c5c;
        }
    }
    ctx->pc = 0x122C3Cu;
    // 0x122c3c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x122c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x122c40: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122c44: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x122c44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x122c48: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122c4c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x122C4Cu;
    SET_GPR_U32(ctx, 31, 0x122C54u);
    ctx->pc = 0x122C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C4Cu;
    // 0x122c50: 0x24a5e9f0  addiu       $a1, $a1, -0x1610 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x122C4Cu, 0x122C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C54u;
label_122c54:
    // 0x122c54: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x122C54u;
    SET_GPR_U32(ctx, 31, 0x122C5Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x122C54u, 0x122C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C5Cu;
label_122c5c:
    // 0x122c5c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x122c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x122c60: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x122c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x122c64: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x122c64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x122c68: 0x1420003f  bnez        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x122C68u;
    {
        const bool branch_taken_0x122c68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x122c68) {
            ctx->pc = 0x122D68u;
            goto label_122d68;
        }
    }
    ctx->pc = 0x122C70u;
    // 0x122c70: 0xafb3007c  sw          $s3, 0x7C($sp)
    ctx->pc = 0x122c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
    // 0x122c74: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x122c74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x122c78: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x122c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x122c7c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x122c7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x122c80: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x122C80u;
    {
        const bool branch_taken_0x122c80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x122C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C80u;
        // 0x122c84: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c80) {
            ctx->pc = 0x122C90u;
            goto label_122c90;
        }
    }
    ctx->pc = 0x122C88u;
    // 0x122c88: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x122C88u;
    {
        const bool branch_taken_0x122c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C88u;
        // 0x122c8c: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c88) {
            ctx->pc = 0x122D68u;
            goto label_122d68;
        }
    }
    ctx->pc = 0x122C90u;
label_122c90:
    // 0x122c90: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x122C90u;
    SET_GPR_U32(ctx, 31, 0x122C98u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x122C90u, 0x122C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C98u;
label_122c98:
    // 0x122c98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x122c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c9c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x122C9Cu;
    {
        const bool branch_taken_0x122c9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x122CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C9Cu;
        // 0x122ca0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c9c) {
            ctx->pc = 0x122CC0u;
            goto label_122cc0;
        }
    }
    ctx->pc = 0x122CA4u;
    // 0x122ca4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122ca8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x122ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x122cac: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122cb0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x122CB0u;
    SET_GPR_U32(ctx, 31, 0x122CB8u);
    ctx->pc = 0x122CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122CB0u;
    // 0x122cb4: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x122CB0u, 0x122CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CB8u;
label_122cb8:
    // 0x122cb8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x122CB8u;
    SET_GPR_U32(ctx, 31, 0x122CC0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x122CB8u, 0x122CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CC0u;
label_122cc0:
    // 0x122cc0: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x122CC0u;
    {
        const bool branch_taken_0x122cc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x122cc0) {
            ctx->pc = 0x122D1Cu;
            goto label_122d1c;
        }
    }
    ctx->pc = 0x122CC8u;
    // 0x122cc8: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x122cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x122ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122cd0: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x122cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x122cd4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x122cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x122cd8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x122cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x122cdc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x122cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x122ce0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x122ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x122ce4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x122ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x122ce8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x122CE8u;
    SET_GPR_U32(ctx, 31, 0x122CF0u);
    ctx->pc = 0x122CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122CE8u;
    // 0x122cec: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x122CE8u, 0x122CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CF0u;
label_122cf0:
    // 0x122cf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x122cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122cf4: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x122CF4u;
    {
        const bool branch_taken_0x122cf4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x122CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CF4u;
        // 0x122cf8: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122cf4) {
            ctx->pc = 0x122D18u;
            goto label_122d18;
        }
    }
    ctx->pc = 0x122CFCu;
    // 0x122cfc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122d00: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x122d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x122d04: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122d08: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x122D08u;
    SET_GPR_U32(ctx, 31, 0x122D10u);
    ctx->pc = 0x122D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D08u;
    // 0x122d0c: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x122D08u, 0x122D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D10u;
label_122d10:
    // 0x122d10: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x122D10u;
    SET_GPR_U32(ctx, 31, 0x122D18u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x122D10u, 0x122D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D18u;
label_122d18:
    // 0x122d18: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x122d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_122d1c:
    // 0x122d1c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x122d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x122d20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x122d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x122d24: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x122D24u;
    {
        const bool branch_taken_0x122d24 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x122D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D24u;
        // 0x122d28: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d24) {
            ctx->pc = 0x122D60u;
            goto label_122d60;
        }
    }
    ctx->pc = 0x122D2Cu;
    // 0x122d2c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x122d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x122d30: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x122d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x122d34: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x122d34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x122d38: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x122D38u;
    {
        const bool branch_taken_0x122d38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x122D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D38u;
        // 0x122d3c: 0x27a2007c  addiu       $v0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d38) {
            ctx->pc = 0x122D44u;
            goto label_122d44;
        }
    }
    ctx->pc = 0x122D40u;
    // 0x122d40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x122d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122d44:
    // 0x122d44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x122d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122d48: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x122d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x122d4c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x122d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x122d50: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x122D50u;
    SET_GPR_U32(ctx, 31, 0x122D58u);
    ctx->pc = 0x122D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D50u;
    // 0x122d54: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x122D50u, 0x122D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D58u;
label_122d58:
    // 0x122d58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x122d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x122d5c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x122d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_122d60:
    // 0x122d60: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x122d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d64: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x122d64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
label_122d68:
    // 0x122d68: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x122d68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x122d6c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x122d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x122d70: 0xb3082b  sltu        $at, $a1, $s3
    ctx->pc = 0x122d70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x122d74: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x122D74u;
    {
        const bool branch_taken_0x122d74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x122D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D74u;
        // 0x122d78: 0xb3082b  sltu        $at, $a1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d74) {
            ctx->pc = 0x122E8Cu;
            goto label_122e8c;
        }
    }
    ctx->pc = 0x122D7Cu;
    // 0x122d7c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x122D7Cu;
    {
        const bool branch_taken_0x122d7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x122d7c) {
            ctx->pc = 0x122DA0u;
            goto label_122da0;
        }
    }
    ctx->pc = 0x122D84u;
label_122d84:
    // 0x122d84: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x122d84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x122d88: 0xb3182b  sltu        $v1, $a1, $s3
    ctx->pc = 0x122d88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x122d8c: 0x0  nop
    ctx->pc = 0x122d8cu;
    // NOP
    // 0x122d90: 0x0  nop
    ctx->pc = 0x122d90u;
    // NOP
    // 0x122d94: 0x0  nop
    ctx->pc = 0x122d94u;
    // NOP
    // 0x122d98: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x122D98u;
    {
        const bool branch_taken_0x122d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x122d98) {
            ctx->pc = 0x122D84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122d84;
        }
    }
    ctx->pc = 0x122DA0u;
label_122da0:
    // 0x122da0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x122da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x122da4: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x122da4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x122da8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x122DA8u;
    {
        const bool branch_taken_0x122da8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x122DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DA8u;
        // 0x122dac: 0x24a40003  addiu       $a0, $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122da8) {
            ctx->pc = 0x122DB8u;
            goto label_122db8;
        }
    }
    ctx->pc = 0x122DB0u;
    // 0x122db0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x122db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122db4: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x122db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_122db8:
    // 0x122db8: 0x30a30003  andi        $v1, $a1, 0x3
    ctx->pc = 0x122db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x122dbc: 0x838023  subu        $s0, $a0, $v1
    ctx->pc = 0x122dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x122dc0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x122dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x122dc4: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x122dc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x122dc8: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x122DC8u;
    {
        const bool branch_taken_0x122dc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x122DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DC8u;
        // 0x122dcc: 0x70082b  sltu        $at, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122dc8) {
            ctx->pc = 0x122E2Cu;
            goto label_122e2c;
        }
    }
    ctx->pc = 0x122DD0u;
    // 0x122dd0: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x122dd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x122dd4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x122DD4u;
    SET_GPR_U32(ctx, 31, 0x122DDCu);
    ctx->pc = 0x122DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122DD4u;
    // 0x122dd8: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x122DD4u, 0x122DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122DDCu;
label_122ddc:
    // 0x122ddc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x122ddcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122de0: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x122DE0u;
    {
        const bool branch_taken_0x122de0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x122DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DE0u;
        // 0x122de4: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122de0) {
            ctx->pc = 0x122E04u;
            goto label_122e04;
        }
    }
    ctx->pc = 0x122DE8u;
    // 0x122de8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122dec: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x122decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x122df0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122df4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x122DF4u;
    SET_GPR_U32(ctx, 31, 0x122DFCu);
    ctx->pc = 0x122DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122DF4u;
    // 0x122df8: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x122DF4u, 0x122DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122DFCu;
label_122dfc:
    // 0x122dfc: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x122DFCu;
    SET_GPR_U32(ctx, 31, 0x122E04u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x122DFCu, 0x122E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E04u;
label_122e04:
    // 0x122e04: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x122e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    // 0x122e08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x122e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e0c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x122e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x122e10: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x122e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x122e14: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x122E14u;
    SET_GPR_U32(ctx, 31, 0x122E1Cu);
    ctx->pc = 0x122E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E14u;
    // 0x122e18: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x122E14u, 0x122E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E1Cu;
label_122e1c:
    // 0x122e1c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x122E1Cu;
    SET_GPR_U32(ctx, 31, 0x122E24u);
    ctx->pc = 0x122E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E1Cu;
    // 0x122e20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x122E1Cu, 0x122E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E24u;
label_122e24:
    // 0x122e24: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x122E24u;
    {
        const bool branch_taken_0x122e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E24u;
        // 0x122e28: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e24) {
            ctx->pc = 0x122E8Cu;
            goto label_122e8c;
        }
    }
    ctx->pc = 0x122E2Cu;
label_122e2c:
    // 0x122e2c: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x122E2Cu;
    {
        const bool branch_taken_0x122e2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x122e2c) {
            ctx->pc = 0x122E8Cu;
            goto label_122e8c;
        }
    }
    ctx->pc = 0x122E34u;
    // 0x122e34: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x122e34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x122e38: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x122E38u;
    SET_GPR_U32(ctx, 31, 0x122E40u);
    ctx->pc = 0x122E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E38u;
    // 0x122e3c: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x122E38u, 0x122E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E40u;
label_122e40:
    // 0x122e40: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x122e40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e44: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x122E44u;
    {
        const bool branch_taken_0x122e44 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x122E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E44u;
        // 0x122e48: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e44) {
            ctx->pc = 0x122E68u;
            goto label_122e68;
        }
    }
    ctx->pc = 0x122E4Cu;
    // 0x122e4c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122e50: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x122e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x122e54: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122e58: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x122E58u;
    SET_GPR_U32(ctx, 31, 0x122E60u);
    ctx->pc = 0x122E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E58u;
    // 0x122e5c: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x122E58u, 0x122E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E60u;
label_122e60:
    // 0x122e60: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x122E60u;
    SET_GPR_U32(ctx, 31, 0x122E68u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x122E60u, 0x122E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E68u;
label_122e68:
    // 0x122e68: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x122e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    // 0x122e6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x122e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x122e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x122e74: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x122e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x122e78: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x122E78u;
    SET_GPR_U32(ctx, 31, 0x122E80u);
    ctx->pc = 0x122E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E78u;
    // 0x122e7c: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x122E78u, 0x122E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E80u;
label_122e80:
    // 0x122e80: 0xc0401a4  jal         func_100690
    ctx->pc = 0x122E80u;
    SET_GPR_U32(ctx, 31, 0x122E88u);
    ctx->pc = 0x122E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E80u;
    // 0x122e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x122E80u, 0x122E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E88u;
label_122e88:
    // 0x122e88: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x122e88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_122e8c:
    // 0x122e8c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x122e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x122e90: 0x93848050  lbu         $a0, -0x7FB0($gp)
    ctx->pc = 0x122e90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934608)));
    // 0x122e94: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x122e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x122e98: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x122e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x122e9c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x122ea0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x122ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x122ea4: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x122ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x122ea8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x122ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x122eac: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x122eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x122eb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x122EB0u;
    {
        const bool branch_taken_0x122eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x122eb0) {
            ctx->pc = 0x122EC0u;
            goto label_122ec0;
        }
    }
    ctx->pc = 0x122EB8u;
    // 0x122eb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x122EB8u;
    {
        const bool branch_taken_0x122eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EB8u;
        // 0x122ebc: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122eb8) {
            ctx->pc = 0x122EC8u;
            goto label_122ec8;
        }
    }
    ctx->pc = 0x122EC0u;
label_122ec0:
    // 0x122ec0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x122ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122ec4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x122ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_122ec8:
    // 0x122ec8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x122ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x122ecc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x122eccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x122ed0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x122ed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122ed4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x122ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122ed8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x122ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122edc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x122edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122ee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x122ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x122EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EE4u;
        // 0x122ee8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122EECu;
}
