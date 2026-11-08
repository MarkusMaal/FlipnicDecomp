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

// Function: FUN_001f3df0
// Address: 0x1f3df0 - 0x1f3fe4
void FUN_001f3df0_0x1f3df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f3df0_0x1f3df0");
#endif

    switch (ctx->pc) {
        case 0x1f3e40u: goto label_1f3e40;
        case 0x1f3e64u: goto label_1f3e64;
        case 0x1f3e6cu: goto label_1f3e6c;
        case 0x1f3e80u: goto label_1f3e80;
        case 0x1f3e98u: goto label_1f3e98;
        case 0x1f3eccu: goto label_1f3ecc;
        case 0x1f3ed4u: goto label_1f3ed4;
        case 0x1f3ee8u: goto label_1f3ee8;
        case 0x1f3f00u: goto label_1f3f00;
        case 0x1f3f48u: goto label_1f3f48;
        case 0x1f3f50u: goto label_1f3f50;
        case 0x1f3f60u: goto label_1f3f60;
        case 0x1f3f78u: goto label_1f3f78;
        case 0x1f3fa0u: goto label_1f3fa0;
        case 0x1f3fbcu: goto label_1f3fbc;
        default: break;
    }

    ctx->pc = 0x1f3df0u;

    // 0x1f3df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f3df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f3df4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f3df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f3df8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f3df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f3dfc: 0x24844480  addiu       $a0, $a0, 0x4480
    ctx->pc = 0x1f3dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17536));
    // 0x1f3e00: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f3e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f3e04: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x1f3e04u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x1f3e08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f3e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f3e0c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f3e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f3e10: 0x2650aab8  addiu       $s0, $s2, -0x5548
    ctx->pc = 0x1f3e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945464));
    // 0x1f3e14: 0x8e45aab8  lw          $a1, -0x5548($s2)
    ctx->pc = 0x1f3e14u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x21AAB8u));
    // 0x1f3e18: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1f3e18u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x21AABCu));
    // 0x1f3e1c: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x1f3e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x21AAC0u));
    // 0x1f3e20: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f3e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e24: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x1f3e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1f3e28: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x1f3e28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1f3e2c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f3e2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e30: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1f3e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f3e34: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1f3e34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1f3e38: 0xc07b5a2  jal         func_1ED688
    ctx->pc = 0x1F3E38u;
    SET_GPR_U32(ctx, 31, 0x1F3E40u);
    ctx->pc = 0x1F3E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3E38u;
    // 0x1f3e3c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED688u, 0x1F3E38u, 0x1F3E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E40u;
label_1f3e40:
    // 0x1f3e40: 0x40803000  mtc0        $zero, Wired
    ctx->pc = 0x1f3e40u;
    ctx->cop0_wired = GPR_U32(ctx, 0) & 0x3F; ctx->cop0_random = 47;
    // 0x1f3e44: 0x40f  sync.p
    ctx->pc = 0x1f3e44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1f3e48: 0x8e51aab8  lw          $s1, -0x5548($s2)
    ctx->pc = 0x1f3e48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945464)));
    // 0x1f3e4c: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x1f3e4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1f3e50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F3E50u;
    {
        const bool branch_taken_0x1f3e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E50u;
        // 0x1f3e54: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3e50) {
            ctx->pc = 0x1F3E6Cu;
            goto label_1f3e6c;
        }
    }
    ctx->pc = 0x1F3E58u;
    // 0x1f3e58: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f3e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f3e5c: 0xc07b5a2  jal         func_1ED688
    ctx->pc = 0x1F3E5Cu;
    SET_GPR_U32(ctx, 31, 0x1F3E64u);
    ctx->pc = 0x1F3E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3E5Cu;
    // 0x1f3e60: 0x248444b8  addiu       $a0, $a0, 0x44B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED688u, 0x1F3E5Cu, 0x1F3E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E64u;
label_1f3e64:
    // 0x1f3e64: 0xc07d274  jal         func_1F49D0
    ctx->pc = 0x1F3E64u;
    SET_GPR_U32(ctx, 31, 0x1F3E6Cu);
    ctx->pc = 0x1F3E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3E64u;
    // 0x1f3e68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F49D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F49D0u, 0x1F3E64u, 0x1F3E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E6Cu;
