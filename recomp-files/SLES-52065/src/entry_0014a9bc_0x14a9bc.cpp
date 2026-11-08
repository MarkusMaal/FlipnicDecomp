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

// Function: entry_0014a9bc
// Address: 0x14a9bc - 0x14aa08
void entry_0014a9bc_0x14a9bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a9bc_0x14a9bc");
#endif

    ctx->pc = 0x14a9bcu;

    // 0x14a9bc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x14a9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a9c0: 0x27b60710  addiu       $s6, $sp, 0x710
    ctx->pc = 0x14a9c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
    // 0x14a9c4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x14a9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14a9c8: 0x8fa20714  lw          $v0, 0x714($sp)
    ctx->pc = 0x14a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1812)));
    // 0x14a9cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a9d0: 0xafa20714  sw          $v0, 0x714($sp)
    ctx->pc = 0x14a9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1812), GPR_U32(ctx, 2));
    // 0x14a9d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a9d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x14a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14a9dc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14a9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x14a9e0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a9e4: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A9E4u;
    {
        const bool branch_taken_0x14a9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9E4u;
        // 0x14a9e8: 0x27b20708  addiu       $s2, $sp, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9e4) {
            ctx->pc = 0x14AA28u;
            return;
        }
    }
    ctx->pc = 0x14A9ECu;
    // 0x14a9ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a9f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a9f4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a9f8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A9F8u;
    {
        const bool branch_taken_0x14a9f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9F8u;
        // 0x14a9fc: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9f8) {
            ctx->pc = 0x14AA08u;
            return;
        }
    }
    ctx->pc = 0x14AA00u;
    // 0x14aa00: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14aa04: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x14aa04u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x14aa08u;
}
