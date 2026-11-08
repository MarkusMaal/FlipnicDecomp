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

// Function: FUN_0015fd30
// Address: 0x15fd30 - 0x15fdcc
void FUN_0015fd30_0x15fd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015fd30_0x15fd30");
#endif

    switch (ctx->pc) {
        case 0x15fd54u: goto label_15fd54;
        case 0x15fd98u: goto label_15fd98;
        case 0x15fdacu: goto label_15fdac;
        default: break;
    }

    ctx->pc = 0x15fd30u;

    // 0x15fd30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15fd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15fd34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15fd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15fd38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15fd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15fd3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15fd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15fd40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15fd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15fd44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15fd44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fd48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15fd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15fd4c: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x15FD4Cu;
    SET_GPR_U32(ctx, 31, 0x15FD54u);
    ctx->pc = 0x15FD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FD4Cu;
    // 0x15fd50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x15FD4Cu, 0x15FD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FD54u;
label_15fd54:
    // 0x15fd54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15fd54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fd58: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15FD58u;
    {
        const bool branch_taken_0x15fd58 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x15fd58) {
            ctx->pc = 0x15FD68u;
            goto label_15fd68;
        }
    }
    ctx->pc = 0x15FD60u;
    // 0x15fd60: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15FD60u;
    {
        const bool branch_taken_0x15fd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD60u;
        // 0x15fd64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fd60) {
            ctx->pc = 0x15FDB0u;
            goto label_15fdb0;
        }
    }
    ctx->pc = 0x15FD68u;
label_15fd68:
    // 0x15fd68: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x15fd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15fd6c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x15fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x15fd70: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x15fd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15fd74: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x15fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15fd78: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x15fd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x15fd7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15fd80: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x15fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15fd84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15fd88: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x15fd88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15fd8c: 0x26530040  addiu       $s3, $s2, 0x40
    ctx->pc = 0x15fd8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x15fd90: 0xc056270  jal         func_1589C0
    ctx->pc = 0x15FD90u;
    SET_GPR_U32(ctx, 31, 0x15FD98u);
    ctx->pc = 0x15FD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FD90u;
    // 0x15fd94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1589C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1589C0u, 0x15FD90u, 0x15FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FD98u;
label_15fd98:
    // 0x15fd98: 0x26042c00  addiu       $a0, $s0, 0x2C00
    ctx->pc = 0x15fd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11264));
    // 0x15fd9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15fd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fda0: 0x26470310  addiu       $a3, $s2, 0x310
    ctx->pc = 0x15fda0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
    // 0x15fda4: 0xc058138  jal         func_1604E0
    ctx->pc = 0x15FDA4u;
    SET_GPR_U32(ctx, 31, 0x15FDACu);
    ctx->pc = 0x15FDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FDA4u;
    // 0x15fda8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1604E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1604E0u, 0x15FDA4u, 0x15FDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FDACu;
label_15fdac:
    // 0x15fdac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15fdacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15fdb0:
    // 0x15fdb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15fdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15fdb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15fdb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15fdb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15fdb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15fdbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15fdbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fdc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15fdc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x15FDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FDC4u;
        // 0x15fdc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FDCCu;
}
