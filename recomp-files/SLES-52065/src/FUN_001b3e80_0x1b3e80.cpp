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

// Function: FUN_001b3e80
// Address: 0x1b3e80 - 0x1b3fb8
void FUN_001b3e80_0x1b3e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b3e80_0x1b3e80");
#endif

    switch (ctx->pc) {
        case 0x1b3ed4u: goto label_1b3ed4;
        case 0x1b3ef0u: goto label_1b3ef0;
        case 0x1b3f0cu: goto label_1b3f0c;
        case 0x1b3f20u: goto label_1b3f20;
        case 0x1b3f30u: goto label_1b3f30;
        case 0x1b3f38u: goto label_1b3f38;
        case 0x1b3f4cu: goto label_1b3f4c;
        case 0x1b3f50u: goto label_1b3f50;
        case 0x1b3f5cu: goto label_1b3f5c;
        case 0x1b3f98u: goto label_1b3f98;
        default: break;
    }

    ctx->pc = 0x1b3e80u;

    // 0x1b3e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b3e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b3e84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b3e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b3e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b3e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b3e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b3e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3e90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b3e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b3e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e98: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B3E98u;
    {
        const bool branch_taken_0x1b3e98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3e98) {
            ctx->pc = 0x1B3EF8u;
            goto label_1b3ef8;
        }
    }
    ctx->pc = 0x1B3EA0u;
    // 0x1b3ea0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b3ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3ea4: 0x10c2000d  beq         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B3EA4u;
    {
        const bool branch_taken_0x1b3ea4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3ea4) {
            ctx->pc = 0x1B3EDCu;
            goto label_1b3edc;
        }
    }
    ctx->pc = 0x1B3EACu;
    // 0x1b3eac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3eb0: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3EB0u;
    {
        const bool branch_taken_0x1b3eb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3eb0) {
            ctx->pc = 0x1B3EC0u;
            goto label_1b3ec0;
        }
    }
    ctx->pc = 0x1B3EB8u;
    // 0x1b3eb8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B3EB8u;
    {
        const bool branch_taken_0x1b3eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3eb8) {
            ctx->pc = 0x1B3EF8u;
            goto label_1b3ef8;
        }
    }
    ctx->pc = 0x1B3EC0u;
label_1b3ec0:
    // 0x1b3ec0: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1b3ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1b3ec4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b3ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b3ec8: 0x24a50cd0  addiu       $a1, $a1, 0xCD0
    ctx->pc = 0x1b3ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3280));
    // 0x1b3ecc: 0xc080702  jal         func_201C08
    ctx->pc = 0x1B3ECCu;
    SET_GPR_U32(ctx, 31, 0x1B3ED4u);
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1B3ECCu, 0x1B3ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3ED4u;
label_1b3ed4:
    // 0x1b3ed4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3ED4u;
    {
        const bool branch_taken_0x1b3ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3ed4) {
            ctx->pc = 0x1B3EFCu;
            goto label_1b3efc;
        }
    }
    ctx->pc = 0x1B3EDCu;
label_1b3edc:
    // 0x1b3edc: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1b3edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1b3ee0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b3ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b3ee4: 0x24a50cd8  addiu       $a1, $a1, 0xCD8
    ctx->pc = 0x1b3ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3288));
    // 0x1b3ee8: 0xc080702  jal         func_201C08
    ctx->pc = 0x1B3EE8u;
    SET_GPR_U32(ctx, 31, 0x1B3EF0u);
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1B3EE8u, 0x1B3EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3EF0u;
label_1b3ef0:
    // 0x1b3ef0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3EF0u;
    {
        const bool branch_taken_0x1b3ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3ef0) {
            ctx->pc = 0x1B3EFCu;
            goto label_1b3efc;
        }
    }
    ctx->pc = 0x1B3EF8u;
label_1b3ef8:
    // 0x1b3ef8: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x1b3ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
label_1b3efc:
    // 0x1b3efc: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1b3efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1b3f00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b3f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f04: 0xc080664  jal         func_201990
    ctx->pc = 0x1B3F04u;
    SET_GPR_U32(ctx, 31, 0x1B3F0Cu);
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1B3F04u, 0x1B3F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F0Cu;
label_1b3f0c:
    // 0x1b3f0c: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1b3f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1b3f10: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b3f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b3f14: 0x24a50ce0  addiu       $a1, $a1, 0xCE0
    ctx->pc = 0x1b3f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3296));
    // 0x1b3f18: 0xc080664  jal         func_201990
    ctx->pc = 0x1B3F18u;
    SET_GPR_U32(ctx, 31, 0x1B3F20u);
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1B3F18u, 0x1B3F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F20u;
label_1b3f20:
    // 0x1b3f20: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1b3f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1b3f24: 0x26250048  addiu       $a1, $s1, 0x48
    ctx->pc = 0x1b3f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x1b3f28: 0xc080664  jal         func_201990
    ctx->pc = 0x1B3F28u;
    SET_GPR_U32(ctx, 31, 0x1B3F30u);
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1B3F28u, 0x1B3F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F30u;
label_1b3f30:
    // 0x1b3f30: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B3F30u;
    SET_GPR_U32(ctx, 31, 0x1B3F38u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B3F30u, 0x1B3F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F38u;
label_1b3f38:
    // 0x1b3f38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f40: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x1b3f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1b3f44: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1B3F44u;
    SET_GPR_U32(ctx, 31, 0x1B3F4Cu);
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x1B3F44u, 0x1B3F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F4Cu;
label_1b3f4c:
    // 0x1b3f4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b3f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1b3f50:
    // 0x1b3f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f54: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B3F54u;
    SET_GPR_U32(ctx, 31, 0x1B3F5Cu);
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B3F54u, 0x1B3F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F5Cu;
label_1b3f5c:
    // 0x1b3f5c: 0x0  nop
    ctx->pc = 0x1b3f5cu;
    // NOP
    // 0x1b3f60: 0x0  nop
    ctx->pc = 0x1b3f60u;
    // NOP
    // 0x1b3f64: 0x0  nop
    ctx->pc = 0x1b3f64u;
    // NOP
    // 0x1b3f68: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B3F68u;
    {
        const bool branch_taken_0x1b3f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f68) {
            ctx->pc = 0x1B3F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3f50;
        }
    }
    ctx->pc = 0x1B3F70u;
    // 0x1b3f70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b3f74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3F74u;
    {
        const bool branch_taken_0x1b3f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f74) {
            ctx->pc = 0x1B3F88u;
            goto label_1b3f88;
        }
    }
    ctx->pc = 0x1B3F7Cu;
    // 0x1b3f7c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1b3f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1b3f80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3F80u;
    {
        const bool branch_taken_0x1b3f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f80) {
            ctx->pc = 0x1B3F9Cu;
            goto label_1b3f9c;
        }
    }
    ctx->pc = 0x1B3F88u;
label_1b3f88:
    // 0x1b3f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f8c: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x1b3f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1b3f90: 0xc047988  jal         func_11E620
    ctx->pc = 0x1B3F90u;
    SET_GPR_U32(ctx, 31, 0x1B3F98u);
    ctx->pc = 0x11E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E620u, 0x1B3F90u, 0x1B3F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F98u;
label_1b3f98:
    // 0x1b3f98: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1b3f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1b3f9c:
    // 0x1b3f9c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b3fa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b3fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3fa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3fac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b3facu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3FB8u;
}
