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

// Function: FUN_0018a0b0
// Address: 0x18a0b0 - 0x18a158
void FUN_0018a0b0_0x18a0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a0b0_0x18a0b0");
#endif

    ctx->pc = 0x18a0b0u;

    // 0x18a0b0: 0x8f858348  lw          $a1, -0x7CB8($gp)
    ctx->pc = 0x18a0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935368)));
    // 0x18a0b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18a0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a0b8: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x18A0B8u;
    {
        const bool branch_taken_0x18a0b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x18A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A0B8u;
        // 0x18a0bc: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a0b8) {
            ctx->pc = 0x18A10Cu;
            goto label_18a10c;
        }
    }
    ctx->pc = 0x18A0C0u;
    // 0x18a0c0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A0C0u;
    {
        const bool branch_taken_0x18a0c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A0C0u;
        // 0x18a0c4: 0x3c034380  lui         $v1, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a0c0) {
            ctx->pc = 0x18A0D0u;
            goto label_18a0d0;
        }
    }
    ctx->pc = 0x18A0C8u;
    // 0x18a0c8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x18A0C8u;
    {
        const bool branch_taken_0x18a0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A0C8u;
        // 0x18a0cc: 0x78830000  lq          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a0c8) {
            ctx->pc = 0x18A14Cu;
            goto label_18a14c;
        }
    }
    ctx->pc = 0x18A0D0u;
label_18a0d0:
    // 0x18a0d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18a0d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18a0d4: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x18a0d4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18a0d8: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x18a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x18a0dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18a0dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a0e0: 0x0  nop
    ctx->pc = 0x18a0e0u;
    // NOP
    // 0x18a0e4: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x18a0e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x18a0e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18a0ec: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x18a0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x18a0f0: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x18a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x18a0f4: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x18a0f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x18a0f8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x18a0f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18a0fc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x18a0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18a100: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x18a100u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18a104: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18A104u;
    {
        const bool branch_taken_0x18a104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A104u;
        // 0x18a108: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a104) {
            ctx->pc = 0x18A148u;
            goto label_18a148;
        }
    }
    ctx->pc = 0x18A10Cu;
label_18a10c:
    // 0x18a10c: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x18a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x18a110: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18a110u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18a114: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x18a114u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18a118: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x18a118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x18a11c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18a11cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a120: 0x0  nop
    ctx->pc = 0x18a120u;
    // NOP
    // 0x18a124: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x18a124u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x18a128: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18a128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18a12c: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x18a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x18a130: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x18a130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18a134: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x18a134u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x18a138: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x18a138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18a13c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x18a13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18a140: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x18a140u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18a144: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x18a144u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_18a148:
    // 0x18a148: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x18a148u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_18a14c:
    // 0x18a14c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x18a14cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x18a150: 0x3e00008  jr          $ra
    ctx->pc = 0x18A150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A150u;
        // 0x18a154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A158u;
}