label_1f3e6c:
    // 0x1f3e6c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1f3e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f3e70: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F3E70u;
    {
        const bool branch_taken_0x1f3e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E70u;
        // 0x1f3e74: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3e70) {
            ctx->pc = 0x1F3EA8u;
            goto label_1f3ea8;
        }
    }
    ctx->pc = 0x1F3E78u;
    // 0x1f3e78: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f3e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f3e7c: 0x0  nop
    ctx->pc = 0x1f3e7cu;
    // NOP
label_1f3e80:
    // 0x1f3e80: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1f3e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e84: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1f3e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f3e88: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1f3e88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f3e8c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1f3e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f3e90: 0xc07cf44  jal         func_1F3D10
    ctx->pc = 0x1F3E90u;
    SET_GPR_U32(ctx, 31, 0x1F3E98u);
    ctx->pc = 0x1F3E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3E90u;
    // 0x1f3e94: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3D10u, 0x1F3E90u, 0x1F3E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E98u;
label_1f3e98:
    // 0x1f3e98: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1f3e98u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1f3e9c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1f3e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f3ea0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F3EA0u;
    {
        const bool branch_taken_0x1f3ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ea0) {
            ctx->pc = 0x1F3EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3EA0u;
            // 0x1f3ea4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3e80;
        }
    }
    ctx->pc = 0x1F3EA8u;
label_1f3ea8:
    // 0x1f3ea8: 0x2650aab8  addiu       $s0, $s2, -0x5548
    ctx->pc = 0x1f3ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945464));
    // 0x1f3eac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f3eb0: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1f3eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x1f3eb4: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x1f3eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1f3eb8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3EB8u;
    {
        const bool branch_taken_0x1f3eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3EB8u;
        // 0x1f3ebc: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3eb8) {
            ctx->pc = 0x1F3ED8u;
            goto label_1f3ed8;
        }
    }
    ctx->pc = 0x1F3EC0u;
    // 0x1f3ec0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f3ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f3ec4: 0xc07b5a2  jal         func_1ED688
    ctx->pc = 0x1F3EC4u;
    SET_GPR_U32(ctx, 31, 0x1F3ECCu);
    ctx->pc = 0x1F3EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3EC4u;
    // 0x1f3ec8: 0x248444d0  addiu       $a0, $a0, 0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED688u, 0x1F3EC4u, 0x1F3ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3ECCu;
label_1f3ecc:
    // 0x1f3ecc: 0xc07d274  jal         func_1F49D0
    ctx->pc = 0x1F3ECCu;
    SET_GPR_U32(ctx, 31, 0x1F3ED4u);
    ctx->pc = 0x1F3ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3ECCu;
    // 0x1f3ed0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F49D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F49D0u, 0x1F3ECCu, 0x1F3ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3ED4u;
label_1f3ed4:
    // 0x1f3ed4: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1f3ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1f3ed8:
    // 0x1f3ed8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F3ED8u;
    {
        const bool branch_taken_0x1f3ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3ED8u;
        // 0x1f3edc: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ed8) {
            ctx->pc = 0x1F3F10u;
            goto label_1f3f10;
        }
    }
    ctx->pc = 0x1F3EE0u;
    // 0x1f3ee0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f3ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f3ee4: 0x0  nop
    ctx->pc = 0x1f3ee4u;
    // NOP
label_1f3ee8:
    // 0x1f3ee8: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1f3ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3eec: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1f3eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f3ef0: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1f3ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f3ef4: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1f3ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f3ef8: 0xc07cf44  jal         func_1F3D10
    ctx->pc = 0x1F3EF8u;
    SET_GPR_U32(ctx, 31, 0x1F3F00u);
    ctx->pc = 0x1F3EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3EF8u;
    // 0x1f3efc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3D10u, 0x1F3EF8u, 0x1F3F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F00u;
label_1f3f00:
    // 0x1f3f00: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1f3f00u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1f3f04: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1f3f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f3f08: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F3F08u;
    {
        const bool branch_taken_0x1f3f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3f08) {
            ctx->pc = 0x1F3F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3F08u;
            // 0x1f3f0c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3ee8;
        }
    }
    ctx->pc = 0x1F3F10u;
