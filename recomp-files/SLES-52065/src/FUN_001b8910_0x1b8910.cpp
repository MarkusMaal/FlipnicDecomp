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

// Function: FUN_001b8910
// Address: 0x1b8910 - 0x1b89a8
void FUN_001b8910_0x1b8910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b8910_0x1b8910");
#endif

    switch (ctx->pc) {
        case 0x1b8954u: goto label_1b8954;
        default: break;
    }

    ctx->pc = 0x1b8910u;

    // 0x1b8910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8914: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1b8914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1b8918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b891c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1b891cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1b8920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b8924: 0x2463b998  addiu       $v1, $v1, -0x4668
    ctx->pc = 0x1b8924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949272));
    // 0x1b8928: 0x2442b988  addiu       $v0, $v0, -0x4678
    ctx->pc = 0x1b8928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949256));
    // 0x1b892c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b892cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b8930: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1b8930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1b8934: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1b8934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1b8938: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1b8938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1b893c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b893cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8940: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1b8940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1b8944: 0x24a52f00  addiu       $a1, $a1, 0x2F00
    ctx->pc = 0x1b8944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12032));
    // 0x1b8948: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x1b8948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x1b894c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1B894Cu;
    SET_GPR_U32(ctx, 31, 0x1B8954u);
    ctx->pc = 0x1B8950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B894Cu;
    // 0x1b8950: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1B894Cu, 0x1B8954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8954u;
label_1b8954:
    // 0x1b8954: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x1b8954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x1b8958: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b8958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b895c: 0xa20000a0  sb          $zero, 0xA0($s0)
    ctx->pc = 0x1b895cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8960: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b8960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8964: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1b8964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x1b8968: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1b8968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1b896c: 0xa20000c0  sb          $zero, 0xC0($s0)
    ctx->pc = 0x1b896cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 192), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8970: 0xa20000c1  sb          $zero, 0xC1($s0)
    ctx->pc = 0x1b8970u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 193), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8974: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b8974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b8978: 0xa20000c2  sb          $zero, 0xC2($s0)
    ctx->pc = 0x1b8978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 194), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b897c: 0xa20000c3  sb          $zero, 0xC3($s0)
    ctx->pc = 0x1b897cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 195), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8980: 0xa20000c4  sb          $zero, 0xC4($s0)
    ctx->pc = 0x1b8980u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 196), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8984: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1b8984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1b8988: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x1b8988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x1b898c: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x1b898cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x1b8990: 0xae030130  sw          $v1, 0x130($s0)
    ctx->pc = 0x1b8990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
    // 0x1b8994: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x1b8994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    // 0x1b8998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b899c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b899cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b89a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B89A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B89A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89A0u;
        // 0x1b89a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B89A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B89A8u;
}
