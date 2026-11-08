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

// Function: FUN_0012d8e0
// Address: 0x12d8e0 - 0x12d970
void FUN_0012d8e0_0x12d8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012d8e0_0x12d8e0");
#endif

    ctx->pc = 0x12d8e0u;

    // 0x12d8e0: 0x8f858348  lw          $a1, -0x7CB8($gp)
    ctx->pc = 0x12d8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935368)));
    // 0x12d8e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d8e8: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x12D8E8u;
    {
        const bool branch_taken_0x12d8e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x12D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8E8u;
        // 0x12d8ec: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8e8) {
            ctx->pc = 0x12D930u;
            goto label_12d930;
        }
    }
    ctx->pc = 0x12D8F0u;
    // 0x12d8f0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D8F0u;
    {
        const bool branch_taken_0x12d8f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8F0u;
        // 0x12d8f4: 0x3c034380  lui         $v1, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8f0) {
            ctx->pc = 0x12D900u;
            goto label_12d900;
        }
    }
    ctx->pc = 0x12D8F8u;
    // 0x12d8f8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x12D8F8u;
    {
        const bool branch_taken_0x12d8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8F8u;
        // 0x12d8fc: 0x78830000  lq          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8f8) {
            ctx->pc = 0x12D964u;
            goto label_12d964;
        }
    }
    ctx->pc = 0x12D900u;
label_12d900:
    // 0x12d900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12d900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d904: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x12d904u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x12d908: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x12d908u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x12d90c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x12d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x12d910: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x12d910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x12d914: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x12d914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x12d918: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x12d918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x12d91c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x12d91cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12d920: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x12d920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12d924: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x12d924u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12d928: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12D928u;
    {
        const bool branch_taken_0x12d928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D928u;
        // 0x12d92c: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d928) {
            ctx->pc = 0x12D960u;
            goto label_12d960;
        }
    }
    ctx->pc = 0x12D930u;
label_12d930:
    // 0x12d930: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x12d930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x12d934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12d934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d938: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x12d938u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x12d93c: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x12d93cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x12d940: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x12d940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x12d944: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x12d944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x12d948: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x12d948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12d94c: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x12d94cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x12d950: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x12d950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12d954: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x12d954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12d958: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x12d958u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12d95c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x12d95cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_12d960:
    // 0x12d960: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x12d960u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_12d964:
    // 0x12d964: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x12d964u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x12d968: 0x3e00008  jr          $ra
    ctx->pc = 0x12D968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D968u;
        // 0x12d96c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D970u;
}
