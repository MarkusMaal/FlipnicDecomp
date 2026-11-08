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

// Function: FUN_00158e30
// Address: 0x158e30 - 0x158f00
void FUN_00158e30_0x158e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158e30_0x158e30");
#endif

    switch (ctx->pc) {
        case 0x158e7cu: goto label_158e7c;
        case 0x158e8cu: goto label_158e8c;
        case 0x158ec0u: goto label_158ec0;
        case 0x158ee0u: goto label_158ee0;
        default: break;
    }

    ctx->pc = 0x158e30u;

    // 0x158e30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x158e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x158e34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x158e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x158e38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x158e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x158e3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x158e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x158e40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158e44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x158e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158e4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x158e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e50: 0xac9101f0  sw          $s1, 0x1F0($a0)
    ctx->pc = 0x158e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 496), GPR_U32(ctx, 17));
    // 0x158e54: 0xa48601f4  sh          $a2, 0x1F4($a0)
    ctx->pc = 0x158e54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 500), (uint16_t)GPR_U32(ctx, 6));
    // 0x158e58: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x158e58u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158e5c: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x158e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158e60: 0xe4800200  swc1        $f0, 0x200($a0)
    ctx->pc = 0x158e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 512), bits); }
    // 0x158e64: 0x8265002a  lb          $a1, 0x2A($s3)
    ctx->pc = 0x158e64u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 42)));
    // 0x158e68: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x158e68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x158e6c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x158E6Cu;
    {
        const bool branch_taken_0x158e6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x158E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E6Cu;
        // 0x158e70: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e6c) {
            ctx->pc = 0x158E84u;
            goto label_158e84;
        }
    }
    ctx->pc = 0x158E74u;
    // 0x158e74: 0xc042570  jal         func_1095C0
    ctx->pc = 0x158E74u;
    SET_GPR_U32(ctx, 31, 0x158E7Cu);
    ctx->pc = 0x158E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158E74u;
    // 0x158e78: 0x24a5fffe  addiu       $a1, $a1, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x158E74u, 0x158E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158E7Cu;
label_158e7c:
    // 0x158e7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x158E7Cu;
    {
        const bool branch_taken_0x158e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E7Cu;
        // 0x158e80: 0x8262002a  lb          $v0, 0x2A($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 42)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e7c) {
            ctx->pc = 0x158E90u;
            goto label_158e90;
        }
    }
    ctx->pc = 0x158E84u;
label_158e84:
    // 0x158e84: 0xc042570  jal         func_1095C0
    ctx->pc = 0x158E84u;
    SET_GPR_U32(ctx, 31, 0x158E8Cu);
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x158E84u, 0x158E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158E8Cu;
label_158e8c:
    // 0x158e8c: 0x8262002a  lb          $v0, 0x2A($s3)
    ctx->pc = 0x158e8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 42)));
label_158e90:
    // 0x158e90: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x158e90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x158e94: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x158E94u;
    {
        const bool branch_taken_0x158e94 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x158e94) {
            ctx->pc = 0x158EACu;
            goto label_158eac;
        }
    }
    ctx->pc = 0x158E9Cu;
    // 0x158e9c: 0x82620029  lb          $v0, 0x29($s3)
    ctx->pc = 0x158e9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x158ea0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x158ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x158ea4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x158EA4u;
    {
        const bool branch_taken_0x158ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EA4u;
        // 0x158ea8: 0xa24201d3  sb          $v0, 0x1D3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ea4) {
            ctx->pc = 0x158EB4u;
            goto label_158eb4;
        }
    }
    ctx->pc = 0x158EACu;
label_158eac:
    // 0x158eac: 0x82620029  lb          $v0, 0x29($s3)
    ctx->pc = 0x158eacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x158eb0: 0xa24201d3  sb          $v0, 0x1D3($s2)
    ctx->pc = 0x158eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 2));
label_158eb4:
    // 0x158eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x158eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158eb8: 0xc05bd00  jal         func_16F400
    ctx->pc = 0x158EB8u;
    SET_GPR_U32(ctx, 31, 0x158EC0u);
    ctx->pc = 0x158EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158EB8u;
    // 0x158ebc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F400u, 0x158EB8u, 0x158EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158EC0u;
label_158ec0:
    // 0x158ec0: 0xa24201f6  sb          $v0, 0x1F6($s2)
    ctx->pc = 0x158ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 502), (uint8_t)GPR_U32(ctx, 2));
    // 0x158ec4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158EC4u;
    {
        const bool branch_taken_0x158ec4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x158EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EC4u;
        // 0x158ec8: 0xa24001f7  sb          $zero, 0x1F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 503), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ec4) {
            ctx->pc = 0x158ED4u;
            goto label_158ed4;
        }
    }
    ctx->pc = 0x158ECCu;
    // 0x158ecc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x158ECCu;
    {
        const bool branch_taken_0x158ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ECCu;
        // 0x158ed0: 0xa24001f8  sb          $zero, 0x1F8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 504), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ecc) {
            ctx->pc = 0x158EE4u;
            goto label_158ee4;
        }
    }
    ctx->pc = 0x158ED4u;
label_158ed4:
    // 0x158ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x158ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ed8: 0xc05bda0  jal         func_16F680
    ctx->pc = 0x158ED8u;
    SET_GPR_U32(ctx, 31, 0x158EE0u);
    ctx->pc = 0x158EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158ED8u;
    // 0x158edc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F680u, 0x158ED8u, 0x158EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158EE0u;
label_158ee0:
    // 0x158ee0: 0xa24201f8  sb          $v0, 0x1F8($s2)
    ctx->pc = 0x158ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 504), (uint8_t)GPR_U32(ctx, 2));
label_158ee4:
    // 0x158ee4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x158ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158ee8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x158ee8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158eec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x158eecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158ef0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158ef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158ef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x158EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EF8u;
        // 0x158efc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158F00u;
}
