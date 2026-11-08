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

// Function: FUN_0014e910
// Address: 0x14e910 - 0x14ea10
void FUN_0014e910_0x14e910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014e910_0x14e910");
#endif

    switch (ctx->pc) {
        case 0x14e97cu: goto label_14e97c;
        case 0x14e984u: goto label_14e984;
        case 0x14e998u: goto label_14e998;
        case 0x14e9b8u: goto label_14e9b8;
        case 0x14e9c0u: goto label_14e9c0;
        case 0x14e9d0u: goto label_14e9d0;
        default: break;
    }

    ctx->pc = 0x14e910u;

    // 0x14e910: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14e910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14e914: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14e914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14e918: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14e918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14e91c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14e91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14e920: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14e920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14e924: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14e924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14e928: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14e928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e92c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14e92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14e930: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14e930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e934: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x14e934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e938: 0x2111823  subu        $v1, $s0, $s1
    ctx->pc = 0x14e938u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x14e93c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E93Cu;
    {
        const bool branch_taken_0x14e93c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x14E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E93Cu;
        // 0x14e940: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e93c) {
            ctx->pc = 0x14E94Cu;
            goto label_14e94c;
        }
    }
    ctx->pc = 0x14E944u;
    // 0x14e944: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x14e944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x14e948: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x14e948u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
label_14e94c:
    // 0x14e94c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x14e94cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x14e950: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x14e950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x14e954: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x14e954u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x14e958: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14e958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14e95c: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x14e95cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x14e960: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x14E960u;
    {
        const bool branch_taken_0x14e960 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E960u;
        // 0x14e964: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e960) {
            ctx->pc = 0x14E984u;
            goto label_14e984;
        }
    }
    ctx->pc = 0x14E968u;
    // 0x14e968: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14e968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14e96c: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14e970: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14e970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14e974: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14E974u;
    SET_GPR_U32(ctx, 31, 0x14E97Cu);
    ctx->pc = 0x14E978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E974u;
    // 0x14e978: 0x24a5f2e0  addiu       $a1, $a1, -0xD20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14E974u, 0x14E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E97Cu;
label_14e97c:
    // 0x14e97c: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14E97Cu;
    SET_GPR_U32(ctx, 31, 0x14E984u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14E97Cu, 0x14E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E984u;
label_14e984:
    // 0x14e984: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14e984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14e988: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x14E988u;
    {
        const bool branch_taken_0x14e988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E988u;
        // 0x14e98c: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e988) {
            ctx->pc = 0x14E9ECu;
            goto label_14e9ec;
        }
    }
    ctx->pc = 0x14E990u;
    // 0x14e990: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14E990u;
    SET_GPR_U32(ctx, 31, 0x14E998u);
    ctx->pc = 0x14E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E990u;
    // 0x14e994: 0x26530008  addiu       $s3, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14E990u, 0x14E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E998u;
label_14e998:
    // 0x14e998: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14e998u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e99c: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x14E99Cu;
    {
        const bool branch_taken_0x14e99c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E99Cu;
        // 0x14e9a0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e99c) {
            ctx->pc = 0x14E9C0u;
            goto label_14e9c0;
        }
    }
    ctx->pc = 0x14E9A4u;
    // 0x14e9a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14e9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14e9a8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14e9ac: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14e9b0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14E9B0u;
    SET_GPR_U32(ctx, 31, 0x14E9B8u);
    ctx->pc = 0x14E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9B0u;
    // 0x14e9b4: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14E9B0u, 0x14E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9B8u;
label_14e9b8:
    // 0x14e9b8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14E9B8u;
    SET_GPR_U32(ctx, 31, 0x14E9C0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14E9B8u, 0x14E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9C0u;
label_14e9c0:
    // 0x14e9c0: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x14e9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x14e9c4: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x14e9c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14e9c8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x14E9C8u;
    {
        const bool branch_taken_0x14e9c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9C8u;
        // 0x14e9cc: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9c8) {
            ctx->pc = 0x14E9ECu;
            goto label_14e9ec;
        }
    }
    ctx->pc = 0x14E9D0u;
label_14e9d0:
    // 0x14e9d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14e9d4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x14e9d8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x14e9d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x14e9dc: 0x230182b  sltu        $v1, $s1, $s0
    ctx->pc = 0x14e9dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14e9e0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x14e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x14e9e4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14E9E4u;
    {
        const bool branch_taken_0x14e9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e9e4) {
            ctx->pc = 0x14E9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e9d0;
        }
    }
    ctx->pc = 0x14E9ECu;
label_14e9ec:
    // 0x14e9ec: 0x0  nop
    ctx->pc = 0x14e9ecu;
    // NOP
    // 0x14e9f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14e9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14e9f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14e9f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e9f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14e9f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e9fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14e9fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ea00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14ea00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ea04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ea04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ea08: 0x3e00008  jr          $ra
    ctx->pc = 0x14EA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA08u;
        // 0x14ea0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EA10u;
}
