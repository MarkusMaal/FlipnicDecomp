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

// Function: entry_00170e64
// Address: 0x170e64 - 0x170ed4
void entry_00170e64_0x170e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170e64_0x170e64");
#endif

    switch (ctx->pc) {
        case 0x170eccu: goto label_170ecc;
        default: break;
    }

    ctx->pc = 0x170e64u;

label_170e64:
    // 0x170e64: 0xe600025c  swc1        $f0, 0x25C($s0)
    ctx->pc = 0x170e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 604), bits); }
label_170e68:
    // 0x170e68: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x170e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
label_170e6c:
    // 0x170e6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170e70:
    // 0x170e70: 0x92030260  lbu         $v1, 0x260($s0)
    ctx->pc = 0x170e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 608)));
label_170e74:
    // 0x170e74: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_170e78:
    if (ctx->pc == 0x170E78u) {
        ctx->pc = 0x170E7Cu;
        goto label_170e7c;
    }
    ctx->pc = 0x170E74u;
    {
        const bool branch_taken_0x170e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170e74) {
            ctx->pc = 0x170ED4u;
            return;
        }
    }
    ctx->pc = 0x170E7Cu;
label_170e7c:
    // 0x170e7c: 0x92020261  lbu         $v0, 0x261($s0)
    ctx->pc = 0x170e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 609)));
label_170e80:
    // 0x170e80: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_170e84:
    if (ctx->pc == 0x170E84u) {
        ctx->pc = 0x170E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E80u;
        // 0x170e84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170E88u;
        goto label_170e88;
    }
    ctx->pc = 0x170E80u;
    {
        const bool branch_taken_0x170e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E80u;
        // 0x170e84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e80) {
            ctx->pc = 0x170ED4u;
            return;
        }
    }
    ctx->pc = 0x170E88u;
label_170e88:
    // 0x170e88: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_170e8c:
    // 0x170e8c: 0xae050230  sw          $a1, 0x230($s0)
    ctx->pc = 0x170e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 5));
label_170e90:
    // 0x170e90: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x170e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_170e94:
    // 0x170e94: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x170e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
label_170e98:
    // 0x170e98: 0xc601025c  lwc1        $f1, 0x25C($s0)
    ctx->pc = 0x170e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170e9c:
    // 0x170e9c: 0xae050270  sw          $a1, 0x270($s0)
    ctx->pc = 0x170e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 5));
label_170ea0:
    // 0x170ea0: 0xe6010274  swc1        $f1, 0x274($s0)
    ctx->pc = 0x170ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_170ea4:
    // 0x170ea4: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x170ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
label_170ea8:
    // 0x170ea8: 0xe4207508  swc1        $f0, 0x7508($at)
    ctx->pc = 0x170ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 29960), bits); }
label_170eac:
    // 0x170eac: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_170eb0:
    // 0x170eb0: 0xe4207500  swc1        $f0, 0x7500($at)
    ctx->pc = 0x170eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 29952), bits); }
label_170eb4:
    // 0x170eb4: 0xa2000261  sb          $zero, 0x261($s0)
    ctx->pc = 0x170eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 609), (uint8_t)GPR_U32(ctx, 0));
label_170eb8:
    // 0x170eb8: 0xa2000260  sb          $zero, 0x260($s0)
    ctx->pc = 0x170eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 608), (uint8_t)GPR_U32(ctx, 0));
label_170ebc:
    // 0x170ebc: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x170ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_170ec0:
    // 0x170ec0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x170ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_170ec4:
    // 0x170ec4: 0x320f809  jalr        $t9
label_170ec8:
    if (ctx->pc == 0x170EC8u) {
        ctx->pc = 0x170EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EC4u;
        // 0x170ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170ECCu;
        goto label_170ecc;
    }
    ctx->pc = 0x170EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x170ECCu);
        ctx->pc = 0x170EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EC4u;
        // 0x170ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170EC4u, 0x170ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170ECCu;
label_170ecc:
    // 0x170ecc: 0x10000033  b           . + 4 + (0x33 << 2)
label_170ed0:
    if (ctx->pc == 0x170ED0u) {
        ctx->pc = 0x170ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170ECCu;
        // 0x170ed0: 0x8e0201d4  lw          $v0, 0x1D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170ED4u;
        goto label_fallthrough_0x170ecc;
    }
    ctx->pc = 0x170ECCu;
    {
        const bool branch_taken_0x170ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170ECCu;
        // 0x170ed0: 0x8e0201d4  lw          $v0, 0x1D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ecc) {
            ctx->pc = 0x170F9Cu;
            return;
        }
    }
label_fallthrough_0x170ecc:
    ctx->pc = 0x170ED4u;
}
