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

// Function: entry_00170a9c
// Address: 0x170a9c - 0x170ad0
void entry_00170a9c_0x170a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170a9c_0x170a9c");
#endif

    ctx->pc = 0x170a9cu;

    // 0x170a9c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x170a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170aa0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x170aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x170aa4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x170aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x170aa8: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x170AA8u;
    {
        const bool branch_taken_0x170aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x170AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AA8u;
        // 0x170aac: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170aa8) {
            ctx->pc = 0x170AFCu;
            return;
        }
    }
    ctx->pc = 0x170AB0u;
    // 0x170ab0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x170ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170ab4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x170AB4u;
    {
        const bool branch_taken_0x170ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x170AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AB4u;
        // 0x170ab8: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ab4) {
            ctx->pc = 0x170AECu;
            return;
        }
    }
    ctx->pc = 0x170ABCu;
    // 0x170abc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170ac0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170AC0u;
    {
        const bool branch_taken_0x170ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x170AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AC0u;
        // 0x170ac4: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ac0) {
            ctx->pc = 0x170AD0u;
            return;
        }
    }
    ctx->pc = 0x170AC8u;
    // 0x170ac8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x170AC8u;
    {
        const bool branch_taken_0x170ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AC8u;
        // 0x170acc: 0xc4810008  lwc1        $f1, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ac8) {
            ctx->pc = 0x170B14u;
            return;
        }
    }
    ctx->pc = 0x170AD0u;
}