label_1f3f10:
    // 0x1f3f10: 0x2650aab8  addiu       $s0, $s2, -0x5548
    ctx->pc = 0x1f3f10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945464));
    // 0x1f3f14: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x1f3f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
    // 0x1f3f18: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x1f3f18u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
    // 0x1f3f1c: 0x40f  sync.p
    ctx->pc = 0x1f3f1cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1f3f20: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f3f24: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F3F24u;
    {
        const bool branch_taken_0x1f3f24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f3f24) {
            ctx->pc = 0x1F3F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3F24u;
            // 0x1f3f28: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3F8Cu;
            goto label_1f3f8c;
        }
    }
    ctx->pc = 0x1F3F2Cu;
    // 0x1f3f2c: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1f3f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x1f3f30: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x1f3f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1f3f34: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3F34u;
    {
        const bool branch_taken_0x1f3f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F34u;
        // 0x1f3f38: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f34) {
            ctx->pc = 0x1F3F54u;
            goto label_1f3f54;
        }
    }
    ctx->pc = 0x1F3F3Cu;
    // 0x1f3f3c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f3f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f3f40: 0xc07b5a2  jal         func_1ED688
    ctx->pc = 0x1F3F40u;
    SET_GPR_U32(ctx, 31, 0x1F3F48u);
    ctx->pc = 0x1F3F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F40u;
    // 0x1f3f44: 0x248444e8  addiu       $a0, $a0, 0x44E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED688u, 0x1F3F40u, 0x1F3F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F48u;
label_1f3f48:
    // 0x1f3f48: 0xc07d274  jal         func_1F49D0
    ctx->pc = 0x1F3F48u;
    SET_GPR_U32(ctx, 31, 0x1F3F50u);
    ctx->pc = 0x1F3F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F48u;
    // 0x1f3f4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F49D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F49D0u, 0x1F3F48u, 0x1F3F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F50u;
label_1f3f50:
    // 0x1f3f50: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1f3f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1f3f54:
    // 0x1f3f54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F3F54u;
    {
        const bool branch_taken_0x1f3f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F54u;
        // 0x1f3f58: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f54) {
            ctx->pc = 0x1F3F88u;
            goto label_1f3f88;
        }
    }
    ctx->pc = 0x1F3F5Cu;
    // 0x1f3f5c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f3f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f3f60:
    // 0x1f3f60: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1f3f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3f64: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1f3f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f3f68: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1f3f68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f3f6c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1f3f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f3f70: 0xc07cf44  jal         func_1F3D10
    ctx->pc = 0x1F3F70u;
    SET_GPR_U32(ctx, 31, 0x1F3F78u);
    ctx->pc = 0x1F3F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F70u;
    // 0x1f3f74: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3D10u, 0x1F3F70u, 0x1F3F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F78u;
label_1f3f78:
    // 0x1f3f78: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1f3f78u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1f3f7c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1f3f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f3f80: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F3F80u;
    {
        const bool branch_taken_0x1f3f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3f80) {
            ctx->pc = 0x1F3F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3F80u;
            // 0x1f3f84: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3f60;
        }
    }
    ctx->pc = 0x1F3F88u;
label_1f3f88:
    // 0x1f3f88: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x1f3f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f8c:
    // 0x1f3f8c: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1f3f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1f3f90: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F3F90u;
    {
        const bool branch_taken_0x1f3f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F90u;
        // 0x1f3f94: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f90) {
            ctx->pc = 0x1F3FC8u;
            goto label_1f3fc8;
        }
    }
    ctx->pc = 0x1F3F98u;
    // 0x1f3f98: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x1f3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
    // 0x1f3f9c: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1f3f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_1f3fa0:
    // 0x1f3fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3fa4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f3fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3fa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3fac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f3facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3fb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f3fb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3fb4: 0xc07cf44  jal         func_1F3D10
    ctx->pc = 0x1F3FB4u;
    SET_GPR_U32(ctx, 31, 0x1F3FBCu);
    ctx->pc = 0x1F3FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3FB4u;
    // 0x1f3fb8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3D10u, 0x1F3FB4u, 0x1F3FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3FBCu;
label_1f3fbc:
    // 0x1f3fbc: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1f3fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1f3fc0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F3FC0u;
    {
        const bool branch_taken_0x1f3fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FC0u;
        // 0x1f3fc4: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3fc0) {
            ctx->pc = 0x1F3FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3fa0;
        }
    }
    ctx->pc = 0x1F3FC8u;
label_1f3fc8:
    // 0x1f3fc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f3fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3fcc: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x1f3fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3fd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f3fd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3fd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f3fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3fd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f3fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FDCu;
        // 0x1f3fe0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3FE4u;
}
