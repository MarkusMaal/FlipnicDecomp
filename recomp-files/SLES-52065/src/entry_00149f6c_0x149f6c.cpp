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

// Function: entry_00149f6c
// Address: 0x149f6c - 0x149fbc
void entry_00149f6c_0x149f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149f6c_0x149f6c");
#endif

    ctx->pc = 0x149f6cu;

    // 0x149f6c: 0x27b704f0  addiu       $s7, $sp, 0x4F0
    ctx->pc = 0x149f6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
    // 0x149f70: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x149f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149f74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x149f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x149f78: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x149f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x149f7c: 0x8fa204f4  lw          $v0, 0x4F4($sp)
    ctx->pc = 0x149f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1268)));
    // 0x149f80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149f84: 0xafa204f4  sw          $v0, 0x4F4($sp)
    ctx->pc = 0x149f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1268), GPR_U32(ctx, 2));
    // 0x149f88: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x149f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x149f8c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x149f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x149f90: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x149f90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x149f94: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x149f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x149f98: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x149F98u;
    {
        const bool branch_taken_0x149f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x149F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F98u;
        // 0x149f9c: 0x27b604e8  addiu       $s6, $sp, 0x4E8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f98) {
            ctx->pc = 0x149FDCu;
            return;
        }
    }
    ctx->pc = 0x149FA0u;
    // 0x149fa0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x149fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x149fa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149fa8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x149fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149fac: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149FACu;
    {
        const bool branch_taken_0x149fac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x149FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149FACu;
        // 0x149fb0: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149fac) {
            ctx->pc = 0x149FBCu;
            return;
        }
    }
    ctx->pc = 0x149FB4u;
    // 0x149fb4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x149fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x149fb8: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x149fb8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x149fbcu;
}
