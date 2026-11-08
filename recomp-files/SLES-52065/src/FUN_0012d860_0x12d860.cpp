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

// Function: FUN_0012d860
// Address: 0x12d860 - 0x12d8d4
void FUN_0012d860_0x12d860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012d860_0x12d860");
#endif

    ctx->pc = 0x12d860u;

    // 0x12d860: 0x8f858348  lw          $a1, -0x7CB8($gp)
    ctx->pc = 0x12d860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935368)));
    // 0x12d864: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12d864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d868: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x12D868u;
    {
        const bool branch_taken_0x12d868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x12D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D868u;
        // 0x12d86c: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d868) {
            ctx->pc = 0x12D8A4u;
            goto label_12d8a4;
        }
    }
    ctx->pc = 0x12D870u;
    // 0x12d870: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D870u;
    {
        const bool branch_taken_0x12d870 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d870) {
            ctx->pc = 0x12D880u;
            goto label_12d880;
        }
    }
    ctx->pc = 0x12D878u;
    // 0x12d878: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12D878u;
    {
        const bool branch_taken_0x12d878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D878u;
        // 0x12d87c: 0x78830000  lq          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d878) {
            ctx->pc = 0x12D8C8u;
            goto label_12d8c8;
        }
    }
    ctx->pc = 0x12D880u;
label_12d880:
    // 0x12d880: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12d880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12d884: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x12d884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x12d888: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x12d888u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12d88c: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x12d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x12d890: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x12d890u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12d894: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x12d894u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x12d898: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x12d898u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12d89c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12D89Cu;
    {
        const bool branch_taken_0x12d89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D89Cu;
        // 0x12d8a0: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d89c) {
            ctx->pc = 0x12D8C4u;
            goto label_12d8c4;
        }
    }
    ctx->pc = 0x12D8A4u;
label_12d8a4:
    // 0x12d8a4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12d8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12d8a8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x12d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12d8ac: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x12d8acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12d8b0: 0xafa5001c  sw          $a1, 0x1C($sp)
    ctx->pc = 0x12d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
    // 0x12d8b4: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x12d8b4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12d8b8: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x12d8b8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x12d8bc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x12d8bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12d8c0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x12d8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_12d8c4:
    // 0x12d8c4: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x12d8c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_12d8c8:
    // 0x12d8c8: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x12d8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x12d8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x12D8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8CCu;
        // 0x12d8d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D8D4u;
}
